/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich, Leonardo de Moura
-/
import Lean.Data.Name
import Lean.Data.Format

namespace Lean
namespace SourceInfo

def updateTrailing (info : SourceInfo) (trailing : Option Substring) : SourceInfo :=
  { info with trailing := trailing }

end SourceInfo

/- Syntax AST -/

def Syntax.isMissing : Syntax → Bool
  | Syntax.missing => true
  | _ => false

-- quotation node kinds are formed from a unique quotation name plus "quot"
def Syntax.isQuot : Syntax → Bool
  | Syntax.node (Name.str _ "quot" _) _ => true
  | _                                   => false

-- antiquotation node kinds are formed from the original node kind (if any) plus "antiquot"
def Syntax.isAntiquot : Syntax → Bool
  | Syntax.node (Name.str _ "antiquot" _) _ => true
  | _                                       => false

inductive IsNode : Syntax → Prop
  | mk (kind : SyntaxNodeKind) (args : Array Syntax) : IsNode (Syntax.node kind args)

def SyntaxNode : Type := {s : Syntax // IsNode s }

def unreachIsNodeMissing {β} (h : IsNode Syntax.missing) : β := False.elim (nomatch h)
def unreachIsNodeAtom {β} {info val} (h : IsNode (Syntax.atom info val)) : β := False.elim (nomatch h)
def unreachIsNodeIdent {β info rawVal val preresolved} (h : IsNode (Syntax.ident info rawVal val preresolved)) : β := False.elim (nomatch h)

namespace SyntaxNode

@[inline] def getKind (n : SyntaxNode) : SyntaxNodeKind :=
  match n with
  | ⟨Syntax.node k args, _⟩ => k
  | ⟨Syntax.missing, h⟩     => unreachIsNodeMissing h
  | ⟨Syntax.atom .., h⟩     => unreachIsNodeAtom h
  | ⟨Syntax.ident .., h⟩    => unreachIsNodeIdent h

@[inline] def withArgs {β} (n : SyntaxNode) (fn : Array Syntax → β) : β :=
  match n with
  | ⟨Syntax.node _ args, _⟩   => fn args
  | ⟨Syntax.missing, h⟩       => unreachIsNodeMissing h
  | ⟨Syntax.atom _ _, h⟩      => unreachIsNodeAtom h
  | ⟨Syntax.ident _ _ _ _, h⟩ => unreachIsNodeIdent h

@[inline] def getNumArgs (n : SyntaxNode) : Nat :=
  withArgs n $ fun args => args.size

@[inline] def getArg (n : SyntaxNode) (i : Nat) : Syntax :=
  withArgs n $ fun args => args.get! i

@[inline] def getArgs (n : SyntaxNode) : Array Syntax :=
  withArgs n $ fun args => args

@[inline] def modifyArgs (n : SyntaxNode) (fn : Array Syntax → Array Syntax) : Syntax :=
  match n with
  | ⟨Syntax.node kind args, _⟩ => Syntax.node kind (fn args)
  | ⟨Syntax.missing, h⟩        => unreachIsNodeMissing h
  | ⟨Syntax.atom _ _, h⟩       => unreachIsNodeAtom h
  | ⟨Syntax.ident _ _ _ _,  h⟩ => unreachIsNodeIdent h

end SyntaxNode

namespace Syntax

def getAtomVal! : Syntax → String
  | atom _ val => val
  | _          => panic! "getAtomVal!: not an atom"

def setAtomVal : Syntax → String → Syntax
  | atom info _, v => (atom info v)
  | stx,         _ => stx

@[inline] def ifNode {β} (stx : Syntax) (hyes : SyntaxNode → β) (hno : Unit → β) : β :=
  match stx with
  | Syntax.node k args => hyes ⟨Syntax.node k args, IsNode.mk k args⟩
  | _                  => hno ()

@[inline] def ifNodeKind {β} (stx : Syntax) (kind : SyntaxNodeKind) (hyes : SyntaxNode → β) (hno : Unit → β) : β :=
  match stx with
  | Syntax.node k args => if k == kind then hyes ⟨Syntax.node k args, IsNode.mk k args⟩ else hno ()
  | _                  => hno ()

def asNode : Syntax → SyntaxNode
  | Syntax.node kind args => ⟨Syntax.node kind args, IsNode.mk kind args⟩
  | _                     => ⟨Syntax.node nullKind #[], IsNode.mk nullKind #[]⟩

def getNumArgs (stx : Syntax) : Nat :=
  stx.asNode.getNumArgs

def setArgs (stx : Syntax) (args : Array Syntax) : Syntax :=
  match stx with
  | node k _ => node k args
  | stx      => stx

@[inline] def modifyArgs (stx : Syntax) (fn : Array Syntax → Array Syntax) : Syntax :=
  match stx with
  | node k args => node k (fn args)
  | stx         => stx

def setArg (stx : Syntax) (i : Nat) (arg : Syntax) : Syntax :=
  match stx with
  | node k args => node k (args.set! i arg)
  | stx         => stx

@[inline] def modifyArg (stx : Syntax) (i : Nat) (fn : Syntax → Syntax) : Syntax :=
  match stx with
  | node k args => node k (args.modify i fn)
  | stx         => stx

def getIdAt (stx : Syntax) (i : Nat) : Name :=
  (stx.getArg i).getId

@[specialize] partial def replaceM {m : Type → Type} [Monad m] (fn : Syntax → m (Option Syntax)) : Syntax → m (Syntax)
  | stx@(node kind args) => do
    match (← fn stx) with
    | some stx => return stx
    | none     => return node kind (← args.mapM (replaceM fn))
  | stx => do
    let o ← fn stx
    return o.getD stx

@[specialize] partial def rewriteBottomUpM {m : Type → Type} [Monad m] (fn : Syntax → m (Syntax)) : Syntax → m (Syntax)
  | node kind args   => do
    let args ← args.mapM (rewriteBottomUpM fn)
    fn (node kind args)
  | stx => fn stx

@[inline] def rewriteBottomUp (fn : Syntax → Syntax) (stx : Syntax) : Syntax :=
  Id.run $ stx.rewriteBottomUpM fn

private def updateInfo : SourceInfo → String.Pos → SourceInfo
  | {leading := some {str := s, startPos := _, stopPos := _}, pos := some pos, trailing := trailing}, last =>
    {leading := some {str := s, startPos := last, stopPos := pos}, pos := some pos, trailing := trailing}
  | info, _ => info

/- Remark: the State `String.Pos` is the `SourceInfo.trailing.stopPos` of the previous token,
   or the beginning of the String. -/
@[inline]
private def updateLeadingAux : Syntax → StateM String.Pos (Option Syntax)
  | atom info@{trailing := some trail, ..} val => do
    let last ← get
    set trail.stopPos
    let newInfo := updateInfo info last
    pure $ some (atom newInfo val)
  | ident info@{trailing := some trail, ..} rawVal val pre   => do
    let last ← get
    set trail.stopPos
    let newInfo := updateInfo info last
    pure $ some (ident newInfo rawVal val pre)
  | _ => pure none

/-- Set `SourceInfo.leading` according to the trailing stop of the preceding token.
    The Result is a round-tripping Syntax tree IF, in the input Syntax tree,
    * all leading stops, atom contents, and trailing starts are correct
    * trailing stops are between the trailing start and the next leading stop.

    Remark: after parsing all `SourceInfo.leading` fields are Empty.
    The Syntax argument is the output produced by the Parser for `source`.
    This Function "fixes" the `source.leanding` field.

    Note that, the `SourceInfo.trailing` fields are correct.
    The implementation of this Function relies on this property. -/
def updateLeading : Syntax → Syntax :=
  fun stx => (replaceM updateLeadingAux stx).run' 0

partial def updateTrailing (trailing : Option Substring) : Syntax → Syntax
  | Syntax.atom info val               => Syntax.atom (info.updateTrailing trailing) val
  | Syntax.ident info rawVal val pre   => Syntax.ident (info.updateTrailing trailing) rawVal val pre
  | n@(Syntax.node k args)             =>
    if args.size == 0 then n
    else
     let i    := args.size - 1
     let last := updateTrailing trailing args[i]
     let args := args.set! i last;
     Syntax.node k args
  | s => s

partial def getTailWithPos : Syntax → Option Syntax
  | stx@(atom { pos := some _, .. } _)   => some stx
  | stx@(ident { pos := some _, .. } ..) => some stx
  | node _ args                          => args.findSomeRev? getTailWithPos
  | _                                    => none

private def reprintLeaf (info : SourceInfo) (val : String) : String :=
  -- no source info => add gracious amounts of whitespace to definitely separate tokens
  -- Note that the proper pretty printer does not use this function.
  -- The parser as well always produces source info, so round-tripping is still
  -- guaranteed.
  (Substring.toString <$> info.leading).getD " " ++ val ++ (Substring.toString <$> info.trailing).getD " "

partial def reprint : Syntax → Option String
  | atom info val           => reprintLeaf info val
  | ident info rawVal _ _   => reprintLeaf info rawVal.toString
  | node kind args          =>
    if kind == choiceKind then
      if args.size == 0 then failure
      else do
        let s ← reprint args[0]
        args[1:].foldlM (init := s) fun s stx => do
          let s' ← reprint stx
          guard (s == s')
          pure s
    else args.foldlM (fun r stx => do let s ← reprint stx; pure $ r ++ s) ""
  | _ => ""

open Lean.Format

private def formatInfo (showInfo : Bool) (info : SourceInfo) (f : Format) : Format :=
  if showInfo then
    (match info.leading with some ss => repr ss.toString ++ ":" | _ => "") ++
    f ++
    (match info.pos with some pos => ":" ++ toString info.pos | _ => "") ++
    (match info.trailing with some ss => ":" ++ repr ss.toString | _ => "")
  else
    f

partial def formatStxAux (maxDepth : Option Nat) (showInfo : Bool) : Nat → Syntax → Format
  | _,     atom info val     => formatInfo showInfo info $ format (repr val)
  | _,     ident info _ val pre => formatInfo showInfo info $ format "`" ++ format val
  | _,     missing           => "<missing>"
  | depth, node kind args    =>
    let depth := depth + 1;
    if kind == nullKind then
      sbracket $
        if args.size > 0 && depth > maxDepth.getD depth then
          ".."
        else
          joinSep (args.toList.map (formatStxAux maxDepth showInfo depth)) line
    else
      let shorterName := kind.replacePrefix `Lean.Parser Name.anonymous;
      let header      := format shorterName;
      let body : List Format :=
        if args.size > 0 && depth > maxDepth.getD depth then [".."] else args.toList.map (formatStxAux maxDepth showInfo depth);
      paren $ joinSep (header :: body) line

def formatStx (stx : Syntax) (maxDepth : Option Nat := none) (showInfo := false) : Format :=
  formatStxAux maxDepth showInfo 0 stx

instance : ToFormat (Syntax)   := ⟨formatStx⟩
instance : ToString (Syntax) := ⟨toString ∘ format⟩

partial def structEq : Syntax → Syntax → Bool
  | Syntax.missing, Syntax.missing => true
  | Syntax.node k args, Syntax.node k' args' => k == k' && args.isEqv args' structEq
  | Syntax.atom _ val, Syntax.atom _ val' => val == val'
  | Syntax.ident _ rawVal val preresolved, Syntax.ident _ rawVal' val' preresolved' => rawVal == rawVal' && val == val' && preresolved == preresolved'
  | _, _ => false

instance : BEq Lean.Syntax := ⟨structEq⟩

/--
Represents a cursor into a syntax tree that can be read, written, and advanced down/up/left/right.
Indices are allowed to be out-of-bound, in which case `cur` is `Syntax.missing`.
If the `Traverser` is used linearly, updates are linear in the `Syntax` object as well.
-/
structure Traverser :=
  (cur     : Syntax)
  (parents : Array Syntax)
  (idxs    : Array Nat)

namespace Traverser

def fromSyntax (stx : Syntax) : Traverser :=
  ⟨stx, #[], #[]⟩

def setCur (t : Traverser) (stx : Syntax) : Traverser :=
  { t with cur := stx }

/-- Advance to the `idx`-th child of the current node. -/
def down (t : Traverser) (idx : Nat) : Traverser :=
  if idx < t.cur.getNumArgs then
    { cur := t.cur.getArg idx, parents := t.parents.push $ t.cur.setArg idx (arbitrary _), idxs := t.idxs.push idx }
  else
    { cur := Syntax.missing, parents := t.parents.push t.cur, idxs := t.idxs.push idx }

/-- Advance to the parent of the current node, if any. -/
def up (t : Traverser) : Traverser :=
  if t.parents.size > 0 then
    let cur := if t.idxs.back < t.parents.back.getNumArgs then t.parents.back.setArg t.idxs.back t.cur else t.parents.back
    { cur := cur, parents := t.parents.pop, idxs := t.idxs.pop }
  else
    t

/-- Advance to the left sibling of the current node, if any. -/
def left (t : Traverser) : Traverser :=
  if t.parents.size > 0 then
    t.up.down (t.idxs.back - 1)
  else
    t

/-- Advance to the right sibling of the current node, if any. -/
def right (t : Traverser) : Traverser :=
  if t.parents.size > 0 then
    t.up.down (t.idxs.back + 1)
  else
    t

end Traverser

/-- Monad class that gives read/write access to a `Traverser`. -/
class MonadTraverser (m : Type → Type) :=
  (st : MonadState Traverser m)

namespace MonadTraverser

variables {m : Type → Type} [Monad m] [t : MonadTraverser m]

def getCur : m Syntax := Traverser.cur <$> t.st.get
def setCur (stx : Syntax) : m Unit := @modify _ _ t.st (fun t => t.setCur stx)
def goDown (idx : Nat)    : m Unit := @modify _ _ t.st (fun t => t.down idx)
def goUp                  : m Unit := @modify _ _ t.st (fun t => t.up)
def goLeft                : m Unit := @modify _ _ t.st (fun t => t.left)
def goRight               : m Unit := @modify _ _ t.st (fun t => t.right)

def getIdx : m Nat := do
  let st ← t.st.get
  pure st.idxs.back

end MonadTraverser
end Syntax

namespace SyntaxNode

@[inline] def getIdAt (n : SyntaxNode) (i : Nat) : Name :=
  (n.getArg i).getId

end SyntaxNode

def mkSimpleAtom (val : String) : Syntax :=
  Syntax.atom {} val

def mkListNode (args : Array Syntax) : Syntax :=
  Syntax.node nullKind args

end Lean
