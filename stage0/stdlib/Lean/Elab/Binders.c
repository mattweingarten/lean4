// Lean compiler output
// Module: Lean.Elab.Binders
// Imports: Init Lean.Elab.Term Lean.Elab.Quotation
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_updateKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders(lean_object*);
lean_object* l_Lean_Elab_Term_getEnv___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__12;
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_2__expandBinderIdent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__13;
lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__3;
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__12;
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instantiateMVars(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__10;
lean_object* l_unreachable_x21___rarg(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Syntax_7__quoteName___main(lean_object*);
lean_object* l___private_Lean_Elab_Binders_5__getBinderIds(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___closed__1;
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
extern lean_object* l_Lean_List_format___rarg___closed__2;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_18__regTraceClasses(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabFun(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_forall___elambda__1___closed__2;
extern lean_object* l_Lean_identKind___closed__2;
extern lean_object* l_Lean_Parser_Term_typeAscription___elambda__1___closed__1;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__1;
lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__1;
lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__1;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__4;
lean_object* l___private_Lean_Elab_Binders_6__matchBinder(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_15__expandLetIdLhs___boxed(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__2;
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__2;
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_compileDecl(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6;
lean_object* l_Lean_Elab_Term_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object*);
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_11__expandFunBindersAux___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_object* lean_string_utf8_byte_size(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
extern lean_object* l_Lean_Parser_Term_letDecl___closed__2;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLetDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__2;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__10;
extern lean_object* l_Lean_mkAppStx___closed__8;
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__4;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_3__expandOptIdent___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshAnonymousIdent(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_binderTactic___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object*);
lean_object* l_Lean_Elab_Term_mkLet(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getOptions(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_15__expandLetIdLhs(lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__3;
extern lean_object* l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__5;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getOptParamDefault_x3f___closed__2;
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__2;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshFVarId___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(lean_object*);
extern lean_object* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__9;
extern lean_object* l___private_Lean_Elab_Term_5__expandCDot___main___closed__3;
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__1;
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8;
extern lean_object* l_Lean_Parser_Term_instBinder___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkEqNDRec___closed__6;
lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__11;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Term_5__expandCDot___main___closed__2;
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__7;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetBangDecl(lean_object*);
lean_object* l_Lean_Elab_Term_logTrace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object*);
extern lean_object* l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__21;
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__8;
lean_object* l_Lean_Elab_Term_throwError___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_reprAux___main___rarg___closed__1;
extern lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__5;
extern lean_object* l_Lean_Parser_Term_fun___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___closed__1;
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_2__expandBinderIdent___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_10__getFunBinderIds_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_13__propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOptType(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLocalDecl___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__6;
extern lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__2;
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__3;
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_Parser_Term_arrow___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
lean_object* l___private_Lean_Elab_Binders_6__matchBinder___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_let___elambda__1___closed__2;
extern lean_object* l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
lean_object* l___private_Lean_Elab_Binders_16__getMatchAltNumPatterns___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_getLocalInsts(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__2;
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg(lean_object*);
extern lean_object* l_Lean_formatEntry___closed__1;
lean_object* l_Lean_Elab_Term_isClass(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
extern lean_object* l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
uint8_t l_Lean_Expr_isAutoParam(lean_object*);
extern lean_object* l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_3__expandOptIdent(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__25;
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetBangDecl___closed__1;
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__3;
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_identKind;
extern lean_object* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6;
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l_Lean_Elab_Term_elabArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___closed__5;
extern lean_object* l_Lean_mkAppStx___closed__5;
lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_16__getMatchAltNumPatterns(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
extern lean_object* l_Lean_Parser_Term_letPatDecl___elambda__1___closed__2;
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l_Lean_Elab_Term_getLCtx(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__4;
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4;
lean_object* lean_environment_main_module(lean_object*);
extern lean_object* l_Lean_Expr_getOptParamDefault_x3f___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__8;
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__4;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__2;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
extern lean_object* l_Lean_Parser_Term_let___elambda__1___closed__1;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Lean_Elab_Binders_10__getFunBinderIds_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__5;
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__5;
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__5;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__15;
extern lean_object* l_Lean_Parser_Term_letEqnsDecl___elambda__1___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__3;
extern lean_object* l_Lean_mkHole___closed__1;
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStxStrLit(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_Quotation_isAntiquotSplice(lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__7;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___main___at_Lean_Parser_Term_matchAlts___elambda__1___spec__2___closed__1;
lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetBangDecl(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__4;
lean_object* l_Lean_Elab_Term_whnfForall(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2;
extern lean_object* l_Lean_mkOptionalNode___closed__1;
extern lean_object* l_Lean_Parser_Term_matchAlt___closed__2;
extern lean_object* l_Lean_Parser_Term_binderDefault___elambda__1___closed__2;
extern lean_object* l_Std_PersistentHashMap_Stats_toString___closed__5;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__22;
extern lean_object* l_Lean_Expr_Inhabited;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isOptParam(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__7;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Util_1__evalSyntaxConstantUnsafe___closed__1;
extern lean_object* l_Lean_mkHole___closed__2;
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__4;
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
extern lean_object* l_Lean_Parser_Term_typeSpec___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__7;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_arrayToExpr___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__3;
lean_object* l_Lean_Elab_Term_elabForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3;
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__4;
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_let_x21___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_Term_forall___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Binders_1__expandBinderType___boxed(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__3;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__7;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_1__expandBinderType(lean_object*);
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1;
extern lean_object* l_Lean_mkAppStx___closed__1;
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
lean_object* l___private_Lean_Elab_Binders_5__getBinderIds___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_addParenHeuristic___closed__1;
lean_object* l___private_Lean_Elab_Binders_13__propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__5;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_replaceRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
lean_object* l_Lean_Elab_Term_elabBinder(lean_object*);
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_1__expandBinderType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Syntax_getNumArgs(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = l_Lean_mkHole(x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Binders_1__expandBinderType___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Binders_1__expandBinderType(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_2__expandBinderIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_mkHole___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_Syntax_getArgs(x_1);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_1, x_2, x_3);
lean_dec(x_1);
return x_12;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_2__expandBinderIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Binders_2__expandBinderIdent(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Binders_3__expandOptIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_Syntax_getNumArgs(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Syntax_getArg(x_1, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_Term_mkFreshInstanceName___rarg(x_3);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_mkIdentFrom(x_1, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_mkIdentFrom(x_1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_3__expandOptIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Binders_3__expandOptIdent(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalic auto tactic, antiquotation is not allowed");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_7);
x_13 = lean_nat_dec_lt(x_8, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_50; uint8_t x_51; 
x_15 = lean_array_fget(x_7, x_8);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_8, x_16);
lean_dec(x_8);
x_50 = l_Lean_nullKind;
x_51 = lean_name_eq(x_1, x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_box(0);
x_18 = x_52;
goto block_49;
}
else
{
uint8_t x_53; 
x_53 = l_Lean_Elab_Term_Quotation_isAntiquotSplice(x_15);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_box(0);
x_18 = x_54;
goto block_49;
}
else
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_55 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3;
x_56 = l_Lean_Elab_Term_throwErrorAt___rarg(x_15, x_55, x_10, x_11);
lean_dec(x_15);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
return x_56;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
block_49:
{
lean_object* x_19; 
lean_dec(x_18);
lean_inc(x_10);
x_19 = l_Lean_Elab_Term_quoteAutoTactic___main(x_15, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_getMainModule___rarg(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__4;
lean_inc(x_4);
x_29 = lean_name_mk_string(x_4, x_28);
lean_inc(x_29);
x_30 = l_Lean_addMacroScope(x_26, x_29, x_23);
lean_inc(x_5);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_5);
lean_inc(x_6);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_6);
x_33 = l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__3;
lean_inc(x_3);
x_34 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_34, 0, x_3);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_34, 2, x_30);
lean_ctor_set(x_34, 3, x_32);
x_35 = l_Array_empty___closed__1;
x_36 = lean_array_push(x_35, x_34);
x_37 = lean_array_push(x_35, x_9);
x_38 = lean_array_push(x_37, x_20);
x_39 = l_Lean_nullKind___closed__2;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = lean_array_push(x_36, x_40);
x_42 = l_Lean_mkAppStx___closed__8;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_8 = x_17;
x_9 = x_43;
x_11 = x_27;
goto _start;
}
else
{
uint8_t x_45; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_19);
if (x_45 == 0)
{
return x_19;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_19, 0);
x_47 = lean_ctor_get(x_19, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_19);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_addParenHeuristic___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
x_2 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__3;
x_2 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__4;
x_2 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__5;
x_2 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Std_PersistentHashMap_Stats_toString___closed__5;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__6;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__7;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__9;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalic auto tactic, identifier is not allowed");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_quoteAutoTactic___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_5 = l_unreachable_x21___rarg(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = l_Lean_Syntax_isAntiquot(x_1);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_11 = lean_ctor_get(x_1, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 0);
lean_dec(x_12);
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_getMainModule___rarg(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__5;
x_20 = l_Lean_addMacroScope(x_17, x_19, x_14);
x_21 = lean_box(0);
x_22 = l_Lean_SourceInfo_inhabited___closed__1;
x_23 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__3;
x_24 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__7;
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_24);
x_26 = l_Lean_arrayToExpr___rarg___closed__2;
x_27 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_28 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1(x_7, x_8, x_22, x_26, x_21, x_21, x_8, x_27, x_25, x_2, x_18);
lean_dec(x_8);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_30);
lean_dec(x_2);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_33);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__12;
x_38 = l_Lean_addMacroScope(x_36, x_37, x_32);
x_39 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__10;
x_40 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__15;
x_41 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_41, 0, x_22);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_41, 2, x_38);
lean_ctor_set(x_41, 3, x_40);
x_42 = l_Array_empty___closed__1;
x_43 = lean_array_push(x_42, x_41);
x_44 = l___private_Lean_Syntax_7__quoteName___main(x_7);
x_45 = lean_array_push(x_42, x_44);
x_46 = lean_array_push(x_45, x_29);
x_47 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_46);
lean_ctor_set(x_1, 0, x_47);
x_48 = lean_array_push(x_43, x_1);
x_49 = l_Lean_mkAppStx___closed__8;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
lean_ctor_set(x_34, 0, x_50);
return x_34;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_51 = lean_ctor_get(x_34, 0);
x_52 = lean_ctor_get(x_34, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_34);
x_53 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__12;
x_54 = l_Lean_addMacroScope(x_51, x_53, x_32);
x_55 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__10;
x_56 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__15;
x_57 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_57, 0, x_22);
lean_ctor_set(x_57, 1, x_55);
lean_ctor_set(x_57, 2, x_54);
lean_ctor_set(x_57, 3, x_56);
x_58 = l_Array_empty___closed__1;
x_59 = lean_array_push(x_58, x_57);
x_60 = l___private_Lean_Syntax_7__quoteName___main(x_7);
x_61 = lean_array_push(x_58, x_60);
x_62 = lean_array_push(x_61, x_29);
x_63 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_62);
lean_ctor_set(x_1, 0, x_63);
x_64 = lean_array_push(x_59, x_1);
x_65 = l_Lean_mkAppStx___closed__8;
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_52);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_free_object(x_1);
lean_dec(x_7);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_28);
if (x_68 == 0)
{
return x_28;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_28, 0);
x_70 = lean_ctor_get(x_28, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_28);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_1);
x_72 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Elab_Term_getMainModule___rarg(x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__5;
x_79 = l_Lean_addMacroScope(x_76, x_78, x_73);
x_80 = lean_box(0);
x_81 = l_Lean_SourceInfo_inhabited___closed__1;
x_82 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__3;
x_83 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__7;
x_84 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_79);
lean_ctor_set(x_84, 3, x_83);
x_85 = l_Lean_arrayToExpr___rarg___closed__2;
x_86 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_87 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1(x_7, x_8, x_81, x_85, x_80, x_80, x_8, x_86, x_84, x_2, x_77);
lean_dec(x_8);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_89);
lean_dec(x_2);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = l_Lean_Elab_Term_getMainModule___rarg(x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__12;
x_98 = l_Lean_addMacroScope(x_94, x_97, x_91);
x_99 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__10;
x_100 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__15;
x_101 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_101, 0, x_81);
lean_ctor_set(x_101, 1, x_99);
lean_ctor_set(x_101, 2, x_98);
lean_ctor_set(x_101, 3, x_100);
x_102 = l_Array_empty___closed__1;
x_103 = lean_array_push(x_102, x_101);
x_104 = l___private_Lean_Syntax_7__quoteName___main(x_7);
x_105 = lean_array_push(x_102, x_104);
x_106 = lean_array_push(x_105, x_88);
x_107 = l_Lean_nullKind___closed__2;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = lean_array_push(x_103, x_108);
x_110 = l_Lean_mkAppStx___closed__8;
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
if (lean_is_scalar(x_96)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_96;
}
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_95);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_7);
lean_dec(x_2);
x_113 = lean_ctor_get(x_87, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_87, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_115 = x_87;
} else {
 lean_dec_ref(x_87);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_8);
lean_dec(x_7);
x_117 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3;
x_118 = l_Lean_Elab_Term_throwErrorAt___rarg(x_1, x_117, x_2, x_3);
lean_dec(x_1);
return x_118;
}
}
case 2:
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_1);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_120 = lean_ctor_get(x_1, 1);
x_121 = lean_ctor_get(x_1, 0);
lean_dec(x_121);
x_122 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3);
lean_dec(x_2);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = l_Lean_Elab_Term_getMainModule___rarg(x_124);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__22;
x_129 = l_Lean_addMacroScope(x_127, x_128, x_123);
x_130 = l_Lean_SourceInfo_inhabited___closed__1;
x_131 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__21;
x_132 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__25;
x_133 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
lean_ctor_set(x_133, 2, x_129);
lean_ctor_set(x_133, 3, x_132);
x_134 = l_Array_empty___closed__1;
x_135 = lean_array_push(x_134, x_133);
x_136 = l_Lean_mkStxStrLit(x_120, x_130);
x_137 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__10;
x_138 = lean_array_push(x_137, x_136);
x_139 = l_Lean_nullKind___closed__2;
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_138);
lean_ctor_set(x_1, 0, x_139);
x_140 = lean_array_push(x_135, x_1);
x_141 = l_Lean_mkAppStx___closed__8;
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
lean_ctor_set(x_125, 0, x_142);
return x_125;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_143 = lean_ctor_get(x_125, 0);
x_144 = lean_ctor_get(x_125, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_125);
x_145 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__22;
x_146 = l_Lean_addMacroScope(x_143, x_145, x_123);
x_147 = l_Lean_SourceInfo_inhabited___closed__1;
x_148 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__21;
x_149 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__25;
x_150 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
lean_ctor_set(x_150, 2, x_146);
lean_ctor_set(x_150, 3, x_149);
x_151 = l_Array_empty___closed__1;
x_152 = lean_array_push(x_151, x_150);
x_153 = l_Lean_mkStxStrLit(x_120, x_147);
x_154 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__10;
x_155 = lean_array_push(x_154, x_153);
x_156 = l_Lean_nullKind___closed__2;
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_155);
lean_ctor_set(x_1, 0, x_156);
x_157 = lean_array_push(x_152, x_1);
x_158 = l_Lean_mkAppStx___closed__8;
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_144);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_161 = lean_ctor_get(x_1, 1);
lean_inc(x_161);
lean_dec(x_1);
x_162 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3);
lean_dec(x_2);
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = l_Lean_Elab_Term_getMainModule___rarg(x_164);
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_168 = x_165;
} else {
 lean_dec_ref(x_165);
 x_168 = lean_box(0);
}
x_169 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__22;
x_170 = l_Lean_addMacroScope(x_166, x_169, x_163);
x_171 = l_Lean_SourceInfo_inhabited___closed__1;
x_172 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__21;
x_173 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__25;
x_174 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_174, 0, x_171);
lean_ctor_set(x_174, 1, x_172);
lean_ctor_set(x_174, 2, x_170);
lean_ctor_set(x_174, 3, x_173);
x_175 = l_Array_empty___closed__1;
x_176 = lean_array_push(x_175, x_174);
x_177 = l_Lean_mkStxStrLit(x_161, x_171);
x_178 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__10;
x_179 = lean_array_push(x_178, x_177);
x_180 = l_Lean_nullKind___closed__2;
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_179);
x_182 = lean_array_push(x_176, x_181);
x_183 = l_Lean_mkAppStx___closed__8;
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
if (lean_is_scalar(x_168)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_168;
}
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_167);
return x_185;
}
}
default: 
{
lean_object* x_186; lean_object* x_187; 
x_186 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__13;
x_187 = l_Lean_Elab_Term_throwErrorAt___rarg(x_1, x_186, x_2, x_3);
lean_dec(x_1);
return x_187;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_quoteAutoTactic___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_auto");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_declareTacticSyntax___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Util_1__evalSyntaxConstantUnsafe___closed__1;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 5);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
lean_ctor_set(x_3, 5, x_7);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_2, 8);
lean_dec(x_9);
lean_ctor_set(x_2, 8, x_5);
x_10 = l_Lean_Elab_Term_getMainModule___rarg(x_3);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_17 = l_Lean_addMacroScope(x_11, x_16, x_14);
x_18 = lean_box(0);
lean_inc(x_2);
x_19 = l_Lean_Elab_Term_quoteAutoTactic___main(x_1, x_2, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_declareTacticSyntax___closed__4;
x_23 = 1;
lean_inc(x_2);
x_24 = l_Lean_Elab_Term_elabTerm(x_20, x_22, x_23, x_2, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_2);
x_27 = l_Lean_Elab_Term_instantiateMVars(x_25, x_2, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_53 = l_Lean_Elab_Term_getOptions(x_2, x_29);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Elab_Term_declareTacticSyntax___closed__5;
x_57 = l_Lean_checkTraceOption(x_54, x_56);
lean_dec(x_54);
if (x_57 == 0)
{
x_30 = x_55;
goto block_52;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_inc(x_28);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_28);
x_59 = l_Lean_Elab_Term_logTrace(x_56, x_58, x_2, x_55);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_30 = x_60;
goto block_52;
}
block_52:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_inc(x_17);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_17);
lean_ctor_set(x_32, 1, x_18);
lean_ctor_set(x_32, 2, x_31);
x_33 = lean_box(0);
x_34 = 0;
x_35 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_28);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set_uint8(x_35, sizeof(void*)*3, x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
lean_inc(x_2);
x_37 = l_Lean_Elab_Term_addDecl(x_36, x_2, x_30);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Elab_Term_compileDecl(x_36, x_2, x_38);
lean_dec(x_36);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set(x_39, 0, x_17);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_17);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
x_44 = !lean_is_exclusive(x_39);
if (x_44 == 0)
{
return x_39;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_39, 0);
x_46 = lean_ctor_get(x_39, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_39);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_36);
lean_dec(x_17);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_37);
if (x_48 == 0)
{
return x_37;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_37, 0);
x_50 = lean_ctor_get(x_37, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_37);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_17);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_24);
if (x_61 == 0)
{
return x_24;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_24, 0);
x_63 = lean_ctor_get(x_24, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_24);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_17);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_19);
if (x_65 == 0)
{
return x_19;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_19, 0);
x_67 = lean_ctor_get(x_19, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_19);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_69 = lean_ctor_get(x_2, 0);
x_70 = lean_ctor_get(x_2, 1);
x_71 = lean_ctor_get(x_2, 2);
x_72 = lean_ctor_get(x_2, 3);
x_73 = lean_ctor_get(x_2, 4);
x_74 = lean_ctor_get(x_2, 5);
x_75 = lean_ctor_get(x_2, 6);
x_76 = lean_ctor_get(x_2, 7);
x_77 = lean_ctor_get_uint8(x_2, sizeof(void*)*10);
x_78 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 1);
x_79 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 2);
x_80 = lean_ctor_get(x_2, 9);
lean_inc(x_80);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_2);
x_81 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_81, 0, x_69);
lean_ctor_set(x_81, 1, x_70);
lean_ctor_set(x_81, 2, x_71);
lean_ctor_set(x_81, 3, x_72);
lean_ctor_set(x_81, 4, x_73);
lean_ctor_set(x_81, 5, x_74);
lean_ctor_set(x_81, 6, x_75);
lean_ctor_set(x_81, 7, x_76);
lean_ctor_set(x_81, 8, x_5);
lean_ctor_set(x_81, 9, x_80);
lean_ctor_set_uint8(x_81, sizeof(void*)*10, x_77);
lean_ctor_set_uint8(x_81, sizeof(void*)*10 + 1, x_78);
lean_ctor_set_uint8(x_81, sizeof(void*)*10 + 2, x_79);
x_82 = l_Lean_Elab_Term_getMainModule___rarg(x_3);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_Elab_Term_getCurrMacroScope(x_81, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_89 = l_Lean_addMacroScope(x_83, x_88, x_86);
x_90 = lean_box(0);
lean_inc(x_81);
x_91 = l_Lean_Elab_Term_quoteAutoTactic___main(x_1, x_81, x_87);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = l_Lean_Elab_Term_declareTacticSyntax___closed__4;
x_95 = 1;
lean_inc(x_81);
x_96 = l_Lean_Elab_Term_elabTerm(x_92, x_94, x_95, x_81, x_93);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
lean_inc(x_81);
x_99 = l_Lean_Elab_Term_instantiateMVars(x_97, x_81, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_124 = l_Lean_Elab_Term_getOptions(x_81, x_101);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = l_Lean_Elab_Term_declareTacticSyntax___closed__5;
x_128 = l_Lean_checkTraceOption(x_125, x_127);
lean_dec(x_125);
if (x_128 == 0)
{
x_102 = x_126;
goto block_123;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_inc(x_100);
x_129 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_129, 0, x_100);
x_130 = l_Lean_Elab_Term_logTrace(x_127, x_129, x_81, x_126);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_102 = x_131;
goto block_123;
}
block_123:
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_103 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_inc(x_89);
x_104 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_104, 0, x_89);
lean_ctor_set(x_104, 1, x_90);
lean_ctor_set(x_104, 2, x_103);
x_105 = lean_box(0);
x_106 = 0;
x_107 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_100);
lean_ctor_set(x_107, 2, x_105);
lean_ctor_set_uint8(x_107, sizeof(void*)*3, x_106);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_107);
lean_inc(x_81);
x_109 = l_Lean_Elab_Term_addDecl(x_108, x_81, x_102);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
lean_dec(x_109);
x_111 = l_Lean_Elab_Term_compileDecl(x_108, x_81, x_110);
lean_dec(x_108);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_113 = x_111;
} else {
 lean_dec_ref(x_111);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_89);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_89);
x_115 = lean_ctor_get(x_111, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_117 = x_111;
} else {
 lean_dec_ref(x_111);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_108);
lean_dec(x_89);
lean_dec(x_81);
x_119 = lean_ctor_get(x_109, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_109, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_121 = x_109;
} else {
 lean_dec_ref(x_109);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_89);
lean_dec(x_81);
x_132 = lean_ctor_get(x_96, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_96, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_134 = x_96;
} else {
 lean_dec_ref(x_96);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_133);
return x_135;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_89);
lean_dec(x_81);
x_136 = lean_ctor_get(x_91, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_91, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_138 = x_91;
} else {
 lean_dec_ref(x_91);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; uint8_t x_158; uint8_t x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_140 = lean_ctor_get(x_3, 0);
x_141 = lean_ctor_get(x_3, 1);
x_142 = lean_ctor_get(x_3, 2);
x_143 = lean_ctor_get(x_3, 3);
x_144 = lean_ctor_get(x_3, 4);
x_145 = lean_ctor_get(x_3, 5);
lean_inc(x_145);
lean_inc(x_144);
lean_inc(x_143);
lean_inc(x_142);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_3);
x_146 = lean_unsigned_to_nat(1u);
x_147 = lean_nat_add(x_145, x_146);
x_148 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_148, 0, x_140);
lean_ctor_set(x_148, 1, x_141);
lean_ctor_set(x_148, 2, x_142);
lean_ctor_set(x_148, 3, x_143);
lean_ctor_set(x_148, 4, x_144);
lean_ctor_set(x_148, 5, x_147);
x_149 = lean_ctor_get(x_2, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_2, 1);
lean_inc(x_150);
x_151 = lean_ctor_get(x_2, 2);
lean_inc(x_151);
x_152 = lean_ctor_get(x_2, 3);
lean_inc(x_152);
x_153 = lean_ctor_get(x_2, 4);
lean_inc(x_153);
x_154 = lean_ctor_get(x_2, 5);
lean_inc(x_154);
x_155 = lean_ctor_get(x_2, 6);
lean_inc(x_155);
x_156 = lean_ctor_get(x_2, 7);
lean_inc(x_156);
x_157 = lean_ctor_get_uint8(x_2, sizeof(void*)*10);
x_158 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 1);
x_159 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 2);
x_160 = lean_ctor_get(x_2, 9);
lean_inc(x_160);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 lean_ctor_release(x_2, 8);
 lean_ctor_release(x_2, 9);
 x_161 = x_2;
} else {
 lean_dec_ref(x_2);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(0, 10, 3);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_149);
lean_ctor_set(x_162, 1, x_150);
lean_ctor_set(x_162, 2, x_151);
lean_ctor_set(x_162, 3, x_152);
lean_ctor_set(x_162, 4, x_153);
lean_ctor_set(x_162, 5, x_154);
lean_ctor_set(x_162, 6, x_155);
lean_ctor_set(x_162, 7, x_156);
lean_ctor_set(x_162, 8, x_145);
lean_ctor_set(x_162, 9, x_160);
lean_ctor_set_uint8(x_162, sizeof(void*)*10, x_157);
lean_ctor_set_uint8(x_162, sizeof(void*)*10 + 1, x_158);
lean_ctor_set_uint8(x_162, sizeof(void*)*10 + 2, x_159);
x_163 = l_Lean_Elab_Term_getMainModule___rarg(x_148);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
x_166 = l_Lean_Elab_Term_getCurrMacroScope(x_162, x_165);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_170 = l_Lean_addMacroScope(x_164, x_169, x_167);
x_171 = lean_box(0);
lean_inc(x_162);
x_172 = l_Lean_Elab_Term_quoteAutoTactic___main(x_1, x_162, x_168);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; lean_object* x_177; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = l_Lean_Elab_Term_declareTacticSyntax___closed__4;
x_176 = 1;
lean_inc(x_162);
x_177 = l_Lean_Elab_Term_elabTerm(x_173, x_175, x_176, x_162, x_174);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; 
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
lean_inc(x_162);
x_180 = l_Lean_Elab_Term_instantiateMVars(x_178, x_162, x_179);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_205 = l_Lean_Elab_Term_getOptions(x_162, x_182);
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
x_208 = l_Lean_Elab_Term_declareTacticSyntax___closed__5;
x_209 = l_Lean_checkTraceOption(x_206, x_208);
lean_dec(x_206);
if (x_209 == 0)
{
x_183 = x_207;
goto block_204;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_inc(x_181);
x_210 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_210, 0, x_181);
x_211 = l_Lean_Elab_Term_logTrace(x_208, x_210, x_162, x_207);
x_212 = lean_ctor_get(x_211, 1);
lean_inc(x_212);
lean_dec(x_211);
x_183 = x_212;
goto block_204;
}
block_204:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_184 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_inc(x_170);
x_185 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_185, 0, x_170);
lean_ctor_set(x_185, 1, x_171);
lean_ctor_set(x_185, 2, x_184);
x_186 = lean_box(0);
x_187 = 0;
x_188 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_188, 0, x_185);
lean_ctor_set(x_188, 1, x_181);
lean_ctor_set(x_188, 2, x_186);
lean_ctor_set_uint8(x_188, sizeof(void*)*3, x_187);
x_189 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_189, 0, x_188);
lean_inc(x_162);
x_190 = l_Lean_Elab_Term_addDecl(x_189, x_162, x_183);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; lean_object* x_192; 
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
lean_dec(x_190);
x_192 = l_Lean_Elab_Term_compileDecl(x_189, x_162, x_191);
lean_dec(x_189);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_192, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_194 = x_192;
} else {
 lean_dec_ref(x_192);
 x_194 = lean_box(0);
}
if (lean_is_scalar(x_194)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_194;
}
lean_ctor_set(x_195, 0, x_170);
lean_ctor_set(x_195, 1, x_193);
return x_195;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_170);
x_196 = lean_ctor_get(x_192, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_198 = x_192;
} else {
 lean_dec_ref(x_192);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_197);
return x_199;
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_189);
lean_dec(x_170);
lean_dec(x_162);
x_200 = lean_ctor_get(x_190, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_190, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_202 = x_190;
} else {
 lean_dec_ref(x_190);
 x_202 = lean_box(0);
}
if (lean_is_scalar(x_202)) {
 x_203 = lean_alloc_ctor(1, 2, 0);
} else {
 x_203 = x_202;
}
lean_ctor_set(x_203, 0, x_200);
lean_ctor_set(x_203, 1, x_201);
return x_203;
}
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_170);
lean_dec(x_162);
x_213 = lean_ctor_get(x_177, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_177, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_215 = x_177;
} else {
 lean_dec_ref(x_177);
 x_215 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_215;
}
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_170);
lean_dec(x_162);
x_217 = lean_ctor_get(x_172, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_172, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_219 = x_172;
} else {
 lean_dec_ref(x_172);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_getOptParamDefault_x3f___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Expr_getOptParamDefault_x3f___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_getOptParamDefault_x3f___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Syntax_isNone(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
lean_inc(x_7);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = l_Lean_Parser_Term_binderDefault___elambda__1___closed__2;
x_10 = lean_name_eq(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Parser_Term_binderTactic___elambda__1___closed__2;
x_12 = lean_name_eq(x_8, x_11);
lean_dec(x_8);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_13 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_4);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_7, x_14);
lean_dec(x_7);
lean_inc(x_3);
lean_inc(x_15);
x_16 = l_Lean_Elab_Term_declareTacticSyntax(x_15, x_3, x_4);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_18);
lean_dec(x_3);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
x_26 = l_Lean_addMacroScope(x_24, x_25, x_20);
x_27 = l_Lean_SourceInfo_inhabited___closed__1;
x_28 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2;
x_29 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4;
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_29);
x_31 = l_Array_empty___closed__1;
x_32 = lean_array_push(x_31, x_30);
x_33 = lean_array_push(x_31, x_1);
x_34 = l_Lean_mkIdentFrom(x_15, x_17);
lean_dec(x_15);
x_35 = lean_array_push(x_33, x_34);
x_36 = l_Lean_nullKind___closed__2;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_array_push(x_32, x_37);
x_39 = l_Lean_mkAppStx___closed__8;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_22, 0, x_40);
return x_22;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_41 = lean_ctor_get(x_22, 0);
x_42 = lean_ctor_get(x_22, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_22);
x_43 = l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
x_44 = l_Lean_addMacroScope(x_41, x_43, x_20);
x_45 = l_Lean_SourceInfo_inhabited___closed__1;
x_46 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2;
x_47 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4;
x_48 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
lean_ctor_set(x_48, 2, x_44);
lean_ctor_set(x_48, 3, x_47);
x_49 = l_Array_empty___closed__1;
x_50 = lean_array_push(x_49, x_48);
x_51 = lean_array_push(x_49, x_1);
x_52 = l_Lean_mkIdentFrom(x_15, x_17);
lean_dec(x_15);
x_53 = lean_array_push(x_51, x_52);
x_54 = l_Lean_nullKind___closed__2;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_array_push(x_50, x_55);
x_57 = l_Lean_mkAppStx___closed__8;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_42);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_16);
if (x_60 == 0)
{
return x_16;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_16, 0);
x_62 = lean_ctor_get(x_16, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_16);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
lean_dec(x_8);
x_64 = lean_unsigned_to_nat(1u);
x_65 = l_Lean_Syntax_getArg(x_7, x_64);
lean_dec(x_7);
x_66 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4);
lean_dec(x_3);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_Elab_Term_getMainModule___rarg(x_68);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = l_Lean_Expr_getOptParamDefault_x3f___closed__2;
x_73 = l_Lean_addMacroScope(x_71, x_72, x_67);
x_74 = l_Lean_SourceInfo_inhabited___closed__1;
x_75 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6;
x_76 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8;
x_77 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
lean_ctor_set(x_77, 2, x_73);
lean_ctor_set(x_77, 3, x_76);
x_78 = l_Array_empty___closed__1;
x_79 = lean_array_push(x_78, x_77);
x_80 = lean_array_push(x_78, x_1);
x_81 = lean_array_push(x_80, x_65);
x_82 = l_Lean_nullKind___closed__2;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_array_push(x_79, x_83);
x_85 = l_Lean_mkAppStx___closed__8;
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_69, 0, x_86);
return x_69;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_87 = lean_ctor_get(x_69, 0);
x_88 = lean_ctor_get(x_69, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_69);
x_89 = l_Lean_Expr_getOptParamDefault_x3f___closed__2;
x_90 = l_Lean_addMacroScope(x_87, x_89, x_67);
x_91 = l_Lean_SourceInfo_inhabited___closed__1;
x_92 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6;
x_93 = l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8;
x_94 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
lean_ctor_set(x_94, 2, x_90);
lean_ctor_set(x_94, 3, x_93);
x_95 = l_Array_empty___closed__1;
x_96 = lean_array_push(x_95, x_94);
x_97 = lean_array_push(x_95, x_1);
x_98 = lean_array_push(x_97, x_65);
x_99 = l_Lean_nullKind___closed__2;
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
x_101 = lean_array_push(x_96, x_100);
x_102 = l_Lean_mkAppStx___closed__8;
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_88);
return x_104;
}
}
}
else
{
lean_object* x_105; 
lean_dec(x_3);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_1);
lean_ctor_set(x_105, 1, x_4);
return x_105;
}
}
}
lean_object* l___private_Lean_Elab_Binders_4__expandBinderModifier___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Binders_4__expandBinderModifier(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* _init_l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("identifier or `_` expected");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_fset(x_2, x_1, x_10);
x_12 = x_9;
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_identKind;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_mkHole___closed__2;
x_17 = lean_name_eq(x_13, x_16);
lean_dec(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_11);
lean_dec(x_1);
x_18 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__3;
x_19 = l_Lean_Elab_Term_throwErrorAt___rarg(x_12, x_18, x_3, x_4);
lean_dec(x_12);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_1, x_24);
x_26 = x_12;
x_27 = lean_array_fset(x_11, x_1, x_26);
lean_dec(x_1);
x_1 = x_25;
x_2 = x_27;
goto _start;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_13);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_1, x_29);
x_31 = x_12;
x_32 = lean_array_fset(x_11, x_1, x_31);
lean_dec(x_1);
x_1 = x_30;
x_2 = x_32;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_5__getBinderIds(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Lean_Syntax_getArgs(x_1);
x_5 = x_4;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1), 4, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = x_7;
x_9 = lean_apply_2(x_8, x_2, x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Binders_5__getBinderIds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Binders_5__getBinderIds(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_fset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l___private_Lean_Elab_Binders_2__expandBinderIdent(x_13, x_4, x_5);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
lean_inc(x_1);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
x_21 = x_18;
x_22 = lean_array_fset(x_12, x_2, x_21);
lean_dec(x_2);
x_2 = x_20;
x_3 = x_22;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_fset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l___private_Lean_Elab_Binders_2__expandBinderIdent(x_13, x_4, x_5);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 0;
lean_inc(x_1);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
x_21 = x_18;
x_22 = lean_array_fset(x_12, x_2, x_21);
lean_dec(x_2);
x_2 = x_20;
x_3 = x_22;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_fset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l___private_Lean_Elab_Binders_2__expandBinderIdent(x_13, x_4, x_5);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 0;
lean_inc(x_1);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
x_21 = x_18;
x_22 = lean_array_fset(x_12, x_2, x_21);
lean_dec(x_2);
x_2 = x_20;
x_3 = x_22;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Binders_6__matchBinder(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
x_7 = lean_name_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_9 = lean_name_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
x_11 = lean_name_eq(x_4, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Parser_Term_instBinder___elambda__1___closed__2;
x_13 = lean_name_eq(x_4, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = l_Lean_Syntax_inhabited;
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_array_get(x_15, x_5, x_16);
x_18 = l___private_Lean_Elab_Binders_3__expandOptIdent(x_17, x_2, x_3);
lean_dec(x_2);
lean_dec(x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_unsigned_to_nat(2u);
x_22 = lean_array_get(x_15, x_5, x_21);
x_23 = 3;
x_24 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set_uint8(x_24, sizeof(void*)*2, x_23);
x_25 = l_Lean_mkOptionalNode___closed__2;
x_26 = lean_array_push(x_25, x_24);
lean_ctor_set(x_18, 0, x_26);
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_unsigned_to_nat(2u);
x_30 = lean_array_get(x_15, x_5, x_29);
x_31 = 3;
x_32 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*2, x_31);
x_33 = l_Lean_mkOptionalNode___closed__2;
x_34 = lean_array_push(x_33, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_28);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_Lean_Syntax_inhabited;
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_array_get(x_36, x_5, x_37);
lean_inc(x_2);
x_39 = l___private_Lean_Elab_Binders_5__getBinderIds(x_38, x_2, x_3);
lean_dec(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(2u);
x_43 = lean_array_get(x_36, x_5, x_42);
x_44 = l___private_Lean_Elab_Binders_1__expandBinderType(x_43);
lean_dec(x_43);
x_45 = x_40;
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__1___boxed), 5, 3);
lean_closure_set(x_47, 0, x_44);
lean_closure_set(x_47, 1, x_46);
lean_closure_set(x_47, 2, x_45);
x_48 = x_47;
x_49 = lean_apply_2(x_48, x_2, x_41);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_39);
if (x_50 == 0)
{
return x_39;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_39, 0);
x_52 = lean_ctor_get(x_39, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_39);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = l_Lean_Syntax_inhabited;
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_array_get(x_54, x_5, x_55);
lean_inc(x_2);
x_57 = l___private_Lean_Elab_Binders_5__getBinderIds(x_56, x_2, x_3);
lean_dec(x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_unsigned_to_nat(2u);
x_61 = lean_array_get(x_54, x_5, x_60);
x_62 = l___private_Lean_Elab_Binders_1__expandBinderType(x_61);
lean_dec(x_61);
x_63 = lean_unsigned_to_nat(3u);
x_64 = lean_array_get(x_54, x_5, x_63);
lean_inc(x_2);
x_65 = l___private_Lean_Elab_Binders_4__expandBinderModifier(x_62, x_64, x_2, x_59);
lean_dec(x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = x_58;
x_69 = lean_unsigned_to_nat(0u);
x_70 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__2___boxed), 5, 3);
lean_closure_set(x_70, 0, x_66);
lean_closure_set(x_70, 1, x_69);
lean_closure_set(x_70, 2, x_68);
x_71 = x_70;
x_72 = lean_apply_2(x_71, x_2, x_67);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_58);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_65);
if (x_73 == 0)
{
return x_65;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_65, 0);
x_75 = lean_ctor_get(x_65, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_65);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_2);
x_77 = !lean_is_exclusive(x_57);
if (x_77 == 0)
{
return x_57;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_57, 0);
x_79 = lean_ctor_get(x_57, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_57);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_81 = l_Lean_Syntax_inhabited;
x_82 = lean_unsigned_to_nat(0u);
x_83 = lean_array_get(x_81, x_5, x_82);
lean_inc(x_2);
x_84 = l___private_Lean_Elab_Binders_5__getBinderIds(x_83, x_2, x_3);
lean_dec(x_83);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l_Lean_mkHole(x_1);
x_88 = x_85;
x_89 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__3___boxed), 5, 3);
lean_closure_set(x_89, 0, x_87);
lean_closure_set(x_89, 1, x_82);
lean_closure_set(x_89, 2, x_88);
x_90 = x_89;
x_91 = lean_apply_2(x_90, x_2, x_86);
return x_91;
}
else
{
uint8_t x_92; 
lean_dec(x_2);
x_92 = !lean_is_exclusive(x_84);
if (x_92 == 0)
{
return x_84;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_84, 0);
x_94 = lean_ctor_get(x_84, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_84);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
lean_object* x_96; 
lean_dec(x_2);
x_96 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_3);
return x_96;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_6__matchBinder___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_6__matchBinder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Binders_6__matchBinder(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_fget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_6, 0);
x_17 = lean_ctor_get(x_6, 9);
x_18 = l_Lean_Elab_replaceRef(x_14, x_17);
lean_dec(x_17);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 2);
lean_dec(x_20);
x_21 = lean_ctor_get(x_16, 1);
lean_dec(x_21);
lean_inc(x_5);
lean_inc(x_4);
lean_ctor_set(x_16, 2, x_5);
lean_ctor_set(x_16, 1, x_4);
lean_ctor_set(x_6, 9, x_18);
lean_inc(x_6);
x_22 = l_Lean_Elab_Term_elabType(x_14, x_6, x_7);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_26);
x_28 = l_Lean_mkFVar(x_26);
lean_inc(x_28);
x_29 = lean_array_push(x_3, x_28);
x_30 = lean_ctor_get(x_13, 0);
lean_inc(x_30);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
x_32 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
lean_dec(x_13);
lean_inc(x_23);
x_33 = lean_local_ctx_mk_local_decl(x_4, x_26, x_31, x_23, x_32);
lean_inc(x_6);
x_34 = l_Lean_Elab_Term_isClass(x_23, x_6, x_27);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_28);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_2, x_37);
lean_dec(x_2);
x_2 = x_38;
x_3 = x_29;
x_4 = x_33;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_dec(x_34);
x_41 = lean_ctor_get(x_35, 0);
lean_inc(x_41);
lean_dec(x_35);
x_42 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_40);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_28);
x_45 = lean_array_push(x_5, x_44);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_2, x_46);
lean_dec(x_2);
x_2 = x_47;
x_3 = x_29;
x_4 = x_33;
x_5 = x_45;
x_7 = x_43;
goto _start;
}
}
else
{
uint8_t x_49; 
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_34);
if (x_49 == 0)
{
return x_34;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_34, 0);
x_51 = lean_ctor_get(x_34, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_34);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_6);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_22);
if (x_53 == 0)
{
return x_22;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_22, 0);
x_55 = lean_ctor_get(x_22, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_22);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_16, 0);
x_58 = lean_ctor_get(x_16, 3);
x_59 = lean_ctor_get(x_16, 4);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
x_60 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_4);
lean_ctor_set(x_60, 2, x_5);
lean_ctor_set(x_60, 3, x_58);
lean_ctor_set(x_60, 4, x_59);
lean_ctor_set(x_6, 9, x_18);
lean_ctor_set(x_6, 0, x_60);
lean_inc(x_6);
x_61 = l_Lean_Elab_Term_elabType(x_14, x_6, x_7);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_65);
x_67 = l_Lean_mkFVar(x_65);
lean_inc(x_67);
x_68 = lean_array_push(x_3, x_67);
x_69 = lean_ctor_get(x_13, 0);
lean_inc(x_69);
x_70 = l_Lean_Syntax_getId(x_69);
lean_dec(x_69);
x_71 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
lean_dec(x_13);
lean_inc(x_62);
x_72 = lean_local_ctx_mk_local_decl(x_4, x_65, x_70, x_62, x_71);
lean_inc(x_6);
x_73 = l_Lean_Elab_Term_isClass(x_62, x_6, x_66);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_67);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_unsigned_to_nat(1u);
x_77 = lean_nat_add(x_2, x_76);
lean_dec(x_2);
x_2 = x_77;
x_3 = x_68;
x_4 = x_72;
x_7 = x_75;
goto _start;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_dec(x_73);
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
lean_dec(x_74);
x_81 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_79);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_67);
x_84 = lean_array_push(x_5, x_83);
x_85 = lean_unsigned_to_nat(1u);
x_86 = lean_nat_add(x_2, x_85);
lean_dec(x_2);
x_2 = x_86;
x_3 = x_68;
x_4 = x_72;
x_5 = x_84;
x_7 = x_82;
goto _start;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_72);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_88 = lean_ctor_get(x_73, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_73, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_90 = x_73;
} else {
 lean_dec_ref(x_73);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_6);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_92 = lean_ctor_get(x_61, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_61, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_94 = x_61;
} else {
 lean_dec_ref(x_61);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_96 = lean_ctor_get(x_6, 0);
x_97 = lean_ctor_get(x_6, 1);
x_98 = lean_ctor_get(x_6, 2);
x_99 = lean_ctor_get(x_6, 3);
x_100 = lean_ctor_get(x_6, 4);
x_101 = lean_ctor_get(x_6, 5);
x_102 = lean_ctor_get(x_6, 6);
x_103 = lean_ctor_get(x_6, 7);
x_104 = lean_ctor_get(x_6, 8);
x_105 = lean_ctor_get_uint8(x_6, sizeof(void*)*10);
x_106 = lean_ctor_get_uint8(x_6, sizeof(void*)*10 + 1);
x_107 = lean_ctor_get_uint8(x_6, sizeof(void*)*10 + 2);
x_108 = lean_ctor_get(x_6, 9);
lean_inc(x_108);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_6);
x_109 = l_Lean_Elab_replaceRef(x_14, x_108);
lean_dec(x_108);
x_110 = lean_ctor_get(x_96, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_96, 3);
lean_inc(x_111);
x_112 = lean_ctor_get(x_96, 4);
lean_inc(x_112);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 lean_ctor_release(x_96, 2);
 lean_ctor_release(x_96, 3);
 lean_ctor_release(x_96, 4);
 x_113 = x_96;
} else {
 lean_dec_ref(x_96);
 x_113 = lean_box(0);
}
lean_inc(x_5);
lean_inc(x_4);
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(0, 5, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_110);
lean_ctor_set(x_114, 1, x_4);
lean_ctor_set(x_114, 2, x_5);
lean_ctor_set(x_114, 3, x_111);
lean_ctor_set(x_114, 4, x_112);
x_115 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_97);
lean_ctor_set(x_115, 2, x_98);
lean_ctor_set(x_115, 3, x_99);
lean_ctor_set(x_115, 4, x_100);
lean_ctor_set(x_115, 5, x_101);
lean_ctor_set(x_115, 6, x_102);
lean_ctor_set(x_115, 7, x_103);
lean_ctor_set(x_115, 8, x_104);
lean_ctor_set(x_115, 9, x_109);
lean_ctor_set_uint8(x_115, sizeof(void*)*10, x_105);
lean_ctor_set_uint8(x_115, sizeof(void*)*10 + 1, x_106);
lean_ctor_set_uint8(x_115, sizeof(void*)*10 + 2, x_107);
lean_inc(x_115);
x_116 = l_Lean_Elab_Term_elabType(x_14, x_115, x_7);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_120);
x_122 = l_Lean_mkFVar(x_120);
lean_inc(x_122);
x_123 = lean_array_push(x_3, x_122);
x_124 = lean_ctor_get(x_13, 0);
lean_inc(x_124);
x_125 = l_Lean_Syntax_getId(x_124);
lean_dec(x_124);
x_126 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
lean_dec(x_13);
lean_inc(x_117);
x_127 = lean_local_ctx_mk_local_decl(x_4, x_120, x_125, x_117, x_126);
lean_inc(x_115);
x_128 = l_Lean_Elab_Term_isClass(x_117, x_115, x_121);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_122);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_unsigned_to_nat(1u);
x_132 = lean_nat_add(x_2, x_131);
lean_dec(x_2);
x_2 = x_132;
x_3 = x_123;
x_4 = x_127;
x_6 = x_115;
x_7 = x_130;
goto _start;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_134 = lean_ctor_get(x_128, 1);
lean_inc(x_134);
lean_dec(x_128);
x_135 = lean_ctor_get(x_129, 0);
lean_inc(x_135);
lean_dec(x_129);
x_136 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_134);
x_137 = lean_ctor_get(x_136, 1);
lean_inc(x_137);
lean_dec(x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_122);
x_139 = lean_array_push(x_5, x_138);
x_140 = lean_unsigned_to_nat(1u);
x_141 = lean_nat_add(x_2, x_140);
lean_dec(x_2);
x_2 = x_141;
x_3 = x_123;
x_4 = x_127;
x_5 = x_139;
x_6 = x_115;
x_7 = x_137;
goto _start;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_127);
lean_dec(x_123);
lean_dec(x_122);
lean_dec(x_115);
lean_dec(x_5);
lean_dec(x_2);
x_143 = lean_ctor_get(x_128, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_128, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_145 = x_128;
} else {
 lean_dec_ref(x_128);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_115);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = lean_ctor_get(x_116, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_116, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_149 = x_116;
} else {
 lean_dec_ref(x_116);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Binders_7__elabBinderViews___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Binders_7__elabBinderViews___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_7__elabBinderViews___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Binders_7__elabBinderViews(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_fget(x_1, x_2);
lean_inc(x_6);
x_14 = l___private_Lean_Elab_Binders_6__matchBinder(x_13, x_6, x_7);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
x_18 = l___private_Lean_Elab_Binders_7__elabBinderViews___main(x_15, x_17, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_2, x_25);
lean_dec(x_2);
x_2 = x_26;
x_3 = x_22;
x_4 = x_23;
x_5 = x_24;
x_7 = x_21;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_18);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_14);
if (x_32 == 0)
{
return x_14;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_14, 0);
x_34 = lean_ctor_get(x_14, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_14);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Binders_8__elabBindersAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Binders_8__elabBindersAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_8__elabBindersAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Binders_8__elabBindersAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Array_isEmpty___rarg(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = l_Lean_Elab_Term_getLCtx(x_3, x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Elab_Term_getLocalInsts(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_empty___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_14 = l___private_Lean_Elab_Binders_8__elabBindersAux___main(x_1, x_12, x_13, x_7, x_10, x_3, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_18 = x_14;
} else {
 lean_dec_ref(x_14);
 x_18 = lean_box(0);
}
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_array_get_size(x_10);
lean_dec(x_10);
x_23 = lean_array_get_size(x_21);
x_24 = lean_nat_dec_lt(x_22, x_23);
lean_dec(x_23);
lean_dec(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_3);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_3, 0);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 2);
lean_dec(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_dec(x_29);
lean_ctor_set(x_26, 2, x_21);
lean_ctor_set(x_26, 1, x_20);
x_30 = lean_apply_3(x_2, x_19, x_3, x_17);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 3);
x_33 = lean_ctor_get(x_26, 4);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_20);
lean_ctor_set(x_34, 2, x_21);
lean_ctor_set(x_34, 3, x_32);
lean_ctor_set(x_34, 4, x_33);
lean_ctor_set(x_3, 0, x_34);
x_35 = lean_apply_3(x_2, x_19, x_3, x_17);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_36 = lean_ctor_get(x_3, 0);
x_37 = lean_ctor_get(x_3, 1);
x_38 = lean_ctor_get(x_3, 2);
x_39 = lean_ctor_get(x_3, 3);
x_40 = lean_ctor_get(x_3, 4);
x_41 = lean_ctor_get(x_3, 5);
x_42 = lean_ctor_get(x_3, 6);
x_43 = lean_ctor_get(x_3, 7);
x_44 = lean_ctor_get(x_3, 8);
x_45 = lean_ctor_get_uint8(x_3, sizeof(void*)*10);
x_46 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 1);
x_47 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 2);
x_48 = lean_ctor_get(x_3, 9);
lean_inc(x_48);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_3);
x_49 = lean_ctor_get(x_36, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_36, 3);
lean_inc(x_50);
x_51 = lean_ctor_get(x_36, 4);
lean_inc(x_51);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 lean_ctor_release(x_36, 3);
 lean_ctor_release(x_36, 4);
 x_52 = x_36;
} else {
 lean_dec_ref(x_36);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 5, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_49);
lean_ctor_set(x_53, 1, x_20);
lean_ctor_set(x_53, 2, x_21);
lean_ctor_set(x_53, 3, x_50);
lean_ctor_set(x_53, 4, x_51);
x_54 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_37);
lean_ctor_set(x_54, 2, x_38);
lean_ctor_set(x_54, 3, x_39);
lean_ctor_set(x_54, 4, x_40);
lean_ctor_set(x_54, 5, x_41);
lean_ctor_set(x_54, 6, x_42);
lean_ctor_set(x_54, 7, x_43);
lean_ctor_set(x_54, 8, x_44);
lean_ctor_set(x_54, 9, x_48);
lean_ctor_set_uint8(x_54, sizeof(void*)*10, x_45);
lean_ctor_set_uint8(x_54, sizeof(void*)*10 + 1, x_46);
lean_ctor_set_uint8(x_54, sizeof(void*)*10 + 2, x_47);
x_55 = lean_apply_3(x_2, x_19, x_54, x_17);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_56 = lean_ctor_get(x_17, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_56, 2);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_ctor_get(x_57, 2);
lean_inc(x_58);
lean_dec(x_57);
x_160 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_17);
x_161 = lean_ctor_get(x_3, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = !lean_is_exclusive(x_3);
if (x_163 == 0)
{
lean_object* x_164; uint8_t x_165; 
x_164 = lean_ctor_get(x_3, 0);
lean_dec(x_164);
x_165 = !lean_is_exclusive(x_161);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_161, 2);
lean_dec(x_166);
x_167 = lean_ctor_get(x_161, 1);
lean_dec(x_167);
lean_ctor_set(x_161, 2, x_21);
lean_ctor_set(x_161, 1, x_20);
x_168 = lean_apply_3(x_2, x_19, x_3, x_162);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_171, 0, x_169);
x_59 = x_171;
x_60 = x_170;
goto block_159;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_168, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_168, 1);
lean_inc(x_173);
lean_dec(x_168);
x_174 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_174, 0, x_172);
x_59 = x_174;
x_60 = x_173;
goto block_159;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_175 = lean_ctor_get(x_161, 0);
x_176 = lean_ctor_get(x_161, 3);
x_177 = lean_ctor_get(x_161, 4);
lean_inc(x_177);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_161);
x_178 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_20);
lean_ctor_set(x_178, 2, x_21);
lean_ctor_set(x_178, 3, x_176);
lean_ctor_set(x_178, 4, x_177);
lean_ctor_set(x_3, 0, x_178);
x_179 = lean_apply_3(x_2, x_19, x_3, x_162);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
x_182 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_182, 0, x_180);
x_59 = x_182;
x_60 = x_181;
goto block_159;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_179, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_179, 1);
lean_inc(x_184);
lean_dec(x_179);
x_185 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_185, 0, x_183);
x_59 = x_185;
x_60 = x_184;
goto block_159;
}
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; uint8_t x_195; uint8_t x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_186 = lean_ctor_get(x_3, 1);
x_187 = lean_ctor_get(x_3, 2);
x_188 = lean_ctor_get(x_3, 3);
x_189 = lean_ctor_get(x_3, 4);
x_190 = lean_ctor_get(x_3, 5);
x_191 = lean_ctor_get(x_3, 6);
x_192 = lean_ctor_get(x_3, 7);
x_193 = lean_ctor_get(x_3, 8);
x_194 = lean_ctor_get_uint8(x_3, sizeof(void*)*10);
x_195 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 1);
x_196 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 2);
x_197 = lean_ctor_get(x_3, 9);
lean_inc(x_197);
lean_inc(x_193);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_inc(x_189);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_3);
x_198 = lean_ctor_get(x_161, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_161, 3);
lean_inc(x_199);
x_200 = lean_ctor_get(x_161, 4);
lean_inc(x_200);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 lean_ctor_release(x_161, 2);
 lean_ctor_release(x_161, 3);
 lean_ctor_release(x_161, 4);
 x_201 = x_161;
} else {
 lean_dec_ref(x_161);
 x_201 = lean_box(0);
}
if (lean_is_scalar(x_201)) {
 x_202 = lean_alloc_ctor(0, 5, 0);
} else {
 x_202 = x_201;
}
lean_ctor_set(x_202, 0, x_198);
lean_ctor_set(x_202, 1, x_20);
lean_ctor_set(x_202, 2, x_21);
lean_ctor_set(x_202, 3, x_199);
lean_ctor_set(x_202, 4, x_200);
x_203 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_186);
lean_ctor_set(x_203, 2, x_187);
lean_ctor_set(x_203, 3, x_188);
lean_ctor_set(x_203, 4, x_189);
lean_ctor_set(x_203, 5, x_190);
lean_ctor_set(x_203, 6, x_191);
lean_ctor_set(x_203, 7, x_192);
lean_ctor_set(x_203, 8, x_193);
lean_ctor_set(x_203, 9, x_197);
lean_ctor_set_uint8(x_203, sizeof(void*)*10, x_194);
lean_ctor_set_uint8(x_203, sizeof(void*)*10 + 1, x_195);
lean_ctor_set_uint8(x_203, sizeof(void*)*10 + 2, x_196);
x_204 = lean_apply_3(x_2, x_19, x_203, x_162);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_207, 0, x_205);
x_59 = x_207;
x_60 = x_206;
goto block_159;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_204, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_204, 1);
lean_inc(x_209);
lean_dec(x_204);
x_210 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_210, 0, x_208);
x_59 = x_210;
x_60 = x_209;
goto block_159;
}
}
block_159:
{
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_61, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 0);
lean_inc(x_63);
lean_dec(x_59);
x_64 = !lean_is_exclusive(x_60);
if (x_64 == 0)
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_60, 0);
lean_dec(x_65);
x_66 = !lean_is_exclusive(x_61);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_61, 2);
lean_dec(x_67);
x_68 = !lean_is_exclusive(x_62);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_62, 2);
lean_dec(x_69);
lean_ctor_set(x_62, 2, x_58);
if (lean_is_scalar(x_18)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_18;
 lean_ctor_set_tag(x_70, 1);
}
lean_ctor_set(x_70, 0, x_63);
lean_ctor_set(x_70, 1, x_60);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_71 = lean_ctor_get(x_62, 0);
x_72 = lean_ctor_get(x_62, 1);
x_73 = lean_ctor_get(x_62, 3);
x_74 = lean_ctor_get(x_62, 4);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_62);
x_75 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_75, 0, x_71);
lean_ctor_set(x_75, 1, x_72);
lean_ctor_set(x_75, 2, x_58);
lean_ctor_set(x_75, 3, x_73);
lean_ctor_set(x_75, 4, x_74);
lean_ctor_set(x_61, 2, x_75);
if (lean_is_scalar(x_18)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_18;
 lean_ctor_set_tag(x_76, 1);
}
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_60);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_77 = lean_ctor_get(x_61, 0);
x_78 = lean_ctor_get(x_61, 1);
x_79 = lean_ctor_get(x_61, 3);
x_80 = lean_ctor_get(x_61, 4);
x_81 = lean_ctor_get(x_61, 5);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_61);
x_82 = lean_ctor_get(x_62, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_62, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_62, 3);
lean_inc(x_84);
x_85 = lean_ctor_get(x_62, 4);
lean_inc(x_85);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 lean_ctor_release(x_62, 2);
 lean_ctor_release(x_62, 3);
 lean_ctor_release(x_62, 4);
 x_86 = x_62;
} else {
 lean_dec_ref(x_62);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 5, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_82);
lean_ctor_set(x_87, 1, x_83);
lean_ctor_set(x_87, 2, x_58);
lean_ctor_set(x_87, 3, x_84);
lean_ctor_set(x_87, 4, x_85);
x_88 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_88, 0, x_77);
lean_ctor_set(x_88, 1, x_78);
lean_ctor_set(x_88, 2, x_87);
lean_ctor_set(x_88, 3, x_79);
lean_ctor_set(x_88, 4, x_80);
lean_ctor_set(x_88, 5, x_81);
lean_ctor_set(x_60, 0, x_88);
if (lean_is_scalar(x_18)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_18;
 lean_ctor_set_tag(x_89, 1);
}
lean_ctor_set(x_89, 0, x_63);
lean_ctor_set(x_89, 1, x_60);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_90 = lean_ctor_get(x_60, 1);
x_91 = lean_ctor_get(x_60, 2);
x_92 = lean_ctor_get(x_60, 3);
x_93 = lean_ctor_get(x_60, 4);
x_94 = lean_ctor_get(x_60, 5);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_60);
x_95 = lean_ctor_get(x_61, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_61, 1);
lean_inc(x_96);
x_97 = lean_ctor_get(x_61, 3);
lean_inc(x_97);
x_98 = lean_ctor_get(x_61, 4);
lean_inc(x_98);
x_99 = lean_ctor_get(x_61, 5);
lean_inc(x_99);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 lean_ctor_release(x_61, 2);
 lean_ctor_release(x_61, 3);
 lean_ctor_release(x_61, 4);
 lean_ctor_release(x_61, 5);
 x_100 = x_61;
} else {
 lean_dec_ref(x_61);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_62, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_62, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_62, 3);
lean_inc(x_103);
x_104 = lean_ctor_get(x_62, 4);
lean_inc(x_104);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 lean_ctor_release(x_62, 2);
 lean_ctor_release(x_62, 3);
 lean_ctor_release(x_62, 4);
 x_105 = x_62;
} else {
 lean_dec_ref(x_62);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(0, 5, 0);
} else {
 x_106 = x_105;
}
lean_ctor_set(x_106, 0, x_101);
lean_ctor_set(x_106, 1, x_102);
lean_ctor_set(x_106, 2, x_58);
lean_ctor_set(x_106, 3, x_103);
lean_ctor_set(x_106, 4, x_104);
if (lean_is_scalar(x_100)) {
 x_107 = lean_alloc_ctor(0, 6, 0);
} else {
 x_107 = x_100;
}
lean_ctor_set(x_107, 0, x_95);
lean_ctor_set(x_107, 1, x_96);
lean_ctor_set(x_107, 2, x_106);
lean_ctor_set(x_107, 3, x_97);
lean_ctor_set(x_107, 4, x_98);
lean_ctor_set(x_107, 5, x_99);
x_108 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_90);
lean_ctor_set(x_108, 2, x_91);
lean_ctor_set(x_108, 3, x_92);
lean_ctor_set(x_108, 4, x_93);
lean_ctor_set(x_108, 5, x_94);
if (lean_is_scalar(x_18)) {
 x_109 = lean_alloc_ctor(1, 2, 0);
} else {
 x_109 = x_18;
 lean_ctor_set_tag(x_109, 1);
}
lean_ctor_set(x_109, 0, x_63);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_ctor_get(x_60, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_110, 2);
lean_inc(x_111);
x_112 = lean_ctor_get(x_59, 0);
lean_inc(x_112);
lean_dec(x_59);
x_113 = !lean_is_exclusive(x_60);
if (x_113 == 0)
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_ctor_get(x_60, 0);
lean_dec(x_114);
x_115 = !lean_is_exclusive(x_110);
if (x_115 == 0)
{
lean_object* x_116; uint8_t x_117; 
x_116 = lean_ctor_get(x_110, 2);
lean_dec(x_116);
x_117 = !lean_is_exclusive(x_111);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_111, 2);
lean_dec(x_118);
lean_ctor_set(x_111, 2, x_58);
if (lean_is_scalar(x_18)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_18;
}
lean_ctor_set(x_119, 0, x_112);
lean_ctor_set(x_119, 1, x_60);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_120 = lean_ctor_get(x_111, 0);
x_121 = lean_ctor_get(x_111, 1);
x_122 = lean_ctor_get(x_111, 3);
x_123 = lean_ctor_get(x_111, 4);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_111);
x_124 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_124, 0, x_120);
lean_ctor_set(x_124, 1, x_121);
lean_ctor_set(x_124, 2, x_58);
lean_ctor_set(x_124, 3, x_122);
lean_ctor_set(x_124, 4, x_123);
lean_ctor_set(x_110, 2, x_124);
if (lean_is_scalar(x_18)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_18;
}
lean_ctor_set(x_125, 0, x_112);
lean_ctor_set(x_125, 1, x_60);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_126 = lean_ctor_get(x_110, 0);
x_127 = lean_ctor_get(x_110, 1);
x_128 = lean_ctor_get(x_110, 3);
x_129 = lean_ctor_get(x_110, 4);
x_130 = lean_ctor_get(x_110, 5);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_110);
x_131 = lean_ctor_get(x_111, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_111, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_111, 3);
lean_inc(x_133);
x_134 = lean_ctor_get(x_111, 4);
lean_inc(x_134);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 lean_ctor_release(x_111, 4);
 x_135 = x_111;
} else {
 lean_dec_ref(x_111);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(0, 5, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_131);
lean_ctor_set(x_136, 1, x_132);
lean_ctor_set(x_136, 2, x_58);
lean_ctor_set(x_136, 3, x_133);
lean_ctor_set(x_136, 4, x_134);
x_137 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_137, 0, x_126);
lean_ctor_set(x_137, 1, x_127);
lean_ctor_set(x_137, 2, x_136);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set(x_137, 4, x_129);
lean_ctor_set(x_137, 5, x_130);
lean_ctor_set(x_60, 0, x_137);
if (lean_is_scalar(x_18)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_18;
}
lean_ctor_set(x_138, 0, x_112);
lean_ctor_set(x_138, 1, x_60);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_139 = lean_ctor_get(x_60, 1);
x_140 = lean_ctor_get(x_60, 2);
x_141 = lean_ctor_get(x_60, 3);
x_142 = lean_ctor_get(x_60, 4);
x_143 = lean_ctor_get(x_60, 5);
lean_inc(x_143);
lean_inc(x_142);
lean_inc(x_141);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_60);
x_144 = lean_ctor_get(x_110, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_110, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_110, 3);
lean_inc(x_146);
x_147 = lean_ctor_get(x_110, 4);
lean_inc(x_147);
x_148 = lean_ctor_get(x_110, 5);
lean_inc(x_148);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 lean_ctor_release(x_110, 2);
 lean_ctor_release(x_110, 3);
 lean_ctor_release(x_110, 4);
 lean_ctor_release(x_110, 5);
 x_149 = x_110;
} else {
 lean_dec_ref(x_110);
 x_149 = lean_box(0);
}
x_150 = lean_ctor_get(x_111, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_111, 1);
lean_inc(x_151);
x_152 = lean_ctor_get(x_111, 3);
lean_inc(x_152);
x_153 = lean_ctor_get(x_111, 4);
lean_inc(x_153);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 lean_ctor_release(x_111, 4);
 x_154 = x_111;
} else {
 lean_dec_ref(x_111);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(0, 5, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_150);
lean_ctor_set(x_155, 1, x_151);
lean_ctor_set(x_155, 2, x_58);
lean_ctor_set(x_155, 3, x_152);
lean_ctor_set(x_155, 4, x_153);
if (lean_is_scalar(x_149)) {
 x_156 = lean_alloc_ctor(0, 6, 0);
} else {
 x_156 = x_149;
}
lean_ctor_set(x_156, 0, x_144);
lean_ctor_set(x_156, 1, x_145);
lean_ctor_set(x_156, 2, x_155);
lean_ctor_set(x_156, 3, x_146);
lean_ctor_set(x_156, 4, x_147);
lean_ctor_set(x_156, 5, x_148);
x_157 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_139);
lean_ctor_set(x_157, 2, x_140);
lean_ctor_set(x_157, 3, x_141);
lean_ctor_set(x_157, 4, x_142);
lean_ctor_set(x_157, 5, x_143);
if (lean_is_scalar(x_18)) {
 x_158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_158 = x_18;
}
lean_ctor_set(x_158, 0, x_112);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
}
else
{
uint8_t x_211; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
x_211 = !lean_is_exclusive(x_14);
if (x_211 == 0)
{
return x_14;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_14, 0);
x_213 = lean_ctor_get(x_14, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_14);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
else
{
lean_object* x_215; lean_object* x_216; 
x_215 = l_Array_empty___closed__1;
x_216 = lean_apply_3(x_2, x_215, x_3, x_4);
return x_216;
}
}
}
lean_object* l_Lean_Elab_Term_elabBinders(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinders___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabBinders___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Expr_Inhabited;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_get(x_5, x_2, x_6);
x_8 = lean_apply_3(x_1, x_7, x_3, x_4);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_mkOptionalNode___closed__2;
x_6 = lean_array_push(x_5, x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = l_Lean_Elab_Term_elabBinders___rarg(x_6, x_7, x_3, x_4);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_elabBinder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabBinder___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Elab_Term_elabType(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_mkForall(x_2, x_6, x_3, x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = l_Lean_Syntax_getArgs(x_1);
x_9 = lean_array_get_size(x_8);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(4u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_1);
x_12 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(3u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 4, 1);
lean_closure_set(x_18, 0, x_16);
x_19 = l_Lean_Elab_Term_elabBinders___rarg(x_17, x_18, x_3, x_4);
lean_dec(x_17);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabForall(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_List_format___rarg___closed__2;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_82; uint8_t x_83; 
x_82 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
lean_inc(x_1);
x_83 = l_Lean_Syntax_isOfKind(x_1, x_82);
if (x_83 == 0)
{
uint8_t x_84; 
x_84 = 0;
x_4 = x_84;
goto block_81;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_85 = l_Lean_Syntax_getArgs(x_1);
x_86 = lean_array_get_size(x_85);
lean_dec(x_85);
x_87 = lean_unsigned_to_nat(3u);
x_88 = lean_nat_dec_eq(x_86, x_87);
lean_dec(x_86);
x_4 = x_88;
goto block_81;
}
block_81:
{
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_getMainModule___rarg(x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l___private_Lean_Elab_Term_5__expandCDot___main___closed__3;
x_17 = l_Lean_addMacroScope(x_15, x_16, x_11);
x_18 = lean_box(0);
x_19 = l_Lean_SourceInfo_inhabited___closed__1;
x_20 = l___private_Lean_Elab_Term_5__expandCDot___main___closed__2;
x_21 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_18);
x_22 = l_Array_empty___closed__1;
x_23 = lean_array_push(x_22, x_21);
x_24 = l_Lean_nullKind___closed__2;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
x_27 = lean_array_push(x_26, x_25);
x_28 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_29 = lean_array_push(x_28, x_7);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_array_push(x_27, x_30);
x_32 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_33 = lean_array_push(x_31, x_32);
x_34 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
x_35 = lean_array_push(x_33, x_34);
x_36 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_array_push(x_22, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_24);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__2;
x_41 = lean_array_push(x_40, x_39);
x_42 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__5;
x_43 = lean_array_push(x_41, x_42);
x_44 = lean_array_push(x_43, x_9);
x_45 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
lean_ctor_set(x_13, 0, x_46);
return x_13;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_13);
x_49 = l___private_Lean_Elab_Term_5__expandCDot___main___closed__3;
x_50 = l_Lean_addMacroScope(x_47, x_49, x_11);
x_51 = lean_box(0);
x_52 = l_Lean_SourceInfo_inhabited___closed__1;
x_53 = l___private_Lean_Elab_Term_5__expandCDot___main___closed__2;
x_54 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_54, 2, x_50);
lean_ctor_set(x_54, 3, x_51);
x_55 = l_Array_empty___closed__1;
x_56 = lean_array_push(x_55, x_54);
x_57 = l_Lean_nullKind___closed__2;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
x_60 = lean_array_push(x_59, x_58);
x_61 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_62 = lean_array_push(x_61, x_7);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_57);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_push(x_60, x_63);
x_65 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_66 = lean_array_push(x_64, x_65);
x_67 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
x_68 = lean_array_push(x_66, x_67);
x_69 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_55, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_57);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__2;
x_74 = lean_array_push(x_73, x_72);
x_75 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__5;
x_76 = lean_array_push(x_74, x_75);
x_77 = lean_array_push(x_76, x_9);
x_78 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_48);
return x_80;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrow___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_elabArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_Term_elabArrow___closed__1;
x_6 = l_Lean_Elab_Term_adaptExpander(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_elabArrow___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrow), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = l_Lean_mkOptionalNode___closed__2;
x_10 = lean_array_push(x_9, x_6);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 4, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = l_Lean_Elab_Term_elabBinders___rarg(x_10, x_11, x_3, x_4);
lean_dec(x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabDepArrow(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabDepArrow___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_65; uint8_t x_66; 
x_65 = l_Lean_mkAppStx___closed__8;
lean_inc(x_2);
x_66 = l_Lean_Syntax_isOfKind(x_2, x_65);
if (x_66 == 0)
{
uint8_t x_67; 
x_67 = 0;
x_6 = x_67;
goto block_64;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = l_Lean_Syntax_getArgs(x_2);
x_69 = lean_array_get_size(x_68);
lean_dec(x_68);
x_70 = lean_unsigned_to_nat(2u);
x_71 = lean_nat_dec_eq(x_69, x_70);
lean_dec(x_69);
x_6 = x_71;
goto block_64;
}
block_64:
{
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_mkHole___closed__2;
lean_inc(x_2);
x_8 = l_Lean_Syntax_isOfKind(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_identKind___closed__2;
lean_inc(x_2);
x_10 = l_Lean_Syntax_isOfKind(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_push(x_3, x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_5);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = l_Lean_Syntax_getArgs(x_2);
x_17 = lean_array_get_size(x_16);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_dec_eq(x_17, x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_identKind___closed__2;
lean_inc(x_2);
x_21 = l_Lean_Syntax_isOfKind(x_2, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_5);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_array_push(x_3, x_2);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_5);
return x_26;
}
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_2, x_4, x_5);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_array_push(x_3, x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
x_34 = lean_array_push(x_3, x_32);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Lean_Syntax_getArg(x_2, x_37);
x_39 = lean_unsigned_to_nat(1u);
x_40 = l_Lean_Syntax_getArg(x_2, x_39);
lean_dec(x_2);
x_41 = l_Lean_nullKind___closed__2;
lean_inc(x_40);
x_42 = l_Lean_Syntax_isOfKind(x_40, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_3);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_5);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = l_Lean_Syntax_getArgs(x_40);
x_46 = lean_array_get_size(x_45);
lean_dec(x_45);
x_47 = lean_nat_dec_eq(x_46, x_39);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_3);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_5);
return x_49;
}
else
{
if (x_1 == 0)
{
lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_50 = l_Lean_Syntax_getArg(x_40, x_37);
lean_dec(x_40);
x_51 = 0;
x_52 = l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main(x_51, x_38, x_3, x_4, x_5);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
lean_dec(x_50);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_52, 0);
lean_dec(x_55);
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_dec(x_52);
x_59 = lean_ctor_get(x_53, 0);
lean_inc(x_59);
lean_dec(x_53);
x_60 = 1;
x_1 = x_60;
x_2 = x_50;
x_3 = x_59;
x_5 = x_58;
goto _start;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_3);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_5);
return x_63;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Binders_10__getFunBinderIds_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = 0;
x_5 = l_Array_empty___closed__1;
x_6 = l___private_Lean_Elab_Binders_9__getFunBinderIdsAux_x3f___main(x_4, x_1, x_5, x_2, x_3);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_10__getFunBinderIds_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Binders_10__getFunBinderIds_x3f(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Binders_11__expandFunBindersAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = x_3;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_fget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fset(x_3, x_2, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = l_Lean_Elab_Term_mkExplicitBinder(x_10, x_1);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
x_14 = x_11;
x_15 = lean_array_fset(x_9, x_2, x_14);
lean_dec(x_2);
x_2 = x_13;
x_3 = x_15;
goto _start;
}
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("with");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__4;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l___private_Lean_Parser_Basic_2__sepByFnAux___main___at_Lean_Parser_Term_matchAlts___elambda__1___spec__2___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nullKind___closed__2;
x_2 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_array_fget(x_1, x_3);
switch (lean_obj_tag(x_14)) {
case 0:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_15 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_20 = l_Lean_mkHole(x_14);
lean_inc(x_16);
x_21 = l_Lean_Elab_Term_mkExplicitBinder(x_16, x_20);
x_22 = lean_array_push(x_4, x_21);
x_23 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_19, x_22, x_5, x_17);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_24, 1);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_dec(x_31);
x_32 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_26);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_33);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_38 = lean_array_push(x_37, x_16);
x_39 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_Array_empty___closed__1;
x_42 = lean_array_push(x_41, x_40);
x_43 = l_Lean_nullKind___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_46 = lean_array_push(x_45, x_44);
x_47 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_48 = lean_array_push(x_46, x_47);
x_49 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_50 = lean_array_push(x_48, x_49);
x_51 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_52 = lean_array_push(x_50, x_51);
x_53 = lean_array_push(x_41, x_14);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_push(x_41, x_54);
x_56 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_57 = lean_array_push(x_55, x_56);
x_58 = lean_array_push(x_57, x_30);
x_59 = l_Lean_Parser_Term_matchAlt___closed__2;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_41, x_60);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_43);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_array_push(x_52, x_62);
x_64 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = 1;
x_67 = lean_box(x_66);
lean_ctor_set(x_25, 1, x_67);
lean_ctor_set(x_25, 0, x_65);
lean_ctor_set(x_34, 0, x_24);
return x_34;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; 
x_68 = lean_ctor_get(x_34, 1);
lean_inc(x_68);
lean_dec(x_34);
x_69 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_70 = lean_array_push(x_69, x_16);
x_71 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_Array_empty___closed__1;
x_74 = lean_array_push(x_73, x_72);
x_75 = l_Lean_nullKind___closed__2;
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_78 = lean_array_push(x_77, x_76);
x_79 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_80 = lean_array_push(x_78, x_79);
x_81 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_82 = lean_array_push(x_80, x_81);
x_83 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_84 = lean_array_push(x_82, x_83);
x_85 = lean_array_push(x_73, x_14);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_75);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_array_push(x_73, x_86);
x_88 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_89 = lean_array_push(x_87, x_88);
x_90 = lean_array_push(x_89, x_30);
x_91 = l_Lean_Parser_Term_matchAlt___closed__2;
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
x_93 = lean_array_push(x_73, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_75);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_84, x_94);
x_96 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = 1;
x_99 = lean_box(x_98);
lean_ctor_set(x_25, 1, x_99);
lean_ctor_set(x_25, 0, x_97);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_24);
lean_ctor_set(x_100, 1, x_68);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_101 = lean_ctor_get(x_25, 0);
lean_inc(x_101);
lean_dec(x_25);
x_102 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_26);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
x_104 = l_Lean_Elab_Term_getMainModule___rarg(x_103);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_106 = x_104;
} else {
 lean_dec_ref(x_104);
 x_106 = lean_box(0);
}
x_107 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_108 = lean_array_push(x_107, x_16);
x_109 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
x_111 = l_Array_empty___closed__1;
x_112 = lean_array_push(x_111, x_110);
x_113 = l_Lean_nullKind___closed__2;
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_116 = lean_array_push(x_115, x_114);
x_117 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_118 = lean_array_push(x_116, x_117);
x_119 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_120 = lean_array_push(x_118, x_119);
x_121 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_122 = lean_array_push(x_120, x_121);
x_123 = lean_array_push(x_111, x_14);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_113);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_array_push(x_111, x_124);
x_126 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_127 = lean_array_push(x_125, x_126);
x_128 = lean_array_push(x_127, x_101);
x_129 = l_Lean_Parser_Term_matchAlt___closed__2;
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
x_131 = lean_array_push(x_111, x_130);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_113);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_array_push(x_122, x_132);
x_134 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = 1;
x_137 = lean_box(x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_137);
lean_ctor_set(x_24, 1, x_138);
if (lean_is_scalar(x_106)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_106;
}
lean_ctor_set(x_139, 0, x_24);
lean_ctor_set(x_139, 1, x_105);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_140 = lean_ctor_get(x_24, 0);
lean_inc(x_140);
lean_dec(x_24);
x_141 = lean_ctor_get(x_25, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_142 = x_25;
} else {
 lean_dec_ref(x_25);
 x_142 = lean_box(0);
}
x_143 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_26);
x_144 = lean_ctor_get(x_143, 1);
lean_inc(x_144);
lean_dec(x_143);
x_145 = l_Lean_Elab_Term_getMainModule___rarg(x_144);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_147 = x_145;
} else {
 lean_dec_ref(x_145);
 x_147 = lean_box(0);
}
x_148 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_149 = lean_array_push(x_148, x_16);
x_150 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
x_152 = l_Array_empty___closed__1;
x_153 = lean_array_push(x_152, x_151);
x_154 = l_Lean_nullKind___closed__2;
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_153);
x_156 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_157 = lean_array_push(x_156, x_155);
x_158 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_159 = lean_array_push(x_157, x_158);
x_160 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_161 = lean_array_push(x_159, x_160);
x_162 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_163 = lean_array_push(x_161, x_162);
x_164 = lean_array_push(x_152, x_14);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_154);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_array_push(x_152, x_165);
x_167 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_168 = lean_array_push(x_166, x_167);
x_169 = lean_array_push(x_168, x_141);
x_170 = l_Lean_Parser_Term_matchAlt___closed__2;
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
x_172 = lean_array_push(x_152, x_171);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_154);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_array_push(x_163, x_173);
x_175 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
x_177 = 1;
x_178 = lean_box(x_177);
if (lean_is_scalar(x_142)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_142;
}
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_140);
lean_ctor_set(x_180, 1, x_179);
if (lean_is_scalar(x_147)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_147;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_146);
return x_181;
}
}
case 1:
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_14, 0);
lean_inc(x_182);
if (lean_obj_tag(x_182) == 1)
{
lean_object* x_183; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
if (lean_obj_tag(x_183) == 1)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
if (lean_obj_tag(x_184) == 1)
{
lean_object* x_185; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_ctor_get(x_183, 1);
lean_inc(x_188);
lean_dec(x_183);
x_189 = lean_ctor_get(x_184, 1);
lean_inc(x_189);
lean_dec(x_184);
x_190 = lean_ctor_get(x_185, 1);
lean_inc(x_190);
lean_dec(x_185);
x_191 = l_Lean_mkAppStx___closed__1;
x_192 = lean_string_dec_eq(x_190, x_191);
lean_dec(x_190);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_187);
x_193 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = lean_unsigned_to_nat(1u);
x_197 = lean_nat_add(x_3, x_196);
lean_dec(x_3);
x_198 = l_Lean_mkHole(x_14);
lean_inc(x_194);
x_199 = l_Lean_Elab_Term_mkExplicitBinder(x_194, x_198);
x_200 = lean_array_push(x_4, x_199);
x_201 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_197, x_200, x_5, x_195);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_202, 1);
lean_inc(x_203);
x_204 = lean_ctor_get(x_201, 1);
lean_inc(x_204);
lean_dec(x_201);
x_205 = !lean_is_exclusive(x_202);
if (x_205 == 0)
{
lean_object* x_206; uint8_t x_207; 
x_206 = lean_ctor_get(x_202, 1);
lean_dec(x_206);
x_207 = !lean_is_exclusive(x_203);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; uint8_t x_213; 
x_208 = lean_ctor_get(x_203, 0);
x_209 = lean_ctor_get(x_203, 1);
lean_dec(x_209);
x_210 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_204);
x_211 = lean_ctor_get(x_210, 1);
lean_inc(x_211);
lean_dec(x_210);
x_212 = l_Lean_Elab_Term_getMainModule___rarg(x_211);
x_213 = !lean_is_exclusive(x_212);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_214 = lean_ctor_get(x_212, 0);
lean_dec(x_214);
x_215 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_216 = lean_array_push(x_215, x_194);
x_217 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
x_219 = l_Array_empty___closed__1;
x_220 = lean_array_push(x_219, x_218);
x_221 = l_Lean_nullKind___closed__2;
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
x_223 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_224 = lean_array_push(x_223, x_222);
x_225 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_226 = lean_array_push(x_224, x_225);
x_227 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_228 = lean_array_push(x_226, x_227);
x_229 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_230 = lean_array_push(x_228, x_229);
lean_inc(x_14);
x_231 = lean_array_push(x_219, x_14);
x_232 = !lean_is_exclusive(x_14);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; 
x_233 = lean_ctor_get(x_14, 1);
lean_dec(x_233);
x_234 = lean_ctor_get(x_14, 0);
lean_dec(x_234);
lean_ctor_set(x_14, 1, x_231);
lean_ctor_set(x_14, 0, x_221);
x_235 = lean_array_push(x_219, x_14);
x_236 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_237 = lean_array_push(x_235, x_236);
x_238 = lean_array_push(x_237, x_208);
x_239 = l_Lean_Parser_Term_matchAlt___closed__2;
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_238);
x_241 = lean_array_push(x_219, x_240);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_221);
lean_ctor_set(x_242, 1, x_241);
x_243 = lean_array_push(x_230, x_242);
x_244 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_243);
x_246 = 1;
x_247 = lean_box(x_246);
lean_ctor_set(x_203, 1, x_247);
lean_ctor_set(x_203, 0, x_245);
lean_ctor_set(x_212, 0, x_202);
return x_212;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; uint8_t x_260; lean_object* x_261; 
lean_dec(x_14);
x_248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_248, 0, x_221);
lean_ctor_set(x_248, 1, x_231);
x_249 = lean_array_push(x_219, x_248);
x_250 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_251 = lean_array_push(x_249, x_250);
x_252 = lean_array_push(x_251, x_208);
x_253 = l_Lean_Parser_Term_matchAlt___closed__2;
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_252);
x_255 = lean_array_push(x_219, x_254);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_221);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_array_push(x_230, x_256);
x_258 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_257);
x_260 = 1;
x_261 = lean_box(x_260);
lean_ctor_set(x_203, 1, x_261);
lean_ctor_set(x_203, 0, x_259);
lean_ctor_set(x_212, 0, x_202);
return x_212;
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; lean_object* x_294; lean_object* x_295; 
x_262 = lean_ctor_get(x_212, 1);
lean_inc(x_262);
lean_dec(x_212);
x_263 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_264 = lean_array_push(x_263, x_194);
x_265 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_264);
x_267 = l_Array_empty___closed__1;
x_268 = lean_array_push(x_267, x_266);
x_269 = l_Lean_nullKind___closed__2;
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set(x_270, 1, x_268);
x_271 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_272 = lean_array_push(x_271, x_270);
x_273 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_274 = lean_array_push(x_272, x_273);
x_275 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_276 = lean_array_push(x_274, x_275);
x_277 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_278 = lean_array_push(x_276, x_277);
lean_inc(x_14);
x_279 = lean_array_push(x_267, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_280 = x_14;
} else {
 lean_dec_ref(x_14);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(1, 2, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_269);
lean_ctor_set(x_281, 1, x_279);
x_282 = lean_array_push(x_267, x_281);
x_283 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_284 = lean_array_push(x_282, x_283);
x_285 = lean_array_push(x_284, x_208);
x_286 = l_Lean_Parser_Term_matchAlt___closed__2;
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_286);
lean_ctor_set(x_287, 1, x_285);
x_288 = lean_array_push(x_267, x_287);
x_289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_289, 0, x_269);
lean_ctor_set(x_289, 1, x_288);
x_290 = lean_array_push(x_278, x_289);
x_291 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_292, 0, x_291);
lean_ctor_set(x_292, 1, x_290);
x_293 = 1;
x_294 = lean_box(x_293);
lean_ctor_set(x_203, 1, x_294);
lean_ctor_set(x_203, 0, x_292);
x_295 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_295, 0, x_202);
lean_ctor_set(x_295, 1, x_262);
return x_295;
}
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_296 = lean_ctor_get(x_203, 0);
lean_inc(x_296);
lean_dec(x_203);
x_297 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_204);
x_298 = lean_ctor_get(x_297, 1);
lean_inc(x_298);
lean_dec(x_297);
x_299 = l_Lean_Elab_Term_getMainModule___rarg(x_298);
x_300 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_299)) {
 lean_ctor_release(x_299, 0);
 lean_ctor_release(x_299, 1);
 x_301 = x_299;
} else {
 lean_dec_ref(x_299);
 x_301 = lean_box(0);
}
x_302 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_303 = lean_array_push(x_302, x_194);
x_304 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_303);
x_306 = l_Array_empty___closed__1;
x_307 = lean_array_push(x_306, x_305);
x_308 = l_Lean_nullKind___closed__2;
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_307);
x_310 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_311 = lean_array_push(x_310, x_309);
x_312 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_313 = lean_array_push(x_311, x_312);
x_314 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_315 = lean_array_push(x_313, x_314);
x_316 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_317 = lean_array_push(x_315, x_316);
lean_inc(x_14);
x_318 = lean_array_push(x_306, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_319 = x_14;
} else {
 lean_dec_ref(x_14);
 x_319 = lean_box(0);
}
if (lean_is_scalar(x_319)) {
 x_320 = lean_alloc_ctor(1, 2, 0);
} else {
 x_320 = x_319;
}
lean_ctor_set(x_320, 0, x_308);
lean_ctor_set(x_320, 1, x_318);
x_321 = lean_array_push(x_306, x_320);
x_322 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_323 = lean_array_push(x_321, x_322);
x_324 = lean_array_push(x_323, x_296);
x_325 = l_Lean_Parser_Term_matchAlt___closed__2;
x_326 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_326, 0, x_325);
lean_ctor_set(x_326, 1, x_324);
x_327 = lean_array_push(x_306, x_326);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_308);
lean_ctor_set(x_328, 1, x_327);
x_329 = lean_array_push(x_317, x_328);
x_330 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_329);
x_332 = 1;
x_333 = lean_box(x_332);
x_334 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_334, 0, x_331);
lean_ctor_set(x_334, 1, x_333);
lean_ctor_set(x_202, 1, x_334);
if (lean_is_scalar(x_301)) {
 x_335 = lean_alloc_ctor(0, 2, 0);
} else {
 x_335 = x_301;
}
lean_ctor_set(x_335, 0, x_202);
lean_ctor_set(x_335, 1, x_300);
return x_335;
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_336 = lean_ctor_get(x_202, 0);
lean_inc(x_336);
lean_dec(x_202);
x_337 = lean_ctor_get(x_203, 0);
lean_inc(x_337);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_338 = x_203;
} else {
 lean_dec_ref(x_203);
 x_338 = lean_box(0);
}
x_339 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_204);
x_340 = lean_ctor_get(x_339, 1);
lean_inc(x_340);
lean_dec(x_339);
x_341 = l_Lean_Elab_Term_getMainModule___rarg(x_340);
x_342 = lean_ctor_get(x_341, 1);
lean_inc(x_342);
if (lean_is_exclusive(x_341)) {
 lean_ctor_release(x_341, 0);
 lean_ctor_release(x_341, 1);
 x_343 = x_341;
} else {
 lean_dec_ref(x_341);
 x_343 = lean_box(0);
}
x_344 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_345 = lean_array_push(x_344, x_194);
x_346 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_345);
x_348 = l_Array_empty___closed__1;
x_349 = lean_array_push(x_348, x_347);
x_350 = l_Lean_nullKind___closed__2;
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_349);
x_352 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_353 = lean_array_push(x_352, x_351);
x_354 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_355 = lean_array_push(x_353, x_354);
x_356 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_357 = lean_array_push(x_355, x_356);
x_358 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_359 = lean_array_push(x_357, x_358);
lean_inc(x_14);
x_360 = lean_array_push(x_348, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_361 = x_14;
} else {
 lean_dec_ref(x_14);
 x_361 = lean_box(0);
}
if (lean_is_scalar(x_361)) {
 x_362 = lean_alloc_ctor(1, 2, 0);
} else {
 x_362 = x_361;
}
lean_ctor_set(x_362, 0, x_350);
lean_ctor_set(x_362, 1, x_360);
x_363 = lean_array_push(x_348, x_362);
x_364 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_365 = lean_array_push(x_363, x_364);
x_366 = lean_array_push(x_365, x_337);
x_367 = l_Lean_Parser_Term_matchAlt___closed__2;
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_366);
x_369 = lean_array_push(x_348, x_368);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_350);
lean_ctor_set(x_370, 1, x_369);
x_371 = lean_array_push(x_359, x_370);
x_372 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_373, 0, x_372);
lean_ctor_set(x_373, 1, x_371);
x_374 = 1;
x_375 = lean_box(x_374);
if (lean_is_scalar(x_338)) {
 x_376 = lean_alloc_ctor(0, 2, 0);
} else {
 x_376 = x_338;
}
lean_ctor_set(x_376, 0, x_373);
lean_ctor_set(x_376, 1, x_375);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_336);
lean_ctor_set(x_377, 1, x_376);
if (lean_is_scalar(x_343)) {
 x_378 = lean_alloc_ctor(0, 2, 0);
} else {
 x_378 = x_343;
}
lean_ctor_set(x_378, 0, x_377);
lean_ctor_set(x_378, 1, x_342);
return x_378;
}
}
else
{
lean_object* x_379; uint8_t x_380; 
x_379 = l_Lean_mkAppStx___closed__3;
x_380 = lean_string_dec_eq(x_189, x_379);
lean_dec(x_189);
if (x_380 == 0)
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; uint8_t x_393; 
lean_dec(x_188);
lean_dec(x_187);
x_381 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
x_384 = lean_unsigned_to_nat(1u);
x_385 = lean_nat_add(x_3, x_384);
lean_dec(x_3);
x_386 = l_Lean_mkHole(x_14);
lean_inc(x_382);
x_387 = l_Lean_Elab_Term_mkExplicitBinder(x_382, x_386);
x_388 = lean_array_push(x_4, x_387);
x_389 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_385, x_388, x_5, x_383);
x_390 = lean_ctor_get(x_389, 0);
lean_inc(x_390);
x_391 = lean_ctor_get(x_390, 1);
lean_inc(x_391);
x_392 = lean_ctor_get(x_389, 1);
lean_inc(x_392);
lean_dec(x_389);
x_393 = !lean_is_exclusive(x_390);
if (x_393 == 0)
{
lean_object* x_394; uint8_t x_395; 
x_394 = lean_ctor_get(x_390, 1);
lean_dec(x_394);
x_395 = !lean_is_exclusive(x_391);
if (x_395 == 0)
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; 
x_396 = lean_ctor_get(x_391, 0);
x_397 = lean_ctor_get(x_391, 1);
lean_dec(x_397);
x_398 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_392);
x_399 = lean_ctor_get(x_398, 1);
lean_inc(x_399);
lean_dec(x_398);
x_400 = l_Lean_Elab_Term_getMainModule___rarg(x_399);
x_401 = !lean_is_exclusive(x_400);
if (x_401 == 0)
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_402 = lean_ctor_get(x_400, 0);
lean_dec(x_402);
x_403 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_404 = lean_array_push(x_403, x_382);
x_405 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_405);
lean_ctor_set(x_406, 1, x_404);
x_407 = l_Array_empty___closed__1;
x_408 = lean_array_push(x_407, x_406);
x_409 = l_Lean_nullKind___closed__2;
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_409);
lean_ctor_set(x_410, 1, x_408);
x_411 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_412 = lean_array_push(x_411, x_410);
x_413 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_414 = lean_array_push(x_412, x_413);
x_415 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_416 = lean_array_push(x_414, x_415);
x_417 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_418 = lean_array_push(x_416, x_417);
lean_inc(x_14);
x_419 = lean_array_push(x_407, x_14);
x_420 = !lean_is_exclusive(x_14);
if (x_420 == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; uint8_t x_434; lean_object* x_435; 
x_421 = lean_ctor_get(x_14, 1);
lean_dec(x_421);
x_422 = lean_ctor_get(x_14, 0);
lean_dec(x_422);
lean_ctor_set(x_14, 1, x_419);
lean_ctor_set(x_14, 0, x_409);
x_423 = lean_array_push(x_407, x_14);
x_424 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_425 = lean_array_push(x_423, x_424);
x_426 = lean_array_push(x_425, x_396);
x_427 = l_Lean_Parser_Term_matchAlt___closed__2;
x_428 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_428, 0, x_427);
lean_ctor_set(x_428, 1, x_426);
x_429 = lean_array_push(x_407, x_428);
x_430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_430, 0, x_409);
lean_ctor_set(x_430, 1, x_429);
x_431 = lean_array_push(x_418, x_430);
x_432 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_431);
x_434 = 1;
x_435 = lean_box(x_434);
lean_ctor_set(x_391, 1, x_435);
lean_ctor_set(x_391, 0, x_433);
lean_ctor_set(x_400, 0, x_390);
return x_400;
}
else
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; uint8_t x_448; lean_object* x_449; 
lean_dec(x_14);
x_436 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_436, 0, x_409);
lean_ctor_set(x_436, 1, x_419);
x_437 = lean_array_push(x_407, x_436);
x_438 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_439 = lean_array_push(x_437, x_438);
x_440 = lean_array_push(x_439, x_396);
x_441 = l_Lean_Parser_Term_matchAlt___closed__2;
x_442 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_442, 0, x_441);
lean_ctor_set(x_442, 1, x_440);
x_443 = lean_array_push(x_407, x_442);
x_444 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_444, 0, x_409);
lean_ctor_set(x_444, 1, x_443);
x_445 = lean_array_push(x_418, x_444);
x_446 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_446);
lean_ctor_set(x_447, 1, x_445);
x_448 = 1;
x_449 = lean_box(x_448);
lean_ctor_set(x_391, 1, x_449);
lean_ctor_set(x_391, 0, x_447);
lean_ctor_set(x_400, 0, x_390);
return x_400;
}
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; uint8_t x_481; lean_object* x_482; lean_object* x_483; 
x_450 = lean_ctor_get(x_400, 1);
lean_inc(x_450);
lean_dec(x_400);
x_451 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_452 = lean_array_push(x_451, x_382);
x_453 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_454 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_452);
x_455 = l_Array_empty___closed__1;
x_456 = lean_array_push(x_455, x_454);
x_457 = l_Lean_nullKind___closed__2;
x_458 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_458, 0, x_457);
lean_ctor_set(x_458, 1, x_456);
x_459 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_460 = lean_array_push(x_459, x_458);
x_461 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_462 = lean_array_push(x_460, x_461);
x_463 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_464 = lean_array_push(x_462, x_463);
x_465 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_466 = lean_array_push(x_464, x_465);
lean_inc(x_14);
x_467 = lean_array_push(x_455, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_468 = x_14;
} else {
 lean_dec_ref(x_14);
 x_468 = lean_box(0);
}
if (lean_is_scalar(x_468)) {
 x_469 = lean_alloc_ctor(1, 2, 0);
} else {
 x_469 = x_468;
}
lean_ctor_set(x_469, 0, x_457);
lean_ctor_set(x_469, 1, x_467);
x_470 = lean_array_push(x_455, x_469);
x_471 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_472 = lean_array_push(x_470, x_471);
x_473 = lean_array_push(x_472, x_396);
x_474 = l_Lean_Parser_Term_matchAlt___closed__2;
x_475 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_475, 0, x_474);
lean_ctor_set(x_475, 1, x_473);
x_476 = lean_array_push(x_455, x_475);
x_477 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_477, 0, x_457);
lean_ctor_set(x_477, 1, x_476);
x_478 = lean_array_push(x_466, x_477);
x_479 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_480 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_480, 0, x_479);
lean_ctor_set(x_480, 1, x_478);
x_481 = 1;
x_482 = lean_box(x_481);
lean_ctor_set(x_391, 1, x_482);
lean_ctor_set(x_391, 0, x_480);
x_483 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_483, 0, x_390);
lean_ctor_set(x_483, 1, x_450);
return x_483;
}
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; uint8_t x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_484 = lean_ctor_get(x_391, 0);
lean_inc(x_484);
lean_dec(x_391);
x_485 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_392);
x_486 = lean_ctor_get(x_485, 1);
lean_inc(x_486);
lean_dec(x_485);
x_487 = l_Lean_Elab_Term_getMainModule___rarg(x_486);
x_488 = lean_ctor_get(x_487, 1);
lean_inc(x_488);
if (lean_is_exclusive(x_487)) {
 lean_ctor_release(x_487, 0);
 lean_ctor_release(x_487, 1);
 x_489 = x_487;
} else {
 lean_dec_ref(x_487);
 x_489 = lean_box(0);
}
x_490 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_491 = lean_array_push(x_490, x_382);
x_492 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_493 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_493, 0, x_492);
lean_ctor_set(x_493, 1, x_491);
x_494 = l_Array_empty___closed__1;
x_495 = lean_array_push(x_494, x_493);
x_496 = l_Lean_nullKind___closed__2;
x_497 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_497, 0, x_496);
lean_ctor_set(x_497, 1, x_495);
x_498 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_499 = lean_array_push(x_498, x_497);
x_500 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_501 = lean_array_push(x_499, x_500);
x_502 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_503 = lean_array_push(x_501, x_502);
x_504 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_505 = lean_array_push(x_503, x_504);
lean_inc(x_14);
x_506 = lean_array_push(x_494, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_507 = x_14;
} else {
 lean_dec_ref(x_14);
 x_507 = lean_box(0);
}
if (lean_is_scalar(x_507)) {
 x_508 = lean_alloc_ctor(1, 2, 0);
} else {
 x_508 = x_507;
}
lean_ctor_set(x_508, 0, x_496);
lean_ctor_set(x_508, 1, x_506);
x_509 = lean_array_push(x_494, x_508);
x_510 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_511 = lean_array_push(x_509, x_510);
x_512 = lean_array_push(x_511, x_484);
x_513 = l_Lean_Parser_Term_matchAlt___closed__2;
x_514 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_514, 0, x_513);
lean_ctor_set(x_514, 1, x_512);
x_515 = lean_array_push(x_494, x_514);
x_516 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_516, 0, x_496);
lean_ctor_set(x_516, 1, x_515);
x_517 = lean_array_push(x_505, x_516);
x_518 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_519, 0, x_518);
lean_ctor_set(x_519, 1, x_517);
x_520 = 1;
x_521 = lean_box(x_520);
x_522 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_522, 0, x_519);
lean_ctor_set(x_522, 1, x_521);
lean_ctor_set(x_390, 1, x_522);
if (lean_is_scalar(x_489)) {
 x_523 = lean_alloc_ctor(0, 2, 0);
} else {
 x_523 = x_489;
}
lean_ctor_set(x_523, 0, x_390);
lean_ctor_set(x_523, 1, x_488);
return x_523;
}
}
else
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; uint8_t x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; 
x_524 = lean_ctor_get(x_390, 0);
lean_inc(x_524);
lean_dec(x_390);
x_525 = lean_ctor_get(x_391, 0);
lean_inc(x_525);
if (lean_is_exclusive(x_391)) {
 lean_ctor_release(x_391, 0);
 lean_ctor_release(x_391, 1);
 x_526 = x_391;
} else {
 lean_dec_ref(x_391);
 x_526 = lean_box(0);
}
x_527 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_392);
x_528 = lean_ctor_get(x_527, 1);
lean_inc(x_528);
lean_dec(x_527);
x_529 = l_Lean_Elab_Term_getMainModule___rarg(x_528);
x_530 = lean_ctor_get(x_529, 1);
lean_inc(x_530);
if (lean_is_exclusive(x_529)) {
 lean_ctor_release(x_529, 0);
 lean_ctor_release(x_529, 1);
 x_531 = x_529;
} else {
 lean_dec_ref(x_529);
 x_531 = lean_box(0);
}
x_532 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_533 = lean_array_push(x_532, x_382);
x_534 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_535 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_535, 0, x_534);
lean_ctor_set(x_535, 1, x_533);
x_536 = l_Array_empty___closed__1;
x_537 = lean_array_push(x_536, x_535);
x_538 = l_Lean_nullKind___closed__2;
x_539 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_539, 0, x_538);
lean_ctor_set(x_539, 1, x_537);
x_540 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_541 = lean_array_push(x_540, x_539);
x_542 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_543 = lean_array_push(x_541, x_542);
x_544 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_545 = lean_array_push(x_543, x_544);
x_546 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_547 = lean_array_push(x_545, x_546);
lean_inc(x_14);
x_548 = lean_array_push(x_536, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_549 = x_14;
} else {
 lean_dec_ref(x_14);
 x_549 = lean_box(0);
}
if (lean_is_scalar(x_549)) {
 x_550 = lean_alloc_ctor(1, 2, 0);
} else {
 x_550 = x_549;
}
lean_ctor_set(x_550, 0, x_538);
lean_ctor_set(x_550, 1, x_548);
x_551 = lean_array_push(x_536, x_550);
x_552 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_553 = lean_array_push(x_551, x_552);
x_554 = lean_array_push(x_553, x_525);
x_555 = l_Lean_Parser_Term_matchAlt___closed__2;
x_556 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_556, 0, x_555);
lean_ctor_set(x_556, 1, x_554);
x_557 = lean_array_push(x_536, x_556);
x_558 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_558, 0, x_538);
lean_ctor_set(x_558, 1, x_557);
x_559 = lean_array_push(x_547, x_558);
x_560 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_561 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_561, 0, x_560);
lean_ctor_set(x_561, 1, x_559);
x_562 = 1;
x_563 = lean_box(x_562);
if (lean_is_scalar(x_526)) {
 x_564 = lean_alloc_ctor(0, 2, 0);
} else {
 x_564 = x_526;
}
lean_ctor_set(x_564, 0, x_561);
lean_ctor_set(x_564, 1, x_563);
x_565 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_565, 0, x_524);
lean_ctor_set(x_565, 1, x_564);
if (lean_is_scalar(x_531)) {
 x_566 = lean_alloc_ctor(0, 2, 0);
} else {
 x_566 = x_531;
}
lean_ctor_set(x_566, 0, x_565);
lean_ctor_set(x_566, 1, x_530);
return x_566;
}
}
else
{
lean_object* x_567; uint8_t x_568; 
x_567 = l_Lean_mkAppStx___closed__5;
x_568 = lean_string_dec_eq(x_188, x_567);
lean_dec(x_188);
if (x_568 == 0)
{
lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; uint8_t x_581; 
lean_dec(x_187);
x_569 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_570 = lean_ctor_get(x_569, 0);
lean_inc(x_570);
x_571 = lean_ctor_get(x_569, 1);
lean_inc(x_571);
lean_dec(x_569);
x_572 = lean_unsigned_to_nat(1u);
x_573 = lean_nat_add(x_3, x_572);
lean_dec(x_3);
x_574 = l_Lean_mkHole(x_14);
lean_inc(x_570);
x_575 = l_Lean_Elab_Term_mkExplicitBinder(x_570, x_574);
x_576 = lean_array_push(x_4, x_575);
x_577 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_573, x_576, x_5, x_571);
x_578 = lean_ctor_get(x_577, 0);
lean_inc(x_578);
x_579 = lean_ctor_get(x_578, 1);
lean_inc(x_579);
x_580 = lean_ctor_get(x_577, 1);
lean_inc(x_580);
lean_dec(x_577);
x_581 = !lean_is_exclusive(x_578);
if (x_581 == 0)
{
lean_object* x_582; uint8_t x_583; 
x_582 = lean_ctor_get(x_578, 1);
lean_dec(x_582);
x_583 = !lean_is_exclusive(x_579);
if (x_583 == 0)
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; uint8_t x_589; 
x_584 = lean_ctor_get(x_579, 0);
x_585 = lean_ctor_get(x_579, 1);
lean_dec(x_585);
x_586 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_580);
x_587 = lean_ctor_get(x_586, 1);
lean_inc(x_587);
lean_dec(x_586);
x_588 = l_Lean_Elab_Term_getMainModule___rarg(x_587);
x_589 = !lean_is_exclusive(x_588);
if (x_589 == 0)
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; uint8_t x_608; 
x_590 = lean_ctor_get(x_588, 0);
lean_dec(x_590);
x_591 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_592 = lean_array_push(x_591, x_570);
x_593 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_594, 0, x_593);
lean_ctor_set(x_594, 1, x_592);
x_595 = l_Array_empty___closed__1;
x_596 = lean_array_push(x_595, x_594);
x_597 = l_Lean_nullKind___closed__2;
x_598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_598, 0, x_597);
lean_ctor_set(x_598, 1, x_596);
x_599 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_600 = lean_array_push(x_599, x_598);
x_601 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_602 = lean_array_push(x_600, x_601);
x_603 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_604 = lean_array_push(x_602, x_603);
x_605 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_606 = lean_array_push(x_604, x_605);
lean_inc(x_14);
x_607 = lean_array_push(x_595, x_14);
x_608 = !lean_is_exclusive(x_14);
if (x_608 == 0)
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; uint8_t x_622; lean_object* x_623; 
x_609 = lean_ctor_get(x_14, 1);
lean_dec(x_609);
x_610 = lean_ctor_get(x_14, 0);
lean_dec(x_610);
lean_ctor_set(x_14, 1, x_607);
lean_ctor_set(x_14, 0, x_597);
x_611 = lean_array_push(x_595, x_14);
x_612 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_613 = lean_array_push(x_611, x_612);
x_614 = lean_array_push(x_613, x_584);
x_615 = l_Lean_Parser_Term_matchAlt___closed__2;
x_616 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_616, 0, x_615);
lean_ctor_set(x_616, 1, x_614);
x_617 = lean_array_push(x_595, x_616);
x_618 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_618, 0, x_597);
lean_ctor_set(x_618, 1, x_617);
x_619 = lean_array_push(x_606, x_618);
x_620 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_621 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_621, 0, x_620);
lean_ctor_set(x_621, 1, x_619);
x_622 = 1;
x_623 = lean_box(x_622);
lean_ctor_set(x_579, 1, x_623);
lean_ctor_set(x_579, 0, x_621);
lean_ctor_set(x_588, 0, x_578);
return x_588;
}
else
{
lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; uint8_t x_636; lean_object* x_637; 
lean_dec(x_14);
x_624 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_624, 0, x_597);
lean_ctor_set(x_624, 1, x_607);
x_625 = lean_array_push(x_595, x_624);
x_626 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_627 = lean_array_push(x_625, x_626);
x_628 = lean_array_push(x_627, x_584);
x_629 = l_Lean_Parser_Term_matchAlt___closed__2;
x_630 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_630, 0, x_629);
lean_ctor_set(x_630, 1, x_628);
x_631 = lean_array_push(x_595, x_630);
x_632 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_632, 0, x_597);
lean_ctor_set(x_632, 1, x_631);
x_633 = lean_array_push(x_606, x_632);
x_634 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_635 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_635, 0, x_634);
lean_ctor_set(x_635, 1, x_633);
x_636 = 1;
x_637 = lean_box(x_636);
lean_ctor_set(x_579, 1, x_637);
lean_ctor_set(x_579, 0, x_635);
lean_ctor_set(x_588, 0, x_578);
return x_588;
}
}
else
{
lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; uint8_t x_669; lean_object* x_670; lean_object* x_671; 
x_638 = lean_ctor_get(x_588, 1);
lean_inc(x_638);
lean_dec(x_588);
x_639 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_640 = lean_array_push(x_639, x_570);
x_641 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_642 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_642, 0, x_641);
lean_ctor_set(x_642, 1, x_640);
x_643 = l_Array_empty___closed__1;
x_644 = lean_array_push(x_643, x_642);
x_645 = l_Lean_nullKind___closed__2;
x_646 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_646, 0, x_645);
lean_ctor_set(x_646, 1, x_644);
x_647 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_648 = lean_array_push(x_647, x_646);
x_649 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_650 = lean_array_push(x_648, x_649);
x_651 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_652 = lean_array_push(x_650, x_651);
x_653 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_654 = lean_array_push(x_652, x_653);
lean_inc(x_14);
x_655 = lean_array_push(x_643, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_656 = x_14;
} else {
 lean_dec_ref(x_14);
 x_656 = lean_box(0);
}
if (lean_is_scalar(x_656)) {
 x_657 = lean_alloc_ctor(1, 2, 0);
} else {
 x_657 = x_656;
}
lean_ctor_set(x_657, 0, x_645);
lean_ctor_set(x_657, 1, x_655);
x_658 = lean_array_push(x_643, x_657);
x_659 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_660 = lean_array_push(x_658, x_659);
x_661 = lean_array_push(x_660, x_584);
x_662 = l_Lean_Parser_Term_matchAlt___closed__2;
x_663 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_663, 0, x_662);
lean_ctor_set(x_663, 1, x_661);
x_664 = lean_array_push(x_643, x_663);
x_665 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_665, 0, x_645);
lean_ctor_set(x_665, 1, x_664);
x_666 = lean_array_push(x_654, x_665);
x_667 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_668 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_668, 0, x_667);
lean_ctor_set(x_668, 1, x_666);
x_669 = 1;
x_670 = lean_box(x_669);
lean_ctor_set(x_579, 1, x_670);
lean_ctor_set(x_579, 0, x_668);
x_671 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_671, 0, x_578);
lean_ctor_set(x_671, 1, x_638);
return x_671;
}
}
else
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; uint8_t x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
x_672 = lean_ctor_get(x_579, 0);
lean_inc(x_672);
lean_dec(x_579);
x_673 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_580);
x_674 = lean_ctor_get(x_673, 1);
lean_inc(x_674);
lean_dec(x_673);
x_675 = l_Lean_Elab_Term_getMainModule___rarg(x_674);
x_676 = lean_ctor_get(x_675, 1);
lean_inc(x_676);
if (lean_is_exclusive(x_675)) {
 lean_ctor_release(x_675, 0);
 lean_ctor_release(x_675, 1);
 x_677 = x_675;
} else {
 lean_dec_ref(x_675);
 x_677 = lean_box(0);
}
x_678 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_679 = lean_array_push(x_678, x_570);
x_680 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_681 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_681, 0, x_680);
lean_ctor_set(x_681, 1, x_679);
x_682 = l_Array_empty___closed__1;
x_683 = lean_array_push(x_682, x_681);
x_684 = l_Lean_nullKind___closed__2;
x_685 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_685, 0, x_684);
lean_ctor_set(x_685, 1, x_683);
x_686 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_687 = lean_array_push(x_686, x_685);
x_688 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_689 = lean_array_push(x_687, x_688);
x_690 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_691 = lean_array_push(x_689, x_690);
x_692 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_693 = lean_array_push(x_691, x_692);
lean_inc(x_14);
x_694 = lean_array_push(x_682, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_695 = x_14;
} else {
 lean_dec_ref(x_14);
 x_695 = lean_box(0);
}
if (lean_is_scalar(x_695)) {
 x_696 = lean_alloc_ctor(1, 2, 0);
} else {
 x_696 = x_695;
}
lean_ctor_set(x_696, 0, x_684);
lean_ctor_set(x_696, 1, x_694);
x_697 = lean_array_push(x_682, x_696);
x_698 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_699 = lean_array_push(x_697, x_698);
x_700 = lean_array_push(x_699, x_672);
x_701 = l_Lean_Parser_Term_matchAlt___closed__2;
x_702 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_702, 0, x_701);
lean_ctor_set(x_702, 1, x_700);
x_703 = lean_array_push(x_682, x_702);
x_704 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_704, 0, x_684);
lean_ctor_set(x_704, 1, x_703);
x_705 = lean_array_push(x_693, x_704);
x_706 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_707 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_707, 0, x_706);
lean_ctor_set(x_707, 1, x_705);
x_708 = 1;
x_709 = lean_box(x_708);
x_710 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_710, 0, x_707);
lean_ctor_set(x_710, 1, x_709);
lean_ctor_set(x_578, 1, x_710);
if (lean_is_scalar(x_677)) {
 x_711 = lean_alloc_ctor(0, 2, 0);
} else {
 x_711 = x_677;
}
lean_ctor_set(x_711, 0, x_578);
lean_ctor_set(x_711, 1, x_676);
return x_711;
}
}
else
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; uint8_t x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; 
x_712 = lean_ctor_get(x_578, 0);
lean_inc(x_712);
lean_dec(x_578);
x_713 = lean_ctor_get(x_579, 0);
lean_inc(x_713);
if (lean_is_exclusive(x_579)) {
 lean_ctor_release(x_579, 0);
 lean_ctor_release(x_579, 1);
 x_714 = x_579;
} else {
 lean_dec_ref(x_579);
 x_714 = lean_box(0);
}
x_715 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_580);
x_716 = lean_ctor_get(x_715, 1);
lean_inc(x_716);
lean_dec(x_715);
x_717 = l_Lean_Elab_Term_getMainModule___rarg(x_716);
x_718 = lean_ctor_get(x_717, 1);
lean_inc(x_718);
if (lean_is_exclusive(x_717)) {
 lean_ctor_release(x_717, 0);
 lean_ctor_release(x_717, 1);
 x_719 = x_717;
} else {
 lean_dec_ref(x_717);
 x_719 = lean_box(0);
}
x_720 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_721 = lean_array_push(x_720, x_570);
x_722 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_723 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_723, 0, x_722);
lean_ctor_set(x_723, 1, x_721);
x_724 = l_Array_empty___closed__1;
x_725 = lean_array_push(x_724, x_723);
x_726 = l_Lean_nullKind___closed__2;
x_727 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_727, 0, x_726);
lean_ctor_set(x_727, 1, x_725);
x_728 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_729 = lean_array_push(x_728, x_727);
x_730 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_731 = lean_array_push(x_729, x_730);
x_732 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_733 = lean_array_push(x_731, x_732);
x_734 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_735 = lean_array_push(x_733, x_734);
lean_inc(x_14);
x_736 = lean_array_push(x_724, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_737 = x_14;
} else {
 lean_dec_ref(x_14);
 x_737 = lean_box(0);
}
if (lean_is_scalar(x_737)) {
 x_738 = lean_alloc_ctor(1, 2, 0);
} else {
 x_738 = x_737;
}
lean_ctor_set(x_738, 0, x_726);
lean_ctor_set(x_738, 1, x_736);
x_739 = lean_array_push(x_724, x_738);
x_740 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_741 = lean_array_push(x_739, x_740);
x_742 = lean_array_push(x_741, x_713);
x_743 = l_Lean_Parser_Term_matchAlt___closed__2;
x_744 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_744, 0, x_743);
lean_ctor_set(x_744, 1, x_742);
x_745 = lean_array_push(x_724, x_744);
x_746 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_746, 0, x_726);
lean_ctor_set(x_746, 1, x_745);
x_747 = lean_array_push(x_735, x_746);
x_748 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_749 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_749, 0, x_748);
lean_ctor_set(x_749, 1, x_747);
x_750 = 1;
x_751 = lean_box(x_750);
if (lean_is_scalar(x_714)) {
 x_752 = lean_alloc_ctor(0, 2, 0);
} else {
 x_752 = x_714;
}
lean_ctor_set(x_752, 0, x_749);
lean_ctor_set(x_752, 1, x_751);
x_753 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_753, 0, x_712);
lean_ctor_set(x_753, 1, x_752);
if (lean_is_scalar(x_719)) {
 x_754 = lean_alloc_ctor(0, 2, 0);
} else {
 x_754 = x_719;
}
lean_ctor_set(x_754, 0, x_753);
lean_ctor_set(x_754, 1, x_718);
return x_754;
}
}
else
{
lean_object* x_755; uint8_t x_756; 
x_755 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_756 = lean_string_dec_eq(x_187, x_755);
if (x_756 == 0)
{
lean_object* x_757; uint8_t x_758; 
x_757 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_758 = lean_string_dec_eq(x_187, x_757);
if (x_758 == 0)
{
lean_object* x_759; uint8_t x_760; 
x_759 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_760 = lean_string_dec_eq(x_187, x_759);
if (x_760 == 0)
{
lean_object* x_761; uint8_t x_762; 
x_761 = l_Lean_mkHole___closed__1;
x_762 = lean_string_dec_eq(x_187, x_761);
if (x_762 == 0)
{
lean_object* x_763; uint8_t x_764; 
x_763 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__1;
x_764 = lean_string_dec_eq(x_187, x_763);
lean_dec(x_187);
if (x_764 == 0)
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; uint8_t x_777; 
x_765 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_766 = lean_ctor_get(x_765, 0);
lean_inc(x_766);
x_767 = lean_ctor_get(x_765, 1);
lean_inc(x_767);
lean_dec(x_765);
x_768 = lean_unsigned_to_nat(1u);
x_769 = lean_nat_add(x_3, x_768);
lean_dec(x_3);
x_770 = l_Lean_mkHole(x_14);
lean_inc(x_766);
x_771 = l_Lean_Elab_Term_mkExplicitBinder(x_766, x_770);
x_772 = lean_array_push(x_4, x_771);
x_773 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_769, x_772, x_5, x_767);
x_774 = lean_ctor_get(x_773, 0);
lean_inc(x_774);
x_775 = lean_ctor_get(x_774, 1);
lean_inc(x_775);
x_776 = lean_ctor_get(x_773, 1);
lean_inc(x_776);
lean_dec(x_773);
x_777 = !lean_is_exclusive(x_774);
if (x_777 == 0)
{
lean_object* x_778; uint8_t x_779; 
x_778 = lean_ctor_get(x_774, 1);
lean_dec(x_778);
x_779 = !lean_is_exclusive(x_775);
if (x_779 == 0)
{
lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; uint8_t x_785; 
x_780 = lean_ctor_get(x_775, 0);
x_781 = lean_ctor_get(x_775, 1);
lean_dec(x_781);
x_782 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_776);
x_783 = lean_ctor_get(x_782, 1);
lean_inc(x_783);
lean_dec(x_782);
x_784 = l_Lean_Elab_Term_getMainModule___rarg(x_783);
x_785 = !lean_is_exclusive(x_784);
if (x_785 == 0)
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; uint8_t x_804; 
x_786 = lean_ctor_get(x_784, 0);
lean_dec(x_786);
x_787 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_788 = lean_array_push(x_787, x_766);
x_789 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_790 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_790, 0, x_789);
lean_ctor_set(x_790, 1, x_788);
x_791 = l_Array_empty___closed__1;
x_792 = lean_array_push(x_791, x_790);
x_793 = l_Lean_nullKind___closed__2;
x_794 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_794, 0, x_793);
lean_ctor_set(x_794, 1, x_792);
x_795 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_796 = lean_array_push(x_795, x_794);
x_797 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_798 = lean_array_push(x_796, x_797);
x_799 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_800 = lean_array_push(x_798, x_799);
x_801 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_802 = lean_array_push(x_800, x_801);
lean_inc(x_14);
x_803 = lean_array_push(x_791, x_14);
x_804 = !lean_is_exclusive(x_14);
if (x_804 == 0)
{
lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; uint8_t x_818; lean_object* x_819; 
x_805 = lean_ctor_get(x_14, 1);
lean_dec(x_805);
x_806 = lean_ctor_get(x_14, 0);
lean_dec(x_806);
lean_ctor_set(x_14, 1, x_803);
lean_ctor_set(x_14, 0, x_793);
x_807 = lean_array_push(x_791, x_14);
x_808 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_809 = lean_array_push(x_807, x_808);
x_810 = lean_array_push(x_809, x_780);
x_811 = l_Lean_Parser_Term_matchAlt___closed__2;
x_812 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_812, 0, x_811);
lean_ctor_set(x_812, 1, x_810);
x_813 = lean_array_push(x_791, x_812);
x_814 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_814, 0, x_793);
lean_ctor_set(x_814, 1, x_813);
x_815 = lean_array_push(x_802, x_814);
x_816 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_817 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_817, 0, x_816);
lean_ctor_set(x_817, 1, x_815);
x_818 = 1;
x_819 = lean_box(x_818);
lean_ctor_set(x_775, 1, x_819);
lean_ctor_set(x_775, 0, x_817);
lean_ctor_set(x_784, 0, x_774);
return x_784;
}
else
{
lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; uint8_t x_832; lean_object* x_833; 
lean_dec(x_14);
x_820 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_820, 0, x_793);
lean_ctor_set(x_820, 1, x_803);
x_821 = lean_array_push(x_791, x_820);
x_822 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_823 = lean_array_push(x_821, x_822);
x_824 = lean_array_push(x_823, x_780);
x_825 = l_Lean_Parser_Term_matchAlt___closed__2;
x_826 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_826, 0, x_825);
lean_ctor_set(x_826, 1, x_824);
x_827 = lean_array_push(x_791, x_826);
x_828 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_828, 0, x_793);
lean_ctor_set(x_828, 1, x_827);
x_829 = lean_array_push(x_802, x_828);
x_830 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_831 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_831, 0, x_830);
lean_ctor_set(x_831, 1, x_829);
x_832 = 1;
x_833 = lean_box(x_832);
lean_ctor_set(x_775, 1, x_833);
lean_ctor_set(x_775, 0, x_831);
lean_ctor_set(x_784, 0, x_774);
return x_784;
}
}
else
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; uint8_t x_865; lean_object* x_866; lean_object* x_867; 
x_834 = lean_ctor_get(x_784, 1);
lean_inc(x_834);
lean_dec(x_784);
x_835 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_836 = lean_array_push(x_835, x_766);
x_837 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_838 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_838, 0, x_837);
lean_ctor_set(x_838, 1, x_836);
x_839 = l_Array_empty___closed__1;
x_840 = lean_array_push(x_839, x_838);
x_841 = l_Lean_nullKind___closed__2;
x_842 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_842, 0, x_841);
lean_ctor_set(x_842, 1, x_840);
x_843 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_844 = lean_array_push(x_843, x_842);
x_845 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_846 = lean_array_push(x_844, x_845);
x_847 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_848 = lean_array_push(x_846, x_847);
x_849 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_850 = lean_array_push(x_848, x_849);
lean_inc(x_14);
x_851 = lean_array_push(x_839, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_852 = x_14;
} else {
 lean_dec_ref(x_14);
 x_852 = lean_box(0);
}
if (lean_is_scalar(x_852)) {
 x_853 = lean_alloc_ctor(1, 2, 0);
} else {
 x_853 = x_852;
}
lean_ctor_set(x_853, 0, x_841);
lean_ctor_set(x_853, 1, x_851);
x_854 = lean_array_push(x_839, x_853);
x_855 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_856 = lean_array_push(x_854, x_855);
x_857 = lean_array_push(x_856, x_780);
x_858 = l_Lean_Parser_Term_matchAlt___closed__2;
x_859 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_859, 0, x_858);
lean_ctor_set(x_859, 1, x_857);
x_860 = lean_array_push(x_839, x_859);
x_861 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_861, 0, x_841);
lean_ctor_set(x_861, 1, x_860);
x_862 = lean_array_push(x_850, x_861);
x_863 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_864 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_864, 0, x_863);
lean_ctor_set(x_864, 1, x_862);
x_865 = 1;
x_866 = lean_box(x_865);
lean_ctor_set(x_775, 1, x_866);
lean_ctor_set(x_775, 0, x_864);
x_867 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_867, 0, x_774);
lean_ctor_set(x_867, 1, x_834);
return x_867;
}
}
else
{
lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; uint8_t x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; 
x_868 = lean_ctor_get(x_775, 0);
lean_inc(x_868);
lean_dec(x_775);
x_869 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_776);
x_870 = lean_ctor_get(x_869, 1);
lean_inc(x_870);
lean_dec(x_869);
x_871 = l_Lean_Elab_Term_getMainModule___rarg(x_870);
x_872 = lean_ctor_get(x_871, 1);
lean_inc(x_872);
if (lean_is_exclusive(x_871)) {
 lean_ctor_release(x_871, 0);
 lean_ctor_release(x_871, 1);
 x_873 = x_871;
} else {
 lean_dec_ref(x_871);
 x_873 = lean_box(0);
}
x_874 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_875 = lean_array_push(x_874, x_766);
x_876 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_877 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_877, 0, x_876);
lean_ctor_set(x_877, 1, x_875);
x_878 = l_Array_empty___closed__1;
x_879 = lean_array_push(x_878, x_877);
x_880 = l_Lean_nullKind___closed__2;
x_881 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_881, 0, x_880);
lean_ctor_set(x_881, 1, x_879);
x_882 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_883 = lean_array_push(x_882, x_881);
x_884 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_885 = lean_array_push(x_883, x_884);
x_886 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_887 = lean_array_push(x_885, x_886);
x_888 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_889 = lean_array_push(x_887, x_888);
lean_inc(x_14);
x_890 = lean_array_push(x_878, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_891 = x_14;
} else {
 lean_dec_ref(x_14);
 x_891 = lean_box(0);
}
if (lean_is_scalar(x_891)) {
 x_892 = lean_alloc_ctor(1, 2, 0);
} else {
 x_892 = x_891;
}
lean_ctor_set(x_892, 0, x_880);
lean_ctor_set(x_892, 1, x_890);
x_893 = lean_array_push(x_878, x_892);
x_894 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_895 = lean_array_push(x_893, x_894);
x_896 = lean_array_push(x_895, x_868);
x_897 = l_Lean_Parser_Term_matchAlt___closed__2;
x_898 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_898, 0, x_897);
lean_ctor_set(x_898, 1, x_896);
x_899 = lean_array_push(x_878, x_898);
x_900 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_900, 0, x_880);
lean_ctor_set(x_900, 1, x_899);
x_901 = lean_array_push(x_889, x_900);
x_902 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_903 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_903, 0, x_902);
lean_ctor_set(x_903, 1, x_901);
x_904 = 1;
x_905 = lean_box(x_904);
x_906 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_906, 0, x_903);
lean_ctor_set(x_906, 1, x_905);
lean_ctor_set(x_774, 1, x_906);
if (lean_is_scalar(x_873)) {
 x_907 = lean_alloc_ctor(0, 2, 0);
} else {
 x_907 = x_873;
}
lean_ctor_set(x_907, 0, x_774);
lean_ctor_set(x_907, 1, x_872);
return x_907;
}
}
else
{
lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; uint8_t x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; 
x_908 = lean_ctor_get(x_774, 0);
lean_inc(x_908);
lean_dec(x_774);
x_909 = lean_ctor_get(x_775, 0);
lean_inc(x_909);
if (lean_is_exclusive(x_775)) {
 lean_ctor_release(x_775, 0);
 lean_ctor_release(x_775, 1);
 x_910 = x_775;
} else {
 lean_dec_ref(x_775);
 x_910 = lean_box(0);
}
x_911 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_776);
x_912 = lean_ctor_get(x_911, 1);
lean_inc(x_912);
lean_dec(x_911);
x_913 = l_Lean_Elab_Term_getMainModule___rarg(x_912);
x_914 = lean_ctor_get(x_913, 1);
lean_inc(x_914);
if (lean_is_exclusive(x_913)) {
 lean_ctor_release(x_913, 0);
 lean_ctor_release(x_913, 1);
 x_915 = x_913;
} else {
 lean_dec_ref(x_913);
 x_915 = lean_box(0);
}
x_916 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_917 = lean_array_push(x_916, x_766);
x_918 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_919 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_919, 0, x_918);
lean_ctor_set(x_919, 1, x_917);
x_920 = l_Array_empty___closed__1;
x_921 = lean_array_push(x_920, x_919);
x_922 = l_Lean_nullKind___closed__2;
x_923 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_923, 0, x_922);
lean_ctor_set(x_923, 1, x_921);
x_924 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_925 = lean_array_push(x_924, x_923);
x_926 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_927 = lean_array_push(x_925, x_926);
x_928 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_929 = lean_array_push(x_927, x_928);
x_930 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_931 = lean_array_push(x_929, x_930);
lean_inc(x_14);
x_932 = lean_array_push(x_920, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_933 = x_14;
} else {
 lean_dec_ref(x_14);
 x_933 = lean_box(0);
}
if (lean_is_scalar(x_933)) {
 x_934 = lean_alloc_ctor(1, 2, 0);
} else {
 x_934 = x_933;
}
lean_ctor_set(x_934, 0, x_922);
lean_ctor_set(x_934, 1, x_932);
x_935 = lean_array_push(x_920, x_934);
x_936 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_937 = lean_array_push(x_935, x_936);
x_938 = lean_array_push(x_937, x_909);
x_939 = l_Lean_Parser_Term_matchAlt___closed__2;
x_940 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_940, 0, x_939);
lean_ctor_set(x_940, 1, x_938);
x_941 = lean_array_push(x_920, x_940);
x_942 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_942, 0, x_922);
lean_ctor_set(x_942, 1, x_941);
x_943 = lean_array_push(x_931, x_942);
x_944 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_945 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_945, 0, x_944);
lean_ctor_set(x_945, 1, x_943);
x_946 = 1;
x_947 = lean_box(x_946);
if (lean_is_scalar(x_910)) {
 x_948 = lean_alloc_ctor(0, 2, 0);
} else {
 x_948 = x_910;
}
lean_ctor_set(x_948, 0, x_945);
lean_ctor_set(x_948, 1, x_947);
x_949 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_949, 0, x_908);
lean_ctor_set(x_949, 1, x_948);
if (lean_is_scalar(x_915)) {
 x_950 = lean_alloc_ctor(0, 2, 0);
} else {
 x_950 = x_915;
}
lean_ctor_set(x_950, 0, x_949);
lean_ctor_set(x_950, 1, x_914);
return x_950;
}
}
else
{
lean_object* x_951; lean_object* x_952; uint8_t x_953; 
x_951 = lean_unsigned_to_nat(1u);
x_952 = l_Lean_Syntax_getArg(x_14, x_951);
x_953 = l_Lean_Syntax_isNone(x_952);
if (x_953 == 0)
{
lean_object* x_954; lean_object* x_955; lean_object* x_956; uint8_t x_957; 
x_954 = lean_unsigned_to_nat(0u);
x_955 = l_Lean_Syntax_getArg(x_952, x_954);
x_956 = l_Lean_Syntax_getArg(x_952, x_951);
lean_dec(x_952);
x_957 = l_Lean_Syntax_isNone(x_956);
if (x_957 == 0)
{
lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; uint8_t x_965; 
x_958 = l_Lean_Syntax_getArg(x_956, x_954);
lean_dec(x_956);
lean_inc(x_958);
x_959 = l_Lean_Syntax_getKind(x_958);
x_960 = lean_name_mk_string(x_186, x_191);
x_961 = lean_name_mk_string(x_960, x_379);
x_962 = lean_name_mk_string(x_961, x_567);
x_963 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__1;
x_964 = lean_name_mk_string(x_962, x_963);
x_965 = lean_name_eq(x_959, x_964);
lean_dec(x_964);
lean_dec(x_959);
if (x_965 == 0)
{
lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; uint8_t x_977; 
lean_dec(x_958);
lean_dec(x_955);
x_966 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_967 = lean_ctor_get(x_966, 0);
lean_inc(x_967);
x_968 = lean_ctor_get(x_966, 1);
lean_inc(x_968);
lean_dec(x_966);
x_969 = lean_nat_add(x_3, x_951);
lean_dec(x_3);
x_970 = l_Lean_mkHole(x_14);
lean_inc(x_967);
x_971 = l_Lean_Elab_Term_mkExplicitBinder(x_967, x_970);
x_972 = lean_array_push(x_4, x_971);
x_973 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_969, x_972, x_5, x_968);
x_974 = lean_ctor_get(x_973, 0);
lean_inc(x_974);
x_975 = lean_ctor_get(x_974, 1);
lean_inc(x_975);
x_976 = lean_ctor_get(x_973, 1);
lean_inc(x_976);
lean_dec(x_973);
x_977 = !lean_is_exclusive(x_974);
if (x_977 == 0)
{
lean_object* x_978; uint8_t x_979; 
x_978 = lean_ctor_get(x_974, 1);
lean_dec(x_978);
x_979 = !lean_is_exclusive(x_975);
if (x_979 == 0)
{
lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; uint8_t x_985; 
x_980 = lean_ctor_get(x_975, 0);
x_981 = lean_ctor_get(x_975, 1);
lean_dec(x_981);
x_982 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_976);
x_983 = lean_ctor_get(x_982, 1);
lean_inc(x_983);
lean_dec(x_982);
x_984 = l_Lean_Elab_Term_getMainModule___rarg(x_983);
x_985 = !lean_is_exclusive(x_984);
if (x_985 == 0)
{
lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; uint8_t x_1004; 
x_986 = lean_ctor_get(x_984, 0);
lean_dec(x_986);
x_987 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_988 = lean_array_push(x_987, x_967);
x_989 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_990 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_990, 0, x_989);
lean_ctor_set(x_990, 1, x_988);
x_991 = l_Array_empty___closed__1;
x_992 = lean_array_push(x_991, x_990);
x_993 = l_Lean_nullKind___closed__2;
x_994 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_994, 0, x_993);
lean_ctor_set(x_994, 1, x_992);
x_995 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_996 = lean_array_push(x_995, x_994);
x_997 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_998 = lean_array_push(x_996, x_997);
x_999 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1000 = lean_array_push(x_998, x_999);
x_1001 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1002 = lean_array_push(x_1000, x_1001);
lean_inc(x_14);
x_1003 = lean_array_push(x_991, x_14);
x_1004 = !lean_is_exclusive(x_14);
if (x_1004 == 0)
{
lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; uint8_t x_1018; lean_object* x_1019; 
x_1005 = lean_ctor_get(x_14, 1);
lean_dec(x_1005);
x_1006 = lean_ctor_get(x_14, 0);
lean_dec(x_1006);
lean_ctor_set(x_14, 1, x_1003);
lean_ctor_set(x_14, 0, x_993);
x_1007 = lean_array_push(x_991, x_14);
x_1008 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1009 = lean_array_push(x_1007, x_1008);
x_1010 = lean_array_push(x_1009, x_980);
x_1011 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1012 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1012, 0, x_1011);
lean_ctor_set(x_1012, 1, x_1010);
x_1013 = lean_array_push(x_991, x_1012);
x_1014 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1014, 0, x_993);
lean_ctor_set(x_1014, 1, x_1013);
x_1015 = lean_array_push(x_1002, x_1014);
x_1016 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1017 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1017, 0, x_1016);
lean_ctor_set(x_1017, 1, x_1015);
x_1018 = 1;
x_1019 = lean_box(x_1018);
lean_ctor_set(x_975, 1, x_1019);
lean_ctor_set(x_975, 0, x_1017);
lean_ctor_set(x_984, 0, x_974);
return x_984;
}
else
{
lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; uint8_t x_1032; lean_object* x_1033; 
lean_dec(x_14);
x_1020 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1020, 0, x_993);
lean_ctor_set(x_1020, 1, x_1003);
x_1021 = lean_array_push(x_991, x_1020);
x_1022 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1023 = lean_array_push(x_1021, x_1022);
x_1024 = lean_array_push(x_1023, x_980);
x_1025 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1026 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1026, 0, x_1025);
lean_ctor_set(x_1026, 1, x_1024);
x_1027 = lean_array_push(x_991, x_1026);
x_1028 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1028, 0, x_993);
lean_ctor_set(x_1028, 1, x_1027);
x_1029 = lean_array_push(x_1002, x_1028);
x_1030 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1031 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1031, 0, x_1030);
lean_ctor_set(x_1031, 1, x_1029);
x_1032 = 1;
x_1033 = lean_box(x_1032);
lean_ctor_set(x_975, 1, x_1033);
lean_ctor_set(x_975, 0, x_1031);
lean_ctor_set(x_984, 0, x_974);
return x_984;
}
}
else
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; uint8_t x_1065; lean_object* x_1066; lean_object* x_1067; 
x_1034 = lean_ctor_get(x_984, 1);
lean_inc(x_1034);
lean_dec(x_984);
x_1035 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1036 = lean_array_push(x_1035, x_967);
x_1037 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1038 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1038, 0, x_1037);
lean_ctor_set(x_1038, 1, x_1036);
x_1039 = l_Array_empty___closed__1;
x_1040 = lean_array_push(x_1039, x_1038);
x_1041 = l_Lean_nullKind___closed__2;
x_1042 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1042, 0, x_1041);
lean_ctor_set(x_1042, 1, x_1040);
x_1043 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1044 = lean_array_push(x_1043, x_1042);
x_1045 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1046 = lean_array_push(x_1044, x_1045);
x_1047 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1048 = lean_array_push(x_1046, x_1047);
x_1049 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1050 = lean_array_push(x_1048, x_1049);
lean_inc(x_14);
x_1051 = lean_array_push(x_1039, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1052 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1052 = lean_box(0);
}
if (lean_is_scalar(x_1052)) {
 x_1053 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1053 = x_1052;
}
lean_ctor_set(x_1053, 0, x_1041);
lean_ctor_set(x_1053, 1, x_1051);
x_1054 = lean_array_push(x_1039, x_1053);
x_1055 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1056 = lean_array_push(x_1054, x_1055);
x_1057 = lean_array_push(x_1056, x_980);
x_1058 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1059 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1059, 0, x_1058);
lean_ctor_set(x_1059, 1, x_1057);
x_1060 = lean_array_push(x_1039, x_1059);
x_1061 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1061, 0, x_1041);
lean_ctor_set(x_1061, 1, x_1060);
x_1062 = lean_array_push(x_1050, x_1061);
x_1063 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1064 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1064, 0, x_1063);
lean_ctor_set(x_1064, 1, x_1062);
x_1065 = 1;
x_1066 = lean_box(x_1065);
lean_ctor_set(x_975, 1, x_1066);
lean_ctor_set(x_975, 0, x_1064);
x_1067 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1067, 0, x_974);
lean_ctor_set(x_1067, 1, x_1034);
return x_1067;
}
}
else
{
lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; uint8_t x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; 
x_1068 = lean_ctor_get(x_975, 0);
lean_inc(x_1068);
lean_dec(x_975);
x_1069 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_976);
x_1070 = lean_ctor_get(x_1069, 1);
lean_inc(x_1070);
lean_dec(x_1069);
x_1071 = l_Lean_Elab_Term_getMainModule___rarg(x_1070);
x_1072 = lean_ctor_get(x_1071, 1);
lean_inc(x_1072);
if (lean_is_exclusive(x_1071)) {
 lean_ctor_release(x_1071, 0);
 lean_ctor_release(x_1071, 1);
 x_1073 = x_1071;
} else {
 lean_dec_ref(x_1071);
 x_1073 = lean_box(0);
}
x_1074 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1075 = lean_array_push(x_1074, x_967);
x_1076 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1077 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1077, 0, x_1076);
lean_ctor_set(x_1077, 1, x_1075);
x_1078 = l_Array_empty___closed__1;
x_1079 = lean_array_push(x_1078, x_1077);
x_1080 = l_Lean_nullKind___closed__2;
x_1081 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1081, 0, x_1080);
lean_ctor_set(x_1081, 1, x_1079);
x_1082 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1083 = lean_array_push(x_1082, x_1081);
x_1084 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1085 = lean_array_push(x_1083, x_1084);
x_1086 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1087 = lean_array_push(x_1085, x_1086);
x_1088 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1089 = lean_array_push(x_1087, x_1088);
lean_inc(x_14);
x_1090 = lean_array_push(x_1078, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1091 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1091 = lean_box(0);
}
if (lean_is_scalar(x_1091)) {
 x_1092 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1092 = x_1091;
}
lean_ctor_set(x_1092, 0, x_1080);
lean_ctor_set(x_1092, 1, x_1090);
x_1093 = lean_array_push(x_1078, x_1092);
x_1094 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1095 = lean_array_push(x_1093, x_1094);
x_1096 = lean_array_push(x_1095, x_1068);
x_1097 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1098 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1098, 0, x_1097);
lean_ctor_set(x_1098, 1, x_1096);
x_1099 = lean_array_push(x_1078, x_1098);
x_1100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1100, 0, x_1080);
lean_ctor_set(x_1100, 1, x_1099);
x_1101 = lean_array_push(x_1089, x_1100);
x_1102 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1103, 0, x_1102);
lean_ctor_set(x_1103, 1, x_1101);
x_1104 = 1;
x_1105 = lean_box(x_1104);
x_1106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1106, 0, x_1103);
lean_ctor_set(x_1106, 1, x_1105);
lean_ctor_set(x_974, 1, x_1106);
if (lean_is_scalar(x_1073)) {
 x_1107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1107 = x_1073;
}
lean_ctor_set(x_1107, 0, x_974);
lean_ctor_set(x_1107, 1, x_1072);
return x_1107;
}
}
else
{
lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; uint8_t x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; 
x_1108 = lean_ctor_get(x_974, 0);
lean_inc(x_1108);
lean_dec(x_974);
x_1109 = lean_ctor_get(x_975, 0);
lean_inc(x_1109);
if (lean_is_exclusive(x_975)) {
 lean_ctor_release(x_975, 0);
 lean_ctor_release(x_975, 1);
 x_1110 = x_975;
} else {
 lean_dec_ref(x_975);
 x_1110 = lean_box(0);
}
x_1111 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_976);
x_1112 = lean_ctor_get(x_1111, 1);
lean_inc(x_1112);
lean_dec(x_1111);
x_1113 = l_Lean_Elab_Term_getMainModule___rarg(x_1112);
x_1114 = lean_ctor_get(x_1113, 1);
lean_inc(x_1114);
if (lean_is_exclusive(x_1113)) {
 lean_ctor_release(x_1113, 0);
 lean_ctor_release(x_1113, 1);
 x_1115 = x_1113;
} else {
 lean_dec_ref(x_1113);
 x_1115 = lean_box(0);
}
x_1116 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1117 = lean_array_push(x_1116, x_967);
x_1118 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1119, 0, x_1118);
lean_ctor_set(x_1119, 1, x_1117);
x_1120 = l_Array_empty___closed__1;
x_1121 = lean_array_push(x_1120, x_1119);
x_1122 = l_Lean_nullKind___closed__2;
x_1123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1123, 0, x_1122);
lean_ctor_set(x_1123, 1, x_1121);
x_1124 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1125 = lean_array_push(x_1124, x_1123);
x_1126 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1127 = lean_array_push(x_1125, x_1126);
x_1128 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1129 = lean_array_push(x_1127, x_1128);
x_1130 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1131 = lean_array_push(x_1129, x_1130);
lean_inc(x_14);
x_1132 = lean_array_push(x_1120, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1133 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1133 = lean_box(0);
}
if (lean_is_scalar(x_1133)) {
 x_1134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1134 = x_1133;
}
lean_ctor_set(x_1134, 0, x_1122);
lean_ctor_set(x_1134, 1, x_1132);
x_1135 = lean_array_push(x_1120, x_1134);
x_1136 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1137 = lean_array_push(x_1135, x_1136);
x_1138 = lean_array_push(x_1137, x_1109);
x_1139 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1140, 0, x_1139);
lean_ctor_set(x_1140, 1, x_1138);
x_1141 = lean_array_push(x_1120, x_1140);
x_1142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1142, 0, x_1122);
lean_ctor_set(x_1142, 1, x_1141);
x_1143 = lean_array_push(x_1131, x_1142);
x_1144 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1145, 0, x_1144);
lean_ctor_set(x_1145, 1, x_1143);
x_1146 = 1;
x_1147 = lean_box(x_1146);
if (lean_is_scalar(x_1110)) {
 x_1148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1148 = x_1110;
}
lean_ctor_set(x_1148, 0, x_1145);
lean_ctor_set(x_1148, 1, x_1147);
x_1149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1149, 0, x_1108);
lean_ctor_set(x_1149, 1, x_1148);
if (lean_is_scalar(x_1115)) {
 x_1150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1150 = x_1115;
}
lean_ctor_set(x_1150, 0, x_1149);
lean_ctor_set(x_1150, 1, x_1114);
return x_1150;
}
}
else
{
lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; 
x_1151 = l_Lean_Syntax_getArg(x_958, x_951);
lean_dec(x_958);
x_1152 = l___private_Lean_Elab_Binders_10__getFunBinderIds_x3f(x_955, x_5, x_6);
x_1153 = lean_ctor_get(x_1152, 0);
lean_inc(x_1153);
if (lean_obj_tag(x_1153) == 0)
{
lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; uint8_t x_1166; 
lean_dec(x_1151);
x_1154 = lean_ctor_get(x_1152, 1);
lean_inc(x_1154);
lean_dec(x_1152);
x_1155 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_1154);
x_1156 = lean_ctor_get(x_1155, 0);
lean_inc(x_1156);
x_1157 = lean_ctor_get(x_1155, 1);
lean_inc(x_1157);
lean_dec(x_1155);
x_1158 = lean_nat_add(x_3, x_951);
lean_dec(x_3);
x_1159 = l_Lean_mkHole(x_14);
lean_inc(x_1156);
x_1160 = l_Lean_Elab_Term_mkExplicitBinder(x_1156, x_1159);
x_1161 = lean_array_push(x_4, x_1160);
x_1162 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_1158, x_1161, x_5, x_1157);
x_1163 = lean_ctor_get(x_1162, 0);
lean_inc(x_1163);
x_1164 = lean_ctor_get(x_1163, 1);
lean_inc(x_1164);
x_1165 = lean_ctor_get(x_1162, 1);
lean_inc(x_1165);
lean_dec(x_1162);
x_1166 = !lean_is_exclusive(x_1163);
if (x_1166 == 0)
{
lean_object* x_1167; uint8_t x_1168; 
x_1167 = lean_ctor_get(x_1163, 1);
lean_dec(x_1167);
x_1168 = !lean_is_exclusive(x_1164);
if (x_1168 == 0)
{
lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; uint8_t x_1174; 
x_1169 = lean_ctor_get(x_1164, 0);
x_1170 = lean_ctor_get(x_1164, 1);
lean_dec(x_1170);
x_1171 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1165);
x_1172 = lean_ctor_get(x_1171, 1);
lean_inc(x_1172);
lean_dec(x_1171);
x_1173 = l_Lean_Elab_Term_getMainModule___rarg(x_1172);
x_1174 = !lean_is_exclusive(x_1173);
if (x_1174 == 0)
{
lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; uint8_t x_1193; 
x_1175 = lean_ctor_get(x_1173, 0);
lean_dec(x_1175);
x_1176 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1177 = lean_array_push(x_1176, x_1156);
x_1178 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1179, 0, x_1178);
lean_ctor_set(x_1179, 1, x_1177);
x_1180 = l_Array_empty___closed__1;
x_1181 = lean_array_push(x_1180, x_1179);
x_1182 = l_Lean_nullKind___closed__2;
x_1183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1183, 0, x_1182);
lean_ctor_set(x_1183, 1, x_1181);
x_1184 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1185 = lean_array_push(x_1184, x_1183);
x_1186 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1187 = lean_array_push(x_1185, x_1186);
x_1188 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1189 = lean_array_push(x_1187, x_1188);
x_1190 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1191 = lean_array_push(x_1189, x_1190);
lean_inc(x_14);
x_1192 = lean_array_push(x_1180, x_14);
x_1193 = !lean_is_exclusive(x_14);
if (x_1193 == 0)
{
lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; uint8_t x_1207; lean_object* x_1208; 
x_1194 = lean_ctor_get(x_14, 1);
lean_dec(x_1194);
x_1195 = lean_ctor_get(x_14, 0);
lean_dec(x_1195);
lean_ctor_set(x_14, 1, x_1192);
lean_ctor_set(x_14, 0, x_1182);
x_1196 = lean_array_push(x_1180, x_14);
x_1197 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1198 = lean_array_push(x_1196, x_1197);
x_1199 = lean_array_push(x_1198, x_1169);
x_1200 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1201, 0, x_1200);
lean_ctor_set(x_1201, 1, x_1199);
x_1202 = lean_array_push(x_1180, x_1201);
x_1203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1203, 0, x_1182);
lean_ctor_set(x_1203, 1, x_1202);
x_1204 = lean_array_push(x_1191, x_1203);
x_1205 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1206, 0, x_1205);
lean_ctor_set(x_1206, 1, x_1204);
x_1207 = 1;
x_1208 = lean_box(x_1207);
lean_ctor_set(x_1164, 1, x_1208);
lean_ctor_set(x_1164, 0, x_1206);
lean_ctor_set(x_1173, 0, x_1163);
return x_1173;
}
else
{
lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; uint8_t x_1221; lean_object* x_1222; 
lean_dec(x_14);
x_1209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1209, 0, x_1182);
lean_ctor_set(x_1209, 1, x_1192);
x_1210 = lean_array_push(x_1180, x_1209);
x_1211 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1212 = lean_array_push(x_1210, x_1211);
x_1213 = lean_array_push(x_1212, x_1169);
x_1214 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1215, 0, x_1214);
lean_ctor_set(x_1215, 1, x_1213);
x_1216 = lean_array_push(x_1180, x_1215);
x_1217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1217, 0, x_1182);
lean_ctor_set(x_1217, 1, x_1216);
x_1218 = lean_array_push(x_1191, x_1217);
x_1219 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1220, 0, x_1219);
lean_ctor_set(x_1220, 1, x_1218);
x_1221 = 1;
x_1222 = lean_box(x_1221);
lean_ctor_set(x_1164, 1, x_1222);
lean_ctor_set(x_1164, 0, x_1220);
lean_ctor_set(x_1173, 0, x_1163);
return x_1173;
}
}
else
{
lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; uint8_t x_1254; lean_object* x_1255; lean_object* x_1256; 
x_1223 = lean_ctor_get(x_1173, 1);
lean_inc(x_1223);
lean_dec(x_1173);
x_1224 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1225 = lean_array_push(x_1224, x_1156);
x_1226 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1227, 0, x_1226);
lean_ctor_set(x_1227, 1, x_1225);
x_1228 = l_Array_empty___closed__1;
x_1229 = lean_array_push(x_1228, x_1227);
x_1230 = l_Lean_nullKind___closed__2;
x_1231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1231, 0, x_1230);
lean_ctor_set(x_1231, 1, x_1229);
x_1232 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1233 = lean_array_push(x_1232, x_1231);
x_1234 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1235 = lean_array_push(x_1233, x_1234);
x_1236 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1237 = lean_array_push(x_1235, x_1236);
x_1238 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1239 = lean_array_push(x_1237, x_1238);
lean_inc(x_14);
x_1240 = lean_array_push(x_1228, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1241 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1241 = lean_box(0);
}
if (lean_is_scalar(x_1241)) {
 x_1242 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1242 = x_1241;
}
lean_ctor_set(x_1242, 0, x_1230);
lean_ctor_set(x_1242, 1, x_1240);
x_1243 = lean_array_push(x_1228, x_1242);
x_1244 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1245 = lean_array_push(x_1243, x_1244);
x_1246 = lean_array_push(x_1245, x_1169);
x_1247 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1248, 0, x_1247);
lean_ctor_set(x_1248, 1, x_1246);
x_1249 = lean_array_push(x_1228, x_1248);
x_1250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1250, 0, x_1230);
lean_ctor_set(x_1250, 1, x_1249);
x_1251 = lean_array_push(x_1239, x_1250);
x_1252 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1253, 0, x_1252);
lean_ctor_set(x_1253, 1, x_1251);
x_1254 = 1;
x_1255 = lean_box(x_1254);
lean_ctor_set(x_1164, 1, x_1255);
lean_ctor_set(x_1164, 0, x_1253);
x_1256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1256, 0, x_1163);
lean_ctor_set(x_1256, 1, x_1223);
return x_1256;
}
}
else
{
lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; uint8_t x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; 
x_1257 = lean_ctor_get(x_1164, 0);
lean_inc(x_1257);
lean_dec(x_1164);
x_1258 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1165);
x_1259 = lean_ctor_get(x_1258, 1);
lean_inc(x_1259);
lean_dec(x_1258);
x_1260 = l_Lean_Elab_Term_getMainModule___rarg(x_1259);
x_1261 = lean_ctor_get(x_1260, 1);
lean_inc(x_1261);
if (lean_is_exclusive(x_1260)) {
 lean_ctor_release(x_1260, 0);
 lean_ctor_release(x_1260, 1);
 x_1262 = x_1260;
} else {
 lean_dec_ref(x_1260);
 x_1262 = lean_box(0);
}
x_1263 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1264 = lean_array_push(x_1263, x_1156);
x_1265 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1266, 0, x_1265);
lean_ctor_set(x_1266, 1, x_1264);
x_1267 = l_Array_empty___closed__1;
x_1268 = lean_array_push(x_1267, x_1266);
x_1269 = l_Lean_nullKind___closed__2;
x_1270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1270, 0, x_1269);
lean_ctor_set(x_1270, 1, x_1268);
x_1271 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1272 = lean_array_push(x_1271, x_1270);
x_1273 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1274 = lean_array_push(x_1272, x_1273);
x_1275 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1276 = lean_array_push(x_1274, x_1275);
x_1277 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1278 = lean_array_push(x_1276, x_1277);
lean_inc(x_14);
x_1279 = lean_array_push(x_1267, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1280 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1280 = lean_box(0);
}
if (lean_is_scalar(x_1280)) {
 x_1281 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1281 = x_1280;
}
lean_ctor_set(x_1281, 0, x_1269);
lean_ctor_set(x_1281, 1, x_1279);
x_1282 = lean_array_push(x_1267, x_1281);
x_1283 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1284 = lean_array_push(x_1282, x_1283);
x_1285 = lean_array_push(x_1284, x_1257);
x_1286 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1287, 0, x_1286);
lean_ctor_set(x_1287, 1, x_1285);
x_1288 = lean_array_push(x_1267, x_1287);
x_1289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1289, 0, x_1269);
lean_ctor_set(x_1289, 1, x_1288);
x_1290 = lean_array_push(x_1278, x_1289);
x_1291 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1292, 0, x_1291);
lean_ctor_set(x_1292, 1, x_1290);
x_1293 = 1;
x_1294 = lean_box(x_1293);
x_1295 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1295, 0, x_1292);
lean_ctor_set(x_1295, 1, x_1294);
lean_ctor_set(x_1163, 1, x_1295);
if (lean_is_scalar(x_1262)) {
 x_1296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1296 = x_1262;
}
lean_ctor_set(x_1296, 0, x_1163);
lean_ctor_set(x_1296, 1, x_1261);
return x_1296;
}
}
else
{
lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; uint8_t x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; 
x_1297 = lean_ctor_get(x_1163, 0);
lean_inc(x_1297);
lean_dec(x_1163);
x_1298 = lean_ctor_get(x_1164, 0);
lean_inc(x_1298);
if (lean_is_exclusive(x_1164)) {
 lean_ctor_release(x_1164, 0);
 lean_ctor_release(x_1164, 1);
 x_1299 = x_1164;
} else {
 lean_dec_ref(x_1164);
 x_1299 = lean_box(0);
}
x_1300 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1165);
x_1301 = lean_ctor_get(x_1300, 1);
lean_inc(x_1301);
lean_dec(x_1300);
x_1302 = l_Lean_Elab_Term_getMainModule___rarg(x_1301);
x_1303 = lean_ctor_get(x_1302, 1);
lean_inc(x_1303);
if (lean_is_exclusive(x_1302)) {
 lean_ctor_release(x_1302, 0);
 lean_ctor_release(x_1302, 1);
 x_1304 = x_1302;
} else {
 lean_dec_ref(x_1302);
 x_1304 = lean_box(0);
}
x_1305 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1306 = lean_array_push(x_1305, x_1156);
x_1307 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1308, 0, x_1307);
lean_ctor_set(x_1308, 1, x_1306);
x_1309 = l_Array_empty___closed__1;
x_1310 = lean_array_push(x_1309, x_1308);
x_1311 = l_Lean_nullKind___closed__2;
x_1312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1312, 0, x_1311);
lean_ctor_set(x_1312, 1, x_1310);
x_1313 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1314 = lean_array_push(x_1313, x_1312);
x_1315 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1316 = lean_array_push(x_1314, x_1315);
x_1317 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1318 = lean_array_push(x_1316, x_1317);
x_1319 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1320 = lean_array_push(x_1318, x_1319);
lean_inc(x_14);
x_1321 = lean_array_push(x_1309, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1322 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1322 = lean_box(0);
}
if (lean_is_scalar(x_1322)) {
 x_1323 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1323 = x_1322;
}
lean_ctor_set(x_1323, 0, x_1311);
lean_ctor_set(x_1323, 1, x_1321);
x_1324 = lean_array_push(x_1309, x_1323);
x_1325 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1326 = lean_array_push(x_1324, x_1325);
x_1327 = lean_array_push(x_1326, x_1298);
x_1328 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1329, 0, x_1328);
lean_ctor_set(x_1329, 1, x_1327);
x_1330 = lean_array_push(x_1309, x_1329);
x_1331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1331, 0, x_1311);
lean_ctor_set(x_1331, 1, x_1330);
x_1332 = lean_array_push(x_1320, x_1331);
x_1333 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1334, 0, x_1333);
lean_ctor_set(x_1334, 1, x_1332);
x_1335 = 1;
x_1336 = lean_box(x_1335);
if (lean_is_scalar(x_1299)) {
 x_1337 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1337 = x_1299;
}
lean_ctor_set(x_1337, 0, x_1334);
lean_ctor_set(x_1337, 1, x_1336);
x_1338 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1338, 0, x_1297);
lean_ctor_set(x_1338, 1, x_1337);
if (lean_is_scalar(x_1304)) {
 x_1339 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1339 = x_1304;
}
lean_ctor_set(x_1339, 0, x_1338);
lean_ctor_set(x_1339, 1, x_1303);
return x_1339;
}
}
else
{
lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; 
lean_dec(x_14);
x_1340 = lean_ctor_get(x_1152, 1);
lean_inc(x_1340);
lean_dec(x_1152);
x_1341 = lean_ctor_get(x_1153, 0);
lean_inc(x_1341);
lean_dec(x_1153);
x_1342 = lean_nat_add(x_3, x_951);
lean_dec(x_3);
x_1343 = x_1341;
x_1344 = l_Array_umapMAux___main___at___private_Lean_Elab_Binders_11__expandFunBindersAux___main___spec__1(x_1151, x_954, x_1343);
x_1345 = x_1344;
x_1346 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_1345, x_1345, x_954, x_4);
lean_dec(x_1345);
x_3 = x_1342;
x_4 = x_1346;
x_6 = x_1340;
goto _start;
}
}
}
else
{
lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; uint8_t x_1359; 
lean_dec(x_956);
lean_dec(x_955);
x_1348 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_1349 = lean_ctor_get(x_1348, 0);
lean_inc(x_1349);
x_1350 = lean_ctor_get(x_1348, 1);
lean_inc(x_1350);
lean_dec(x_1348);
x_1351 = lean_nat_add(x_3, x_951);
lean_dec(x_3);
x_1352 = l_Lean_mkHole(x_14);
lean_inc(x_1349);
x_1353 = l_Lean_Elab_Term_mkExplicitBinder(x_1349, x_1352);
x_1354 = lean_array_push(x_4, x_1353);
x_1355 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_1351, x_1354, x_5, x_1350);
x_1356 = lean_ctor_get(x_1355, 0);
lean_inc(x_1356);
x_1357 = lean_ctor_get(x_1356, 1);
lean_inc(x_1357);
x_1358 = lean_ctor_get(x_1355, 1);
lean_inc(x_1358);
lean_dec(x_1355);
x_1359 = !lean_is_exclusive(x_1356);
if (x_1359 == 0)
{
lean_object* x_1360; uint8_t x_1361; 
x_1360 = lean_ctor_get(x_1356, 1);
lean_dec(x_1360);
x_1361 = !lean_is_exclusive(x_1357);
if (x_1361 == 0)
{
lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; uint8_t x_1367; 
x_1362 = lean_ctor_get(x_1357, 0);
x_1363 = lean_ctor_get(x_1357, 1);
lean_dec(x_1363);
x_1364 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1358);
x_1365 = lean_ctor_get(x_1364, 1);
lean_inc(x_1365);
lean_dec(x_1364);
x_1366 = l_Lean_Elab_Term_getMainModule___rarg(x_1365);
x_1367 = !lean_is_exclusive(x_1366);
if (x_1367 == 0)
{
lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; uint8_t x_1386; 
x_1368 = lean_ctor_get(x_1366, 0);
lean_dec(x_1368);
x_1369 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1370 = lean_array_push(x_1369, x_1349);
x_1371 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1372 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1372, 0, x_1371);
lean_ctor_set(x_1372, 1, x_1370);
x_1373 = l_Array_empty___closed__1;
x_1374 = lean_array_push(x_1373, x_1372);
x_1375 = l_Lean_nullKind___closed__2;
x_1376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1376, 0, x_1375);
lean_ctor_set(x_1376, 1, x_1374);
x_1377 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1378 = lean_array_push(x_1377, x_1376);
x_1379 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1380 = lean_array_push(x_1378, x_1379);
x_1381 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1382 = lean_array_push(x_1380, x_1381);
x_1383 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1384 = lean_array_push(x_1382, x_1383);
lean_inc(x_14);
x_1385 = lean_array_push(x_1373, x_14);
x_1386 = !lean_is_exclusive(x_14);
if (x_1386 == 0)
{
lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; uint8_t x_1400; lean_object* x_1401; 
x_1387 = lean_ctor_get(x_14, 1);
lean_dec(x_1387);
x_1388 = lean_ctor_get(x_14, 0);
lean_dec(x_1388);
lean_ctor_set(x_14, 1, x_1385);
lean_ctor_set(x_14, 0, x_1375);
x_1389 = lean_array_push(x_1373, x_14);
x_1390 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1391 = lean_array_push(x_1389, x_1390);
x_1392 = lean_array_push(x_1391, x_1362);
x_1393 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1394, 0, x_1393);
lean_ctor_set(x_1394, 1, x_1392);
x_1395 = lean_array_push(x_1373, x_1394);
x_1396 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1396, 0, x_1375);
lean_ctor_set(x_1396, 1, x_1395);
x_1397 = lean_array_push(x_1384, x_1396);
x_1398 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1399, 0, x_1398);
lean_ctor_set(x_1399, 1, x_1397);
x_1400 = 1;
x_1401 = lean_box(x_1400);
lean_ctor_set(x_1357, 1, x_1401);
lean_ctor_set(x_1357, 0, x_1399);
lean_ctor_set(x_1366, 0, x_1356);
return x_1366;
}
else
{
lean_object* x_1402; lean_object* x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; uint8_t x_1414; lean_object* x_1415; 
lean_dec(x_14);
x_1402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1402, 0, x_1375);
lean_ctor_set(x_1402, 1, x_1385);
x_1403 = lean_array_push(x_1373, x_1402);
x_1404 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1405 = lean_array_push(x_1403, x_1404);
x_1406 = lean_array_push(x_1405, x_1362);
x_1407 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1408 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1408, 0, x_1407);
lean_ctor_set(x_1408, 1, x_1406);
x_1409 = lean_array_push(x_1373, x_1408);
x_1410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1410, 0, x_1375);
lean_ctor_set(x_1410, 1, x_1409);
x_1411 = lean_array_push(x_1384, x_1410);
x_1412 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1413 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1413, 0, x_1412);
lean_ctor_set(x_1413, 1, x_1411);
x_1414 = 1;
x_1415 = lean_box(x_1414);
lean_ctor_set(x_1357, 1, x_1415);
lean_ctor_set(x_1357, 0, x_1413);
lean_ctor_set(x_1366, 0, x_1356);
return x_1366;
}
}
else
{
lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; uint8_t x_1447; lean_object* x_1448; lean_object* x_1449; 
x_1416 = lean_ctor_get(x_1366, 1);
lean_inc(x_1416);
lean_dec(x_1366);
x_1417 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1418 = lean_array_push(x_1417, x_1349);
x_1419 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1420, 0, x_1419);
lean_ctor_set(x_1420, 1, x_1418);
x_1421 = l_Array_empty___closed__1;
x_1422 = lean_array_push(x_1421, x_1420);
x_1423 = l_Lean_nullKind___closed__2;
x_1424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1424, 0, x_1423);
lean_ctor_set(x_1424, 1, x_1422);
x_1425 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1426 = lean_array_push(x_1425, x_1424);
x_1427 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1428 = lean_array_push(x_1426, x_1427);
x_1429 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1430 = lean_array_push(x_1428, x_1429);
x_1431 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1432 = lean_array_push(x_1430, x_1431);
lean_inc(x_14);
x_1433 = lean_array_push(x_1421, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1434 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1434 = lean_box(0);
}
if (lean_is_scalar(x_1434)) {
 x_1435 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1435 = x_1434;
}
lean_ctor_set(x_1435, 0, x_1423);
lean_ctor_set(x_1435, 1, x_1433);
x_1436 = lean_array_push(x_1421, x_1435);
x_1437 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1438 = lean_array_push(x_1436, x_1437);
x_1439 = lean_array_push(x_1438, x_1362);
x_1440 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1441, 0, x_1440);
lean_ctor_set(x_1441, 1, x_1439);
x_1442 = lean_array_push(x_1421, x_1441);
x_1443 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1443, 0, x_1423);
lean_ctor_set(x_1443, 1, x_1442);
x_1444 = lean_array_push(x_1432, x_1443);
x_1445 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1446 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1446, 0, x_1445);
lean_ctor_set(x_1446, 1, x_1444);
x_1447 = 1;
x_1448 = lean_box(x_1447);
lean_ctor_set(x_1357, 1, x_1448);
lean_ctor_set(x_1357, 0, x_1446);
x_1449 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1449, 0, x_1356);
lean_ctor_set(x_1449, 1, x_1416);
return x_1449;
}
}
else
{
lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; uint8_t x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; 
x_1450 = lean_ctor_get(x_1357, 0);
lean_inc(x_1450);
lean_dec(x_1357);
x_1451 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1358);
x_1452 = lean_ctor_get(x_1451, 1);
lean_inc(x_1452);
lean_dec(x_1451);
x_1453 = l_Lean_Elab_Term_getMainModule___rarg(x_1452);
x_1454 = lean_ctor_get(x_1453, 1);
lean_inc(x_1454);
if (lean_is_exclusive(x_1453)) {
 lean_ctor_release(x_1453, 0);
 lean_ctor_release(x_1453, 1);
 x_1455 = x_1453;
} else {
 lean_dec_ref(x_1453);
 x_1455 = lean_box(0);
}
x_1456 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1457 = lean_array_push(x_1456, x_1349);
x_1458 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1459 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1459, 0, x_1458);
lean_ctor_set(x_1459, 1, x_1457);
x_1460 = l_Array_empty___closed__1;
x_1461 = lean_array_push(x_1460, x_1459);
x_1462 = l_Lean_nullKind___closed__2;
x_1463 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1463, 0, x_1462);
lean_ctor_set(x_1463, 1, x_1461);
x_1464 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1465 = lean_array_push(x_1464, x_1463);
x_1466 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1467 = lean_array_push(x_1465, x_1466);
x_1468 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1469 = lean_array_push(x_1467, x_1468);
x_1470 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1471 = lean_array_push(x_1469, x_1470);
lean_inc(x_14);
x_1472 = lean_array_push(x_1460, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1473 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1473 = lean_box(0);
}
if (lean_is_scalar(x_1473)) {
 x_1474 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1474 = x_1473;
}
lean_ctor_set(x_1474, 0, x_1462);
lean_ctor_set(x_1474, 1, x_1472);
x_1475 = lean_array_push(x_1460, x_1474);
x_1476 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1477 = lean_array_push(x_1475, x_1476);
x_1478 = lean_array_push(x_1477, x_1450);
x_1479 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1480 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1480, 0, x_1479);
lean_ctor_set(x_1480, 1, x_1478);
x_1481 = lean_array_push(x_1460, x_1480);
x_1482 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1482, 0, x_1462);
lean_ctor_set(x_1482, 1, x_1481);
x_1483 = lean_array_push(x_1471, x_1482);
x_1484 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1485 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1485, 0, x_1484);
lean_ctor_set(x_1485, 1, x_1483);
x_1486 = 1;
x_1487 = lean_box(x_1486);
x_1488 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1488, 0, x_1485);
lean_ctor_set(x_1488, 1, x_1487);
lean_ctor_set(x_1356, 1, x_1488);
if (lean_is_scalar(x_1455)) {
 x_1489 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1489 = x_1455;
}
lean_ctor_set(x_1489, 0, x_1356);
lean_ctor_set(x_1489, 1, x_1454);
return x_1489;
}
}
else
{
lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; uint8_t x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; 
x_1490 = lean_ctor_get(x_1356, 0);
lean_inc(x_1490);
lean_dec(x_1356);
x_1491 = lean_ctor_get(x_1357, 0);
lean_inc(x_1491);
if (lean_is_exclusive(x_1357)) {
 lean_ctor_release(x_1357, 0);
 lean_ctor_release(x_1357, 1);
 x_1492 = x_1357;
} else {
 lean_dec_ref(x_1357);
 x_1492 = lean_box(0);
}
x_1493 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1358);
x_1494 = lean_ctor_get(x_1493, 1);
lean_inc(x_1494);
lean_dec(x_1493);
x_1495 = l_Lean_Elab_Term_getMainModule___rarg(x_1494);
x_1496 = lean_ctor_get(x_1495, 1);
lean_inc(x_1496);
if (lean_is_exclusive(x_1495)) {
 lean_ctor_release(x_1495, 0);
 lean_ctor_release(x_1495, 1);
 x_1497 = x_1495;
} else {
 lean_dec_ref(x_1495);
 x_1497 = lean_box(0);
}
x_1498 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1499 = lean_array_push(x_1498, x_1349);
x_1500 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1501 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1501, 0, x_1500);
lean_ctor_set(x_1501, 1, x_1499);
x_1502 = l_Array_empty___closed__1;
x_1503 = lean_array_push(x_1502, x_1501);
x_1504 = l_Lean_nullKind___closed__2;
x_1505 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1505, 0, x_1504);
lean_ctor_set(x_1505, 1, x_1503);
x_1506 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1507 = lean_array_push(x_1506, x_1505);
x_1508 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1509 = lean_array_push(x_1507, x_1508);
x_1510 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1511 = lean_array_push(x_1509, x_1510);
x_1512 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1513 = lean_array_push(x_1511, x_1512);
lean_inc(x_14);
x_1514 = lean_array_push(x_1502, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1515 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1515 = lean_box(0);
}
if (lean_is_scalar(x_1515)) {
 x_1516 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1516 = x_1515;
}
lean_ctor_set(x_1516, 0, x_1504);
lean_ctor_set(x_1516, 1, x_1514);
x_1517 = lean_array_push(x_1502, x_1516);
x_1518 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1519 = lean_array_push(x_1517, x_1518);
x_1520 = lean_array_push(x_1519, x_1491);
x_1521 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1522 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1522, 0, x_1521);
lean_ctor_set(x_1522, 1, x_1520);
x_1523 = lean_array_push(x_1502, x_1522);
x_1524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1524, 0, x_1504);
lean_ctor_set(x_1524, 1, x_1523);
x_1525 = lean_array_push(x_1513, x_1524);
x_1526 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1527, 0, x_1526);
lean_ctor_set(x_1527, 1, x_1525);
x_1528 = 1;
x_1529 = lean_box(x_1528);
if (lean_is_scalar(x_1492)) {
 x_1530 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1530 = x_1492;
}
lean_ctor_set(x_1530, 0, x_1527);
lean_ctor_set(x_1530, 1, x_1529);
x_1531 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1531, 0, x_1490);
lean_ctor_set(x_1531, 1, x_1530);
if (lean_is_scalar(x_1497)) {
 x_1532 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1532 = x_1497;
}
lean_ctor_set(x_1532, 0, x_1531);
lean_ctor_set(x_1532, 1, x_1496);
return x_1532;
}
}
}
else
{
lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; uint8_t x_1544; 
lean_dec(x_952);
x_1533 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_1534 = lean_ctor_get(x_1533, 0);
lean_inc(x_1534);
x_1535 = lean_ctor_get(x_1533, 1);
lean_inc(x_1535);
lean_dec(x_1533);
x_1536 = lean_nat_add(x_3, x_951);
lean_dec(x_3);
x_1537 = l_Lean_mkHole(x_14);
lean_inc(x_1534);
x_1538 = l_Lean_Elab_Term_mkExplicitBinder(x_1534, x_1537);
x_1539 = lean_array_push(x_4, x_1538);
x_1540 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_1536, x_1539, x_5, x_1535);
x_1541 = lean_ctor_get(x_1540, 0);
lean_inc(x_1541);
x_1542 = lean_ctor_get(x_1541, 1);
lean_inc(x_1542);
x_1543 = lean_ctor_get(x_1540, 1);
lean_inc(x_1543);
lean_dec(x_1540);
x_1544 = !lean_is_exclusive(x_1541);
if (x_1544 == 0)
{
lean_object* x_1545; uint8_t x_1546; 
x_1545 = lean_ctor_get(x_1541, 1);
lean_dec(x_1545);
x_1546 = !lean_is_exclusive(x_1542);
if (x_1546 == 0)
{
lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; uint8_t x_1552; 
x_1547 = lean_ctor_get(x_1542, 0);
x_1548 = lean_ctor_get(x_1542, 1);
lean_dec(x_1548);
x_1549 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1543);
x_1550 = lean_ctor_get(x_1549, 1);
lean_inc(x_1550);
lean_dec(x_1549);
x_1551 = l_Lean_Elab_Term_getMainModule___rarg(x_1550);
x_1552 = !lean_is_exclusive(x_1551);
if (x_1552 == 0)
{
lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; lean_object* x_1562; lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; lean_object* x_1568; lean_object* x_1569; lean_object* x_1570; uint8_t x_1571; 
x_1553 = lean_ctor_get(x_1551, 0);
lean_dec(x_1553);
x_1554 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1555 = lean_array_push(x_1554, x_1534);
x_1556 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1557 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1557, 0, x_1556);
lean_ctor_set(x_1557, 1, x_1555);
x_1558 = l_Array_empty___closed__1;
x_1559 = lean_array_push(x_1558, x_1557);
x_1560 = l_Lean_nullKind___closed__2;
x_1561 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1561, 0, x_1560);
lean_ctor_set(x_1561, 1, x_1559);
x_1562 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1563 = lean_array_push(x_1562, x_1561);
x_1564 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1565 = lean_array_push(x_1563, x_1564);
x_1566 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1567 = lean_array_push(x_1565, x_1566);
x_1568 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1569 = lean_array_push(x_1567, x_1568);
lean_inc(x_14);
x_1570 = lean_array_push(x_1558, x_14);
x_1571 = !lean_is_exclusive(x_14);
if (x_1571 == 0)
{
lean_object* x_1572; lean_object* x_1573; lean_object* x_1574; lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; lean_object* x_1583; lean_object* x_1584; uint8_t x_1585; lean_object* x_1586; 
x_1572 = lean_ctor_get(x_14, 1);
lean_dec(x_1572);
x_1573 = lean_ctor_get(x_14, 0);
lean_dec(x_1573);
lean_ctor_set(x_14, 1, x_1570);
lean_ctor_set(x_14, 0, x_1560);
x_1574 = lean_array_push(x_1558, x_14);
x_1575 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1576 = lean_array_push(x_1574, x_1575);
x_1577 = lean_array_push(x_1576, x_1547);
x_1578 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1579 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1579, 0, x_1578);
lean_ctor_set(x_1579, 1, x_1577);
x_1580 = lean_array_push(x_1558, x_1579);
x_1581 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1581, 0, x_1560);
lean_ctor_set(x_1581, 1, x_1580);
x_1582 = lean_array_push(x_1569, x_1581);
x_1583 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1584 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1584, 0, x_1583);
lean_ctor_set(x_1584, 1, x_1582);
x_1585 = 1;
x_1586 = lean_box(x_1585);
lean_ctor_set(x_1542, 1, x_1586);
lean_ctor_set(x_1542, 0, x_1584);
lean_ctor_set(x_1551, 0, x_1541);
return x_1551;
}
else
{
lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; lean_object* x_1592; lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; lean_object* x_1597; lean_object* x_1598; uint8_t x_1599; lean_object* x_1600; 
lean_dec(x_14);
x_1587 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1587, 0, x_1560);
lean_ctor_set(x_1587, 1, x_1570);
x_1588 = lean_array_push(x_1558, x_1587);
x_1589 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1590 = lean_array_push(x_1588, x_1589);
x_1591 = lean_array_push(x_1590, x_1547);
x_1592 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1593 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1593, 0, x_1592);
lean_ctor_set(x_1593, 1, x_1591);
x_1594 = lean_array_push(x_1558, x_1593);
x_1595 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1595, 0, x_1560);
lean_ctor_set(x_1595, 1, x_1594);
x_1596 = lean_array_push(x_1569, x_1595);
x_1597 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1598, 0, x_1597);
lean_ctor_set(x_1598, 1, x_1596);
x_1599 = 1;
x_1600 = lean_box(x_1599);
lean_ctor_set(x_1542, 1, x_1600);
lean_ctor_set(x_1542, 0, x_1598);
lean_ctor_set(x_1551, 0, x_1541);
return x_1551;
}
}
else
{
lean_object* x_1601; lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; lean_object* x_1616; lean_object* x_1617; lean_object* x_1618; lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; lean_object* x_1625; lean_object* x_1626; lean_object* x_1627; lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; uint8_t x_1632; lean_object* x_1633; lean_object* x_1634; 
x_1601 = lean_ctor_get(x_1551, 1);
lean_inc(x_1601);
lean_dec(x_1551);
x_1602 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1603 = lean_array_push(x_1602, x_1534);
x_1604 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1605 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1605, 0, x_1604);
lean_ctor_set(x_1605, 1, x_1603);
x_1606 = l_Array_empty___closed__1;
x_1607 = lean_array_push(x_1606, x_1605);
x_1608 = l_Lean_nullKind___closed__2;
x_1609 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1609, 0, x_1608);
lean_ctor_set(x_1609, 1, x_1607);
x_1610 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1611 = lean_array_push(x_1610, x_1609);
x_1612 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1613 = lean_array_push(x_1611, x_1612);
x_1614 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1615 = lean_array_push(x_1613, x_1614);
x_1616 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1617 = lean_array_push(x_1615, x_1616);
lean_inc(x_14);
x_1618 = lean_array_push(x_1606, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1619 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1619 = lean_box(0);
}
if (lean_is_scalar(x_1619)) {
 x_1620 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1620 = x_1619;
}
lean_ctor_set(x_1620, 0, x_1608);
lean_ctor_set(x_1620, 1, x_1618);
x_1621 = lean_array_push(x_1606, x_1620);
x_1622 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1623 = lean_array_push(x_1621, x_1622);
x_1624 = lean_array_push(x_1623, x_1547);
x_1625 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1626 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1626, 0, x_1625);
lean_ctor_set(x_1626, 1, x_1624);
x_1627 = lean_array_push(x_1606, x_1626);
x_1628 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1628, 0, x_1608);
lean_ctor_set(x_1628, 1, x_1627);
x_1629 = lean_array_push(x_1617, x_1628);
x_1630 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1631 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1631, 0, x_1630);
lean_ctor_set(x_1631, 1, x_1629);
x_1632 = 1;
x_1633 = lean_box(x_1632);
lean_ctor_set(x_1542, 1, x_1633);
lean_ctor_set(x_1542, 0, x_1631);
x_1634 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1634, 0, x_1541);
lean_ctor_set(x_1634, 1, x_1601);
return x_1634;
}
}
else
{
lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; lean_object* x_1663; lean_object* x_1664; lean_object* x_1665; lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; uint8_t x_1671; lean_object* x_1672; lean_object* x_1673; lean_object* x_1674; 
x_1635 = lean_ctor_get(x_1542, 0);
lean_inc(x_1635);
lean_dec(x_1542);
x_1636 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1543);
x_1637 = lean_ctor_get(x_1636, 1);
lean_inc(x_1637);
lean_dec(x_1636);
x_1638 = l_Lean_Elab_Term_getMainModule___rarg(x_1637);
x_1639 = lean_ctor_get(x_1638, 1);
lean_inc(x_1639);
if (lean_is_exclusive(x_1638)) {
 lean_ctor_release(x_1638, 0);
 lean_ctor_release(x_1638, 1);
 x_1640 = x_1638;
} else {
 lean_dec_ref(x_1638);
 x_1640 = lean_box(0);
}
x_1641 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1642 = lean_array_push(x_1641, x_1534);
x_1643 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1644 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1644, 0, x_1643);
lean_ctor_set(x_1644, 1, x_1642);
x_1645 = l_Array_empty___closed__1;
x_1646 = lean_array_push(x_1645, x_1644);
x_1647 = l_Lean_nullKind___closed__2;
x_1648 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1648, 0, x_1647);
lean_ctor_set(x_1648, 1, x_1646);
x_1649 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1650 = lean_array_push(x_1649, x_1648);
x_1651 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1652 = lean_array_push(x_1650, x_1651);
x_1653 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1654 = lean_array_push(x_1652, x_1653);
x_1655 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1656 = lean_array_push(x_1654, x_1655);
lean_inc(x_14);
x_1657 = lean_array_push(x_1645, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1658 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1658 = lean_box(0);
}
if (lean_is_scalar(x_1658)) {
 x_1659 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1659 = x_1658;
}
lean_ctor_set(x_1659, 0, x_1647);
lean_ctor_set(x_1659, 1, x_1657);
x_1660 = lean_array_push(x_1645, x_1659);
x_1661 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1662 = lean_array_push(x_1660, x_1661);
x_1663 = lean_array_push(x_1662, x_1635);
x_1664 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1665 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1665, 0, x_1664);
lean_ctor_set(x_1665, 1, x_1663);
x_1666 = lean_array_push(x_1645, x_1665);
x_1667 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1667, 0, x_1647);
lean_ctor_set(x_1667, 1, x_1666);
x_1668 = lean_array_push(x_1656, x_1667);
x_1669 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1670 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1670, 0, x_1669);
lean_ctor_set(x_1670, 1, x_1668);
x_1671 = 1;
x_1672 = lean_box(x_1671);
x_1673 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1673, 0, x_1670);
lean_ctor_set(x_1673, 1, x_1672);
lean_ctor_set(x_1541, 1, x_1673);
if (lean_is_scalar(x_1640)) {
 x_1674 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1674 = x_1640;
}
lean_ctor_set(x_1674, 0, x_1541);
lean_ctor_set(x_1674, 1, x_1639);
return x_1674;
}
}
else
{
lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; lean_object* x_1680; lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; lean_object* x_1698; lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; lean_object* x_1706; lean_object* x_1707; lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; uint8_t x_1713; lean_object* x_1714; lean_object* x_1715; lean_object* x_1716; lean_object* x_1717; 
x_1675 = lean_ctor_get(x_1541, 0);
lean_inc(x_1675);
lean_dec(x_1541);
x_1676 = lean_ctor_get(x_1542, 0);
lean_inc(x_1676);
if (lean_is_exclusive(x_1542)) {
 lean_ctor_release(x_1542, 0);
 lean_ctor_release(x_1542, 1);
 x_1677 = x_1542;
} else {
 lean_dec_ref(x_1542);
 x_1677 = lean_box(0);
}
x_1678 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1543);
x_1679 = lean_ctor_get(x_1678, 1);
lean_inc(x_1679);
lean_dec(x_1678);
x_1680 = l_Lean_Elab_Term_getMainModule___rarg(x_1679);
x_1681 = lean_ctor_get(x_1680, 1);
lean_inc(x_1681);
if (lean_is_exclusive(x_1680)) {
 lean_ctor_release(x_1680, 0);
 lean_ctor_release(x_1680, 1);
 x_1682 = x_1680;
} else {
 lean_dec_ref(x_1680);
 x_1682 = lean_box(0);
}
x_1683 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1684 = lean_array_push(x_1683, x_1534);
x_1685 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1686 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1686, 0, x_1685);
lean_ctor_set(x_1686, 1, x_1684);
x_1687 = l_Array_empty___closed__1;
x_1688 = lean_array_push(x_1687, x_1686);
x_1689 = l_Lean_nullKind___closed__2;
x_1690 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1690, 0, x_1689);
lean_ctor_set(x_1690, 1, x_1688);
x_1691 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1692 = lean_array_push(x_1691, x_1690);
x_1693 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1694 = lean_array_push(x_1692, x_1693);
x_1695 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1696 = lean_array_push(x_1694, x_1695);
x_1697 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1698 = lean_array_push(x_1696, x_1697);
lean_inc(x_14);
x_1699 = lean_array_push(x_1687, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1700 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1700 = lean_box(0);
}
if (lean_is_scalar(x_1700)) {
 x_1701 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1701 = x_1700;
}
lean_ctor_set(x_1701, 0, x_1689);
lean_ctor_set(x_1701, 1, x_1699);
x_1702 = lean_array_push(x_1687, x_1701);
x_1703 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1704 = lean_array_push(x_1702, x_1703);
x_1705 = lean_array_push(x_1704, x_1676);
x_1706 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1707 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1707, 0, x_1706);
lean_ctor_set(x_1707, 1, x_1705);
x_1708 = lean_array_push(x_1687, x_1707);
x_1709 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1709, 0, x_1689);
lean_ctor_set(x_1709, 1, x_1708);
x_1710 = lean_array_push(x_1698, x_1709);
x_1711 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1712 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1712, 0, x_1711);
lean_ctor_set(x_1712, 1, x_1710);
x_1713 = 1;
x_1714 = lean_box(x_1713);
if (lean_is_scalar(x_1677)) {
 x_1715 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1715 = x_1677;
}
lean_ctor_set(x_1715, 0, x_1712);
lean_ctor_set(x_1715, 1, x_1714);
x_1716 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1716, 0, x_1675);
lean_ctor_set(x_1716, 1, x_1715);
if (lean_is_scalar(x_1682)) {
 x_1717 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1717 = x_1682;
}
lean_ctor_set(x_1717, 0, x_1716);
lean_ctor_set(x_1717, 1, x_1681);
return x_1717;
}
}
}
}
else
{
lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; 
lean_dec(x_187);
x_1718 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_1719 = lean_ctor_get(x_1718, 0);
lean_inc(x_1719);
x_1720 = lean_ctor_get(x_1718, 1);
lean_inc(x_1720);
lean_dec(x_1718);
x_1721 = lean_unsigned_to_nat(1u);
x_1722 = lean_nat_add(x_3, x_1721);
lean_dec(x_3);
x_1723 = l_Lean_Elab_Term_mkExplicitBinder(x_1719, x_14);
x_1724 = lean_array_push(x_4, x_1723);
x_3 = x_1722;
x_4 = x_1724;
x_6 = x_1720;
goto _start;
}
}
else
{
lean_object* x_1726; lean_object* x_1727; lean_object* x_1728; 
lean_dec(x_187);
x_1726 = lean_unsigned_to_nat(1u);
x_1727 = lean_nat_add(x_3, x_1726);
lean_dec(x_3);
x_1728 = lean_array_push(x_4, x_14);
x_3 = x_1727;
x_4 = x_1728;
goto _start;
}
}
else
{
lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; 
lean_dec(x_187);
x_1730 = lean_unsigned_to_nat(1u);
x_1731 = lean_nat_add(x_3, x_1730);
lean_dec(x_3);
x_1732 = lean_array_push(x_4, x_14);
x_3 = x_1731;
x_4 = x_1732;
goto _start;
}
}
else
{
lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; 
lean_dec(x_187);
x_1734 = lean_unsigned_to_nat(1u);
x_1735 = lean_nat_add(x_3, x_1734);
lean_dec(x_3);
x_1736 = lean_array_push(x_4, x_14);
x_3 = x_1735;
x_4 = x_1736;
goto _start;
}
}
}
}
}
else
{
lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; lean_object* x_1748; lean_object* x_1749; uint8_t x_1750; 
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
x_1738 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_1739 = lean_ctor_get(x_1738, 0);
lean_inc(x_1739);
x_1740 = lean_ctor_get(x_1738, 1);
lean_inc(x_1740);
lean_dec(x_1738);
x_1741 = lean_unsigned_to_nat(1u);
x_1742 = lean_nat_add(x_3, x_1741);
lean_dec(x_3);
x_1743 = l_Lean_mkHole(x_14);
lean_inc(x_1739);
x_1744 = l_Lean_Elab_Term_mkExplicitBinder(x_1739, x_1743);
x_1745 = lean_array_push(x_4, x_1744);
x_1746 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_1742, x_1745, x_5, x_1740);
x_1747 = lean_ctor_get(x_1746, 0);
lean_inc(x_1747);
x_1748 = lean_ctor_get(x_1747, 1);
lean_inc(x_1748);
x_1749 = lean_ctor_get(x_1746, 1);
lean_inc(x_1749);
lean_dec(x_1746);
x_1750 = !lean_is_exclusive(x_1747);
if (x_1750 == 0)
{
lean_object* x_1751; uint8_t x_1752; 
x_1751 = lean_ctor_get(x_1747, 1);
lean_dec(x_1751);
x_1752 = !lean_is_exclusive(x_1748);
if (x_1752 == 0)
{
lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; lean_object* x_1757; uint8_t x_1758; 
x_1753 = lean_ctor_get(x_1748, 0);
x_1754 = lean_ctor_get(x_1748, 1);
lean_dec(x_1754);
x_1755 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1749);
x_1756 = lean_ctor_get(x_1755, 1);
lean_inc(x_1756);
lean_dec(x_1755);
x_1757 = l_Lean_Elab_Term_getMainModule___rarg(x_1756);
x_1758 = !lean_is_exclusive(x_1757);
if (x_1758 == 0)
{
lean_object* x_1759; lean_object* x_1760; lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; lean_object* x_1765; lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; lean_object* x_1774; lean_object* x_1775; lean_object* x_1776; uint8_t x_1777; 
x_1759 = lean_ctor_get(x_1757, 0);
lean_dec(x_1759);
x_1760 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1761 = lean_array_push(x_1760, x_1739);
x_1762 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1763 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1763, 0, x_1762);
lean_ctor_set(x_1763, 1, x_1761);
x_1764 = l_Array_empty___closed__1;
x_1765 = lean_array_push(x_1764, x_1763);
x_1766 = l_Lean_nullKind___closed__2;
x_1767 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1767, 0, x_1766);
lean_ctor_set(x_1767, 1, x_1765);
x_1768 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1769 = lean_array_push(x_1768, x_1767);
x_1770 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1771 = lean_array_push(x_1769, x_1770);
x_1772 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1773 = lean_array_push(x_1771, x_1772);
x_1774 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1775 = lean_array_push(x_1773, x_1774);
lean_inc(x_14);
x_1776 = lean_array_push(x_1764, x_14);
x_1777 = !lean_is_exclusive(x_14);
if (x_1777 == 0)
{
lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; uint8_t x_1791; lean_object* x_1792; 
x_1778 = lean_ctor_get(x_14, 1);
lean_dec(x_1778);
x_1779 = lean_ctor_get(x_14, 0);
lean_dec(x_1779);
lean_ctor_set(x_14, 1, x_1776);
lean_ctor_set(x_14, 0, x_1766);
x_1780 = lean_array_push(x_1764, x_14);
x_1781 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1782 = lean_array_push(x_1780, x_1781);
x_1783 = lean_array_push(x_1782, x_1753);
x_1784 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1785 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1785, 0, x_1784);
lean_ctor_set(x_1785, 1, x_1783);
x_1786 = lean_array_push(x_1764, x_1785);
x_1787 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1787, 0, x_1766);
lean_ctor_set(x_1787, 1, x_1786);
x_1788 = lean_array_push(x_1775, x_1787);
x_1789 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1790 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1790, 0, x_1789);
lean_ctor_set(x_1790, 1, x_1788);
x_1791 = 1;
x_1792 = lean_box(x_1791);
lean_ctor_set(x_1748, 1, x_1792);
lean_ctor_set(x_1748, 0, x_1790);
lean_ctor_set(x_1757, 0, x_1747);
return x_1757;
}
else
{
lean_object* x_1793; lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; uint8_t x_1805; lean_object* x_1806; 
lean_dec(x_14);
x_1793 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1793, 0, x_1766);
lean_ctor_set(x_1793, 1, x_1776);
x_1794 = lean_array_push(x_1764, x_1793);
x_1795 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1796 = lean_array_push(x_1794, x_1795);
x_1797 = lean_array_push(x_1796, x_1753);
x_1798 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1799 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1799, 0, x_1798);
lean_ctor_set(x_1799, 1, x_1797);
x_1800 = lean_array_push(x_1764, x_1799);
x_1801 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1801, 0, x_1766);
lean_ctor_set(x_1801, 1, x_1800);
x_1802 = lean_array_push(x_1775, x_1801);
x_1803 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1804 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1804, 0, x_1803);
lean_ctor_set(x_1804, 1, x_1802);
x_1805 = 1;
x_1806 = lean_box(x_1805);
lean_ctor_set(x_1748, 1, x_1806);
lean_ctor_set(x_1748, 0, x_1804);
lean_ctor_set(x_1757, 0, x_1747);
return x_1757;
}
}
else
{
lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; lean_object* x_1810; lean_object* x_1811; lean_object* x_1812; lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; uint8_t x_1838; lean_object* x_1839; lean_object* x_1840; 
x_1807 = lean_ctor_get(x_1757, 1);
lean_inc(x_1807);
lean_dec(x_1757);
x_1808 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1809 = lean_array_push(x_1808, x_1739);
x_1810 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1811 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1811, 0, x_1810);
lean_ctor_set(x_1811, 1, x_1809);
x_1812 = l_Array_empty___closed__1;
x_1813 = lean_array_push(x_1812, x_1811);
x_1814 = l_Lean_nullKind___closed__2;
x_1815 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1815, 0, x_1814);
lean_ctor_set(x_1815, 1, x_1813);
x_1816 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1817 = lean_array_push(x_1816, x_1815);
x_1818 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1819 = lean_array_push(x_1817, x_1818);
x_1820 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1821 = lean_array_push(x_1819, x_1820);
x_1822 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1823 = lean_array_push(x_1821, x_1822);
lean_inc(x_14);
x_1824 = lean_array_push(x_1812, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1825 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1825 = lean_box(0);
}
if (lean_is_scalar(x_1825)) {
 x_1826 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1826 = x_1825;
}
lean_ctor_set(x_1826, 0, x_1814);
lean_ctor_set(x_1826, 1, x_1824);
x_1827 = lean_array_push(x_1812, x_1826);
x_1828 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1829 = lean_array_push(x_1827, x_1828);
x_1830 = lean_array_push(x_1829, x_1753);
x_1831 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1832 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1832, 0, x_1831);
lean_ctor_set(x_1832, 1, x_1830);
x_1833 = lean_array_push(x_1812, x_1832);
x_1834 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1834, 0, x_1814);
lean_ctor_set(x_1834, 1, x_1833);
x_1835 = lean_array_push(x_1823, x_1834);
x_1836 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1837 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1837, 0, x_1836);
lean_ctor_set(x_1837, 1, x_1835);
x_1838 = 1;
x_1839 = lean_box(x_1838);
lean_ctor_set(x_1748, 1, x_1839);
lean_ctor_set(x_1748, 0, x_1837);
x_1840 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1840, 0, x_1747);
lean_ctor_set(x_1840, 1, x_1807);
return x_1840;
}
}
else
{
lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; lean_object* x_1848; lean_object* x_1849; lean_object* x_1850; lean_object* x_1851; lean_object* x_1852; lean_object* x_1853; lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; lean_object* x_1868; lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; lean_object* x_1874; lean_object* x_1875; lean_object* x_1876; uint8_t x_1877; lean_object* x_1878; lean_object* x_1879; lean_object* x_1880; 
x_1841 = lean_ctor_get(x_1748, 0);
lean_inc(x_1841);
lean_dec(x_1748);
x_1842 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1749);
x_1843 = lean_ctor_get(x_1842, 1);
lean_inc(x_1843);
lean_dec(x_1842);
x_1844 = l_Lean_Elab_Term_getMainModule___rarg(x_1843);
x_1845 = lean_ctor_get(x_1844, 1);
lean_inc(x_1845);
if (lean_is_exclusive(x_1844)) {
 lean_ctor_release(x_1844, 0);
 lean_ctor_release(x_1844, 1);
 x_1846 = x_1844;
} else {
 lean_dec_ref(x_1844);
 x_1846 = lean_box(0);
}
x_1847 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1848 = lean_array_push(x_1847, x_1739);
x_1849 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1850 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1850, 0, x_1849);
lean_ctor_set(x_1850, 1, x_1848);
x_1851 = l_Array_empty___closed__1;
x_1852 = lean_array_push(x_1851, x_1850);
x_1853 = l_Lean_nullKind___closed__2;
x_1854 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1854, 0, x_1853);
lean_ctor_set(x_1854, 1, x_1852);
x_1855 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1856 = lean_array_push(x_1855, x_1854);
x_1857 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1858 = lean_array_push(x_1856, x_1857);
x_1859 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1860 = lean_array_push(x_1858, x_1859);
x_1861 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1862 = lean_array_push(x_1860, x_1861);
lean_inc(x_14);
x_1863 = lean_array_push(x_1851, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1864 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1864 = lean_box(0);
}
if (lean_is_scalar(x_1864)) {
 x_1865 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1865 = x_1864;
}
lean_ctor_set(x_1865, 0, x_1853);
lean_ctor_set(x_1865, 1, x_1863);
x_1866 = lean_array_push(x_1851, x_1865);
x_1867 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1868 = lean_array_push(x_1866, x_1867);
x_1869 = lean_array_push(x_1868, x_1841);
x_1870 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1871 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1871, 0, x_1870);
lean_ctor_set(x_1871, 1, x_1869);
x_1872 = lean_array_push(x_1851, x_1871);
x_1873 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1873, 0, x_1853);
lean_ctor_set(x_1873, 1, x_1872);
x_1874 = lean_array_push(x_1862, x_1873);
x_1875 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1876 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1876, 0, x_1875);
lean_ctor_set(x_1876, 1, x_1874);
x_1877 = 1;
x_1878 = lean_box(x_1877);
x_1879 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1879, 0, x_1876);
lean_ctor_set(x_1879, 1, x_1878);
lean_ctor_set(x_1747, 1, x_1879);
if (lean_is_scalar(x_1846)) {
 x_1880 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1880 = x_1846;
}
lean_ctor_set(x_1880, 0, x_1747);
lean_ctor_set(x_1880, 1, x_1845);
return x_1880;
}
}
else
{
lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; lean_object* x_1886; lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; lean_object* x_1892; lean_object* x_1893; lean_object* x_1894; lean_object* x_1895; lean_object* x_1896; lean_object* x_1897; lean_object* x_1898; lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; lean_object* x_1903; lean_object* x_1904; lean_object* x_1905; lean_object* x_1906; lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; lean_object* x_1910; lean_object* x_1911; lean_object* x_1912; lean_object* x_1913; lean_object* x_1914; lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; uint8_t x_1919; lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; lean_object* x_1923; 
x_1881 = lean_ctor_get(x_1747, 0);
lean_inc(x_1881);
lean_dec(x_1747);
x_1882 = lean_ctor_get(x_1748, 0);
lean_inc(x_1882);
if (lean_is_exclusive(x_1748)) {
 lean_ctor_release(x_1748, 0);
 lean_ctor_release(x_1748, 1);
 x_1883 = x_1748;
} else {
 lean_dec_ref(x_1748);
 x_1883 = lean_box(0);
}
x_1884 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1749);
x_1885 = lean_ctor_get(x_1884, 1);
lean_inc(x_1885);
lean_dec(x_1884);
x_1886 = l_Lean_Elab_Term_getMainModule___rarg(x_1885);
x_1887 = lean_ctor_get(x_1886, 1);
lean_inc(x_1887);
if (lean_is_exclusive(x_1886)) {
 lean_ctor_release(x_1886, 0);
 lean_ctor_release(x_1886, 1);
 x_1888 = x_1886;
} else {
 lean_dec_ref(x_1886);
 x_1888 = lean_box(0);
}
x_1889 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1890 = lean_array_push(x_1889, x_1739);
x_1891 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1892 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1892, 0, x_1891);
lean_ctor_set(x_1892, 1, x_1890);
x_1893 = l_Array_empty___closed__1;
x_1894 = lean_array_push(x_1893, x_1892);
x_1895 = l_Lean_nullKind___closed__2;
x_1896 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1896, 0, x_1895);
lean_ctor_set(x_1896, 1, x_1894);
x_1897 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1898 = lean_array_push(x_1897, x_1896);
x_1899 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1900 = lean_array_push(x_1898, x_1899);
x_1901 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1902 = lean_array_push(x_1900, x_1901);
x_1903 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1904 = lean_array_push(x_1902, x_1903);
lean_inc(x_14);
x_1905 = lean_array_push(x_1893, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1906 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1906 = lean_box(0);
}
if (lean_is_scalar(x_1906)) {
 x_1907 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1907 = x_1906;
}
lean_ctor_set(x_1907, 0, x_1895);
lean_ctor_set(x_1907, 1, x_1905);
x_1908 = lean_array_push(x_1893, x_1907);
x_1909 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1910 = lean_array_push(x_1908, x_1909);
x_1911 = lean_array_push(x_1910, x_1882);
x_1912 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1913 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1913, 0, x_1912);
lean_ctor_set(x_1913, 1, x_1911);
x_1914 = lean_array_push(x_1893, x_1913);
x_1915 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1915, 0, x_1895);
lean_ctor_set(x_1915, 1, x_1914);
x_1916 = lean_array_push(x_1904, x_1915);
x_1917 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1918 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1918, 0, x_1917);
lean_ctor_set(x_1918, 1, x_1916);
x_1919 = 1;
x_1920 = lean_box(x_1919);
if (lean_is_scalar(x_1883)) {
 x_1921 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1921 = x_1883;
}
lean_ctor_set(x_1921, 0, x_1918);
lean_ctor_set(x_1921, 1, x_1920);
x_1922 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1922, 0, x_1881);
lean_ctor_set(x_1922, 1, x_1921);
if (lean_is_scalar(x_1888)) {
 x_1923 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1923 = x_1888;
}
lean_ctor_set(x_1923, 0, x_1922);
lean_ctor_set(x_1923, 1, x_1887);
return x_1923;
}
}
}
else
{
lean_object* x_1924; lean_object* x_1925; lean_object* x_1926; lean_object* x_1927; lean_object* x_1928; lean_object* x_1929; lean_object* x_1930; lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; uint8_t x_1936; 
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
x_1924 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_1925 = lean_ctor_get(x_1924, 0);
lean_inc(x_1925);
x_1926 = lean_ctor_get(x_1924, 1);
lean_inc(x_1926);
lean_dec(x_1924);
x_1927 = lean_unsigned_to_nat(1u);
x_1928 = lean_nat_add(x_3, x_1927);
lean_dec(x_3);
x_1929 = l_Lean_mkHole(x_14);
lean_inc(x_1925);
x_1930 = l_Lean_Elab_Term_mkExplicitBinder(x_1925, x_1929);
x_1931 = lean_array_push(x_4, x_1930);
x_1932 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_1928, x_1931, x_5, x_1926);
x_1933 = lean_ctor_get(x_1932, 0);
lean_inc(x_1933);
x_1934 = lean_ctor_get(x_1933, 1);
lean_inc(x_1934);
x_1935 = lean_ctor_get(x_1932, 1);
lean_inc(x_1935);
lean_dec(x_1932);
x_1936 = !lean_is_exclusive(x_1933);
if (x_1936 == 0)
{
lean_object* x_1937; uint8_t x_1938; 
x_1937 = lean_ctor_get(x_1933, 1);
lean_dec(x_1937);
x_1938 = !lean_is_exclusive(x_1934);
if (x_1938 == 0)
{
lean_object* x_1939; lean_object* x_1940; lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; uint8_t x_1944; 
x_1939 = lean_ctor_get(x_1934, 0);
x_1940 = lean_ctor_get(x_1934, 1);
lean_dec(x_1940);
x_1941 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1935);
x_1942 = lean_ctor_get(x_1941, 1);
lean_inc(x_1942);
lean_dec(x_1941);
x_1943 = l_Lean_Elab_Term_getMainModule___rarg(x_1942);
x_1944 = !lean_is_exclusive(x_1943);
if (x_1944 == 0)
{
lean_object* x_1945; lean_object* x_1946; lean_object* x_1947; lean_object* x_1948; lean_object* x_1949; lean_object* x_1950; lean_object* x_1951; lean_object* x_1952; lean_object* x_1953; lean_object* x_1954; lean_object* x_1955; lean_object* x_1956; lean_object* x_1957; lean_object* x_1958; lean_object* x_1959; lean_object* x_1960; lean_object* x_1961; lean_object* x_1962; uint8_t x_1963; 
x_1945 = lean_ctor_get(x_1943, 0);
lean_dec(x_1945);
x_1946 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1947 = lean_array_push(x_1946, x_1925);
x_1948 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1949 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1949, 0, x_1948);
lean_ctor_set(x_1949, 1, x_1947);
x_1950 = l_Array_empty___closed__1;
x_1951 = lean_array_push(x_1950, x_1949);
x_1952 = l_Lean_nullKind___closed__2;
x_1953 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1953, 0, x_1952);
lean_ctor_set(x_1953, 1, x_1951);
x_1954 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_1955 = lean_array_push(x_1954, x_1953);
x_1956 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_1957 = lean_array_push(x_1955, x_1956);
x_1958 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_1959 = lean_array_push(x_1957, x_1958);
x_1960 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_1961 = lean_array_push(x_1959, x_1960);
lean_inc(x_14);
x_1962 = lean_array_push(x_1950, x_14);
x_1963 = !lean_is_exclusive(x_14);
if (x_1963 == 0)
{
lean_object* x_1964; lean_object* x_1965; lean_object* x_1966; lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; lean_object* x_1975; lean_object* x_1976; uint8_t x_1977; lean_object* x_1978; 
x_1964 = lean_ctor_get(x_14, 1);
lean_dec(x_1964);
x_1965 = lean_ctor_get(x_14, 0);
lean_dec(x_1965);
lean_ctor_set(x_14, 1, x_1962);
lean_ctor_set(x_14, 0, x_1952);
x_1966 = lean_array_push(x_1950, x_14);
x_1967 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1968 = lean_array_push(x_1966, x_1967);
x_1969 = lean_array_push(x_1968, x_1939);
x_1970 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1971 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1971, 0, x_1970);
lean_ctor_set(x_1971, 1, x_1969);
x_1972 = lean_array_push(x_1950, x_1971);
x_1973 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1973, 0, x_1952);
lean_ctor_set(x_1973, 1, x_1972);
x_1974 = lean_array_push(x_1961, x_1973);
x_1975 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1976 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1976, 0, x_1975);
lean_ctor_set(x_1976, 1, x_1974);
x_1977 = 1;
x_1978 = lean_box(x_1977);
lean_ctor_set(x_1934, 1, x_1978);
lean_ctor_set(x_1934, 0, x_1976);
lean_ctor_set(x_1943, 0, x_1933);
return x_1943;
}
else
{
lean_object* x_1979; lean_object* x_1980; lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; lean_object* x_1985; lean_object* x_1986; lean_object* x_1987; lean_object* x_1988; lean_object* x_1989; lean_object* x_1990; uint8_t x_1991; lean_object* x_1992; 
lean_dec(x_14);
x_1979 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1979, 0, x_1952);
lean_ctor_set(x_1979, 1, x_1962);
x_1980 = lean_array_push(x_1950, x_1979);
x_1981 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_1982 = lean_array_push(x_1980, x_1981);
x_1983 = lean_array_push(x_1982, x_1939);
x_1984 = l_Lean_Parser_Term_matchAlt___closed__2;
x_1985 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1985, 0, x_1984);
lean_ctor_set(x_1985, 1, x_1983);
x_1986 = lean_array_push(x_1950, x_1985);
x_1987 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1987, 0, x_1952);
lean_ctor_set(x_1987, 1, x_1986);
x_1988 = lean_array_push(x_1961, x_1987);
x_1989 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_1990 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1990, 0, x_1989);
lean_ctor_set(x_1990, 1, x_1988);
x_1991 = 1;
x_1992 = lean_box(x_1991);
lean_ctor_set(x_1934, 1, x_1992);
lean_ctor_set(x_1934, 0, x_1990);
lean_ctor_set(x_1943, 0, x_1933);
return x_1943;
}
}
else
{
lean_object* x_1993; lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; lean_object* x_1997; lean_object* x_1998; lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; lean_object* x_2002; lean_object* x_2003; lean_object* x_2004; lean_object* x_2005; lean_object* x_2006; lean_object* x_2007; lean_object* x_2008; lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; lean_object* x_2014; lean_object* x_2015; lean_object* x_2016; lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; lean_object* x_2023; uint8_t x_2024; lean_object* x_2025; lean_object* x_2026; 
x_1993 = lean_ctor_get(x_1943, 1);
lean_inc(x_1993);
lean_dec(x_1943);
x_1994 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_1995 = lean_array_push(x_1994, x_1925);
x_1996 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_1997 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1997, 0, x_1996);
lean_ctor_set(x_1997, 1, x_1995);
x_1998 = l_Array_empty___closed__1;
x_1999 = lean_array_push(x_1998, x_1997);
x_2000 = l_Lean_nullKind___closed__2;
x_2001 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2001, 0, x_2000);
lean_ctor_set(x_2001, 1, x_1999);
x_2002 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2003 = lean_array_push(x_2002, x_2001);
x_2004 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2005 = lean_array_push(x_2003, x_2004);
x_2006 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2007 = lean_array_push(x_2005, x_2006);
x_2008 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2009 = lean_array_push(x_2007, x_2008);
lean_inc(x_14);
x_2010 = lean_array_push(x_1998, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2011 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2011 = lean_box(0);
}
if (lean_is_scalar(x_2011)) {
 x_2012 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2012 = x_2011;
}
lean_ctor_set(x_2012, 0, x_2000);
lean_ctor_set(x_2012, 1, x_2010);
x_2013 = lean_array_push(x_1998, x_2012);
x_2014 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2015 = lean_array_push(x_2013, x_2014);
x_2016 = lean_array_push(x_2015, x_1939);
x_2017 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2018 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2018, 0, x_2017);
lean_ctor_set(x_2018, 1, x_2016);
x_2019 = lean_array_push(x_1998, x_2018);
x_2020 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2020, 0, x_2000);
lean_ctor_set(x_2020, 1, x_2019);
x_2021 = lean_array_push(x_2009, x_2020);
x_2022 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2023 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2023, 0, x_2022);
lean_ctor_set(x_2023, 1, x_2021);
x_2024 = 1;
x_2025 = lean_box(x_2024);
lean_ctor_set(x_1934, 1, x_2025);
lean_ctor_set(x_1934, 0, x_2023);
x_2026 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2026, 0, x_1933);
lean_ctor_set(x_2026, 1, x_1993);
return x_2026;
}
}
else
{
lean_object* x_2027; lean_object* x_2028; lean_object* x_2029; lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; lean_object* x_2039; lean_object* x_2040; lean_object* x_2041; lean_object* x_2042; lean_object* x_2043; lean_object* x_2044; lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; lean_object* x_2048; lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; lean_object* x_2052; lean_object* x_2053; lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; lean_object* x_2058; lean_object* x_2059; lean_object* x_2060; lean_object* x_2061; lean_object* x_2062; uint8_t x_2063; lean_object* x_2064; lean_object* x_2065; lean_object* x_2066; 
x_2027 = lean_ctor_get(x_1934, 0);
lean_inc(x_2027);
lean_dec(x_1934);
x_2028 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1935);
x_2029 = lean_ctor_get(x_2028, 1);
lean_inc(x_2029);
lean_dec(x_2028);
x_2030 = l_Lean_Elab_Term_getMainModule___rarg(x_2029);
x_2031 = lean_ctor_get(x_2030, 1);
lean_inc(x_2031);
if (lean_is_exclusive(x_2030)) {
 lean_ctor_release(x_2030, 0);
 lean_ctor_release(x_2030, 1);
 x_2032 = x_2030;
} else {
 lean_dec_ref(x_2030);
 x_2032 = lean_box(0);
}
x_2033 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2034 = lean_array_push(x_2033, x_1925);
x_2035 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2036 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2036, 0, x_2035);
lean_ctor_set(x_2036, 1, x_2034);
x_2037 = l_Array_empty___closed__1;
x_2038 = lean_array_push(x_2037, x_2036);
x_2039 = l_Lean_nullKind___closed__2;
x_2040 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2040, 0, x_2039);
lean_ctor_set(x_2040, 1, x_2038);
x_2041 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2042 = lean_array_push(x_2041, x_2040);
x_2043 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2044 = lean_array_push(x_2042, x_2043);
x_2045 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2046 = lean_array_push(x_2044, x_2045);
x_2047 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2048 = lean_array_push(x_2046, x_2047);
lean_inc(x_14);
x_2049 = lean_array_push(x_2037, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2050 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2050 = lean_box(0);
}
if (lean_is_scalar(x_2050)) {
 x_2051 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2051 = x_2050;
}
lean_ctor_set(x_2051, 0, x_2039);
lean_ctor_set(x_2051, 1, x_2049);
x_2052 = lean_array_push(x_2037, x_2051);
x_2053 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2054 = lean_array_push(x_2052, x_2053);
x_2055 = lean_array_push(x_2054, x_2027);
x_2056 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2057 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2057, 0, x_2056);
lean_ctor_set(x_2057, 1, x_2055);
x_2058 = lean_array_push(x_2037, x_2057);
x_2059 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2059, 0, x_2039);
lean_ctor_set(x_2059, 1, x_2058);
x_2060 = lean_array_push(x_2048, x_2059);
x_2061 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2062 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2062, 0, x_2061);
lean_ctor_set(x_2062, 1, x_2060);
x_2063 = 1;
x_2064 = lean_box(x_2063);
x_2065 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2065, 0, x_2062);
lean_ctor_set(x_2065, 1, x_2064);
lean_ctor_set(x_1933, 1, x_2065);
if (lean_is_scalar(x_2032)) {
 x_2066 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2066 = x_2032;
}
lean_ctor_set(x_2066, 0, x_1933);
lean_ctor_set(x_2066, 1, x_2031);
return x_2066;
}
}
else
{
lean_object* x_2067; lean_object* x_2068; lean_object* x_2069; lean_object* x_2070; lean_object* x_2071; lean_object* x_2072; lean_object* x_2073; lean_object* x_2074; lean_object* x_2075; lean_object* x_2076; lean_object* x_2077; lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; lean_object* x_2082; lean_object* x_2083; lean_object* x_2084; lean_object* x_2085; lean_object* x_2086; lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; lean_object* x_2093; lean_object* x_2094; lean_object* x_2095; lean_object* x_2096; lean_object* x_2097; lean_object* x_2098; lean_object* x_2099; lean_object* x_2100; lean_object* x_2101; lean_object* x_2102; lean_object* x_2103; lean_object* x_2104; uint8_t x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; lean_object* x_2109; 
x_2067 = lean_ctor_get(x_1933, 0);
lean_inc(x_2067);
lean_dec(x_1933);
x_2068 = lean_ctor_get(x_1934, 0);
lean_inc(x_2068);
if (lean_is_exclusive(x_1934)) {
 lean_ctor_release(x_1934, 0);
 lean_ctor_release(x_1934, 1);
 x_2069 = x_1934;
} else {
 lean_dec_ref(x_1934);
 x_2069 = lean_box(0);
}
x_2070 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_1935);
x_2071 = lean_ctor_get(x_2070, 1);
lean_inc(x_2071);
lean_dec(x_2070);
x_2072 = l_Lean_Elab_Term_getMainModule___rarg(x_2071);
x_2073 = lean_ctor_get(x_2072, 1);
lean_inc(x_2073);
if (lean_is_exclusive(x_2072)) {
 lean_ctor_release(x_2072, 0);
 lean_ctor_release(x_2072, 1);
 x_2074 = x_2072;
} else {
 lean_dec_ref(x_2072);
 x_2074 = lean_box(0);
}
x_2075 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2076 = lean_array_push(x_2075, x_1925);
x_2077 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2078 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2078, 0, x_2077);
lean_ctor_set(x_2078, 1, x_2076);
x_2079 = l_Array_empty___closed__1;
x_2080 = lean_array_push(x_2079, x_2078);
x_2081 = l_Lean_nullKind___closed__2;
x_2082 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2082, 0, x_2081);
lean_ctor_set(x_2082, 1, x_2080);
x_2083 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2084 = lean_array_push(x_2083, x_2082);
x_2085 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2086 = lean_array_push(x_2084, x_2085);
x_2087 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2088 = lean_array_push(x_2086, x_2087);
x_2089 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2090 = lean_array_push(x_2088, x_2089);
lean_inc(x_14);
x_2091 = lean_array_push(x_2079, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2092 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2092 = lean_box(0);
}
if (lean_is_scalar(x_2092)) {
 x_2093 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2093 = x_2092;
}
lean_ctor_set(x_2093, 0, x_2081);
lean_ctor_set(x_2093, 1, x_2091);
x_2094 = lean_array_push(x_2079, x_2093);
x_2095 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2096 = lean_array_push(x_2094, x_2095);
x_2097 = lean_array_push(x_2096, x_2068);
x_2098 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2099 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2099, 0, x_2098);
lean_ctor_set(x_2099, 1, x_2097);
x_2100 = lean_array_push(x_2079, x_2099);
x_2101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2101, 0, x_2081);
lean_ctor_set(x_2101, 1, x_2100);
x_2102 = lean_array_push(x_2090, x_2101);
x_2103 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2104, 0, x_2103);
lean_ctor_set(x_2104, 1, x_2102);
x_2105 = 1;
x_2106 = lean_box(x_2105);
if (lean_is_scalar(x_2069)) {
 x_2107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2107 = x_2069;
}
lean_ctor_set(x_2107, 0, x_2104);
lean_ctor_set(x_2107, 1, x_2106);
x_2108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2108, 0, x_2067);
lean_ctor_set(x_2108, 1, x_2107);
if (lean_is_scalar(x_2074)) {
 x_2109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2109 = x_2074;
}
lean_ctor_set(x_2109, 0, x_2108);
lean_ctor_set(x_2109, 1, x_2073);
return x_2109;
}
}
}
else
{
lean_object* x_2110; lean_object* x_2111; lean_object* x_2112; lean_object* x_2113; lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; lean_object* x_2117; lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; lean_object* x_2121; uint8_t x_2122; 
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
x_2110 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_2111 = lean_ctor_get(x_2110, 0);
lean_inc(x_2111);
x_2112 = lean_ctor_get(x_2110, 1);
lean_inc(x_2112);
lean_dec(x_2110);
x_2113 = lean_unsigned_to_nat(1u);
x_2114 = lean_nat_add(x_3, x_2113);
lean_dec(x_3);
x_2115 = l_Lean_mkHole(x_14);
lean_inc(x_2111);
x_2116 = l_Lean_Elab_Term_mkExplicitBinder(x_2111, x_2115);
x_2117 = lean_array_push(x_4, x_2116);
x_2118 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_2114, x_2117, x_5, x_2112);
x_2119 = lean_ctor_get(x_2118, 0);
lean_inc(x_2119);
x_2120 = lean_ctor_get(x_2119, 1);
lean_inc(x_2120);
x_2121 = lean_ctor_get(x_2118, 1);
lean_inc(x_2121);
lean_dec(x_2118);
x_2122 = !lean_is_exclusive(x_2119);
if (x_2122 == 0)
{
lean_object* x_2123; uint8_t x_2124; 
x_2123 = lean_ctor_get(x_2119, 1);
lean_dec(x_2123);
x_2124 = !lean_is_exclusive(x_2120);
if (x_2124 == 0)
{
lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; lean_object* x_2128; lean_object* x_2129; uint8_t x_2130; 
x_2125 = lean_ctor_get(x_2120, 0);
x_2126 = lean_ctor_get(x_2120, 1);
lean_dec(x_2126);
x_2127 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2121);
x_2128 = lean_ctor_get(x_2127, 1);
lean_inc(x_2128);
lean_dec(x_2127);
x_2129 = l_Lean_Elab_Term_getMainModule___rarg(x_2128);
x_2130 = !lean_is_exclusive(x_2129);
if (x_2130 == 0)
{
lean_object* x_2131; lean_object* x_2132; lean_object* x_2133; lean_object* x_2134; lean_object* x_2135; lean_object* x_2136; lean_object* x_2137; lean_object* x_2138; lean_object* x_2139; lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; lean_object* x_2145; lean_object* x_2146; lean_object* x_2147; lean_object* x_2148; uint8_t x_2149; 
x_2131 = lean_ctor_get(x_2129, 0);
lean_dec(x_2131);
x_2132 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2133 = lean_array_push(x_2132, x_2111);
x_2134 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2135, 0, x_2134);
lean_ctor_set(x_2135, 1, x_2133);
x_2136 = l_Array_empty___closed__1;
x_2137 = lean_array_push(x_2136, x_2135);
x_2138 = l_Lean_nullKind___closed__2;
x_2139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2139, 0, x_2138);
lean_ctor_set(x_2139, 1, x_2137);
x_2140 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2141 = lean_array_push(x_2140, x_2139);
x_2142 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2143 = lean_array_push(x_2141, x_2142);
x_2144 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2145 = lean_array_push(x_2143, x_2144);
x_2146 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2147 = lean_array_push(x_2145, x_2146);
lean_inc(x_14);
x_2148 = lean_array_push(x_2136, x_14);
x_2149 = !lean_is_exclusive(x_14);
if (x_2149 == 0)
{
lean_object* x_2150; lean_object* x_2151; lean_object* x_2152; lean_object* x_2153; lean_object* x_2154; lean_object* x_2155; lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; uint8_t x_2163; lean_object* x_2164; 
x_2150 = lean_ctor_get(x_14, 1);
lean_dec(x_2150);
x_2151 = lean_ctor_get(x_14, 0);
lean_dec(x_2151);
lean_ctor_set(x_14, 1, x_2148);
lean_ctor_set(x_14, 0, x_2138);
x_2152 = lean_array_push(x_2136, x_14);
x_2153 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2154 = lean_array_push(x_2152, x_2153);
x_2155 = lean_array_push(x_2154, x_2125);
x_2156 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2157, 0, x_2156);
lean_ctor_set(x_2157, 1, x_2155);
x_2158 = lean_array_push(x_2136, x_2157);
x_2159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2159, 0, x_2138);
lean_ctor_set(x_2159, 1, x_2158);
x_2160 = lean_array_push(x_2147, x_2159);
x_2161 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2162, 0, x_2161);
lean_ctor_set(x_2162, 1, x_2160);
x_2163 = 1;
x_2164 = lean_box(x_2163);
lean_ctor_set(x_2120, 1, x_2164);
lean_ctor_set(x_2120, 0, x_2162);
lean_ctor_set(x_2129, 0, x_2119);
return x_2129;
}
else
{
lean_object* x_2165; lean_object* x_2166; lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; lean_object* x_2170; lean_object* x_2171; lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; lean_object* x_2175; lean_object* x_2176; uint8_t x_2177; lean_object* x_2178; 
lean_dec(x_14);
x_2165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2165, 0, x_2138);
lean_ctor_set(x_2165, 1, x_2148);
x_2166 = lean_array_push(x_2136, x_2165);
x_2167 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2168 = lean_array_push(x_2166, x_2167);
x_2169 = lean_array_push(x_2168, x_2125);
x_2170 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2171, 0, x_2170);
lean_ctor_set(x_2171, 1, x_2169);
x_2172 = lean_array_push(x_2136, x_2171);
x_2173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2173, 0, x_2138);
lean_ctor_set(x_2173, 1, x_2172);
x_2174 = lean_array_push(x_2147, x_2173);
x_2175 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2176, 0, x_2175);
lean_ctor_set(x_2176, 1, x_2174);
x_2177 = 1;
x_2178 = lean_box(x_2177);
lean_ctor_set(x_2120, 1, x_2178);
lean_ctor_set(x_2120, 0, x_2176);
lean_ctor_set(x_2129, 0, x_2119);
return x_2129;
}
}
else
{
lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; lean_object* x_2182; lean_object* x_2183; lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; lean_object* x_2187; lean_object* x_2188; lean_object* x_2189; lean_object* x_2190; lean_object* x_2191; lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; lean_object* x_2198; lean_object* x_2199; lean_object* x_2200; lean_object* x_2201; lean_object* x_2202; lean_object* x_2203; lean_object* x_2204; lean_object* x_2205; lean_object* x_2206; lean_object* x_2207; lean_object* x_2208; lean_object* x_2209; uint8_t x_2210; lean_object* x_2211; lean_object* x_2212; 
x_2179 = lean_ctor_get(x_2129, 1);
lean_inc(x_2179);
lean_dec(x_2129);
x_2180 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2181 = lean_array_push(x_2180, x_2111);
x_2182 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2183, 0, x_2182);
lean_ctor_set(x_2183, 1, x_2181);
x_2184 = l_Array_empty___closed__1;
x_2185 = lean_array_push(x_2184, x_2183);
x_2186 = l_Lean_nullKind___closed__2;
x_2187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2187, 0, x_2186);
lean_ctor_set(x_2187, 1, x_2185);
x_2188 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2189 = lean_array_push(x_2188, x_2187);
x_2190 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2191 = lean_array_push(x_2189, x_2190);
x_2192 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2193 = lean_array_push(x_2191, x_2192);
x_2194 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2195 = lean_array_push(x_2193, x_2194);
lean_inc(x_14);
x_2196 = lean_array_push(x_2184, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2197 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2197 = lean_box(0);
}
if (lean_is_scalar(x_2197)) {
 x_2198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2198 = x_2197;
}
lean_ctor_set(x_2198, 0, x_2186);
lean_ctor_set(x_2198, 1, x_2196);
x_2199 = lean_array_push(x_2184, x_2198);
x_2200 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2201 = lean_array_push(x_2199, x_2200);
x_2202 = lean_array_push(x_2201, x_2125);
x_2203 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2204, 0, x_2203);
lean_ctor_set(x_2204, 1, x_2202);
x_2205 = lean_array_push(x_2184, x_2204);
x_2206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2206, 0, x_2186);
lean_ctor_set(x_2206, 1, x_2205);
x_2207 = lean_array_push(x_2195, x_2206);
x_2208 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2209, 0, x_2208);
lean_ctor_set(x_2209, 1, x_2207);
x_2210 = 1;
x_2211 = lean_box(x_2210);
lean_ctor_set(x_2120, 1, x_2211);
lean_ctor_set(x_2120, 0, x_2209);
x_2212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2212, 0, x_2119);
lean_ctor_set(x_2212, 1, x_2179);
return x_2212;
}
}
else
{
lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2216; lean_object* x_2217; lean_object* x_2218; lean_object* x_2219; lean_object* x_2220; lean_object* x_2221; lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; lean_object* x_2225; lean_object* x_2226; lean_object* x_2227; lean_object* x_2228; lean_object* x_2229; lean_object* x_2230; lean_object* x_2231; lean_object* x_2232; lean_object* x_2233; lean_object* x_2234; lean_object* x_2235; lean_object* x_2236; lean_object* x_2237; lean_object* x_2238; lean_object* x_2239; lean_object* x_2240; lean_object* x_2241; lean_object* x_2242; lean_object* x_2243; lean_object* x_2244; lean_object* x_2245; lean_object* x_2246; lean_object* x_2247; lean_object* x_2248; uint8_t x_2249; lean_object* x_2250; lean_object* x_2251; lean_object* x_2252; 
x_2213 = lean_ctor_get(x_2120, 0);
lean_inc(x_2213);
lean_dec(x_2120);
x_2214 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2121);
x_2215 = lean_ctor_get(x_2214, 1);
lean_inc(x_2215);
lean_dec(x_2214);
x_2216 = l_Lean_Elab_Term_getMainModule___rarg(x_2215);
x_2217 = lean_ctor_get(x_2216, 1);
lean_inc(x_2217);
if (lean_is_exclusive(x_2216)) {
 lean_ctor_release(x_2216, 0);
 lean_ctor_release(x_2216, 1);
 x_2218 = x_2216;
} else {
 lean_dec_ref(x_2216);
 x_2218 = lean_box(0);
}
x_2219 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2220 = lean_array_push(x_2219, x_2111);
x_2221 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2222, 0, x_2221);
lean_ctor_set(x_2222, 1, x_2220);
x_2223 = l_Array_empty___closed__1;
x_2224 = lean_array_push(x_2223, x_2222);
x_2225 = l_Lean_nullKind___closed__2;
x_2226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2226, 0, x_2225);
lean_ctor_set(x_2226, 1, x_2224);
x_2227 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2228 = lean_array_push(x_2227, x_2226);
x_2229 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2230 = lean_array_push(x_2228, x_2229);
x_2231 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2232 = lean_array_push(x_2230, x_2231);
x_2233 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2234 = lean_array_push(x_2232, x_2233);
lean_inc(x_14);
x_2235 = lean_array_push(x_2223, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2236 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2236 = lean_box(0);
}
if (lean_is_scalar(x_2236)) {
 x_2237 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2237 = x_2236;
}
lean_ctor_set(x_2237, 0, x_2225);
lean_ctor_set(x_2237, 1, x_2235);
x_2238 = lean_array_push(x_2223, x_2237);
x_2239 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2240 = lean_array_push(x_2238, x_2239);
x_2241 = lean_array_push(x_2240, x_2213);
x_2242 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2243, 0, x_2242);
lean_ctor_set(x_2243, 1, x_2241);
x_2244 = lean_array_push(x_2223, x_2243);
x_2245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2245, 0, x_2225);
lean_ctor_set(x_2245, 1, x_2244);
x_2246 = lean_array_push(x_2234, x_2245);
x_2247 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2248, 0, x_2247);
lean_ctor_set(x_2248, 1, x_2246);
x_2249 = 1;
x_2250 = lean_box(x_2249);
x_2251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2251, 0, x_2248);
lean_ctor_set(x_2251, 1, x_2250);
lean_ctor_set(x_2119, 1, x_2251);
if (lean_is_scalar(x_2218)) {
 x_2252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2252 = x_2218;
}
lean_ctor_set(x_2252, 0, x_2119);
lean_ctor_set(x_2252, 1, x_2217);
return x_2252;
}
}
else
{
lean_object* x_2253; lean_object* x_2254; lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; lean_object* x_2271; lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; lean_object* x_2276; lean_object* x_2277; lean_object* x_2278; lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; lean_object* x_2282; lean_object* x_2283; lean_object* x_2284; lean_object* x_2285; lean_object* x_2286; lean_object* x_2287; lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; uint8_t x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; 
x_2253 = lean_ctor_get(x_2119, 0);
lean_inc(x_2253);
lean_dec(x_2119);
x_2254 = lean_ctor_get(x_2120, 0);
lean_inc(x_2254);
if (lean_is_exclusive(x_2120)) {
 lean_ctor_release(x_2120, 0);
 lean_ctor_release(x_2120, 1);
 x_2255 = x_2120;
} else {
 lean_dec_ref(x_2120);
 x_2255 = lean_box(0);
}
x_2256 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2121);
x_2257 = lean_ctor_get(x_2256, 1);
lean_inc(x_2257);
lean_dec(x_2256);
x_2258 = l_Lean_Elab_Term_getMainModule___rarg(x_2257);
x_2259 = lean_ctor_get(x_2258, 1);
lean_inc(x_2259);
if (lean_is_exclusive(x_2258)) {
 lean_ctor_release(x_2258, 0);
 lean_ctor_release(x_2258, 1);
 x_2260 = x_2258;
} else {
 lean_dec_ref(x_2258);
 x_2260 = lean_box(0);
}
x_2261 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2262 = lean_array_push(x_2261, x_2111);
x_2263 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2264, 0, x_2263);
lean_ctor_set(x_2264, 1, x_2262);
x_2265 = l_Array_empty___closed__1;
x_2266 = lean_array_push(x_2265, x_2264);
x_2267 = l_Lean_nullKind___closed__2;
x_2268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2268, 0, x_2267);
lean_ctor_set(x_2268, 1, x_2266);
x_2269 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2270 = lean_array_push(x_2269, x_2268);
x_2271 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2272 = lean_array_push(x_2270, x_2271);
x_2273 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2274 = lean_array_push(x_2272, x_2273);
x_2275 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2276 = lean_array_push(x_2274, x_2275);
lean_inc(x_14);
x_2277 = lean_array_push(x_2265, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2278 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2278 = lean_box(0);
}
if (lean_is_scalar(x_2278)) {
 x_2279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2279 = x_2278;
}
lean_ctor_set(x_2279, 0, x_2267);
lean_ctor_set(x_2279, 1, x_2277);
x_2280 = lean_array_push(x_2265, x_2279);
x_2281 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2282 = lean_array_push(x_2280, x_2281);
x_2283 = lean_array_push(x_2282, x_2254);
x_2284 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2285, 0, x_2284);
lean_ctor_set(x_2285, 1, x_2283);
x_2286 = lean_array_push(x_2265, x_2285);
x_2287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2287, 0, x_2267);
lean_ctor_set(x_2287, 1, x_2286);
x_2288 = lean_array_push(x_2276, x_2287);
x_2289 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2290, 0, x_2289);
lean_ctor_set(x_2290, 1, x_2288);
x_2291 = 1;
x_2292 = lean_box(x_2291);
if (lean_is_scalar(x_2255)) {
 x_2293 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2293 = x_2255;
}
lean_ctor_set(x_2293, 0, x_2290);
lean_ctor_set(x_2293, 1, x_2292);
x_2294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2294, 0, x_2253);
lean_ctor_set(x_2294, 1, x_2293);
if (lean_is_scalar(x_2260)) {
 x_2295 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2295 = x_2260;
}
lean_ctor_set(x_2295, 0, x_2294);
lean_ctor_set(x_2295, 1, x_2259);
return x_2295;
}
}
}
else
{
lean_object* x_2296; lean_object* x_2297; lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; lean_object* x_2302; lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; lean_object* x_2306; lean_object* x_2307; uint8_t x_2308; 
lean_dec(x_183);
lean_dec(x_182);
x_2296 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_2297 = lean_ctor_get(x_2296, 0);
lean_inc(x_2297);
x_2298 = lean_ctor_get(x_2296, 1);
lean_inc(x_2298);
lean_dec(x_2296);
x_2299 = lean_unsigned_to_nat(1u);
x_2300 = lean_nat_add(x_3, x_2299);
lean_dec(x_3);
x_2301 = l_Lean_mkHole(x_14);
lean_inc(x_2297);
x_2302 = l_Lean_Elab_Term_mkExplicitBinder(x_2297, x_2301);
x_2303 = lean_array_push(x_4, x_2302);
x_2304 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_2300, x_2303, x_5, x_2298);
x_2305 = lean_ctor_get(x_2304, 0);
lean_inc(x_2305);
x_2306 = lean_ctor_get(x_2305, 1);
lean_inc(x_2306);
x_2307 = lean_ctor_get(x_2304, 1);
lean_inc(x_2307);
lean_dec(x_2304);
x_2308 = !lean_is_exclusive(x_2305);
if (x_2308 == 0)
{
lean_object* x_2309; uint8_t x_2310; 
x_2309 = lean_ctor_get(x_2305, 1);
lean_dec(x_2309);
x_2310 = !lean_is_exclusive(x_2306);
if (x_2310 == 0)
{
lean_object* x_2311; lean_object* x_2312; lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; uint8_t x_2316; 
x_2311 = lean_ctor_get(x_2306, 0);
x_2312 = lean_ctor_get(x_2306, 1);
lean_dec(x_2312);
x_2313 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2307);
x_2314 = lean_ctor_get(x_2313, 1);
lean_inc(x_2314);
lean_dec(x_2313);
x_2315 = l_Lean_Elab_Term_getMainModule___rarg(x_2314);
x_2316 = !lean_is_exclusive(x_2315);
if (x_2316 == 0)
{
lean_object* x_2317; lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; lean_object* x_2321; lean_object* x_2322; lean_object* x_2323; lean_object* x_2324; lean_object* x_2325; lean_object* x_2326; lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; lean_object* x_2330; lean_object* x_2331; lean_object* x_2332; lean_object* x_2333; lean_object* x_2334; uint8_t x_2335; 
x_2317 = lean_ctor_get(x_2315, 0);
lean_dec(x_2317);
x_2318 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2319 = lean_array_push(x_2318, x_2297);
x_2320 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2321 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2321, 0, x_2320);
lean_ctor_set(x_2321, 1, x_2319);
x_2322 = l_Array_empty___closed__1;
x_2323 = lean_array_push(x_2322, x_2321);
x_2324 = l_Lean_nullKind___closed__2;
x_2325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2325, 0, x_2324);
lean_ctor_set(x_2325, 1, x_2323);
x_2326 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2327 = lean_array_push(x_2326, x_2325);
x_2328 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2329 = lean_array_push(x_2327, x_2328);
x_2330 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2331 = lean_array_push(x_2329, x_2330);
x_2332 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2333 = lean_array_push(x_2331, x_2332);
lean_inc(x_14);
x_2334 = lean_array_push(x_2322, x_14);
x_2335 = !lean_is_exclusive(x_14);
if (x_2335 == 0)
{
lean_object* x_2336; lean_object* x_2337; lean_object* x_2338; lean_object* x_2339; lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; lean_object* x_2343; lean_object* x_2344; lean_object* x_2345; lean_object* x_2346; lean_object* x_2347; lean_object* x_2348; uint8_t x_2349; lean_object* x_2350; 
x_2336 = lean_ctor_get(x_14, 1);
lean_dec(x_2336);
x_2337 = lean_ctor_get(x_14, 0);
lean_dec(x_2337);
lean_ctor_set(x_14, 1, x_2334);
lean_ctor_set(x_14, 0, x_2324);
x_2338 = lean_array_push(x_2322, x_14);
x_2339 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2340 = lean_array_push(x_2338, x_2339);
x_2341 = lean_array_push(x_2340, x_2311);
x_2342 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2343 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2343, 0, x_2342);
lean_ctor_set(x_2343, 1, x_2341);
x_2344 = lean_array_push(x_2322, x_2343);
x_2345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2345, 0, x_2324);
lean_ctor_set(x_2345, 1, x_2344);
x_2346 = lean_array_push(x_2333, x_2345);
x_2347 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2348, 0, x_2347);
lean_ctor_set(x_2348, 1, x_2346);
x_2349 = 1;
x_2350 = lean_box(x_2349);
lean_ctor_set(x_2306, 1, x_2350);
lean_ctor_set(x_2306, 0, x_2348);
lean_ctor_set(x_2315, 0, x_2305);
return x_2315;
}
else
{
lean_object* x_2351; lean_object* x_2352; lean_object* x_2353; lean_object* x_2354; lean_object* x_2355; lean_object* x_2356; lean_object* x_2357; lean_object* x_2358; lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; lean_object* x_2362; uint8_t x_2363; lean_object* x_2364; 
lean_dec(x_14);
x_2351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2351, 0, x_2324);
lean_ctor_set(x_2351, 1, x_2334);
x_2352 = lean_array_push(x_2322, x_2351);
x_2353 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2354 = lean_array_push(x_2352, x_2353);
x_2355 = lean_array_push(x_2354, x_2311);
x_2356 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2357, 0, x_2356);
lean_ctor_set(x_2357, 1, x_2355);
x_2358 = lean_array_push(x_2322, x_2357);
x_2359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2359, 0, x_2324);
lean_ctor_set(x_2359, 1, x_2358);
x_2360 = lean_array_push(x_2333, x_2359);
x_2361 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2362, 0, x_2361);
lean_ctor_set(x_2362, 1, x_2360);
x_2363 = 1;
x_2364 = lean_box(x_2363);
lean_ctor_set(x_2306, 1, x_2364);
lean_ctor_set(x_2306, 0, x_2362);
lean_ctor_set(x_2315, 0, x_2305);
return x_2315;
}
}
else
{
lean_object* x_2365; lean_object* x_2366; lean_object* x_2367; lean_object* x_2368; lean_object* x_2369; lean_object* x_2370; lean_object* x_2371; lean_object* x_2372; lean_object* x_2373; lean_object* x_2374; lean_object* x_2375; lean_object* x_2376; lean_object* x_2377; lean_object* x_2378; lean_object* x_2379; lean_object* x_2380; lean_object* x_2381; lean_object* x_2382; lean_object* x_2383; lean_object* x_2384; lean_object* x_2385; lean_object* x_2386; lean_object* x_2387; lean_object* x_2388; lean_object* x_2389; lean_object* x_2390; lean_object* x_2391; lean_object* x_2392; lean_object* x_2393; lean_object* x_2394; lean_object* x_2395; uint8_t x_2396; lean_object* x_2397; lean_object* x_2398; 
x_2365 = lean_ctor_get(x_2315, 1);
lean_inc(x_2365);
lean_dec(x_2315);
x_2366 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2367 = lean_array_push(x_2366, x_2297);
x_2368 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2369 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2369, 0, x_2368);
lean_ctor_set(x_2369, 1, x_2367);
x_2370 = l_Array_empty___closed__1;
x_2371 = lean_array_push(x_2370, x_2369);
x_2372 = l_Lean_nullKind___closed__2;
x_2373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2373, 0, x_2372);
lean_ctor_set(x_2373, 1, x_2371);
x_2374 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2375 = lean_array_push(x_2374, x_2373);
x_2376 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2377 = lean_array_push(x_2375, x_2376);
x_2378 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2379 = lean_array_push(x_2377, x_2378);
x_2380 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2381 = lean_array_push(x_2379, x_2380);
lean_inc(x_14);
x_2382 = lean_array_push(x_2370, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2383 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2383 = lean_box(0);
}
if (lean_is_scalar(x_2383)) {
 x_2384 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2384 = x_2383;
}
lean_ctor_set(x_2384, 0, x_2372);
lean_ctor_set(x_2384, 1, x_2382);
x_2385 = lean_array_push(x_2370, x_2384);
x_2386 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2387 = lean_array_push(x_2385, x_2386);
x_2388 = lean_array_push(x_2387, x_2311);
x_2389 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2390 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2390, 0, x_2389);
lean_ctor_set(x_2390, 1, x_2388);
x_2391 = lean_array_push(x_2370, x_2390);
x_2392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2392, 0, x_2372);
lean_ctor_set(x_2392, 1, x_2391);
x_2393 = lean_array_push(x_2381, x_2392);
x_2394 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2395, 0, x_2394);
lean_ctor_set(x_2395, 1, x_2393);
x_2396 = 1;
x_2397 = lean_box(x_2396);
lean_ctor_set(x_2306, 1, x_2397);
lean_ctor_set(x_2306, 0, x_2395);
x_2398 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2398, 0, x_2305);
lean_ctor_set(x_2398, 1, x_2365);
return x_2398;
}
}
else
{
lean_object* x_2399; lean_object* x_2400; lean_object* x_2401; lean_object* x_2402; lean_object* x_2403; lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; lean_object* x_2409; lean_object* x_2410; lean_object* x_2411; lean_object* x_2412; lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; lean_object* x_2417; lean_object* x_2418; lean_object* x_2419; lean_object* x_2420; lean_object* x_2421; lean_object* x_2422; lean_object* x_2423; lean_object* x_2424; lean_object* x_2425; lean_object* x_2426; lean_object* x_2427; lean_object* x_2428; lean_object* x_2429; lean_object* x_2430; lean_object* x_2431; lean_object* x_2432; lean_object* x_2433; lean_object* x_2434; uint8_t x_2435; lean_object* x_2436; lean_object* x_2437; lean_object* x_2438; 
x_2399 = lean_ctor_get(x_2306, 0);
lean_inc(x_2399);
lean_dec(x_2306);
x_2400 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2307);
x_2401 = lean_ctor_get(x_2400, 1);
lean_inc(x_2401);
lean_dec(x_2400);
x_2402 = l_Lean_Elab_Term_getMainModule___rarg(x_2401);
x_2403 = lean_ctor_get(x_2402, 1);
lean_inc(x_2403);
if (lean_is_exclusive(x_2402)) {
 lean_ctor_release(x_2402, 0);
 lean_ctor_release(x_2402, 1);
 x_2404 = x_2402;
} else {
 lean_dec_ref(x_2402);
 x_2404 = lean_box(0);
}
x_2405 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2406 = lean_array_push(x_2405, x_2297);
x_2407 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2408 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2408, 0, x_2407);
lean_ctor_set(x_2408, 1, x_2406);
x_2409 = l_Array_empty___closed__1;
x_2410 = lean_array_push(x_2409, x_2408);
x_2411 = l_Lean_nullKind___closed__2;
x_2412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2412, 0, x_2411);
lean_ctor_set(x_2412, 1, x_2410);
x_2413 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2414 = lean_array_push(x_2413, x_2412);
x_2415 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2416 = lean_array_push(x_2414, x_2415);
x_2417 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2418 = lean_array_push(x_2416, x_2417);
x_2419 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2420 = lean_array_push(x_2418, x_2419);
lean_inc(x_14);
x_2421 = lean_array_push(x_2409, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2422 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2422 = lean_box(0);
}
if (lean_is_scalar(x_2422)) {
 x_2423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2423 = x_2422;
}
lean_ctor_set(x_2423, 0, x_2411);
lean_ctor_set(x_2423, 1, x_2421);
x_2424 = lean_array_push(x_2409, x_2423);
x_2425 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2426 = lean_array_push(x_2424, x_2425);
x_2427 = lean_array_push(x_2426, x_2399);
x_2428 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2429, 0, x_2428);
lean_ctor_set(x_2429, 1, x_2427);
x_2430 = lean_array_push(x_2409, x_2429);
x_2431 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2431, 0, x_2411);
lean_ctor_set(x_2431, 1, x_2430);
x_2432 = lean_array_push(x_2420, x_2431);
x_2433 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2434, 0, x_2433);
lean_ctor_set(x_2434, 1, x_2432);
x_2435 = 1;
x_2436 = lean_box(x_2435);
x_2437 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2437, 0, x_2434);
lean_ctor_set(x_2437, 1, x_2436);
lean_ctor_set(x_2305, 1, x_2437);
if (lean_is_scalar(x_2404)) {
 x_2438 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2438 = x_2404;
}
lean_ctor_set(x_2438, 0, x_2305);
lean_ctor_set(x_2438, 1, x_2403);
return x_2438;
}
}
else
{
lean_object* x_2439; lean_object* x_2440; lean_object* x_2441; lean_object* x_2442; lean_object* x_2443; lean_object* x_2444; lean_object* x_2445; lean_object* x_2446; lean_object* x_2447; lean_object* x_2448; lean_object* x_2449; lean_object* x_2450; lean_object* x_2451; lean_object* x_2452; lean_object* x_2453; lean_object* x_2454; lean_object* x_2455; lean_object* x_2456; lean_object* x_2457; lean_object* x_2458; lean_object* x_2459; lean_object* x_2460; lean_object* x_2461; lean_object* x_2462; lean_object* x_2463; lean_object* x_2464; lean_object* x_2465; lean_object* x_2466; lean_object* x_2467; lean_object* x_2468; lean_object* x_2469; lean_object* x_2470; lean_object* x_2471; lean_object* x_2472; lean_object* x_2473; lean_object* x_2474; lean_object* x_2475; lean_object* x_2476; uint8_t x_2477; lean_object* x_2478; lean_object* x_2479; lean_object* x_2480; lean_object* x_2481; 
x_2439 = lean_ctor_get(x_2305, 0);
lean_inc(x_2439);
lean_dec(x_2305);
x_2440 = lean_ctor_get(x_2306, 0);
lean_inc(x_2440);
if (lean_is_exclusive(x_2306)) {
 lean_ctor_release(x_2306, 0);
 lean_ctor_release(x_2306, 1);
 x_2441 = x_2306;
} else {
 lean_dec_ref(x_2306);
 x_2441 = lean_box(0);
}
x_2442 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2307);
x_2443 = lean_ctor_get(x_2442, 1);
lean_inc(x_2443);
lean_dec(x_2442);
x_2444 = l_Lean_Elab_Term_getMainModule___rarg(x_2443);
x_2445 = lean_ctor_get(x_2444, 1);
lean_inc(x_2445);
if (lean_is_exclusive(x_2444)) {
 lean_ctor_release(x_2444, 0);
 lean_ctor_release(x_2444, 1);
 x_2446 = x_2444;
} else {
 lean_dec_ref(x_2444);
 x_2446 = lean_box(0);
}
x_2447 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2448 = lean_array_push(x_2447, x_2297);
x_2449 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2450 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2450, 0, x_2449);
lean_ctor_set(x_2450, 1, x_2448);
x_2451 = l_Array_empty___closed__1;
x_2452 = lean_array_push(x_2451, x_2450);
x_2453 = l_Lean_nullKind___closed__2;
x_2454 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2454, 0, x_2453);
lean_ctor_set(x_2454, 1, x_2452);
x_2455 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2456 = lean_array_push(x_2455, x_2454);
x_2457 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2458 = lean_array_push(x_2456, x_2457);
x_2459 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2460 = lean_array_push(x_2458, x_2459);
x_2461 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2462 = lean_array_push(x_2460, x_2461);
lean_inc(x_14);
x_2463 = lean_array_push(x_2451, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2464 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2464 = lean_box(0);
}
if (lean_is_scalar(x_2464)) {
 x_2465 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2465 = x_2464;
}
lean_ctor_set(x_2465, 0, x_2453);
lean_ctor_set(x_2465, 1, x_2463);
x_2466 = lean_array_push(x_2451, x_2465);
x_2467 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2468 = lean_array_push(x_2466, x_2467);
x_2469 = lean_array_push(x_2468, x_2440);
x_2470 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2471 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2471, 0, x_2470);
lean_ctor_set(x_2471, 1, x_2469);
x_2472 = lean_array_push(x_2451, x_2471);
x_2473 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2473, 0, x_2453);
lean_ctor_set(x_2473, 1, x_2472);
x_2474 = lean_array_push(x_2462, x_2473);
x_2475 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2476 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2476, 0, x_2475);
lean_ctor_set(x_2476, 1, x_2474);
x_2477 = 1;
x_2478 = lean_box(x_2477);
if (lean_is_scalar(x_2441)) {
 x_2479 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2479 = x_2441;
}
lean_ctor_set(x_2479, 0, x_2476);
lean_ctor_set(x_2479, 1, x_2478);
x_2480 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2480, 0, x_2439);
lean_ctor_set(x_2480, 1, x_2479);
if (lean_is_scalar(x_2446)) {
 x_2481 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2481 = x_2446;
}
lean_ctor_set(x_2481, 0, x_2480);
lean_ctor_set(x_2481, 1, x_2445);
return x_2481;
}
}
}
else
{
lean_object* x_2482; lean_object* x_2483; lean_object* x_2484; lean_object* x_2485; lean_object* x_2486; lean_object* x_2487; lean_object* x_2488; lean_object* x_2489; lean_object* x_2490; lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; uint8_t x_2494; 
lean_dec(x_182);
x_2482 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_2483 = lean_ctor_get(x_2482, 0);
lean_inc(x_2483);
x_2484 = lean_ctor_get(x_2482, 1);
lean_inc(x_2484);
lean_dec(x_2482);
x_2485 = lean_unsigned_to_nat(1u);
x_2486 = lean_nat_add(x_3, x_2485);
lean_dec(x_3);
x_2487 = l_Lean_mkHole(x_14);
lean_inc(x_2483);
x_2488 = l_Lean_Elab_Term_mkExplicitBinder(x_2483, x_2487);
x_2489 = lean_array_push(x_4, x_2488);
x_2490 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_2486, x_2489, x_5, x_2484);
x_2491 = lean_ctor_get(x_2490, 0);
lean_inc(x_2491);
x_2492 = lean_ctor_get(x_2491, 1);
lean_inc(x_2492);
x_2493 = lean_ctor_get(x_2490, 1);
lean_inc(x_2493);
lean_dec(x_2490);
x_2494 = !lean_is_exclusive(x_2491);
if (x_2494 == 0)
{
lean_object* x_2495; uint8_t x_2496; 
x_2495 = lean_ctor_get(x_2491, 1);
lean_dec(x_2495);
x_2496 = !lean_is_exclusive(x_2492);
if (x_2496 == 0)
{
lean_object* x_2497; lean_object* x_2498; lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; uint8_t x_2502; 
x_2497 = lean_ctor_get(x_2492, 0);
x_2498 = lean_ctor_get(x_2492, 1);
lean_dec(x_2498);
x_2499 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2493);
x_2500 = lean_ctor_get(x_2499, 1);
lean_inc(x_2500);
lean_dec(x_2499);
x_2501 = l_Lean_Elab_Term_getMainModule___rarg(x_2500);
x_2502 = !lean_is_exclusive(x_2501);
if (x_2502 == 0)
{
lean_object* x_2503; lean_object* x_2504; lean_object* x_2505; lean_object* x_2506; lean_object* x_2507; lean_object* x_2508; lean_object* x_2509; lean_object* x_2510; lean_object* x_2511; lean_object* x_2512; lean_object* x_2513; lean_object* x_2514; lean_object* x_2515; lean_object* x_2516; lean_object* x_2517; lean_object* x_2518; lean_object* x_2519; lean_object* x_2520; uint8_t x_2521; 
x_2503 = lean_ctor_get(x_2501, 0);
lean_dec(x_2503);
x_2504 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2505 = lean_array_push(x_2504, x_2483);
x_2506 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2507 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2507, 0, x_2506);
lean_ctor_set(x_2507, 1, x_2505);
x_2508 = l_Array_empty___closed__1;
x_2509 = lean_array_push(x_2508, x_2507);
x_2510 = l_Lean_nullKind___closed__2;
x_2511 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2511, 0, x_2510);
lean_ctor_set(x_2511, 1, x_2509);
x_2512 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2513 = lean_array_push(x_2512, x_2511);
x_2514 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2515 = lean_array_push(x_2513, x_2514);
x_2516 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2517 = lean_array_push(x_2515, x_2516);
x_2518 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2519 = lean_array_push(x_2517, x_2518);
lean_inc(x_14);
x_2520 = lean_array_push(x_2508, x_14);
x_2521 = !lean_is_exclusive(x_14);
if (x_2521 == 0)
{
lean_object* x_2522; lean_object* x_2523; lean_object* x_2524; lean_object* x_2525; lean_object* x_2526; lean_object* x_2527; lean_object* x_2528; lean_object* x_2529; lean_object* x_2530; lean_object* x_2531; lean_object* x_2532; lean_object* x_2533; lean_object* x_2534; uint8_t x_2535; lean_object* x_2536; 
x_2522 = lean_ctor_get(x_14, 1);
lean_dec(x_2522);
x_2523 = lean_ctor_get(x_14, 0);
lean_dec(x_2523);
lean_ctor_set(x_14, 1, x_2520);
lean_ctor_set(x_14, 0, x_2510);
x_2524 = lean_array_push(x_2508, x_14);
x_2525 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2526 = lean_array_push(x_2524, x_2525);
x_2527 = lean_array_push(x_2526, x_2497);
x_2528 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2529 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2529, 0, x_2528);
lean_ctor_set(x_2529, 1, x_2527);
x_2530 = lean_array_push(x_2508, x_2529);
x_2531 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2531, 0, x_2510);
lean_ctor_set(x_2531, 1, x_2530);
x_2532 = lean_array_push(x_2519, x_2531);
x_2533 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2534 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2534, 0, x_2533);
lean_ctor_set(x_2534, 1, x_2532);
x_2535 = 1;
x_2536 = lean_box(x_2535);
lean_ctor_set(x_2492, 1, x_2536);
lean_ctor_set(x_2492, 0, x_2534);
lean_ctor_set(x_2501, 0, x_2491);
return x_2501;
}
else
{
lean_object* x_2537; lean_object* x_2538; lean_object* x_2539; lean_object* x_2540; lean_object* x_2541; lean_object* x_2542; lean_object* x_2543; lean_object* x_2544; lean_object* x_2545; lean_object* x_2546; lean_object* x_2547; lean_object* x_2548; uint8_t x_2549; lean_object* x_2550; 
lean_dec(x_14);
x_2537 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2537, 0, x_2510);
lean_ctor_set(x_2537, 1, x_2520);
x_2538 = lean_array_push(x_2508, x_2537);
x_2539 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2540 = lean_array_push(x_2538, x_2539);
x_2541 = lean_array_push(x_2540, x_2497);
x_2542 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2543 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2543, 0, x_2542);
lean_ctor_set(x_2543, 1, x_2541);
x_2544 = lean_array_push(x_2508, x_2543);
x_2545 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2545, 0, x_2510);
lean_ctor_set(x_2545, 1, x_2544);
x_2546 = lean_array_push(x_2519, x_2545);
x_2547 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2548 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2548, 0, x_2547);
lean_ctor_set(x_2548, 1, x_2546);
x_2549 = 1;
x_2550 = lean_box(x_2549);
lean_ctor_set(x_2492, 1, x_2550);
lean_ctor_set(x_2492, 0, x_2548);
lean_ctor_set(x_2501, 0, x_2491);
return x_2501;
}
}
else
{
lean_object* x_2551; lean_object* x_2552; lean_object* x_2553; lean_object* x_2554; lean_object* x_2555; lean_object* x_2556; lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; lean_object* x_2561; lean_object* x_2562; lean_object* x_2563; lean_object* x_2564; lean_object* x_2565; lean_object* x_2566; lean_object* x_2567; lean_object* x_2568; lean_object* x_2569; lean_object* x_2570; lean_object* x_2571; lean_object* x_2572; lean_object* x_2573; lean_object* x_2574; lean_object* x_2575; lean_object* x_2576; lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; lean_object* x_2580; lean_object* x_2581; uint8_t x_2582; lean_object* x_2583; lean_object* x_2584; 
x_2551 = lean_ctor_get(x_2501, 1);
lean_inc(x_2551);
lean_dec(x_2501);
x_2552 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2553 = lean_array_push(x_2552, x_2483);
x_2554 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2555 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2555, 0, x_2554);
lean_ctor_set(x_2555, 1, x_2553);
x_2556 = l_Array_empty___closed__1;
x_2557 = lean_array_push(x_2556, x_2555);
x_2558 = l_Lean_nullKind___closed__2;
x_2559 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2559, 0, x_2558);
lean_ctor_set(x_2559, 1, x_2557);
x_2560 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2561 = lean_array_push(x_2560, x_2559);
x_2562 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2563 = lean_array_push(x_2561, x_2562);
x_2564 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2565 = lean_array_push(x_2563, x_2564);
x_2566 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2567 = lean_array_push(x_2565, x_2566);
lean_inc(x_14);
x_2568 = lean_array_push(x_2556, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2569 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2569 = lean_box(0);
}
if (lean_is_scalar(x_2569)) {
 x_2570 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2570 = x_2569;
}
lean_ctor_set(x_2570, 0, x_2558);
lean_ctor_set(x_2570, 1, x_2568);
x_2571 = lean_array_push(x_2556, x_2570);
x_2572 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2573 = lean_array_push(x_2571, x_2572);
x_2574 = lean_array_push(x_2573, x_2497);
x_2575 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2576 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2576, 0, x_2575);
lean_ctor_set(x_2576, 1, x_2574);
x_2577 = lean_array_push(x_2556, x_2576);
x_2578 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2578, 0, x_2558);
lean_ctor_set(x_2578, 1, x_2577);
x_2579 = lean_array_push(x_2567, x_2578);
x_2580 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2581 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2581, 0, x_2580);
lean_ctor_set(x_2581, 1, x_2579);
x_2582 = 1;
x_2583 = lean_box(x_2582);
lean_ctor_set(x_2492, 1, x_2583);
lean_ctor_set(x_2492, 0, x_2581);
x_2584 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2584, 0, x_2491);
lean_ctor_set(x_2584, 1, x_2551);
return x_2584;
}
}
else
{
lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; lean_object* x_2588; lean_object* x_2589; lean_object* x_2590; lean_object* x_2591; lean_object* x_2592; lean_object* x_2593; lean_object* x_2594; lean_object* x_2595; lean_object* x_2596; lean_object* x_2597; lean_object* x_2598; lean_object* x_2599; lean_object* x_2600; lean_object* x_2601; lean_object* x_2602; lean_object* x_2603; lean_object* x_2604; lean_object* x_2605; lean_object* x_2606; lean_object* x_2607; lean_object* x_2608; lean_object* x_2609; lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; lean_object* x_2614; lean_object* x_2615; lean_object* x_2616; lean_object* x_2617; lean_object* x_2618; lean_object* x_2619; lean_object* x_2620; uint8_t x_2621; lean_object* x_2622; lean_object* x_2623; lean_object* x_2624; 
x_2585 = lean_ctor_get(x_2492, 0);
lean_inc(x_2585);
lean_dec(x_2492);
x_2586 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2493);
x_2587 = lean_ctor_get(x_2586, 1);
lean_inc(x_2587);
lean_dec(x_2586);
x_2588 = l_Lean_Elab_Term_getMainModule___rarg(x_2587);
x_2589 = lean_ctor_get(x_2588, 1);
lean_inc(x_2589);
if (lean_is_exclusive(x_2588)) {
 lean_ctor_release(x_2588, 0);
 lean_ctor_release(x_2588, 1);
 x_2590 = x_2588;
} else {
 lean_dec_ref(x_2588);
 x_2590 = lean_box(0);
}
x_2591 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2592 = lean_array_push(x_2591, x_2483);
x_2593 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2594, 0, x_2593);
lean_ctor_set(x_2594, 1, x_2592);
x_2595 = l_Array_empty___closed__1;
x_2596 = lean_array_push(x_2595, x_2594);
x_2597 = l_Lean_nullKind___closed__2;
x_2598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2598, 0, x_2597);
lean_ctor_set(x_2598, 1, x_2596);
x_2599 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2600 = lean_array_push(x_2599, x_2598);
x_2601 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2602 = lean_array_push(x_2600, x_2601);
x_2603 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2604 = lean_array_push(x_2602, x_2603);
x_2605 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2606 = lean_array_push(x_2604, x_2605);
lean_inc(x_14);
x_2607 = lean_array_push(x_2595, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2608 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2608 = lean_box(0);
}
if (lean_is_scalar(x_2608)) {
 x_2609 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2609 = x_2608;
}
lean_ctor_set(x_2609, 0, x_2597);
lean_ctor_set(x_2609, 1, x_2607);
x_2610 = lean_array_push(x_2595, x_2609);
x_2611 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2612 = lean_array_push(x_2610, x_2611);
x_2613 = lean_array_push(x_2612, x_2585);
x_2614 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2615 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2615, 0, x_2614);
lean_ctor_set(x_2615, 1, x_2613);
x_2616 = lean_array_push(x_2595, x_2615);
x_2617 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2617, 0, x_2597);
lean_ctor_set(x_2617, 1, x_2616);
x_2618 = lean_array_push(x_2606, x_2617);
x_2619 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2620 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2620, 0, x_2619);
lean_ctor_set(x_2620, 1, x_2618);
x_2621 = 1;
x_2622 = lean_box(x_2621);
x_2623 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2623, 0, x_2620);
lean_ctor_set(x_2623, 1, x_2622);
lean_ctor_set(x_2491, 1, x_2623);
if (lean_is_scalar(x_2590)) {
 x_2624 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2624 = x_2590;
}
lean_ctor_set(x_2624, 0, x_2491);
lean_ctor_set(x_2624, 1, x_2589);
return x_2624;
}
}
else
{
lean_object* x_2625; lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; lean_object* x_2629; lean_object* x_2630; lean_object* x_2631; lean_object* x_2632; lean_object* x_2633; lean_object* x_2634; lean_object* x_2635; lean_object* x_2636; lean_object* x_2637; lean_object* x_2638; lean_object* x_2639; lean_object* x_2640; lean_object* x_2641; lean_object* x_2642; lean_object* x_2643; lean_object* x_2644; lean_object* x_2645; lean_object* x_2646; lean_object* x_2647; lean_object* x_2648; lean_object* x_2649; lean_object* x_2650; lean_object* x_2651; lean_object* x_2652; lean_object* x_2653; lean_object* x_2654; lean_object* x_2655; lean_object* x_2656; lean_object* x_2657; lean_object* x_2658; lean_object* x_2659; lean_object* x_2660; lean_object* x_2661; lean_object* x_2662; uint8_t x_2663; lean_object* x_2664; lean_object* x_2665; lean_object* x_2666; lean_object* x_2667; 
x_2625 = lean_ctor_get(x_2491, 0);
lean_inc(x_2625);
lean_dec(x_2491);
x_2626 = lean_ctor_get(x_2492, 0);
lean_inc(x_2626);
if (lean_is_exclusive(x_2492)) {
 lean_ctor_release(x_2492, 0);
 lean_ctor_release(x_2492, 1);
 x_2627 = x_2492;
} else {
 lean_dec_ref(x_2492);
 x_2627 = lean_box(0);
}
x_2628 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2493);
x_2629 = lean_ctor_get(x_2628, 1);
lean_inc(x_2629);
lean_dec(x_2628);
x_2630 = l_Lean_Elab_Term_getMainModule___rarg(x_2629);
x_2631 = lean_ctor_get(x_2630, 1);
lean_inc(x_2631);
if (lean_is_exclusive(x_2630)) {
 lean_ctor_release(x_2630, 0);
 lean_ctor_release(x_2630, 1);
 x_2632 = x_2630;
} else {
 lean_dec_ref(x_2630);
 x_2632 = lean_box(0);
}
x_2633 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2634 = lean_array_push(x_2633, x_2483);
x_2635 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2636 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2636, 0, x_2635);
lean_ctor_set(x_2636, 1, x_2634);
x_2637 = l_Array_empty___closed__1;
x_2638 = lean_array_push(x_2637, x_2636);
x_2639 = l_Lean_nullKind___closed__2;
x_2640 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2640, 0, x_2639);
lean_ctor_set(x_2640, 1, x_2638);
x_2641 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2642 = lean_array_push(x_2641, x_2640);
x_2643 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2644 = lean_array_push(x_2642, x_2643);
x_2645 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2646 = lean_array_push(x_2644, x_2645);
x_2647 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2648 = lean_array_push(x_2646, x_2647);
lean_inc(x_14);
x_2649 = lean_array_push(x_2637, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2650 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2650 = lean_box(0);
}
if (lean_is_scalar(x_2650)) {
 x_2651 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2651 = x_2650;
}
lean_ctor_set(x_2651, 0, x_2639);
lean_ctor_set(x_2651, 1, x_2649);
x_2652 = lean_array_push(x_2637, x_2651);
x_2653 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2654 = lean_array_push(x_2652, x_2653);
x_2655 = lean_array_push(x_2654, x_2626);
x_2656 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2657 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2657, 0, x_2656);
lean_ctor_set(x_2657, 1, x_2655);
x_2658 = lean_array_push(x_2637, x_2657);
x_2659 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2659, 0, x_2639);
lean_ctor_set(x_2659, 1, x_2658);
x_2660 = lean_array_push(x_2648, x_2659);
x_2661 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2662 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2662, 0, x_2661);
lean_ctor_set(x_2662, 1, x_2660);
x_2663 = 1;
x_2664 = lean_box(x_2663);
if (lean_is_scalar(x_2627)) {
 x_2665 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2665 = x_2627;
}
lean_ctor_set(x_2665, 0, x_2662);
lean_ctor_set(x_2665, 1, x_2664);
x_2666 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2666, 0, x_2625);
lean_ctor_set(x_2666, 1, x_2665);
if (lean_is_scalar(x_2632)) {
 x_2667 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2667 = x_2632;
}
lean_ctor_set(x_2667, 0, x_2666);
lean_ctor_set(x_2667, 1, x_2631);
return x_2667;
}
}
}
case 2:
{
lean_object* x_2668; lean_object* x_2669; lean_object* x_2670; lean_object* x_2671; lean_object* x_2672; lean_object* x_2673; lean_object* x_2674; lean_object* x_2675; lean_object* x_2676; lean_object* x_2677; lean_object* x_2678; lean_object* x_2679; uint8_t x_2680; 
x_2668 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_14, x_5, x_6);
x_2669 = lean_ctor_get(x_2668, 0);
lean_inc(x_2669);
x_2670 = lean_ctor_get(x_2668, 1);
lean_inc(x_2670);
lean_dec(x_2668);
x_2671 = lean_unsigned_to_nat(1u);
x_2672 = lean_nat_add(x_3, x_2671);
lean_dec(x_3);
x_2673 = l_Lean_mkHole(x_14);
lean_inc(x_2669);
x_2674 = l_Lean_Elab_Term_mkExplicitBinder(x_2669, x_2673);
x_2675 = lean_array_push(x_4, x_2674);
x_2676 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_2672, x_2675, x_5, x_2670);
x_2677 = lean_ctor_get(x_2676, 0);
lean_inc(x_2677);
x_2678 = lean_ctor_get(x_2677, 1);
lean_inc(x_2678);
x_2679 = lean_ctor_get(x_2676, 1);
lean_inc(x_2679);
lean_dec(x_2676);
x_2680 = !lean_is_exclusive(x_2677);
if (x_2680 == 0)
{
lean_object* x_2681; uint8_t x_2682; 
x_2681 = lean_ctor_get(x_2677, 1);
lean_dec(x_2681);
x_2682 = !lean_is_exclusive(x_2678);
if (x_2682 == 0)
{
lean_object* x_2683; lean_object* x_2684; lean_object* x_2685; lean_object* x_2686; lean_object* x_2687; uint8_t x_2688; 
x_2683 = lean_ctor_get(x_2678, 0);
x_2684 = lean_ctor_get(x_2678, 1);
lean_dec(x_2684);
x_2685 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2679);
x_2686 = lean_ctor_get(x_2685, 1);
lean_inc(x_2686);
lean_dec(x_2685);
x_2687 = l_Lean_Elab_Term_getMainModule___rarg(x_2686);
x_2688 = !lean_is_exclusive(x_2687);
if (x_2688 == 0)
{
lean_object* x_2689; lean_object* x_2690; lean_object* x_2691; lean_object* x_2692; lean_object* x_2693; lean_object* x_2694; lean_object* x_2695; lean_object* x_2696; lean_object* x_2697; lean_object* x_2698; lean_object* x_2699; lean_object* x_2700; lean_object* x_2701; lean_object* x_2702; lean_object* x_2703; lean_object* x_2704; lean_object* x_2705; lean_object* x_2706; uint8_t x_2707; 
x_2689 = lean_ctor_get(x_2687, 0);
lean_dec(x_2689);
x_2690 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2691 = lean_array_push(x_2690, x_2669);
x_2692 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2693 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2693, 0, x_2692);
lean_ctor_set(x_2693, 1, x_2691);
x_2694 = l_Array_empty___closed__1;
x_2695 = lean_array_push(x_2694, x_2693);
x_2696 = l_Lean_nullKind___closed__2;
x_2697 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2697, 0, x_2696);
lean_ctor_set(x_2697, 1, x_2695);
x_2698 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2699 = lean_array_push(x_2698, x_2697);
x_2700 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2701 = lean_array_push(x_2699, x_2700);
x_2702 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2703 = lean_array_push(x_2701, x_2702);
x_2704 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2705 = lean_array_push(x_2703, x_2704);
lean_inc(x_14);
x_2706 = lean_array_push(x_2694, x_14);
x_2707 = !lean_is_exclusive(x_14);
if (x_2707 == 0)
{
lean_object* x_2708; lean_object* x_2709; lean_object* x_2710; lean_object* x_2711; lean_object* x_2712; lean_object* x_2713; lean_object* x_2714; lean_object* x_2715; lean_object* x_2716; lean_object* x_2717; lean_object* x_2718; lean_object* x_2719; lean_object* x_2720; uint8_t x_2721; lean_object* x_2722; 
x_2708 = lean_ctor_get(x_14, 1);
lean_dec(x_2708);
x_2709 = lean_ctor_get(x_14, 0);
lean_dec(x_2709);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_2706);
lean_ctor_set(x_14, 0, x_2696);
x_2710 = lean_array_push(x_2694, x_14);
x_2711 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2712 = lean_array_push(x_2710, x_2711);
x_2713 = lean_array_push(x_2712, x_2683);
x_2714 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2715 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2715, 0, x_2714);
lean_ctor_set(x_2715, 1, x_2713);
x_2716 = lean_array_push(x_2694, x_2715);
x_2717 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2717, 0, x_2696);
lean_ctor_set(x_2717, 1, x_2716);
x_2718 = lean_array_push(x_2705, x_2717);
x_2719 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2720 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2720, 0, x_2719);
lean_ctor_set(x_2720, 1, x_2718);
x_2721 = 1;
x_2722 = lean_box(x_2721);
lean_ctor_set(x_2678, 1, x_2722);
lean_ctor_set(x_2678, 0, x_2720);
lean_ctor_set(x_2687, 0, x_2677);
return x_2687;
}
else
{
lean_object* x_2723; lean_object* x_2724; lean_object* x_2725; lean_object* x_2726; lean_object* x_2727; lean_object* x_2728; lean_object* x_2729; lean_object* x_2730; lean_object* x_2731; lean_object* x_2732; lean_object* x_2733; lean_object* x_2734; uint8_t x_2735; lean_object* x_2736; 
lean_dec(x_14);
x_2723 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2723, 0, x_2696);
lean_ctor_set(x_2723, 1, x_2706);
x_2724 = lean_array_push(x_2694, x_2723);
x_2725 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2726 = lean_array_push(x_2724, x_2725);
x_2727 = lean_array_push(x_2726, x_2683);
x_2728 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2729 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2729, 0, x_2728);
lean_ctor_set(x_2729, 1, x_2727);
x_2730 = lean_array_push(x_2694, x_2729);
x_2731 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2731, 0, x_2696);
lean_ctor_set(x_2731, 1, x_2730);
x_2732 = lean_array_push(x_2705, x_2731);
x_2733 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2734 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2734, 0, x_2733);
lean_ctor_set(x_2734, 1, x_2732);
x_2735 = 1;
x_2736 = lean_box(x_2735);
lean_ctor_set(x_2678, 1, x_2736);
lean_ctor_set(x_2678, 0, x_2734);
lean_ctor_set(x_2687, 0, x_2677);
return x_2687;
}
}
else
{
lean_object* x_2737; lean_object* x_2738; lean_object* x_2739; lean_object* x_2740; lean_object* x_2741; lean_object* x_2742; lean_object* x_2743; lean_object* x_2744; lean_object* x_2745; lean_object* x_2746; lean_object* x_2747; lean_object* x_2748; lean_object* x_2749; lean_object* x_2750; lean_object* x_2751; lean_object* x_2752; lean_object* x_2753; lean_object* x_2754; lean_object* x_2755; lean_object* x_2756; lean_object* x_2757; lean_object* x_2758; lean_object* x_2759; lean_object* x_2760; lean_object* x_2761; lean_object* x_2762; lean_object* x_2763; lean_object* x_2764; lean_object* x_2765; lean_object* x_2766; lean_object* x_2767; uint8_t x_2768; lean_object* x_2769; lean_object* x_2770; 
x_2737 = lean_ctor_get(x_2687, 1);
lean_inc(x_2737);
lean_dec(x_2687);
x_2738 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2739 = lean_array_push(x_2738, x_2669);
x_2740 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2741 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2741, 0, x_2740);
lean_ctor_set(x_2741, 1, x_2739);
x_2742 = l_Array_empty___closed__1;
x_2743 = lean_array_push(x_2742, x_2741);
x_2744 = l_Lean_nullKind___closed__2;
x_2745 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2745, 0, x_2744);
lean_ctor_set(x_2745, 1, x_2743);
x_2746 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2747 = lean_array_push(x_2746, x_2745);
x_2748 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2749 = lean_array_push(x_2747, x_2748);
x_2750 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2751 = lean_array_push(x_2749, x_2750);
x_2752 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2753 = lean_array_push(x_2751, x_2752);
lean_inc(x_14);
x_2754 = lean_array_push(x_2742, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2755 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2755 = lean_box(0);
}
if (lean_is_scalar(x_2755)) {
 x_2756 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2756 = x_2755;
 lean_ctor_set_tag(x_2756, 1);
}
lean_ctor_set(x_2756, 0, x_2744);
lean_ctor_set(x_2756, 1, x_2754);
x_2757 = lean_array_push(x_2742, x_2756);
x_2758 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2759 = lean_array_push(x_2757, x_2758);
x_2760 = lean_array_push(x_2759, x_2683);
x_2761 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2762 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2762, 0, x_2761);
lean_ctor_set(x_2762, 1, x_2760);
x_2763 = lean_array_push(x_2742, x_2762);
x_2764 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2764, 0, x_2744);
lean_ctor_set(x_2764, 1, x_2763);
x_2765 = lean_array_push(x_2753, x_2764);
x_2766 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2767 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2767, 0, x_2766);
lean_ctor_set(x_2767, 1, x_2765);
x_2768 = 1;
x_2769 = lean_box(x_2768);
lean_ctor_set(x_2678, 1, x_2769);
lean_ctor_set(x_2678, 0, x_2767);
x_2770 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2770, 0, x_2677);
lean_ctor_set(x_2770, 1, x_2737);
return x_2770;
}
}
else
{
lean_object* x_2771; lean_object* x_2772; lean_object* x_2773; lean_object* x_2774; lean_object* x_2775; lean_object* x_2776; lean_object* x_2777; lean_object* x_2778; lean_object* x_2779; lean_object* x_2780; lean_object* x_2781; lean_object* x_2782; lean_object* x_2783; lean_object* x_2784; lean_object* x_2785; lean_object* x_2786; lean_object* x_2787; lean_object* x_2788; lean_object* x_2789; lean_object* x_2790; lean_object* x_2791; lean_object* x_2792; lean_object* x_2793; lean_object* x_2794; lean_object* x_2795; lean_object* x_2796; lean_object* x_2797; lean_object* x_2798; lean_object* x_2799; lean_object* x_2800; lean_object* x_2801; lean_object* x_2802; lean_object* x_2803; lean_object* x_2804; lean_object* x_2805; lean_object* x_2806; uint8_t x_2807; lean_object* x_2808; lean_object* x_2809; lean_object* x_2810; 
x_2771 = lean_ctor_get(x_2678, 0);
lean_inc(x_2771);
lean_dec(x_2678);
x_2772 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2679);
x_2773 = lean_ctor_get(x_2772, 1);
lean_inc(x_2773);
lean_dec(x_2772);
x_2774 = l_Lean_Elab_Term_getMainModule___rarg(x_2773);
x_2775 = lean_ctor_get(x_2774, 1);
lean_inc(x_2775);
if (lean_is_exclusive(x_2774)) {
 lean_ctor_release(x_2774, 0);
 lean_ctor_release(x_2774, 1);
 x_2776 = x_2774;
} else {
 lean_dec_ref(x_2774);
 x_2776 = lean_box(0);
}
x_2777 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2778 = lean_array_push(x_2777, x_2669);
x_2779 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2780 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2780, 0, x_2779);
lean_ctor_set(x_2780, 1, x_2778);
x_2781 = l_Array_empty___closed__1;
x_2782 = lean_array_push(x_2781, x_2780);
x_2783 = l_Lean_nullKind___closed__2;
x_2784 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2784, 0, x_2783);
lean_ctor_set(x_2784, 1, x_2782);
x_2785 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2786 = lean_array_push(x_2785, x_2784);
x_2787 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2788 = lean_array_push(x_2786, x_2787);
x_2789 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2790 = lean_array_push(x_2788, x_2789);
x_2791 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2792 = lean_array_push(x_2790, x_2791);
lean_inc(x_14);
x_2793 = lean_array_push(x_2781, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2794 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2794 = lean_box(0);
}
if (lean_is_scalar(x_2794)) {
 x_2795 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2795 = x_2794;
 lean_ctor_set_tag(x_2795, 1);
}
lean_ctor_set(x_2795, 0, x_2783);
lean_ctor_set(x_2795, 1, x_2793);
x_2796 = lean_array_push(x_2781, x_2795);
x_2797 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2798 = lean_array_push(x_2796, x_2797);
x_2799 = lean_array_push(x_2798, x_2771);
x_2800 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2801 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2801, 0, x_2800);
lean_ctor_set(x_2801, 1, x_2799);
x_2802 = lean_array_push(x_2781, x_2801);
x_2803 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2803, 0, x_2783);
lean_ctor_set(x_2803, 1, x_2802);
x_2804 = lean_array_push(x_2792, x_2803);
x_2805 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2806 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2806, 0, x_2805);
lean_ctor_set(x_2806, 1, x_2804);
x_2807 = 1;
x_2808 = lean_box(x_2807);
x_2809 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2809, 0, x_2806);
lean_ctor_set(x_2809, 1, x_2808);
lean_ctor_set(x_2677, 1, x_2809);
if (lean_is_scalar(x_2776)) {
 x_2810 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2810 = x_2776;
}
lean_ctor_set(x_2810, 0, x_2677);
lean_ctor_set(x_2810, 1, x_2775);
return x_2810;
}
}
else
{
lean_object* x_2811; lean_object* x_2812; lean_object* x_2813; lean_object* x_2814; lean_object* x_2815; lean_object* x_2816; lean_object* x_2817; lean_object* x_2818; lean_object* x_2819; lean_object* x_2820; lean_object* x_2821; lean_object* x_2822; lean_object* x_2823; lean_object* x_2824; lean_object* x_2825; lean_object* x_2826; lean_object* x_2827; lean_object* x_2828; lean_object* x_2829; lean_object* x_2830; lean_object* x_2831; lean_object* x_2832; lean_object* x_2833; lean_object* x_2834; lean_object* x_2835; lean_object* x_2836; lean_object* x_2837; lean_object* x_2838; lean_object* x_2839; lean_object* x_2840; lean_object* x_2841; lean_object* x_2842; lean_object* x_2843; lean_object* x_2844; lean_object* x_2845; lean_object* x_2846; lean_object* x_2847; lean_object* x_2848; uint8_t x_2849; lean_object* x_2850; lean_object* x_2851; lean_object* x_2852; lean_object* x_2853; 
x_2811 = lean_ctor_get(x_2677, 0);
lean_inc(x_2811);
lean_dec(x_2677);
x_2812 = lean_ctor_get(x_2678, 0);
lean_inc(x_2812);
if (lean_is_exclusive(x_2678)) {
 lean_ctor_release(x_2678, 0);
 lean_ctor_release(x_2678, 1);
 x_2813 = x_2678;
} else {
 lean_dec_ref(x_2678);
 x_2813 = lean_box(0);
}
x_2814 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_2679);
x_2815 = lean_ctor_get(x_2814, 1);
lean_inc(x_2815);
lean_dec(x_2814);
x_2816 = l_Lean_Elab_Term_getMainModule___rarg(x_2815);
x_2817 = lean_ctor_get(x_2816, 1);
lean_inc(x_2817);
if (lean_is_exclusive(x_2816)) {
 lean_ctor_release(x_2816, 0);
 lean_ctor_release(x_2816, 1);
 x_2818 = x_2816;
} else {
 lean_dec_ref(x_2816);
 x_2818 = lean_box(0);
}
x_2819 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_2820 = lean_array_push(x_2819, x_2669);
x_2821 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_2822 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2822, 0, x_2821);
lean_ctor_set(x_2822, 1, x_2820);
x_2823 = l_Array_empty___closed__1;
x_2824 = lean_array_push(x_2823, x_2822);
x_2825 = l_Lean_nullKind___closed__2;
x_2826 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2826, 0, x_2825);
lean_ctor_set(x_2826, 1, x_2824);
x_2827 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_2828 = lean_array_push(x_2827, x_2826);
x_2829 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_2830 = lean_array_push(x_2828, x_2829);
x_2831 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_2832 = lean_array_push(x_2830, x_2831);
x_2833 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8;
x_2834 = lean_array_push(x_2832, x_2833);
lean_inc(x_14);
x_2835 = lean_array_push(x_2823, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2836 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2836 = lean_box(0);
}
if (lean_is_scalar(x_2836)) {
 x_2837 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2837 = x_2836;
 lean_ctor_set_tag(x_2837, 1);
}
lean_ctor_set(x_2837, 0, x_2825);
lean_ctor_set(x_2837, 1, x_2835);
x_2838 = lean_array_push(x_2823, x_2837);
x_2839 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_2840 = lean_array_push(x_2838, x_2839);
x_2841 = lean_array_push(x_2840, x_2812);
x_2842 = l_Lean_Parser_Term_matchAlt___closed__2;
x_2843 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2843, 0, x_2842);
lean_ctor_set(x_2843, 1, x_2841);
x_2844 = lean_array_push(x_2823, x_2843);
x_2845 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2845, 0, x_2825);
lean_ctor_set(x_2845, 1, x_2844);
x_2846 = lean_array_push(x_2834, x_2845);
x_2847 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2848 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2848, 0, x_2847);
lean_ctor_set(x_2848, 1, x_2846);
x_2849 = 1;
x_2850 = lean_box(x_2849);
if (lean_is_scalar(x_2813)) {
 x_2851 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2851 = x_2813;
}
lean_ctor_set(x_2851, 0, x_2848);
lean_ctor_set(x_2851, 1, x_2850);
x_2852 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2852, 0, x_2811);
lean_ctor_set(x_2852, 1, x_2851);
if (lean_is_scalar(x_2818)) {
 x_2853 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2853 = x_2818;
}
lean_ctor_set(x_2853, 0, x_2852);
lean_ctor_set(x_2853, 1, x_2817);
return x_2853;
}
}
default: 
{
lean_object* x_2854; lean_object* x_2855; lean_object* x_2856; lean_object* x_2857; lean_object* x_2858; 
x_2854 = l_Lean_mkHole(x_14);
x_2855 = lean_unsigned_to_nat(1u);
x_2856 = lean_nat_add(x_3, x_2855);
lean_dec(x_3);
x_2857 = l_Lean_Elab_Term_mkExplicitBinder(x_14, x_2854);
x_2858 = lean_array_push(x_4, x_2857);
x_3 = x_2856;
x_4 = x_2858;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Binders_11__expandFunBindersAux(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_empty___closed__1;
x_7 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main(x_1, x_2, x_5, x_6, x_3, x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandFunBinders(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("autoParam is not allowed at 'fun/λ' binders");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optParam is not allowed at 'fun/λ' binders");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
x_4 = l_Lean_Elab_Term_instantiateMVars(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_Expr_isOptParam(x_6);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Expr_isAutoParam(x_6);
lean_dec(x_6);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_box(0);
lean_ctor_set(x_4, 0, x_10);
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_free_object(x_4);
x_11 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3;
x_12 = l_Lean_Elab_Term_throwError___rarg(x_11, x_2, x_7);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_free_object(x_4);
lean_dec(x_6);
x_13 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6;
x_14 = l_Lean_Elab_Term_throwError___rarg(x_13, x_2, x_7);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_4, 0);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_4);
x_21 = l_Lean_Expr_isOptParam(x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Expr_isAutoParam(x_19);
lean_dec(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3;
x_26 = l_Lean_Elab_Term_throwError___rarg(x_25, x_2, x_20);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_19);
x_27 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6;
x_28 = l_Lean_Elab_Term_throwError___rarg(x_27, x_2, x_20);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(1, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_13__propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_11 = x_3;
} else {
 lean_dec_ref(x_3);
 x_11 = lean_box(0);
}
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_4);
x_14 = l_Lean_Elab_Term_whnfForall(x_13, x_4, x_5);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_17 = x_14;
} else {
 lean_dec_ref(x_14);
 x_17 = lean_box(0);
}
if (lean_obj_tag(x_15) == 7)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_17);
lean_dec(x_11);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_15, 2);
lean_inc(x_24);
lean_dec(x_15);
lean_inc(x_4);
lean_inc(x_2);
x_25 = l_Lean_Elab_Term_isDefEq(x_2, x_23, x_4, x_16);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(x_2, x_4, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_expr_instantiate1(x_24, x_1);
lean_dec(x_24);
lean_ctor_set(x_6, 0, x_30);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_8);
lean_ctor_set(x_31, 1, x_9);
lean_ctor_set(x_31, 2, x_10);
lean_ctor_set(x_31, 3, x_6);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = lean_expr_instantiate1(x_24, x_1);
lean_dec(x_24);
lean_ctor_set(x_6, 0, x_33);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_8);
lean_ctor_set(x_34, 1, x_9);
lean_ctor_set(x_34, 2, x_10);
lean_ctor_set(x_34, 3, x_6);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_24);
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_36 = !lean_is_exclusive(x_27);
if (x_36 == 0)
{
return x_27;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_27, 0);
x_38 = lean_ctor_get(x_27, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_27);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_24);
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_25);
if (x_40 == 0)
{
return x_25;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_15);
lean_free_object(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_44 = lean_box(0);
x_18 = x_44;
goto block_22;
}
block_22:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_18);
x_19 = lean_box(0);
if (lean_is_scalar(x_11)) {
 x_20 = lean_alloc_ctor(0, 4, 0);
} else {
 x_20 = x_11;
}
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_9);
lean_ctor_set(x_20, 2, x_10);
lean_ctor_set(x_20, 3, x_19);
if (lean_is_scalar(x_17)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_17;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
}
else
{
uint8_t x_45; 
lean_free_object(x_6);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_6, 0);
lean_inc(x_49);
lean_dec(x_6);
lean_inc(x_4);
x_50 = l_Lean_Elab_Term_whnfForall(x_49, x_4, x_5);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
if (lean_obj_tag(x_51) == 7)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_53);
lean_dec(x_11);
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_51, 2);
lean_inc(x_60);
lean_dec(x_51);
lean_inc(x_4);
lean_inc(x_2);
x_61 = l_Lean_Elab_Term_isDefEq(x_2, x_59, x_4, x_52);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(x_2, x_4, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
x_66 = lean_expr_instantiate1(x_60, x_1);
lean_dec(x_60);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_68, 0, x_8);
lean_ctor_set(x_68, 1, x_9);
lean_ctor_set(x_68, 2, x_10);
lean_ctor_set(x_68, 3, x_67);
if (lean_is_scalar(x_65)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_65;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_64);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_60);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_70 = lean_ctor_get(x_63, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_63, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_72 = x_63;
} else {
 lean_dec_ref(x_63);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_60);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_74 = lean_ctor_get(x_61, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_61, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_76 = x_61;
} else {
 lean_dec_ref(x_61);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
else
{
lean_object* x_78; 
lean_dec(x_51);
lean_dec(x_4);
lean_dec(x_2);
x_78 = lean_box(0);
x_54 = x_78;
goto block_58;
}
block_58:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_54);
x_55 = lean_box(0);
if (lean_is_scalar(x_11)) {
 x_56 = lean_alloc_ctor(0, 4, 0);
} else {
 x_56 = x_11;
}
lean_ctor_set(x_56, 0, x_8);
lean_ctor_set(x_56, 1, x_9);
lean_ctor_set(x_56, 2, x_10);
lean_ctor_set(x_56, 3, x_55);
if (lean_is_scalar(x_53)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_53;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
return x_57;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_79 = lean_ctor_get(x_50, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_50, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_81 = x_50;
} else {
 lean_dec_ref(x_50);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_13__propagateExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Binders_13__propagateExpectedType(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_fget(x_1, x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
x_19 = lean_ctor_get(x_4, 2);
x_20 = lean_ctor_get(x_4, 3);
x_21 = lean_ctor_get(x_4, 4);
x_22 = lean_ctor_get(x_4, 5);
x_23 = lean_ctor_get(x_4, 6);
x_24 = lean_ctor_get(x_4, 7);
x_25 = lean_ctor_get(x_4, 8);
x_26 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_27 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_28 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_29 = lean_ctor_get(x_4, 9);
x_30 = l_Lean_Elab_replaceRef(x_10, x_29);
lean_dec(x_29);
x_31 = !lean_is_exclusive(x_17);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_17, 2);
lean_dec(x_32);
x_33 = lean_ctor_get(x_17, 1);
lean_dec(x_33);
lean_inc(x_15);
lean_inc(x_14);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 1, x_14);
lean_inc(x_30);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_ctor_set(x_4, 9, x_30);
lean_inc(x_4);
x_34 = l_Lean_Elab_Term_elabType(x_10, x_4, x_5);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_4);
lean_inc(x_35);
x_37 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(x_35, x_4, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_40);
x_42 = l_Lean_mkFVar(x_40);
lean_inc(x_42);
x_43 = lean_array_push(x_13, x_42);
lean_inc(x_14);
lean_ctor_set(x_3, 0, x_43);
x_44 = lean_ctor_get(x_9, 0);
lean_inc(x_44);
x_45 = l_Lean_Syntax_getId(x_44);
x_46 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
lean_dec(x_9);
lean_inc(x_35);
x_47 = lean_local_ctx_mk_local_decl(x_14, x_40, x_45, x_35, x_46);
x_48 = l_Lean_Elab_replaceRef(x_44, x_30);
lean_dec(x_30);
lean_dec(x_44);
x_49 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_49, 0, x_17);
lean_ctor_set(x_49, 1, x_18);
lean_ctor_set(x_49, 2, x_19);
lean_ctor_set(x_49, 3, x_20);
lean_ctor_set(x_49, 4, x_21);
lean_ctor_set(x_49, 5, x_22);
lean_ctor_set(x_49, 6, x_23);
lean_ctor_set(x_49, 7, x_24);
lean_ctor_set(x_49, 8, x_25);
lean_ctor_set(x_49, 9, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*10, x_26);
lean_ctor_set_uint8(x_49, sizeof(void*)*10 + 1, x_27);
lean_ctor_set_uint8(x_49, sizeof(void*)*10 + 2, x_28);
lean_inc(x_35);
x_50 = l___private_Lean_Elab_Binders_13__propagateExpectedType(x_42, x_35, x_3, x_49, x_41);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_51, 0);
x_55 = lean_ctor_get(x_51, 2);
x_56 = lean_ctor_get(x_51, 3);
x_57 = lean_ctor_get(x_51, 1);
lean_dec(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_47);
lean_inc(x_54);
lean_ctor_set(x_51, 1, x_47);
lean_inc(x_4);
x_58 = l_Lean_Elab_Term_isClass(x_35, x_4, x_52);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_47);
lean_dec(x_42);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_add(x_2, x_61);
lean_dec(x_2);
x_2 = x_62;
x_3 = x_51;
x_5 = x_60;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_51);
x_64 = lean_ctor_get(x_58, 1);
lean_inc(x_64);
lean_dec(x_58);
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
lean_dec(x_59);
x_66 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_64);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_42);
x_69 = lean_array_push(x_55, x_68);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_2, x_70);
lean_dec(x_2);
x_72 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_72, 0, x_54);
lean_ctor_set(x_72, 1, x_47);
lean_ctor_set(x_72, 2, x_69);
lean_ctor_set(x_72, 3, x_56);
x_2 = x_71;
x_3 = x_72;
x_5 = x_67;
goto _start;
}
}
else
{
uint8_t x_74; 
lean_dec(x_51);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_47);
lean_dec(x_42);
lean_dec(x_4);
lean_dec(x_2);
x_74 = !lean_is_exclusive(x_58);
if (x_74 == 0)
{
return x_58;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_58, 0);
x_76 = lean_ctor_get(x_58, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_58);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_51, 0);
x_79 = lean_ctor_get(x_51, 2);
x_80 = lean_ctor_get(x_51, 3);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_51);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_47);
lean_inc(x_78);
x_81 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_47);
lean_ctor_set(x_81, 2, x_79);
lean_ctor_set(x_81, 3, x_80);
lean_inc(x_4);
x_82 = l_Lean_Elab_Term_isClass(x_35, x_4, x_52);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_47);
lean_dec(x_42);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_unsigned_to_nat(1u);
x_86 = lean_nat_add(x_2, x_85);
lean_dec(x_2);
x_2 = x_86;
x_3 = x_81;
x_5 = x_84;
goto _start;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_81);
x_88 = lean_ctor_get(x_82, 1);
lean_inc(x_88);
lean_dec(x_82);
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
lean_dec(x_83);
x_90 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_88);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_42);
x_93 = lean_array_push(x_79, x_92);
x_94 = lean_unsigned_to_nat(1u);
x_95 = lean_nat_add(x_2, x_94);
lean_dec(x_2);
x_96 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_96, 0, x_78);
lean_ctor_set(x_96, 1, x_47);
lean_ctor_set(x_96, 2, x_93);
lean_ctor_set(x_96, 3, x_80);
x_2 = x_95;
x_3 = x_96;
x_5 = x_91;
goto _start;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_47);
lean_dec(x_42);
lean_dec(x_4);
lean_dec(x_2);
x_98 = lean_ctor_get(x_82, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_82, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_100 = x_82;
} else {
 lean_dec_ref(x_82);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_47);
lean_dec(x_42);
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_2);
x_102 = !lean_is_exclusive(x_50);
if (x_102 == 0)
{
return x_50;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_50, 0);
x_104 = lean_ctor_get(x_50, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_50);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_37);
if (x_106 == 0)
{
return x_37;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_37, 0);
x_108 = lean_ctor_get(x_37, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_37);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_2);
x_110 = !lean_is_exclusive(x_34);
if (x_110 == 0)
{
return x_34;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_34, 0);
x_112 = lean_ctor_get(x_34, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_34);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_ctor_get(x_17, 0);
x_115 = lean_ctor_get(x_17, 3);
x_116 = lean_ctor_get(x_17, 4);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_17);
lean_inc(x_15);
lean_inc(x_14);
x_117 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_14);
lean_ctor_set(x_117, 2, x_15);
lean_ctor_set(x_117, 3, x_115);
lean_ctor_set(x_117, 4, x_116);
lean_inc(x_30);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_117);
lean_ctor_set(x_4, 9, x_30);
lean_ctor_set(x_4, 0, x_117);
lean_inc(x_4);
x_118 = l_Lean_Elab_Term_elabType(x_10, x_4, x_5);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
lean_inc(x_4);
lean_inc(x_119);
x_121 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(x_119, x_4, x_120);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
lean_dec(x_121);
x_123 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_122);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
lean_inc(x_124);
x_126 = l_Lean_mkFVar(x_124);
lean_inc(x_126);
x_127 = lean_array_push(x_13, x_126);
lean_inc(x_14);
lean_ctor_set(x_3, 0, x_127);
x_128 = lean_ctor_get(x_9, 0);
lean_inc(x_128);
x_129 = l_Lean_Syntax_getId(x_128);
x_130 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
lean_dec(x_9);
lean_inc(x_119);
x_131 = lean_local_ctx_mk_local_decl(x_14, x_124, x_129, x_119, x_130);
x_132 = l_Lean_Elab_replaceRef(x_128, x_30);
lean_dec(x_30);
lean_dec(x_128);
x_133 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_133, 0, x_117);
lean_ctor_set(x_133, 1, x_18);
lean_ctor_set(x_133, 2, x_19);
lean_ctor_set(x_133, 3, x_20);
lean_ctor_set(x_133, 4, x_21);
lean_ctor_set(x_133, 5, x_22);
lean_ctor_set(x_133, 6, x_23);
lean_ctor_set(x_133, 7, x_24);
lean_ctor_set(x_133, 8, x_25);
lean_ctor_set(x_133, 9, x_132);
lean_ctor_set_uint8(x_133, sizeof(void*)*10, x_26);
lean_ctor_set_uint8(x_133, sizeof(void*)*10 + 1, x_27);
lean_ctor_set_uint8(x_133, sizeof(void*)*10 + 2, x_28);
lean_inc(x_119);
x_134 = l___private_Lean_Elab_Binders_13__propagateExpectedType(x_126, x_119, x_3, x_133, x_125);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = lean_ctor_get(x_135, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_135, 2);
lean_inc(x_138);
x_139 = lean_ctor_get(x_135, 3);
lean_inc(x_139);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 lean_ctor_release(x_135, 3);
 x_140 = x_135;
} else {
 lean_dec_ref(x_135);
 x_140 = lean_box(0);
}
lean_inc(x_139);
lean_inc(x_138);
lean_inc(x_131);
lean_inc(x_137);
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(0, 4, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_137);
lean_ctor_set(x_141, 1, x_131);
lean_ctor_set(x_141, 2, x_138);
lean_ctor_set(x_141, 3, x_139);
lean_inc(x_4);
x_142 = l_Lean_Elab_Term_isClass(x_119, x_4, x_136);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_139);
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_131);
lean_dec(x_126);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = lean_unsigned_to_nat(1u);
x_146 = lean_nat_add(x_2, x_145);
lean_dec(x_2);
x_2 = x_146;
x_3 = x_141;
x_5 = x_144;
goto _start;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_141);
x_148 = lean_ctor_get(x_142, 1);
lean_inc(x_148);
lean_dec(x_142);
x_149 = lean_ctor_get(x_143, 0);
lean_inc(x_149);
lean_dec(x_143);
x_150 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_148);
x_151 = lean_ctor_get(x_150, 1);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_126);
x_153 = lean_array_push(x_138, x_152);
x_154 = lean_unsigned_to_nat(1u);
x_155 = lean_nat_add(x_2, x_154);
lean_dec(x_2);
x_156 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_156, 0, x_137);
lean_ctor_set(x_156, 1, x_131);
lean_ctor_set(x_156, 2, x_153);
lean_ctor_set(x_156, 3, x_139);
x_2 = x_155;
x_3 = x_156;
x_5 = x_151;
goto _start;
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_141);
lean_dec(x_139);
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_131);
lean_dec(x_126);
lean_dec(x_4);
lean_dec(x_2);
x_158 = lean_ctor_get(x_142, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_142, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_160 = x_142;
} else {
 lean_dec_ref(x_142);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_131);
lean_dec(x_126);
lean_dec(x_119);
lean_dec(x_4);
lean_dec(x_2);
x_162 = lean_ctor_get(x_134, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_134, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_164 = x_134;
} else {
 lean_dec_ref(x_134);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_119);
lean_dec(x_4);
lean_dec(x_117);
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_2);
x_166 = lean_ctor_get(x_121, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_121, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_168 = x_121;
} else {
 lean_dec_ref(x_121);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_4);
lean_dec(x_117);
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_2);
x_170 = lean_ctor_get(x_118, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_118, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_172 = x_118;
} else {
 lean_dec_ref(x_118);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_170);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_174 = lean_ctor_get(x_3, 0);
x_175 = lean_ctor_get(x_3, 1);
x_176 = lean_ctor_get(x_3, 2);
x_177 = lean_ctor_get(x_3, 3);
x_178 = lean_ctor_get(x_4, 0);
x_179 = lean_ctor_get(x_4, 1);
x_180 = lean_ctor_get(x_4, 2);
x_181 = lean_ctor_get(x_4, 3);
x_182 = lean_ctor_get(x_4, 4);
x_183 = lean_ctor_get(x_4, 5);
x_184 = lean_ctor_get(x_4, 6);
x_185 = lean_ctor_get(x_4, 7);
x_186 = lean_ctor_get(x_4, 8);
x_187 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_188 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_189 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_190 = lean_ctor_get(x_4, 9);
lean_inc(x_190);
lean_inc(x_186);
lean_inc(x_185);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_4);
x_191 = l_Lean_Elab_replaceRef(x_10, x_190);
lean_dec(x_190);
x_192 = lean_ctor_get(x_178, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_178, 3);
lean_inc(x_193);
x_194 = lean_ctor_get(x_178, 4);
lean_inc(x_194);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 lean_ctor_release(x_178, 2);
 lean_ctor_release(x_178, 3);
 lean_ctor_release(x_178, 4);
 x_195 = x_178;
} else {
 lean_dec_ref(x_178);
 x_195 = lean_box(0);
}
lean_inc(x_176);
lean_inc(x_175);
if (lean_is_scalar(x_195)) {
 x_196 = lean_alloc_ctor(0, 5, 0);
} else {
 x_196 = x_195;
}
lean_ctor_set(x_196, 0, x_192);
lean_ctor_set(x_196, 1, x_175);
lean_ctor_set(x_196, 2, x_176);
lean_ctor_set(x_196, 3, x_193);
lean_ctor_set(x_196, 4, x_194);
lean_inc(x_191);
lean_inc(x_186);
lean_inc(x_185);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_inc(x_196);
x_197 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_179);
lean_ctor_set(x_197, 2, x_180);
lean_ctor_set(x_197, 3, x_181);
lean_ctor_set(x_197, 4, x_182);
lean_ctor_set(x_197, 5, x_183);
lean_ctor_set(x_197, 6, x_184);
lean_ctor_set(x_197, 7, x_185);
lean_ctor_set(x_197, 8, x_186);
lean_ctor_set(x_197, 9, x_191);
lean_ctor_set_uint8(x_197, sizeof(void*)*10, x_187);
lean_ctor_set_uint8(x_197, sizeof(void*)*10 + 1, x_188);
lean_ctor_set_uint8(x_197, sizeof(void*)*10 + 2, x_189);
lean_inc(x_197);
x_198 = l_Lean_Elab_Term_elabType(x_10, x_197, x_5);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
lean_inc(x_197);
lean_inc(x_199);
x_201 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(x_199, x_197, x_200);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_202 = lean_ctor_get(x_201, 1);
lean_inc(x_202);
lean_dec(x_201);
x_203 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_202);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
lean_inc(x_204);
x_206 = l_Lean_mkFVar(x_204);
lean_inc(x_206);
x_207 = lean_array_push(x_174, x_206);
lean_inc(x_175);
lean_ctor_set(x_3, 0, x_207);
x_208 = lean_ctor_get(x_9, 0);
lean_inc(x_208);
x_209 = l_Lean_Syntax_getId(x_208);
x_210 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
lean_dec(x_9);
lean_inc(x_199);
x_211 = lean_local_ctx_mk_local_decl(x_175, x_204, x_209, x_199, x_210);
x_212 = l_Lean_Elab_replaceRef(x_208, x_191);
lean_dec(x_191);
lean_dec(x_208);
x_213 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_213, 0, x_196);
lean_ctor_set(x_213, 1, x_179);
lean_ctor_set(x_213, 2, x_180);
lean_ctor_set(x_213, 3, x_181);
lean_ctor_set(x_213, 4, x_182);
lean_ctor_set(x_213, 5, x_183);
lean_ctor_set(x_213, 6, x_184);
lean_ctor_set(x_213, 7, x_185);
lean_ctor_set(x_213, 8, x_186);
lean_ctor_set(x_213, 9, x_212);
lean_ctor_set_uint8(x_213, sizeof(void*)*10, x_187);
lean_ctor_set_uint8(x_213, sizeof(void*)*10 + 1, x_188);
lean_ctor_set_uint8(x_213, sizeof(void*)*10 + 2, x_189);
lean_inc(x_199);
x_214 = l___private_Lean_Elab_Binders_13__propagateExpectedType(x_206, x_199, x_3, x_213, x_205);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_ctor_get(x_215, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_215, 2);
lean_inc(x_218);
x_219 = lean_ctor_get(x_215, 3);
lean_inc(x_219);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 lean_ctor_release(x_215, 1);
 lean_ctor_release(x_215, 2);
 lean_ctor_release(x_215, 3);
 x_220 = x_215;
} else {
 lean_dec_ref(x_215);
 x_220 = lean_box(0);
}
lean_inc(x_219);
lean_inc(x_218);
lean_inc(x_211);
lean_inc(x_217);
if (lean_is_scalar(x_220)) {
 x_221 = lean_alloc_ctor(0, 4, 0);
} else {
 x_221 = x_220;
}
lean_ctor_set(x_221, 0, x_217);
lean_ctor_set(x_221, 1, x_211);
lean_ctor_set(x_221, 2, x_218);
lean_ctor_set(x_221, 3, x_219);
lean_inc(x_197);
x_222 = l_Lean_Elab_Term_isClass(x_199, x_197, x_216);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; 
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
if (lean_obj_tag(x_223) == 0)
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_219);
lean_dec(x_218);
lean_dec(x_217);
lean_dec(x_211);
lean_dec(x_206);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
lean_dec(x_222);
x_225 = lean_unsigned_to_nat(1u);
x_226 = lean_nat_add(x_2, x_225);
lean_dec(x_2);
x_2 = x_226;
x_3 = x_221;
x_4 = x_197;
x_5 = x_224;
goto _start;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_221);
x_228 = lean_ctor_get(x_222, 1);
lean_inc(x_228);
lean_dec(x_222);
x_229 = lean_ctor_get(x_223, 0);
lean_inc(x_229);
lean_dec(x_223);
x_230 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_228);
x_231 = lean_ctor_get(x_230, 1);
lean_inc(x_231);
lean_dec(x_230);
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_229);
lean_ctor_set(x_232, 1, x_206);
x_233 = lean_array_push(x_218, x_232);
x_234 = lean_unsigned_to_nat(1u);
x_235 = lean_nat_add(x_2, x_234);
lean_dec(x_2);
x_236 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_236, 0, x_217);
lean_ctor_set(x_236, 1, x_211);
lean_ctor_set(x_236, 2, x_233);
lean_ctor_set(x_236, 3, x_219);
x_2 = x_235;
x_3 = x_236;
x_4 = x_197;
x_5 = x_231;
goto _start;
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_221);
lean_dec(x_219);
lean_dec(x_218);
lean_dec(x_217);
lean_dec(x_211);
lean_dec(x_206);
lean_dec(x_197);
lean_dec(x_2);
x_238 = lean_ctor_get(x_222, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_222, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_240 = x_222;
} else {
 lean_dec_ref(x_222);
 x_240 = lean_box(0);
}
if (lean_is_scalar(x_240)) {
 x_241 = lean_alloc_ctor(1, 2, 0);
} else {
 x_241 = x_240;
}
lean_ctor_set(x_241, 0, x_238);
lean_ctor_set(x_241, 1, x_239);
return x_241;
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_211);
lean_dec(x_206);
lean_dec(x_199);
lean_dec(x_197);
lean_dec(x_2);
x_242 = lean_ctor_get(x_214, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_214, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_244 = x_214;
} else {
 lean_dec_ref(x_214);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_242);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_199);
lean_dec(x_197);
lean_dec(x_196);
lean_dec(x_191);
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_181);
lean_dec(x_180);
lean_dec(x_179);
lean_free_object(x_3);
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_174);
lean_dec(x_9);
lean_dec(x_2);
x_246 = lean_ctor_get(x_201, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_201, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_248 = x_201;
} else {
 lean_dec_ref(x_201);
 x_248 = lean_box(0);
}
if (lean_is_scalar(x_248)) {
 x_249 = lean_alloc_ctor(1, 2, 0);
} else {
 x_249 = x_248;
}
lean_ctor_set(x_249, 0, x_246);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_197);
lean_dec(x_196);
lean_dec(x_191);
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_181);
lean_dec(x_180);
lean_dec(x_179);
lean_free_object(x_3);
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_174);
lean_dec(x_9);
lean_dec(x_2);
x_250 = lean_ctor_get(x_198, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_198, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 x_252 = x_198;
} else {
 lean_dec_ref(x_198);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; uint8_t x_267; uint8_t x_268; uint8_t x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_254 = lean_ctor_get(x_3, 0);
x_255 = lean_ctor_get(x_3, 1);
x_256 = lean_ctor_get(x_3, 2);
x_257 = lean_ctor_get(x_3, 3);
lean_inc(x_257);
lean_inc(x_256);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_3);
x_258 = lean_ctor_get(x_4, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_4, 1);
lean_inc(x_259);
x_260 = lean_ctor_get(x_4, 2);
lean_inc(x_260);
x_261 = lean_ctor_get(x_4, 3);
lean_inc(x_261);
x_262 = lean_ctor_get(x_4, 4);
lean_inc(x_262);
x_263 = lean_ctor_get(x_4, 5);
lean_inc(x_263);
x_264 = lean_ctor_get(x_4, 6);
lean_inc(x_264);
x_265 = lean_ctor_get(x_4, 7);
lean_inc(x_265);
x_266 = lean_ctor_get(x_4, 8);
lean_inc(x_266);
x_267 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_268 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_269 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_270 = lean_ctor_get(x_4, 9);
lean_inc(x_270);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 lean_ctor_release(x_4, 5);
 lean_ctor_release(x_4, 6);
 lean_ctor_release(x_4, 7);
 lean_ctor_release(x_4, 8);
 lean_ctor_release(x_4, 9);
 x_271 = x_4;
} else {
 lean_dec_ref(x_4);
 x_271 = lean_box(0);
}
x_272 = l_Lean_Elab_replaceRef(x_10, x_270);
lean_dec(x_270);
x_273 = lean_ctor_get(x_258, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_258, 3);
lean_inc(x_274);
x_275 = lean_ctor_get(x_258, 4);
lean_inc(x_275);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 lean_ctor_release(x_258, 2);
 lean_ctor_release(x_258, 3);
 lean_ctor_release(x_258, 4);
 x_276 = x_258;
} else {
 lean_dec_ref(x_258);
 x_276 = lean_box(0);
}
lean_inc(x_256);
lean_inc(x_255);
if (lean_is_scalar(x_276)) {
 x_277 = lean_alloc_ctor(0, 5, 0);
} else {
 x_277 = x_276;
}
lean_ctor_set(x_277, 0, x_273);
lean_ctor_set(x_277, 1, x_255);
lean_ctor_set(x_277, 2, x_256);
lean_ctor_set(x_277, 3, x_274);
lean_ctor_set(x_277, 4, x_275);
lean_inc(x_272);
lean_inc(x_266);
lean_inc(x_265);
lean_inc(x_264);
lean_inc(x_263);
lean_inc(x_262);
lean_inc(x_261);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_277);
if (lean_is_scalar(x_271)) {
 x_278 = lean_alloc_ctor(0, 10, 3);
} else {
 x_278 = x_271;
}
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_259);
lean_ctor_set(x_278, 2, x_260);
lean_ctor_set(x_278, 3, x_261);
lean_ctor_set(x_278, 4, x_262);
lean_ctor_set(x_278, 5, x_263);
lean_ctor_set(x_278, 6, x_264);
lean_ctor_set(x_278, 7, x_265);
lean_ctor_set(x_278, 8, x_266);
lean_ctor_set(x_278, 9, x_272);
lean_ctor_set_uint8(x_278, sizeof(void*)*10, x_267);
lean_ctor_set_uint8(x_278, sizeof(void*)*10 + 1, x_268);
lean_ctor_set_uint8(x_278, sizeof(void*)*10 + 2, x_269);
lean_inc(x_278);
x_279 = l_Lean_Elab_Term_elabType(x_10, x_278, x_5);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec(x_279);
lean_inc(x_278);
lean_inc(x_280);
x_282 = l___private_Lean_Elab_Binders_12__checkNoOptAutoParam(x_280, x_278, x_281);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_283 = lean_ctor_get(x_282, 1);
lean_inc(x_283);
lean_dec(x_282);
x_284 = l_Lean_Elab_Term_mkFreshFVarId___rarg(x_283);
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
lean_inc(x_285);
x_287 = l_Lean_mkFVar(x_285);
lean_inc(x_287);
x_288 = lean_array_push(x_254, x_287);
lean_inc(x_255);
x_289 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_255);
lean_ctor_set(x_289, 2, x_256);
lean_ctor_set(x_289, 3, x_257);
x_290 = lean_ctor_get(x_9, 0);
lean_inc(x_290);
x_291 = l_Lean_Syntax_getId(x_290);
x_292 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
lean_dec(x_9);
lean_inc(x_280);
x_293 = lean_local_ctx_mk_local_decl(x_255, x_285, x_291, x_280, x_292);
x_294 = l_Lean_Elab_replaceRef(x_290, x_272);
lean_dec(x_272);
lean_dec(x_290);
x_295 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_295, 0, x_277);
lean_ctor_set(x_295, 1, x_259);
lean_ctor_set(x_295, 2, x_260);
lean_ctor_set(x_295, 3, x_261);
lean_ctor_set(x_295, 4, x_262);
lean_ctor_set(x_295, 5, x_263);
lean_ctor_set(x_295, 6, x_264);
lean_ctor_set(x_295, 7, x_265);
lean_ctor_set(x_295, 8, x_266);
lean_ctor_set(x_295, 9, x_294);
lean_ctor_set_uint8(x_295, sizeof(void*)*10, x_267);
lean_ctor_set_uint8(x_295, sizeof(void*)*10 + 1, x_268);
lean_ctor_set_uint8(x_295, sizeof(void*)*10 + 2, x_269);
lean_inc(x_280);
x_296 = l___private_Lean_Elab_Binders_13__propagateExpectedType(x_287, x_280, x_289, x_295, x_286);
if (lean_obj_tag(x_296) == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
lean_dec(x_296);
x_299 = lean_ctor_get(x_297, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_297, 2);
lean_inc(x_300);
x_301 = lean_ctor_get(x_297, 3);
lean_inc(x_301);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 lean_ctor_release(x_297, 2);
 lean_ctor_release(x_297, 3);
 x_302 = x_297;
} else {
 lean_dec_ref(x_297);
 x_302 = lean_box(0);
}
lean_inc(x_301);
lean_inc(x_300);
lean_inc(x_293);
lean_inc(x_299);
if (lean_is_scalar(x_302)) {
 x_303 = lean_alloc_ctor(0, 4, 0);
} else {
 x_303 = x_302;
}
lean_ctor_set(x_303, 0, x_299);
lean_ctor_set(x_303, 1, x_293);
lean_ctor_set(x_303, 2, x_300);
lean_ctor_set(x_303, 3, x_301);
lean_inc(x_278);
x_304 = l_Lean_Elab_Term_isClass(x_280, x_278, x_298);
if (lean_obj_tag(x_304) == 0)
{
lean_object* x_305; 
x_305 = lean_ctor_get(x_304, 0);
lean_inc(x_305);
if (lean_obj_tag(x_305) == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; 
lean_dec(x_301);
lean_dec(x_300);
lean_dec(x_299);
lean_dec(x_293);
lean_dec(x_287);
x_306 = lean_ctor_get(x_304, 1);
lean_inc(x_306);
lean_dec(x_304);
x_307 = lean_unsigned_to_nat(1u);
x_308 = lean_nat_add(x_2, x_307);
lean_dec(x_2);
x_2 = x_308;
x_3 = x_303;
x_4 = x_278;
x_5 = x_306;
goto _start;
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_303);
x_310 = lean_ctor_get(x_304, 1);
lean_inc(x_310);
lean_dec(x_304);
x_311 = lean_ctor_get(x_305, 0);
lean_inc(x_311);
lean_dec(x_305);
x_312 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_310);
x_313 = lean_ctor_get(x_312, 1);
lean_inc(x_313);
lean_dec(x_312);
x_314 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_314, 0, x_311);
lean_ctor_set(x_314, 1, x_287);
x_315 = lean_array_push(x_300, x_314);
x_316 = lean_unsigned_to_nat(1u);
x_317 = lean_nat_add(x_2, x_316);
lean_dec(x_2);
x_318 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_318, 0, x_299);
lean_ctor_set(x_318, 1, x_293);
lean_ctor_set(x_318, 2, x_315);
lean_ctor_set(x_318, 3, x_301);
x_2 = x_317;
x_3 = x_318;
x_4 = x_278;
x_5 = x_313;
goto _start;
}
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
lean_dec(x_303);
lean_dec(x_301);
lean_dec(x_300);
lean_dec(x_299);
lean_dec(x_293);
lean_dec(x_287);
lean_dec(x_278);
lean_dec(x_2);
x_320 = lean_ctor_get(x_304, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_304, 1);
lean_inc(x_321);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 lean_ctor_release(x_304, 1);
 x_322 = x_304;
} else {
 lean_dec_ref(x_304);
 x_322 = lean_box(0);
}
if (lean_is_scalar(x_322)) {
 x_323 = lean_alloc_ctor(1, 2, 0);
} else {
 x_323 = x_322;
}
lean_ctor_set(x_323, 0, x_320);
lean_ctor_set(x_323, 1, x_321);
return x_323;
}
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
lean_dec(x_293);
lean_dec(x_287);
lean_dec(x_280);
lean_dec(x_278);
lean_dec(x_2);
x_324 = lean_ctor_get(x_296, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_296, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_326 = x_296;
} else {
 lean_dec_ref(x_296);
 x_326 = lean_box(0);
}
if (lean_is_scalar(x_326)) {
 x_327 = lean_alloc_ctor(1, 2, 0);
} else {
 x_327 = x_326;
}
lean_ctor_set(x_327, 0, x_324);
lean_ctor_set(x_327, 1, x_325);
return x_327;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_280);
lean_dec(x_278);
lean_dec(x_277);
lean_dec(x_272);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_9);
lean_dec(x_2);
x_328 = lean_ctor_get(x_282, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_282, 1);
lean_inc(x_329);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_330 = x_282;
} else {
 lean_dec_ref(x_282);
 x_330 = lean_box(0);
}
if (lean_is_scalar(x_330)) {
 x_331 = lean_alloc_ctor(1, 2, 0);
} else {
 x_331 = x_330;
}
lean_ctor_set(x_331, 0, x_328);
lean_ctor_set(x_331, 1, x_329);
return x_331;
}
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
lean_dec(x_278);
lean_dec(x_277);
lean_dec(x_272);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_9);
lean_dec(x_2);
x_332 = lean_ctor_get(x_279, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_279, 1);
lean_inc(x_333);
if (lean_is_exclusive(x_279)) {
 lean_ctor_release(x_279, 0);
 lean_ctor_release(x_279, 1);
 x_334 = x_279;
} else {
 lean_dec_ref(x_279);
 x_334 = lean_box(0);
}
if (lean_is_scalar(x_334)) {
 x_335 = lean_alloc_ctor(1, 2, 0);
} else {
 x_335 = x_334;
}
lean_ctor_set(x_335, 0, x_332);
lean_ctor_set(x_335, 1, x_333);
return x_335;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Binders_14__elabFunBinderViews___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Binders_14__elabFunBinderViews___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_14__elabFunBinderViews___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Binders_14__elabFunBinderViews(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_1, x_2);
lean_inc(x_4);
x_10 = l___private_Lean_Elab_Binders_6__matchBinder(x_9, x_4, x_5);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
lean_inc(x_4);
x_14 = l___private_Lean_Elab_Binders_14__elabFunBinderViews___main(x_11, x_13, x_3, x_4, x_12);
lean_dec(x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_2 = x_18;
x_3 = x_15;
x_5 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_4);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
return x_10;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_Array_isEmpty___rarg(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = l_Lean_Elab_Term_getLCtx(x_4, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Elab_Term_getLocalInsts(x_4, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Array_empty___closed__1;
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
lean_ctor_set(x_14, 2, x_11);
lean_ctor_set(x_14, 3, x_2);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_4);
x_16 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux___main(x_1, x_15, x_14, x_4, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_19 = x_16;
} else {
 lean_dec_ref(x_16);
 x_19 = lean_box(0);
}
x_20 = lean_array_get_size(x_11);
lean_dec(x_11);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_17, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_17, 3);
lean_inc(x_24);
lean_dec(x_17);
x_25 = lean_array_get_size(x_23);
x_26 = lean_nat_dec_lt(x_20, x_25);
lean_dec(x_25);
lean_dec(x_20);
if (x_26 == 0)
{
uint8_t x_27; 
lean_dec(x_19);
x_27 = !lean_is_exclusive(x_4);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_4, 0);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 2);
lean_dec(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_dec(x_31);
lean_ctor_set(x_28, 2, x_23);
lean_ctor_set(x_28, 1, x_22);
x_32 = lean_apply_4(x_3, x_21, x_24, x_4, x_18);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_28, 3);
x_35 = lean_ctor_get(x_28, 4);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_28);
x_36 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_22);
lean_ctor_set(x_36, 2, x_23);
lean_ctor_set(x_36, 3, x_34);
lean_ctor_set(x_36, 4, x_35);
lean_ctor_set(x_4, 0, x_36);
x_37 = lean_apply_4(x_3, x_21, x_24, x_4, x_18);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_38 = lean_ctor_get(x_4, 0);
x_39 = lean_ctor_get(x_4, 1);
x_40 = lean_ctor_get(x_4, 2);
x_41 = lean_ctor_get(x_4, 3);
x_42 = lean_ctor_get(x_4, 4);
x_43 = lean_ctor_get(x_4, 5);
x_44 = lean_ctor_get(x_4, 6);
x_45 = lean_ctor_get(x_4, 7);
x_46 = lean_ctor_get(x_4, 8);
x_47 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_48 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_49 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_50 = lean_ctor_get(x_4, 9);
lean_inc(x_50);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
x_51 = lean_ctor_get(x_38, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_38, 3);
lean_inc(x_52);
x_53 = lean_ctor_get(x_38, 4);
lean_inc(x_53);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 lean_ctor_release(x_38, 4);
 x_54 = x_38;
} else {
 lean_dec_ref(x_38);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 5, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_51);
lean_ctor_set(x_55, 1, x_22);
lean_ctor_set(x_55, 2, x_23);
lean_ctor_set(x_55, 3, x_52);
lean_ctor_set(x_55, 4, x_53);
x_56 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_39);
lean_ctor_set(x_56, 2, x_40);
lean_ctor_set(x_56, 3, x_41);
lean_ctor_set(x_56, 4, x_42);
lean_ctor_set(x_56, 5, x_43);
lean_ctor_set(x_56, 6, x_44);
lean_ctor_set(x_56, 7, x_45);
lean_ctor_set(x_56, 8, x_46);
lean_ctor_set(x_56, 9, x_50);
lean_ctor_set_uint8(x_56, sizeof(void*)*10, x_47);
lean_ctor_set_uint8(x_56, sizeof(void*)*10 + 1, x_48);
lean_ctor_set_uint8(x_56, sizeof(void*)*10 + 2, x_49);
x_57 = lean_apply_4(x_3, x_21, x_24, x_56, x_18);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_58 = lean_ctor_get(x_18, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_58, 2);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_ctor_get(x_59, 2);
lean_inc(x_60);
lean_dec(x_59);
x_162 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_18);
x_163 = lean_ctor_get(x_4, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = !lean_is_exclusive(x_4);
if (x_165 == 0)
{
lean_object* x_166; uint8_t x_167; 
x_166 = lean_ctor_get(x_4, 0);
lean_dec(x_166);
x_167 = !lean_is_exclusive(x_163);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_163, 2);
lean_dec(x_168);
x_169 = lean_ctor_get(x_163, 1);
lean_dec(x_169);
lean_ctor_set(x_163, 2, x_23);
lean_ctor_set(x_163, 1, x_22);
x_170 = lean_apply_4(x_3, x_21, x_24, x_4, x_164);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_173, 0, x_171);
x_61 = x_173;
x_62 = x_172;
goto block_161;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_170, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
lean_dec(x_170);
x_176 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_176, 0, x_174);
x_61 = x_176;
x_62 = x_175;
goto block_161;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_177 = lean_ctor_get(x_163, 0);
x_178 = lean_ctor_get(x_163, 3);
x_179 = lean_ctor_get(x_163, 4);
lean_inc(x_179);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_163);
x_180 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_22);
lean_ctor_set(x_180, 2, x_23);
lean_ctor_set(x_180, 3, x_178);
lean_ctor_set(x_180, 4, x_179);
lean_ctor_set(x_4, 0, x_180);
x_181 = lean_apply_4(x_3, x_21, x_24, x_4, x_164);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_184, 0, x_182);
x_61 = x_184;
x_62 = x_183;
goto block_161;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_185 = lean_ctor_get(x_181, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_181, 1);
lean_inc(x_186);
lean_dec(x_181);
x_187 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_187, 0, x_185);
x_61 = x_187;
x_62 = x_186;
goto block_161;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; uint8_t x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_188 = lean_ctor_get(x_4, 1);
x_189 = lean_ctor_get(x_4, 2);
x_190 = lean_ctor_get(x_4, 3);
x_191 = lean_ctor_get(x_4, 4);
x_192 = lean_ctor_get(x_4, 5);
x_193 = lean_ctor_get(x_4, 6);
x_194 = lean_ctor_get(x_4, 7);
x_195 = lean_ctor_get(x_4, 8);
x_196 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_197 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_198 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_199 = lean_ctor_get(x_4, 9);
lean_inc(x_199);
lean_inc(x_195);
lean_inc(x_194);
lean_inc(x_193);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_4);
x_200 = lean_ctor_get(x_163, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_163, 3);
lean_inc(x_201);
x_202 = lean_ctor_get(x_163, 4);
lean_inc(x_202);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 lean_ctor_release(x_163, 2);
 lean_ctor_release(x_163, 3);
 lean_ctor_release(x_163, 4);
 x_203 = x_163;
} else {
 lean_dec_ref(x_163);
 x_203 = lean_box(0);
}
if (lean_is_scalar(x_203)) {
 x_204 = lean_alloc_ctor(0, 5, 0);
} else {
 x_204 = x_203;
}
lean_ctor_set(x_204, 0, x_200);
lean_ctor_set(x_204, 1, x_22);
lean_ctor_set(x_204, 2, x_23);
lean_ctor_set(x_204, 3, x_201);
lean_ctor_set(x_204, 4, x_202);
x_205 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_188);
lean_ctor_set(x_205, 2, x_189);
lean_ctor_set(x_205, 3, x_190);
lean_ctor_set(x_205, 4, x_191);
lean_ctor_set(x_205, 5, x_192);
lean_ctor_set(x_205, 6, x_193);
lean_ctor_set(x_205, 7, x_194);
lean_ctor_set(x_205, 8, x_195);
lean_ctor_set(x_205, 9, x_199);
lean_ctor_set_uint8(x_205, sizeof(void*)*10, x_196);
lean_ctor_set_uint8(x_205, sizeof(void*)*10 + 1, x_197);
lean_ctor_set_uint8(x_205, sizeof(void*)*10 + 2, x_198);
x_206 = lean_apply_4(x_3, x_21, x_24, x_205, x_164);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
lean_dec(x_206);
x_209 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_209, 0, x_207);
x_61 = x_209;
x_62 = x_208;
goto block_161;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_206, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_206, 1);
lean_inc(x_211);
lean_dec(x_206);
x_212 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_212, 0, x_210);
x_61 = x_212;
x_62 = x_211;
goto block_161;
}
}
block_161:
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_63, 2);
lean_inc(x_64);
x_65 = lean_ctor_get(x_61, 0);
lean_inc(x_65);
lean_dec(x_61);
x_66 = !lean_is_exclusive(x_62);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_62, 0);
lean_dec(x_67);
x_68 = !lean_is_exclusive(x_63);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; 
x_69 = lean_ctor_get(x_63, 2);
lean_dec(x_69);
x_70 = !lean_is_exclusive(x_64);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_64, 2);
lean_dec(x_71);
lean_ctor_set(x_64, 2, x_60);
if (lean_is_scalar(x_19)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_19;
 lean_ctor_set_tag(x_72, 1);
}
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_62);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_64, 0);
x_74 = lean_ctor_get(x_64, 1);
x_75 = lean_ctor_get(x_64, 3);
x_76 = lean_ctor_get(x_64, 4);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_64);
x_77 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_77, 0, x_73);
lean_ctor_set(x_77, 1, x_74);
lean_ctor_set(x_77, 2, x_60);
lean_ctor_set(x_77, 3, x_75);
lean_ctor_set(x_77, 4, x_76);
lean_ctor_set(x_63, 2, x_77);
if (lean_is_scalar(x_19)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_19;
 lean_ctor_set_tag(x_78, 1);
}
lean_ctor_set(x_78, 0, x_65);
lean_ctor_set(x_78, 1, x_62);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_79 = lean_ctor_get(x_63, 0);
x_80 = lean_ctor_get(x_63, 1);
x_81 = lean_ctor_get(x_63, 3);
x_82 = lean_ctor_get(x_63, 4);
x_83 = lean_ctor_get(x_63, 5);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_63);
x_84 = lean_ctor_get(x_64, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_64, 1);
lean_inc(x_85);
x_86 = lean_ctor_get(x_64, 3);
lean_inc(x_86);
x_87 = lean_ctor_get(x_64, 4);
lean_inc(x_87);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 lean_ctor_release(x_64, 2);
 lean_ctor_release(x_64, 3);
 lean_ctor_release(x_64, 4);
 x_88 = x_64;
} else {
 lean_dec_ref(x_64);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 5, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_84);
lean_ctor_set(x_89, 1, x_85);
lean_ctor_set(x_89, 2, x_60);
lean_ctor_set(x_89, 3, x_86);
lean_ctor_set(x_89, 4, x_87);
x_90 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_90, 0, x_79);
lean_ctor_set(x_90, 1, x_80);
lean_ctor_set(x_90, 2, x_89);
lean_ctor_set(x_90, 3, x_81);
lean_ctor_set(x_90, 4, x_82);
lean_ctor_set(x_90, 5, x_83);
lean_ctor_set(x_62, 0, x_90);
if (lean_is_scalar(x_19)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_19;
 lean_ctor_set_tag(x_91, 1);
}
lean_ctor_set(x_91, 0, x_65);
lean_ctor_set(x_91, 1, x_62);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_92 = lean_ctor_get(x_62, 1);
x_93 = lean_ctor_get(x_62, 2);
x_94 = lean_ctor_get(x_62, 3);
x_95 = lean_ctor_get(x_62, 4);
x_96 = lean_ctor_get(x_62, 5);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_62);
x_97 = lean_ctor_get(x_63, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_63, 1);
lean_inc(x_98);
x_99 = lean_ctor_get(x_63, 3);
lean_inc(x_99);
x_100 = lean_ctor_get(x_63, 4);
lean_inc(x_100);
x_101 = lean_ctor_get(x_63, 5);
lean_inc(x_101);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 lean_ctor_release(x_63, 4);
 lean_ctor_release(x_63, 5);
 x_102 = x_63;
} else {
 lean_dec_ref(x_63);
 x_102 = lean_box(0);
}
x_103 = lean_ctor_get(x_64, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_64, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_64, 3);
lean_inc(x_105);
x_106 = lean_ctor_get(x_64, 4);
lean_inc(x_106);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 lean_ctor_release(x_64, 2);
 lean_ctor_release(x_64, 3);
 lean_ctor_release(x_64, 4);
 x_107 = x_64;
} else {
 lean_dec_ref(x_64);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(0, 5, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_103);
lean_ctor_set(x_108, 1, x_104);
lean_ctor_set(x_108, 2, x_60);
lean_ctor_set(x_108, 3, x_105);
lean_ctor_set(x_108, 4, x_106);
if (lean_is_scalar(x_102)) {
 x_109 = lean_alloc_ctor(0, 6, 0);
} else {
 x_109 = x_102;
}
lean_ctor_set(x_109, 0, x_97);
lean_ctor_set(x_109, 1, x_98);
lean_ctor_set(x_109, 2, x_108);
lean_ctor_set(x_109, 3, x_99);
lean_ctor_set(x_109, 4, x_100);
lean_ctor_set(x_109, 5, x_101);
x_110 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_92);
lean_ctor_set(x_110, 2, x_93);
lean_ctor_set(x_110, 3, x_94);
lean_ctor_set(x_110, 4, x_95);
lean_ctor_set(x_110, 5, x_96);
if (lean_is_scalar(x_19)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_19;
 lean_ctor_set_tag(x_111, 1);
}
lean_ctor_set(x_111, 0, x_65);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_62, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_112, 2);
lean_inc(x_113);
x_114 = lean_ctor_get(x_61, 0);
lean_inc(x_114);
lean_dec(x_61);
x_115 = !lean_is_exclusive(x_62);
if (x_115 == 0)
{
lean_object* x_116; uint8_t x_117; 
x_116 = lean_ctor_get(x_62, 0);
lean_dec(x_116);
x_117 = !lean_is_exclusive(x_112);
if (x_117 == 0)
{
lean_object* x_118; uint8_t x_119; 
x_118 = lean_ctor_get(x_112, 2);
lean_dec(x_118);
x_119 = !lean_is_exclusive(x_113);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_113, 2);
lean_dec(x_120);
lean_ctor_set(x_113, 2, x_60);
if (lean_is_scalar(x_19)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_19;
}
lean_ctor_set(x_121, 0, x_114);
lean_ctor_set(x_121, 1, x_62);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_122 = lean_ctor_get(x_113, 0);
x_123 = lean_ctor_get(x_113, 1);
x_124 = lean_ctor_get(x_113, 3);
x_125 = lean_ctor_get(x_113, 4);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_113);
x_126 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_123);
lean_ctor_set(x_126, 2, x_60);
lean_ctor_set(x_126, 3, x_124);
lean_ctor_set(x_126, 4, x_125);
lean_ctor_set(x_112, 2, x_126);
if (lean_is_scalar(x_19)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_19;
}
lean_ctor_set(x_127, 0, x_114);
lean_ctor_set(x_127, 1, x_62);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_128 = lean_ctor_get(x_112, 0);
x_129 = lean_ctor_get(x_112, 1);
x_130 = lean_ctor_get(x_112, 3);
x_131 = lean_ctor_get(x_112, 4);
x_132 = lean_ctor_get(x_112, 5);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_112);
x_133 = lean_ctor_get(x_113, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_113, 1);
lean_inc(x_134);
x_135 = lean_ctor_get(x_113, 3);
lean_inc(x_135);
x_136 = lean_ctor_get(x_113, 4);
lean_inc(x_136);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 lean_ctor_release(x_113, 2);
 lean_ctor_release(x_113, 3);
 lean_ctor_release(x_113, 4);
 x_137 = x_113;
} else {
 lean_dec_ref(x_113);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(0, 5, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_133);
lean_ctor_set(x_138, 1, x_134);
lean_ctor_set(x_138, 2, x_60);
lean_ctor_set(x_138, 3, x_135);
lean_ctor_set(x_138, 4, x_136);
x_139 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_139, 0, x_128);
lean_ctor_set(x_139, 1, x_129);
lean_ctor_set(x_139, 2, x_138);
lean_ctor_set(x_139, 3, x_130);
lean_ctor_set(x_139, 4, x_131);
lean_ctor_set(x_139, 5, x_132);
lean_ctor_set(x_62, 0, x_139);
if (lean_is_scalar(x_19)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_19;
}
lean_ctor_set(x_140, 0, x_114);
lean_ctor_set(x_140, 1, x_62);
return x_140;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_141 = lean_ctor_get(x_62, 1);
x_142 = lean_ctor_get(x_62, 2);
x_143 = lean_ctor_get(x_62, 3);
x_144 = lean_ctor_get(x_62, 4);
x_145 = lean_ctor_get(x_62, 5);
lean_inc(x_145);
lean_inc(x_144);
lean_inc(x_143);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_62);
x_146 = lean_ctor_get(x_112, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_112, 1);
lean_inc(x_147);
x_148 = lean_ctor_get(x_112, 3);
lean_inc(x_148);
x_149 = lean_ctor_get(x_112, 4);
lean_inc(x_149);
x_150 = lean_ctor_get(x_112, 5);
lean_inc(x_150);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 lean_ctor_release(x_112, 2);
 lean_ctor_release(x_112, 3);
 lean_ctor_release(x_112, 4);
 lean_ctor_release(x_112, 5);
 x_151 = x_112;
} else {
 lean_dec_ref(x_112);
 x_151 = lean_box(0);
}
x_152 = lean_ctor_get(x_113, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_113, 1);
lean_inc(x_153);
x_154 = lean_ctor_get(x_113, 3);
lean_inc(x_154);
x_155 = lean_ctor_get(x_113, 4);
lean_inc(x_155);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 lean_ctor_release(x_113, 2);
 lean_ctor_release(x_113, 3);
 lean_ctor_release(x_113, 4);
 x_156 = x_113;
} else {
 lean_dec_ref(x_113);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(0, 5, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_152);
lean_ctor_set(x_157, 1, x_153);
lean_ctor_set(x_157, 2, x_60);
lean_ctor_set(x_157, 3, x_154);
lean_ctor_set(x_157, 4, x_155);
if (lean_is_scalar(x_151)) {
 x_158 = lean_alloc_ctor(0, 6, 0);
} else {
 x_158 = x_151;
}
lean_ctor_set(x_158, 0, x_146);
lean_ctor_set(x_158, 1, x_147);
lean_ctor_set(x_158, 2, x_157);
lean_ctor_set(x_158, 3, x_148);
lean_ctor_set(x_158, 4, x_149);
lean_ctor_set(x_158, 5, x_150);
x_159 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_141);
lean_ctor_set(x_159, 2, x_142);
lean_ctor_set(x_159, 3, x_143);
lean_ctor_set(x_159, 4, x_144);
lean_ctor_set(x_159, 5, x_145);
if (lean_is_scalar(x_19)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_19;
}
lean_ctor_set(x_160, 0, x_114);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
}
else
{
uint8_t x_213; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
x_213 = !lean_is_exclusive(x_16);
if (x_213 == 0)
{
return x_16;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_16, 0);
x_215 = lean_ctor_get(x_16, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_16);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
else
{
lean_object* x_217; lean_object* x_218; 
x_217 = l_Array_empty___closed__1;
x_218 = lean_apply_4(x_3, x_217, x_2, x_4, x_5);
return x_218;
}
}
}
lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFunBinders___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_elabFunBinders___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 1;
lean_inc(x_4);
x_7 = l_Lean_Elab_Term_elabTerm(x_1, x_3, x_6, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Elab_Term_mkLambda(x_2, x_8, x_4, x_9);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_getArgs(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(3u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Elab_Term_expandFunBinders(x_7, x_9, x_3, x_4);
lean_dec(x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFun___lambda__1), 5, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Lean_Elab_Term_elabFunBinders___rarg(x_16, x_2, x_18, x_3, x_15);
lean_dec(x_16);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
x_23 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_20);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Elab_Term_getMainModule___rarg(x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Array_empty___closed__1;
x_29 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_21, x_21, x_27, x_28);
lean_dec(x_21);
x_30 = l_Lean_nullKind___closed__2;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_33 = lean_array_push(x_32, x_31);
x_34 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_35 = lean_array_push(x_33, x_34);
x_36 = lean_array_push(x_35, x_22);
x_37 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = !lean_is_exclusive(x_3);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_3, 7);
lean_inc(x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_3, 7, x_42);
x_43 = 1;
x_44 = l_Lean_Elab_Term_elabTerm(x_38, x_2, x_43, x_3, x_26);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_45 = lean_ctor_get(x_3, 0);
x_46 = lean_ctor_get(x_3, 1);
x_47 = lean_ctor_get(x_3, 2);
x_48 = lean_ctor_get(x_3, 3);
x_49 = lean_ctor_get(x_3, 4);
x_50 = lean_ctor_get(x_3, 5);
x_51 = lean_ctor_get(x_3, 6);
x_52 = lean_ctor_get(x_3, 7);
x_53 = lean_ctor_get(x_3, 8);
x_54 = lean_ctor_get_uint8(x_3, sizeof(void*)*10);
x_55 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 1);
x_56 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 2);
x_57 = lean_ctor_get(x_3, 9);
lean_inc(x_57);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_3);
lean_inc(x_38);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_38);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_52);
x_60 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_60, 0, x_45);
lean_ctor_set(x_60, 1, x_46);
lean_ctor_set(x_60, 2, x_47);
lean_ctor_set(x_60, 3, x_48);
lean_ctor_set(x_60, 4, x_49);
lean_ctor_set(x_60, 5, x_50);
lean_ctor_set(x_60, 6, x_51);
lean_ctor_set(x_60, 7, x_59);
lean_ctor_set(x_60, 8, x_53);
lean_ctor_set(x_60, 9, x_57);
lean_ctor_set_uint8(x_60, sizeof(void*)*10, x_54);
lean_ctor_set_uint8(x_60, sizeof(void*)*10 + 1, x_55);
lean_ctor_set_uint8(x_60, sizeof(void*)*10 + 2, x_56);
x_61 = 1;
x_62 = l_Lean_Elab_Term_elabTerm(x_38, x_2, x_61, x_60, x_26);
return x_62;
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFun), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandOptType(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Syntax_isNone(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_2, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_mkHole(x_1);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_expandOptType(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_Elab_Term_elabType(x_1, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_7);
lean_inc(x_4);
x_10 = l_Lean_Elab_Term_elabTermEnsuringType(x_2, x_9, x_4, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_Lean_Elab_Term_mkForall(x_3, x_7, x_4, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_mkLambda(x_3, x_11, x_4, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_14);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_32 = !lean_is_exclusive(x_10);
if (x_32 == 0)
{
return x_10;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_6);
if (x_36 == 0)
{
return x_6;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_6, 0);
x_38 = lean_ctor_get(x_6, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_6);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 1;
lean_inc(x_4);
x_7 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_6, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_4);
x_10 = l_Lean_Elab_Term_instantiateMVars(x_8, x_4, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_mkOptionalNode___closed__2;
x_14 = lean_array_push(x_13, x_3);
x_15 = l_Lean_Elab_Term_mkLambda(x_14, x_11, x_4, x_12);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_4);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
return x_7;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 1;
lean_inc(x_4);
x_7 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_6, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_4);
x_10 = l_Lean_Elab_Term_instantiateMVars(x_8, x_4, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_mkLet(x_3, x_11, x_4, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_7);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Parser_Term_let___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("decl");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___closed__1;
x_2 = l_Lean_Elab_Term_elabLetDeclAux___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__1), 5, 2);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_4);
lean_inc(x_8);
x_11 = l_Lean_Elab_Term_elabBinders___rarg(x_2, x_10, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_34 = l_Lean_Elab_Term_getOptions(x_8, x_13);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Term_elabLetDeclAux___closed__3;
x_38 = l_Lean_checkTraceOption(x_35, x_37);
lean_dec(x_35);
if (x_38 == 0)
{
x_16 = x_36;
goto block_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_inc(x_1);
x_39 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_39, 0, x_1);
x_40 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_41 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_inc(x_14);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_14);
x_43 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__8;
x_45 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
lean_inc(x_15);
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_15);
x_47 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Elab_Term_logTrace(x_37, x_47, x_8, x_36);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_16 = x_49;
goto block_33;
}
block_33:
{
if (x_7 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__2), 5, 2);
lean_closure_set(x_17, 0, x_5);
lean_closure_set(x_17, 1, x_6);
x_18 = 0;
x_19 = l_Lean_Elab_Term_withLocalDecl___rarg(x_1, x_18, x_14, x_17, x_8, x_16);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = l_Lean_mkApp(x_21, x_15);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = l_Lean_mkApp(x_23, x_15);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_15);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__3), 5, 2);
lean_closure_set(x_31, 0, x_5);
lean_closure_set(x_31, 1, x_6);
x_32 = l_Lean_Elab_Term_withLetDecl___rarg(x_1, x_14, x_15, x_31, x_8, x_16);
return x_32;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_11);
if (x_50 == 0)
{
return x_11;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_11, 0);
x_52 = lean_ctor_get(x_11, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_11);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_Lean_Elab_Term_elabLetDeclAux(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_8, x_9);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Binders_15__expandLetIdLhs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getId(x_3);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_getArgs(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Elab_Term_expandOptType(x_1, x_9);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Binders_15__expandLetIdLhs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Binders_15__expandLetIdLhs(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_16__getMatchAltNumPatterns(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArg(x_3, x_2);
lean_dec(x_3);
x_5 = l_Lean_Syntax_getArgs(x_4);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(2u);
x_7 = l_Array_empty___closed__1;
x_8 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_6, x_5, x_2, x_7);
lean_dec(x_5);
x_9 = lean_array_get_size(x_8);
lean_dec(x_8);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Binders_16__getMatchAltNumPatterns___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Binders_16__getMatchAltNumPatterns(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__9;
x_2 = l_Lean_mkOptionalNode___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
x_11 = lean_nat_add(x_6, x_9);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_13);
lean_ctor_set(x_5, 1, x_6);
x_15 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_16 = l_Lean_addMacroScope(x_13, x_15, x_6);
x_17 = lean_box(0);
x_18 = l_Lean_SourceInfo_inhabited___closed__1;
x_19 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2;
x_20 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_16);
lean_ctor_set(x_20, 3, x_17);
x_21 = l_Array_isEmpty___rarg(x_4);
x_22 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3;
lean_inc(x_20);
x_23 = lean_array_push(x_22, x_20);
x_24 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
if (x_21 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = l_List_reprAux___main___rarg___closed__1;
x_27 = l_Lean_mkAtomFrom(x_1, x_26);
x_28 = lean_array_push(x_4, x_27);
x_29 = lean_array_push(x_28, x_25);
x_30 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_2, x_10, x_29, x_5, x_11);
lean_dec(x_10);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Array_empty___closed__1;
x_34 = lean_array_push(x_33, x_20);
x_35 = l_Lean_nullKind___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_38 = lean_array_push(x_37, x_36);
x_39 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_40 = lean_array_push(x_38, x_39);
x_41 = lean_array_push(x_40, x_32);
x_42 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_30, 0, x_43);
return x_30;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_44 = lean_ctor_get(x_30, 0);
x_45 = lean_ctor_get(x_30, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_30);
x_46 = l_Array_empty___closed__1;
x_47 = lean_array_push(x_46, x_20);
x_48 = l_Lean_nullKind___closed__2;
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_51 = lean_array_push(x_50, x_49);
x_52 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_53 = lean_array_push(x_51, x_52);
x_54 = lean_array_push(x_53, x_44);
x_55 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_45);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_array_push(x_4, x_25);
x_59 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_2, x_10, x_58, x_5, x_11);
lean_dec(x_10);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = l_Array_empty___closed__1;
x_63 = lean_array_push(x_62, x_20);
x_64 = l_Lean_nullKind___closed__2;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_67 = lean_array_push(x_66, x_65);
x_68 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_69 = lean_array_push(x_67, x_68);
x_70 = lean_array_push(x_69, x_61);
x_71 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
lean_ctor_set(x_59, 0, x_72);
return x_59;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_73 = lean_ctor_get(x_59, 0);
x_74 = lean_ctor_get(x_59, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_59);
x_75 = l_Array_empty___closed__1;
x_76 = lean_array_push(x_75, x_20);
x_77 = l_Lean_nullKind___closed__2;
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_80 = lean_array_push(x_79, x_78);
x_81 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_82 = lean_array_push(x_80, x_81);
x_83 = lean_array_push(x_82, x_73);
x_84 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_74);
return x_86;
}
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_87 = lean_ctor_get(x_5, 0);
x_88 = lean_ctor_get(x_5, 2);
x_89 = lean_ctor_get(x_5, 3);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_87);
x_90 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_6);
lean_ctor_set(x_90, 2, x_88);
lean_ctor_set(x_90, 3, x_89);
x_91 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_92 = l_Lean_addMacroScope(x_87, x_91, x_6);
x_93 = lean_box(0);
x_94 = l_Lean_SourceInfo_inhabited___closed__1;
x_95 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2;
x_96 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
lean_ctor_set(x_96, 2, x_92);
lean_ctor_set(x_96, 3, x_93);
x_97 = l_Array_isEmpty___rarg(x_4);
x_98 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3;
lean_inc(x_96);
x_99 = lean_array_push(x_98, x_96);
x_100 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
if (x_97 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_102 = l_List_reprAux___main___rarg___closed__1;
x_103 = l_Lean_mkAtomFrom(x_1, x_102);
x_104 = lean_array_push(x_4, x_103);
x_105 = lean_array_push(x_104, x_101);
x_106 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_2, x_10, x_105, x_90, x_11);
lean_dec(x_10);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_109 = x_106;
} else {
 lean_dec_ref(x_106);
 x_109 = lean_box(0);
}
x_110 = l_Array_empty___closed__1;
x_111 = lean_array_push(x_110, x_96);
x_112 = l_Lean_nullKind___closed__2;
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
x_114 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_115 = lean_array_push(x_114, x_113);
x_116 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_117 = lean_array_push(x_115, x_116);
x_118 = lean_array_push(x_117, x_107);
x_119 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
if (lean_is_scalar(x_109)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_109;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_108);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_122 = lean_array_push(x_4, x_101);
x_123 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_2, x_10, x_122, x_90, x_11);
lean_dec(x_10);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_126 = x_123;
} else {
 lean_dec_ref(x_123);
 x_126 = lean_box(0);
}
x_127 = l_Array_empty___closed__1;
x_128 = lean_array_push(x_127, x_96);
x_129 = l_Lean_nullKind___closed__2;
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
x_131 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_132 = lean_array_push(x_131, x_130);
x_133 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_134 = lean_array_push(x_132, x_133);
x_135 = lean_array_push(x_134, x_124);
x_136 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
if (lean_is_scalar(x_126)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_126;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_125);
return x_138;
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_5);
x_139 = l_Lean_Parser_Term_match___elambda__1___closed__5;
x_140 = l_Lean_mkAtomFrom(x_1, x_139);
x_141 = l_Lean_nullKind;
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_4);
x_143 = l_Lean_Parser_Term_structInst___elambda__1___closed__7;
x_144 = l_Lean_mkAtomFrom(x_1, x_143);
x_145 = l_Lean_Meta_mkEqNDRec___closed__6;
x_146 = lean_array_push(x_145, x_140);
x_147 = lean_array_push(x_146, x_142);
x_148 = l_Lean_mkOptionalNode___closed__1;
x_149 = lean_array_push(x_147, x_148);
x_150 = lean_array_push(x_149, x_144);
x_151 = lean_array_push(x_150, x_148);
x_152 = lean_array_push(x_151, x_2);
x_153 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_6);
return x_155;
}
}
}
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_56; uint8_t x_57; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_inc(x_9);
x_12 = l_Lean_Syntax_getKind(x_9);
x_56 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_57 = lean_name_eq(x_12, x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = l_Lean_Parser_Term_letPatDecl___elambda__1___closed__2;
x_59 = lean_name_eq(x_12, x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
lean_dec(x_11);
x_60 = l_Lean_Parser_Term_letEqnsDecl___elambda__1___closed__2;
x_61 = lean_name_eq(x_12, x_60);
lean_dec(x_12);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_62 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_5);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_63 = lean_unsigned_to_nat(4u);
x_64 = l_Lean_Syntax_getArg(x_9, x_63);
x_65 = l___private_Lean_Elab_Binders_16__getMatchAltNumPatterns(x_64);
x_66 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_Elab_Term_getEnv___rarg(x_68);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 0);
lean_inc(x_71);
lean_dec(x_69);
x_72 = !lean_is_exclusive(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_73 = lean_ctor_get(x_70, 5);
x_74 = lean_ctor_get(x_4, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_74, 3);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 4);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_environment_main_module(x_71);
x_78 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_67);
lean_ctor_set(x_78, 2, x_75);
lean_ctor_set(x_78, 3, x_76);
x_79 = l_Array_empty___closed__1;
x_80 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_64, x_65, x_79, x_78, x_73);
lean_dec(x_65);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
lean_ctor_set(x_70, 5, x_82);
x_13 = x_81;
x_14 = x_70;
goto block_55;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_83 = lean_ctor_get(x_70, 0);
x_84 = lean_ctor_get(x_70, 1);
x_85 = lean_ctor_get(x_70, 2);
x_86 = lean_ctor_get(x_70, 3);
x_87 = lean_ctor_get(x_70, 4);
x_88 = lean_ctor_get(x_70, 5);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_70);
x_89 = lean_ctor_get(x_4, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_89, 3);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 4);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_environment_main_module(x_71);
x_93 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_67);
lean_ctor_set(x_93, 2, x_90);
lean_ctor_set(x_93, 3, x_91);
x_94 = l_Array_empty___closed__1;
x_95 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main(x_1, x_64, x_65, x_94, x_93, x_88);
lean_dec(x_65);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_84);
lean_ctor_set(x_98, 2, x_85);
lean_ctor_set(x_98, 3, x_86);
lean_ctor_set(x_98, 4, x_87);
lean_ctor_set(x_98, 5, x_97);
x_13 = x_96;
x_14 = x_98;
goto block_55;
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_12);
lean_dec(x_7);
x_99 = l_Lean_Syntax_getArg(x_9, x_8);
x_100 = lean_unsigned_to_nat(2u);
x_101 = l_Lean_Syntax_getArg(x_9, x_100);
x_102 = l_Lean_Elab_Term_expandOptType(x_1, x_101);
lean_dec(x_101);
x_103 = lean_unsigned_to_nat(4u);
x_104 = l_Lean_Syntax_getArg(x_9, x_103);
lean_dec(x_9);
x_105 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = l_Lean_Elab_Term_getMainModule___rarg(x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_112 = l_Lean_addMacroScope(x_109, x_111, x_106);
x_113 = lean_box(0);
x_114 = l_Lean_SourceInfo_inhabited___closed__1;
x_115 = l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2;
x_116 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_116, 2, x_112);
lean_ctor_set(x_116, 3, x_113);
x_117 = l_Array_empty___closed__1;
lean_inc(x_116);
x_118 = lean_array_push(x_117, x_116);
x_119 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_120 = lean_array_push(x_118, x_119);
x_121 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_122 = lean_array_push(x_121, x_102);
x_123 = l_Lean_Parser_Term_typeSpec___elambda__1___closed__2;
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
x_125 = lean_array_push(x_117, x_124);
x_126 = l_Lean_nullKind___closed__2;
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
x_128 = lean_array_push(x_120, x_127);
x_129 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__4;
x_130 = lean_array_push(x_128, x_129);
x_131 = lean_array_push(x_130, x_104);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_56);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_array_push(x_117, x_132);
x_134 = l_Lean_Parser_Term_letDecl___closed__2;
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__2;
x_137 = lean_array_push(x_136, x_135);
x_138 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_139 = lean_array_push(x_137, x_138);
x_140 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3;
x_141 = lean_array_push(x_140, x_116);
x_142 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
x_144 = lean_array_push(x_117, x_143);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_126);
lean_ctor_set(x_145, 1, x_144);
x_146 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_147 = lean_array_push(x_146, x_145);
x_148 = lean_array_push(x_147, x_119);
x_149 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5;
x_150 = lean_array_push(x_148, x_149);
x_151 = lean_array_push(x_150, x_119);
x_152 = lean_array_push(x_117, x_99);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_126);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_array_push(x_117, x_153);
x_155 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_156 = lean_array_push(x_154, x_155);
x_157 = lean_array_push(x_156, x_11);
x_158 = l_Lean_Parser_Term_matchAlt___closed__2;
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
x_160 = lean_array_push(x_117, x_159);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_126);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_array_push(x_151, x_161);
x_163 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_162);
x_165 = lean_array_push(x_139, x_164);
x_166 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
if (x_3 == 0)
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_4);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; 
x_169 = lean_ctor_get(x_4, 7);
x_170 = l_Lean_Parser_Term_let_x21___elambda__1___closed__2;
x_171 = l_Lean_Syntax_updateKind(x_167, x_170);
lean_inc(x_171);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_1);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_169);
lean_ctor_set(x_4, 7, x_173);
x_174 = 1;
x_175 = l_Lean_Elab_Term_elabTerm(x_171, x_2, x_174, x_4, x_110);
return x_175;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; uint8_t x_186; uint8_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; lean_object* x_195; 
x_176 = lean_ctor_get(x_4, 0);
x_177 = lean_ctor_get(x_4, 1);
x_178 = lean_ctor_get(x_4, 2);
x_179 = lean_ctor_get(x_4, 3);
x_180 = lean_ctor_get(x_4, 4);
x_181 = lean_ctor_get(x_4, 5);
x_182 = lean_ctor_get(x_4, 6);
x_183 = lean_ctor_get(x_4, 7);
x_184 = lean_ctor_get(x_4, 8);
x_185 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_186 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_187 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_188 = lean_ctor_get(x_4, 9);
lean_inc(x_188);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_4);
x_189 = l_Lean_Parser_Term_let_x21___elambda__1___closed__2;
x_190 = l_Lean_Syntax_updateKind(x_167, x_189);
lean_inc(x_190);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_1);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_183);
x_193 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_193, 0, x_176);
lean_ctor_set(x_193, 1, x_177);
lean_ctor_set(x_193, 2, x_178);
lean_ctor_set(x_193, 3, x_179);
lean_ctor_set(x_193, 4, x_180);
lean_ctor_set(x_193, 5, x_181);
lean_ctor_set(x_193, 6, x_182);
lean_ctor_set(x_193, 7, x_192);
lean_ctor_set(x_193, 8, x_184);
lean_ctor_set(x_193, 9, x_188);
lean_ctor_set_uint8(x_193, sizeof(void*)*10, x_185);
lean_ctor_set_uint8(x_193, sizeof(void*)*10 + 1, x_186);
lean_ctor_set_uint8(x_193, sizeof(void*)*10 + 2, x_187);
x_194 = 1;
x_195 = l_Lean_Elab_Term_elabTerm(x_190, x_2, x_194, x_193, x_110);
return x_195;
}
}
else
{
uint8_t x_196; 
x_196 = !lean_is_exclusive(x_4);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_4, 7);
lean_inc(x_167);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_1);
lean_ctor_set(x_198, 1, x_167);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_198);
lean_ctor_set(x_199, 1, x_197);
lean_ctor_set(x_4, 7, x_199);
x_200 = 1;
x_201 = l_Lean_Elab_Term_elabTerm(x_167, x_2, x_200, x_4, x_110);
return x_201;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; uint8_t x_212; uint8_t x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; lean_object* x_219; 
x_202 = lean_ctor_get(x_4, 0);
x_203 = lean_ctor_get(x_4, 1);
x_204 = lean_ctor_get(x_4, 2);
x_205 = lean_ctor_get(x_4, 3);
x_206 = lean_ctor_get(x_4, 4);
x_207 = lean_ctor_get(x_4, 5);
x_208 = lean_ctor_get(x_4, 6);
x_209 = lean_ctor_get(x_4, 7);
x_210 = lean_ctor_get(x_4, 8);
x_211 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_212 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_213 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_214 = lean_ctor_get(x_4, 9);
lean_inc(x_214);
lean_inc(x_210);
lean_inc(x_209);
lean_inc(x_208);
lean_inc(x_207);
lean_inc(x_206);
lean_inc(x_205);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_4);
lean_inc(x_167);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_1);
lean_ctor_set(x_215, 1, x_167);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_209);
x_217 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_217, 0, x_202);
lean_ctor_set(x_217, 1, x_203);
lean_ctor_set(x_217, 2, x_204);
lean_ctor_set(x_217, 3, x_205);
lean_ctor_set(x_217, 4, x_206);
lean_ctor_set(x_217, 5, x_207);
lean_ctor_set(x_217, 6, x_208);
lean_ctor_set(x_217, 7, x_216);
lean_ctor_set(x_217, 8, x_210);
lean_ctor_set(x_217, 9, x_214);
lean_ctor_set_uint8(x_217, sizeof(void*)*10, x_211);
lean_ctor_set_uint8(x_217, sizeof(void*)*10 + 1, x_212);
lean_ctor_set_uint8(x_217, sizeof(void*)*10 + 2, x_213);
x_218 = 1;
x_219 = l_Lean_Elab_Term_elabTerm(x_167, x_2, x_218, x_217, x_110);
return x_219;
}
}
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_1);
x_220 = l___private_Lean_Elab_Binders_15__expandLetIdLhs(x_9);
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 0);
lean_inc(x_222);
lean_dec(x_220);
x_223 = lean_ctor_get(x_221, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_221, 1);
lean_inc(x_224);
lean_dec(x_221);
x_225 = lean_unsigned_to_nat(4u);
x_226 = l_Lean_Syntax_getArg(x_9, x_225);
lean_dec(x_9);
x_227 = l_Lean_Elab_Term_elabLetDeclAux(x_222, x_223, x_224, x_226, x_11, x_2, x_3, x_4, x_5);
lean_dec(x_223);
return x_227;
}
block_55:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_15 = l_Lean_Syntax_getArg(x_9, x_8);
x_16 = l_Lean_Syntax_getArg(x_9, x_6);
x_17 = lean_unsigned_to_nat(2u);
x_18 = l_Lean_Syntax_getArg(x_9, x_17);
lean_dec(x_9);
x_19 = l_Lean_formatEntry___closed__1;
x_20 = l_Lean_mkAtomFrom(x_1, x_19);
x_21 = l_Lean_Elab_Term_mkExplicitBinder___closed__5;
x_22 = lean_array_push(x_21, x_15);
x_23 = lean_array_push(x_22, x_16);
x_24 = lean_array_push(x_23, x_18);
x_25 = lean_array_push(x_24, x_20);
x_26 = lean_array_push(x_25, x_13);
x_27 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_Syntax_setArg(x_7, x_8, x_28);
lean_inc(x_1);
x_30 = l_Lean_Syntax_setArg(x_1, x_6, x_29);
x_31 = !lean_is_exclusive(x_4);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_4, 7);
lean_inc(x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
lean_ctor_set(x_4, 7, x_34);
x_35 = 1;
x_36 = l_Lean_Elab_Term_elabTerm(x_30, x_2, x_35, x_4, x_14);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; 
x_37 = lean_ctor_get(x_4, 0);
x_38 = lean_ctor_get(x_4, 1);
x_39 = lean_ctor_get(x_4, 2);
x_40 = lean_ctor_get(x_4, 3);
x_41 = lean_ctor_get(x_4, 4);
x_42 = lean_ctor_get(x_4, 5);
x_43 = lean_ctor_get(x_4, 6);
x_44 = lean_ctor_get(x_4, 7);
x_45 = lean_ctor_get(x_4, 8);
x_46 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_47 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_48 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 2);
x_49 = lean_ctor_get(x_4, 9);
lean_inc(x_49);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_4);
lean_inc(x_30);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_30);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
x_52 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_38);
lean_ctor_set(x_52, 2, x_39);
lean_ctor_set(x_52, 3, x_40);
lean_ctor_set(x_52, 4, x_41);
lean_ctor_set(x_52, 5, x_42);
lean_ctor_set(x_52, 6, x_43);
lean_ctor_set(x_52, 7, x_51);
lean_ctor_set(x_52, 8, x_45);
lean_ctor_set(x_52, 9, x_49);
lean_ctor_set_uint8(x_52, sizeof(void*)*10, x_46);
lean_ctor_set_uint8(x_52, sizeof(void*)*10 + 1, x_47);
lean_ctor_set_uint8(x_52, sizeof(void*)*10 + 2, x_48);
x_53 = 1;
x_54 = l_Lean_Elab_Term_elabTerm(x_30, x_2, x_53, x_52, x_14);
return x_54;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 1;
x_6 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDecl), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabLetBangDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 0;
x_6 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetBangDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetBangDecl), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetBangDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_let_x21___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetBangDecl___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Binders_18__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_elabLetDeclAux___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
x_6 = lean_box(0);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Elab_Quotation(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Binders(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Quotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__1 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__1();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__1);
l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__2 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__2();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__2);
l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_quoteAutoTactic___main___spec__1___closed__3);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__1 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__1);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__2 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__2);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__3 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__3);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__4 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__4);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__5 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__5);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__6 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__6);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__7 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__7);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__8 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__8);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__9 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__9);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__10 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__10);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__11 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__11);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__12 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__12);
l_Lean_Elab_Term_quoteAutoTactic___main___closed__13 = _init_l_Lean_Elab_Term_quoteAutoTactic___main___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___main___closed__13);
l_Lean_Elab_Term_declareTacticSyntax___closed__1 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__1);
l_Lean_Elab_Term_declareTacticSyntax___closed__2 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__2);
l_Lean_Elab_Term_declareTacticSyntax___closed__3 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__3);
l_Lean_Elab_Term_declareTacticSyntax___closed__4 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__4);
l_Lean_Elab_Term_declareTacticSyntax___closed__5 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__5);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__1 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__1);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__2);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__3 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__3);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__4);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__5 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__5);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__6);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__7 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__7);
l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8 = _init_l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Binders_4__expandBinderModifier___closed__8);
l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__1 = _init_l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__1);
l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__2 = _init_l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__2();
lean_mark_persistent(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__2);
l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__3 = _init_l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__3();
lean_mark_persistent(l_Array_umapMAux___main___at___private_Lean_Elab_Binders_5__getBinderIds___spec__1___closed__3);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabForall(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabArrow___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___lambda__1___closed__1);
l_Lean_Elab_Term_elabArrow___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___lambda__1___closed__2);
l_Lean_Elab_Term_elabArrow___lambda__1___closed__3 = _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___lambda__1___closed__3);
l_Lean_Elab_Term_elabArrow___lambda__1___closed__4 = _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___lambda__1___closed__4);
l_Lean_Elab_Term_elabArrow___lambda__1___closed__5 = _init_l_Lean_Elab_Term_elabArrow___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___lambda__1___closed__5);
l_Lean_Elab_Term_elabArrow___closed__1 = _init_l_Lean_Elab_Term_elabArrow___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___closed__1);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__3);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__4 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__4);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__5);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__7 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__7);
l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8 = _init_l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__8);
l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__1 = _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__1);
l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__2 = _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__2);
l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3 = _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__3);
l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__4 = _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__4);
l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__5 = _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__5);
l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6 = _init_l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_12__checkNoOptAutoParam___closed__6);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabLetDeclAux___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___closed__3 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__3);
l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__1 = _init_l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__1);
l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2 = _init_l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__2);
l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3 = _init_l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_17__expandLetEqnsDeclVal___main___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetBangDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetBangDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetBangDecl___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabLetBangDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Binders_18__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
