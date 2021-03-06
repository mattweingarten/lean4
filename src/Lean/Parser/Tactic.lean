/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
import Lean.Parser.Term

namespace Lean
namespace Parser
namespace Tactic

builtin_initialize
  registerParserAlias! "tacticSeq" tacticSeq

def ident' : Parser := ident <|> "_"

@[builtinTacticParser] def «intro»      := parser! nonReservedSymbol "intro " >> notSymbol "|" >> many (checkColGt >> termParser maxPrec)
@[builtinTacticParser] def «intros»     := parser! nonReservedSymbol "intros " >> many (checkColGt >> ident')
@[builtinTacticParser] def «revert»     := parser! nonReservedSymbol "revert " >> many1 (checkColGt >> ident)
@[builtinTacticParser] def «clear»      := parser! nonReservedSymbol "clear " >> many1 (checkColGt >> ident)
@[builtinTacticParser] def «subst»      := parser! nonReservedSymbol "subst " >> many1 (checkColGt >> ident)
@[builtinTacticParser] def «assumption» := parser! nonReservedSymbol "assumption"
@[builtinTacticParser] def «apply»      := parser! nonReservedSymbol "apply " >> termParser
@[builtinTacticParser] def «exact»      := parser! nonReservedSymbol "exact " >> termParser
@[builtinTacticParser] def «refine»     := parser! nonReservedSymbol "refine " >> termParser
@[builtinTacticParser] def «refine!»    := parser! nonReservedSymbol "refine! " >> termParser
@[builtinTacticParser] def «case»       := parser! nonReservedSymbol "case " >> ident >> darrow >> tacticSeq
@[builtinTacticParser] def «allGoals»   := parser! nonReservedSymbol "allGoals " >> tacticSeq
@[builtinTacticParser] def «focus»      := parser! nonReservedSymbol "focus " >> tacticSeq
@[builtinTacticParser] def «skip»       := parser! nonReservedSymbol "skip"
@[builtinTacticParser] def «done»       := parser! nonReservedSymbol "done"
@[builtinTacticParser] def «traceState» := parser! nonReservedSymbol "traceState"
@[builtinTacticParser] def «failIfSuccess» := parser! nonReservedSymbol "failIfSuccess " >> tacticSeq
@[builtinTacticParser] def «generalize» := parser! nonReservedSymbol "generalize " >> optional («try» (ident >> " : ")) >> termParser 51 >> " = " >> ident
@[builtinTacticParser] def «unknown»    := parser! withPosition (ident >> errorAtSavedPos "unknown tactic" true)

def locationWildcard := parser! "*"
def locationTarget   := parser! unicodeSymbol "⊢" "|-"
def locationHyp      := parser! many1 (checkColGt >> ident)
def location         := parser! withPosition ("at " >> (locationWildcard <|> locationTarget <|> locationHyp))

@[builtinTacticParser] def change     := parser! nonReservedSymbol "change " >> termParser >> optional location
@[builtinTacticParser] def changeWith := parser! nonReservedSymbol "change " >> termParser >> " with " >> termParser >> optional location

def rwRule    := parser! optional (unicodeSymbol "←" "<-") >> termParser
def rwRuleSeq := parser! "[" >> sepBy1 rwRule ", " true >> "]"
@[builtinTacticParser] def «rewrite»    := parser! (nonReservedSymbol "rewrite" <|> nonReservedSymbol "rw") >> notSymbol "[" >> rwRule >> optional location
@[builtinTacticParser] def «rewriteSeq» := parser! (nonReservedSymbol "rewrite" <|> nonReservedSymbol "rw") >> rwRuleSeq >> optional location

def altRHS := Term.hole <|> Term.syntheticHole <|> tacticSeq
def inductionAlt  : Parser := nodeWithAntiquot "inductionAlt" `Lean.Parser.Tactic.inductionAlt $ ident' >> many ident' >> darrow >> altRHS
def inductionAlts : Parser := withPosition $ "| " >> sepBy1 inductionAlt (checkColGe "alternatives must be indented" >> "|")
def withAlts : Parser := optional inductionAlts
def usingRec : Parser := optional (" using " >> ident)
def generalizingVars := optional (" generalizing " >> many1 ident)
@[builtinTacticParser] def «induction»  := parser! nonReservedSymbol "induction " >> sepBy1 termParser ", " >> usingRec >> generalizingVars >> withAlts
def majorPremise := parser! optional («try» (ident >> " : ")) >> termParser
@[builtinTacticParser] def «cases»      := parser! nonReservedSymbol "cases " >> sepBy1 majorPremise ", " >> usingRec >> withAlts

def matchAlt  : Parser := parser! sepBy1 termParser ", " >> darrow >> altRHS
def matchAlts : Parser := group $ withPosition $ (optional "| ") >> sepBy1 matchAlt (checkColGe "alternatives must be indented" >> "| ")
@[builtinTacticParser] def «match»      := parser! nonReservedSymbol "match " >> sepBy1 Term.matchDiscr ", " >> Term.optType >> " with " >> matchAlts
@[builtinTacticParser] def «introMatch» := parser! nonReservedSymbol "intro " >> matchAlts

def withIds : Parser := optional (" with " >> many1 (checkColGt >> ident'))
@[builtinTacticParser] def «injection»  := parser! nonReservedSymbol "injection " >> termParser >> withIds
@[builtinTacticParser] def paren        := parser! "(" >> tacticSeq >> ")"
@[builtinTacticParser] def nestedTactic := tacticSeqBracketed
@[builtinTacticParser] def orelse := tparser!:2 " <|> " >> tacticParser 1

/- Term binders as tactics. They are all implemented as macros using the triad: named holes, hygiene, and `refine` tactic. -/
@[builtinTacticParser] def «have»     := parser! "have " >> Term.haveDecl
@[builtinTacticParser] def «suffices» := parser! "suffices " >> Term.sufficesDecl
@[builtinTacticParser] def «show»     := parser! "show " >> termParser
@[builtinTacticParser] def «let»      := parser! "let "  >> Term.letDecl
@[builtinTacticParser] def «let!»     := parser! "let! " >> Term.letDecl
@[builtinTacticParser] def «letrec»   := parser! withPosition (group ("let " >> nonReservedSymbol "rec ") >> Term.letRecDecls)

end Tactic
end Parser
end Lean
