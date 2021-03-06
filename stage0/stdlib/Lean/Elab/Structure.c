// Lean compiler output
// Module: Lean.Elab.Structure
// Imports: Init Lean.Meta.Closure Lean.Elab.Command Lean.Elab.DeclModifiers Lean.Elab.DeclUtil Lean.Elab.Inductive
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
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__11;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabCommand___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1___boxed(lean_object**);
lean_object* l_Lean_Elab_Term_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__2;
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_strLitToAtom___closed__3;
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addGlobalInstance___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkResultingUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkId___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_2549____closed__4;
lean_object* l_Lean_Elab_Command_mkResultUniverse(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__3;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5(lean_object*);
lean_object* l_ReaderT_pure___at_Lean_Elab_Term_Quotation_Lean_Elab_Quotation___instance__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__7;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1;
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_7262____closed__14;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_projections(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2;
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_isInternalSubobjectFieldName(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1(lean_object*);
lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_995____spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1;
lean_object* l_Lean_Elab_Command_shouldInferResultUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getLevelNames___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_accLevelAtCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__10;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2;
lean_object* l_Lean_Meta_instantiateMVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Command_0__Lean_Elab_Command_getVarDecls(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__3;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2;
uint8_t l_Lean_Elab_Command_StructFieldInfo_inferMod___default;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*);
extern lean_object* l_Lean_Elab_Level_elabLevel___closed__6;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_CollectFVars_Lean_Util_CollectFVars___instance__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___closed__9;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_StructFieldInfo_isSubobject(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__4;
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjection___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_7262____closed__16;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNoConfusion___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1(lean_object*);
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__8;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__3(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__2;
extern lean_object* l_Lean_Init_Meta___instance__9___rarg___closed__1;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__4;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__3;
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambdaAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjection___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkIdImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_value_x3f___default;
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__1;
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1(lean_object*);
lean_object* l_Lean_Meta_mkId___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2;
lean_object* l_Lean_mkRecOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3;
extern lean_object* l_Lean_Init_Prelude___instance__72___closed__1;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2___boxed(lean_object**);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject___boxed(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__2;
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_Lean_Elab_Command_Lean_Elab_Structure___instance__1;
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1;
lean_object* l_Lean_Meta_getLocalInstances___at_Lean_Elab_Term_removeUnused___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__5;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1(lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
extern lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_516____closed__4;
lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_getLevelImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_throwUnknownConstant___rarg___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___closed__3;
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_collectUsedFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields(lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__1;
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_updateBinderInfo(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkProjectionImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_throwTypeMismatchError___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1(lean_object*);
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1;
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__3___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1;
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__5;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabAttr___rarg___closed__3;
lean_object* lean_add_instance(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__4;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_2883____closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__6;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addGlobalInstance___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
extern lean_object* l___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___closed__2;
lean_object* l_Lean_Elab_Command_elabStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_addGlobalInstanceImp___spec__1(lean_object*);
extern lean_object* l_Lean_Expr_Lean_Expr___instance__11;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1;
extern lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_839____closed__1;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4(lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__2;
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
extern lean_object* l___regBuiltin_Lean_Elab_Term_elabSort___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_level(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_sortDeclLevelParams___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___boxed(lean_object**);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2;
extern lean_object* l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__8;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__2;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_Lean_Elab_Structure___instance__1___closed__1;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Term_declareTacticSyntax___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
uint8_t l_Lean_Elab_Command_StructFieldInfo_isFromParent(lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkProjectionImp___lambda__1___closed__3;
lean_object* lean_set_reducibility_status(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10;
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_3490_(lean_object*);
extern lean_object* l_Lean_Init_Prelude___instance__73;
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1;
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__8;
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__1;
lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_mkAuxDefinitionImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__1;
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Lean_Expr___instance__11___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_appendBefore(lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2(lean_object*);
extern lean_object* l_Lean_initFn____x40_Lean_Class___hyg_767____closed__2;
lean_object* l_Lean_Meta_mkAuxDefinition___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1(lean_object*);
extern lean_object* l_Lean_CollectLevelParams_Lean_Util_CollectLevelParams___instance__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2;
lean_object* l_Lean_Elab_Command_elabStructure___closed__7;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1;
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3(lean_object*);
extern lean_object* l_Array_findSomeM_x3f___rarg___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_is_class(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3;
extern lean_object* l_Lean_Elab_Command_Lean_Elab_Inductive___instance__1___closed__1;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t _init_l_Lean_Elab_Command_StructFieldInfo_inferMod___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_StructFieldInfo_value_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_Lean_Elab_Structure___instance__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_Expr_Lean_Expr___instance__11___closed__1;
x_4 = 0;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_1);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4 + 1, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Command_Lean_Elab_Structure___instance__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_Lean_Elab_Structure___instance__1___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Elab_Command_StructFieldInfo_isFromParent(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 1)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 2)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Elab_Command_StructFieldInfo_isSubobject(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Init_Meta___instance__9___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
lean_inc(x_8);
x_9 = l_Lean_Syntax_getNumArgs(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_2, x_8, x_12, x_4, x_5, x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_box(0);
x_16 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_2, x_14, x_15, x_4, x_5, x_6);
return x_16;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_isAttribute(x_9, x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_2);
x_12 = l_Lean_Elab_elabAttr___rarg___lambda__3___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Elab_elabAttr___rarg___lambda__3___closed__3;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_15, x_3, x_4, x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_1, x_2, x_21, x_3, x_4, x_8);
lean_dec(x_3);
return x_22;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_isIdOrAtom_x3f(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_replaceRef(x_6, x_9);
lean_dec(x_9);
lean_dec(x_6);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 6);
lean_dec(x_13);
lean_ctor_set(x_2, 6, x_11);
x_14 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_15 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_14, x_2, x_3, x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
x_22 = lean_ctor_get(x_2, 2);
x_23 = lean_ctor_get(x_2, 3);
x_24 = lean_ctor_get(x_2, 4);
x_25 = lean_ctor_get(x_2, 5);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_26 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
lean_ctor_set(x_26, 4, x_24);
lean_ctor_set(x_26, 5, x_25);
lean_ctor_set(x_26, 6, x_11);
x_27 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_28 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_27, x_26, x_3, x_10);
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
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_6);
x_33 = lean_ctor_get(x_7, 0);
lean_inc(x_33);
lean_dec(x_7);
x_34 = lean_box(0);
x_35 = lean_name_mk_string(x_34, x_33);
x_36 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__3(x_1, x_35, x_2, x_3, x_4);
return x_36;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_1, x_3);
lean_inc(x_5);
x_11 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(x_10, x_5, x_6, x_7);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_push(x_4, x_12);
x_15 = 1;
x_16 = x_3 + x_15;
x_3 = x_16;
x_4 = x_14;
x_7 = x_13;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Syntax_getSepArgs(x_1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = l_Array_empty___closed__1;
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(x_5, x_7, x_8, x_9, x_2, x_3, x_4);
lean_dec(x_5);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(x_6, x_2, x_3, x_4);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; uint8_t x_12; 
x_10 = l_Lean_Syntax_isNone(x_1);
x_11 = l_Lean_Syntax_isNone(x_2);
x_12 = l_Lean_Syntax_isNone(x_3);
if (x_10 == 0)
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 1;
x_14 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 1, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 2, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 3, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = 1;
x_17 = 0;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 1;
x_21 = 0;
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
return x_23;
}
else
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_6);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_9);
return x_27;
}
}
}
else
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
x_29 = 1;
x_30 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_6);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 1, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 2, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_9);
return x_31;
}
else
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = 1;
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_6);
lean_ctor_set_uint8(x_34, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 2, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 3, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_9);
return x_35;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = 0;
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_38, 0, x_4);
lean_ctor_set(x_38, 1, x_6);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 3, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_9);
return x_39;
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 0;
x_41 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_6);
lean_ctor_set_uint8(x_41, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 1, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 2, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 3, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_9);
return x_42;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Array_empty___closed__1;
x_12 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_11, x_7, x_8, x_9);
lean_dec(x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_7);
x_14 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(x_13, x_7, x_8, x_9);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_15, x_7, x_8, x_16);
lean_dec(x_7);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_11, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_13);
x_14 = l_Lean_Syntax_getKind(x_13);
x_15 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_16 = lean_name_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4;
x_18 = lean_name_eq(x_14, x_17);
lean_dec(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_6);
x_19 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7;
x_20 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabCommand___spec__7___rarg(x_13, x_19, x_7, x_8, x_9);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
lean_dec(x_13);
x_25 = 1;
x_26 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_25, x_7, x_8, x_9);
return x_26;
}
}
else
{
uint8_t x_27; lean_object* x_28; 
lean_dec(x_14);
lean_dec(x_13);
x_27 = 2;
x_28 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_27, x_7, x_8, x_9);
return x_28;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(4u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(5u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_getOptional_x3f(x_6);
lean_dec(x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_12, x_16, x_14, x_8, x_10, x_18, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = l_Lean_Syntax_getArg(x_21, x_7);
if (lean_obj_tag(x_22) == 2)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_string_utf8_byte_size(x_23);
x_25 = lean_nat_sub(x_24, x_9);
lean_dec(x_24);
x_26 = lean_string_utf8_extract(x_23, x_5, x_25);
lean_dec(x_25);
lean_dec(x_23);
lean_ctor_set(x_17, 0, x_26);
x_27 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_12, x_16, x_14, x_8, x_10, x_17, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_free_object(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_22);
x_29 = l_Lean_Elab_elabModifiers___rarg___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabCommand___spec__7___rarg(x_21, x_32, x_2, x_3, x_4);
lean_dec(x_21);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_17, 0);
lean_inc(x_38);
lean_dec(x_17);
x_39 = l_Lean_Syntax_getArg(x_38, x_7);
if (lean_obj_tag(x_39) == 2)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_string_utf8_byte_size(x_40);
x_42 = lean_nat_sub(x_41, x_9);
lean_dec(x_41);
x_43 = lean_string_utf8_extract(x_40, x_5, x_42);
lean_dec(x_42);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_12, x_16, x_14, x_8, x_10, x_44, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_39);
x_47 = l_Lean_Elab_elabModifiers___rarg___closed__2;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabCommand___spec__7___rarg(x_38, x_50, x_2, x_3, x_4);
lean_dec(x_38);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = l_Lean_Environment_contains(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_4);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_14, 0, x_10);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_18, x_4, x_5, x_6);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_1);
lean_inc(x_2);
x_7 = l_Lean_mkPrivateName(x_2, x_1);
lean_inc(x_2);
x_8 = l_Lean_Environment_contains(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__1(x_1, x_2, x_9, x_4, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_15, x_4, x_5, x_6);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_8);
x_9 = l_Lean_Environment_contains(x_8, x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__2(x_1, x_8, x_10, x_2, x_3, x_7);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_8);
lean_inc(x_1);
x_12 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_17, x_2, x_3, x_7);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_28, x_2, x_3, x_7);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_st_ref_take(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 0, x_1);
x_10 = lean_st_ref_set(x_3, x_6, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_6, 2);
x_19 = lean_ctor_get(x_6, 3);
x_20 = lean_ctor_get(x_6, 4);
x_21 = lean_ctor_get(x_6, 5);
x_22 = lean_ctor_get(x_6, 6);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
x_23 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_18);
lean_ctor_set(x_23, 3, x_19);
lean_ctor_set(x_23, 4, x_20);
lean_ctor_set(x_23, 5, x_21);
lean_ctor_set(x_23, 6, x_22);
x_24 = lean_st_ref_set(x_3, x_23, x_7);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_6; 
lean_inc(x_2);
x_6 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_2);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
case 1:
{
lean_object* x_15; 
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_4, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_protectedExt;
lean_inc(x_2);
x_22 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_21, x_20, x_2);
x_23 = l_Lean_setEnv___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(x_22, x_3, x_4, x_19);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_2);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
default: 
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_st_ref_get(x_4, x_5);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_mkPrivateName(x_35, x_2);
lean_inc(x_36);
x_37 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_36, x_3, x_4, x_34);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_36);
x_42 = !lean_is_exclusive(x_37);
if (x_42 == 0)
{
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 0);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_37);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_getId(x_12);
lean_dec(x_12);
lean_inc(x_13);
x_14 = l_Lean_Name_append(x_2, x_13);
x_15 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_16 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_15, x_14, x_5, x_6, x_7);
if (x_10 == 0)
{
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = 1;
x_20 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set(x_20, 2, x_13);
lean_ctor_set(x_20, 3, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*4, x_19);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = 1;
x_24 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 2, x_13);
lean_ctor_set(x_24, 3, x_21);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
return x_16;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = 0;
x_33 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_3);
lean_ctor_set(x_33, 2, x_13);
lean_ctor_set(x_33, 3, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
lean_ctor_set(x_16, 0, x_33);
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = 0;
x_37 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_3);
lean_ctor_set(x_37, 2, x_13);
lean_ctor_set(x_37, 3, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_16);
if (x_39 == 0)
{
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' constructor in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Elab_Modifiers_isProtected(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_10, x_6, x_7, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_13, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3;
x_16 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_15, x_6, x_7, x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' constructor in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName;
x_8 = l_Lean_Name_append(x_3, x_7);
x_9 = l_Lean_Elab_Command_Lean_Elab_Inductive___instance__1___closed__1;
x_10 = 0;
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_7);
lean_ctor_set(x_11, 3, x_8);
lean_ctor_set_uint8(x_11, sizeof(void*)*4, x_10);
x_12 = lean_unsigned_to_nat(5u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = l_Lean_Syntax_isNone(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_13, x_15);
lean_dec(x_13);
x_17 = l_Lean_Syntax_isNone(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_11);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_getArg(x_16, x_18);
lean_dec(x_16);
x_20 = l_Lean_Syntax_getArg(x_19, x_18);
x_21 = l_Lean_Elab_Command_getRef(x_4, x_5, x_6);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_replaceRef(x_19, x_22);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_4);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_4, 6);
lean_dec(x_26);
lean_ctor_set(x_4, 6, x_24);
lean_inc(x_4);
x_27 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_20, x_4, x_5, x_23);
lean_dec(x_20);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_4);
x_30 = l_Lean_Elab_Command_checkValidCtorModifier(x_28, x_4, x_5, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Elab_Modifiers_isPrivate(x_28);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_box(0);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_19, x_3, x_28, x_2, x_33, x_4, x_5, x_31);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = l_Lean_Elab_Modifiers_isPrivate(x_2);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_box(0);
x_37 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_19, x_3, x_28, x_2, x_36, x_4, x_5, x_31);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_28);
lean_dec(x_19);
x_38 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
x_39 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_38, x_4, x_5, x_31);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_28);
lean_dec(x_4);
lean_dec(x_19);
x_44 = !lean_is_exclusive(x_30);
if (x_44 == 0)
{
return x_30;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_30, 0);
x_46 = lean_ctor_get(x_30, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_30);
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
lean_dec(x_4);
lean_dec(x_19);
x_48 = !lean_is_exclusive(x_27);
if (x_48 == 0)
{
return x_27;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_27, 0);
x_50 = lean_ctor_get(x_27, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_27);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_52 = lean_ctor_get(x_4, 0);
x_53 = lean_ctor_get(x_4, 1);
x_54 = lean_ctor_get(x_4, 2);
x_55 = lean_ctor_get(x_4, 3);
x_56 = lean_ctor_get(x_4, 4);
x_57 = lean_ctor_get(x_4, 5);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_54);
lean_ctor_set(x_58, 3, x_55);
lean_ctor_set(x_58, 4, x_56);
lean_ctor_set(x_58, 5, x_57);
lean_ctor_set(x_58, 6, x_24);
lean_inc(x_58);
x_59 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_20, x_58, x_5, x_23);
lean_dec(x_20);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_58);
x_62 = l_Lean_Elab_Command_checkValidCtorModifier(x_60, x_58, x_5, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = l_Lean_Elab_Modifiers_isPrivate(x_60);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_box(0);
x_66 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_19, x_3, x_60, x_2, x_65, x_58, x_5, x_63);
return x_66;
}
else
{
uint8_t x_67; 
x_67 = l_Lean_Elab_Modifiers_isPrivate(x_2);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_box(0);
x_69 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_19, x_3, x_60, x_2, x_68, x_58, x_5, x_63);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_60);
lean_dec(x_19);
x_70 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
x_71 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_70, x_58, x_5, x_63);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_60);
lean_dec(x_58);
lean_dec(x_19);
x_76 = lean_ctor_get(x_62, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_62, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_78 = x_62;
} else {
 lean_dec_ref(x_62);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_58);
lean_dec(x_19);
x_80 = lean_ctor_get(x_59, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_59, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_82 = x_59;
} else {
 lean_dec_ref(x_59);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
lean_object* x_84; 
lean_dec(x_16);
lean_dec(x_4);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_11);
lean_ctor_set(x_84, 1, x_6);
return x_84;
}
}
else
{
lean_object* x_85; 
lean_dec(x_13);
lean_dec(x_4);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_11);
lean_ctor_set(x_85, 1, x_6);
return x_85;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_10, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_setEnv___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("private fields are not supported yet");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_Lean_Elab_Modifiers_isPrivate(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_9, x_3, x_4, x_5);
return x_10;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of attributes in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3;
x_11 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_10, x_3, x_4, x_5);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(x_1, x_16, x_3, x_4, x_5);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'unsafe' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'partial' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'noncomputable' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(x_1, x_6, x_2, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Elab_Command_checkValidFieldModifier___closed__3;
x_9 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_8, x_2, x_3, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_checkValidFieldModifier(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_isAttribute(x_9, x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_2);
x_12 = l_Lean_Elab_elabAttr___rarg___lambda__3___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Elab_elabAttr___rarg___lambda__3___closed__3;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_15, x_3, x_4, x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_1, x_2, x_21, x_3, x_4, x_8);
lean_dec(x_3);
return x_22;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_isIdOrAtom_x3f(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_replaceRef(x_6, x_9);
lean_dec(x_9);
lean_dec(x_6);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 6);
lean_dec(x_13);
lean_ctor_set(x_2, 6, x_11);
x_14 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_15 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_14, x_2, x_3, x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
x_22 = lean_ctor_get(x_2, 2);
x_23 = lean_ctor_get(x_2, 3);
x_24 = lean_ctor_get(x_2, 4);
x_25 = lean_ctor_get(x_2, 5);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_26 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
lean_ctor_set(x_26, 4, x_24);
lean_ctor_set(x_26, 5, x_25);
lean_ctor_set(x_26, 6, x_11);
x_27 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_28 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_27, x_26, x_3, x_10);
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
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_6);
x_33 = lean_ctor_get(x_7, 0);
lean_inc(x_33);
lean_dec(x_7);
x_34 = lean_box(0);
x_35 = lean_name_mk_string(x_34, x_33);
x_36 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(x_1, x_35, x_2, x_3, x_4);
return x_36;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_1, x_3);
lean_inc(x_5);
x_11 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_10, x_5, x_6, x_7);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_push(x_4, x_12);
x_15 = 1;
x_16 = x_3 + x_15;
x_3 = x_16;
x_4 = x_14;
x_7 = x_13;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Syntax_getSepArgs(x_1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = l_Array_empty___closed__1;
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(x_5, x_7, x_8, x_9, x_2, x_3, x_4);
lean_dec(x_5);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(x_6, x_2, x_3, x_4);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_19, 6, x_9);
x_20 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_2, x_19, x_4, x_8);
return x_20;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Array_empty___closed__1;
x_12 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_11, x_7, x_8, x_9);
lean_dec(x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_7);
x_14 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(x_13, x_7, x_8, x_9);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_15, x_7, x_8, x_16);
lean_dec(x_7);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_6, x_4, x_11, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_13);
x_14 = l_Lean_Syntax_getKind(x_13);
x_15 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_16 = lean_name_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4;
x_18 = lean_name_eq(x_14, x_17);
lean_dec(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_6);
x_19 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7;
x_20 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg(x_13, x_19, x_7, x_8, x_9);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
lean_dec(x_13);
x_25 = 1;
x_26 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_6, x_4, x_25, x_7, x_8, x_9);
return x_26;
}
}
else
{
uint8_t x_27; lean_object* x_28; 
lean_dec(x_14);
lean_dec(x_13);
x_27 = 2;
x_28 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_6, x_4, x_27, x_7, x_8, x_9);
return x_28;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(4u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(5u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_getOptional_x3f(x_6);
lean_dec(x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_12, x_16, x_14, x_8, x_10, x_18, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = l_Lean_Syntax_getArg(x_21, x_7);
if (lean_obj_tag(x_22) == 2)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_string_utf8_byte_size(x_23);
x_25 = lean_nat_sub(x_24, x_9);
lean_dec(x_24);
x_26 = lean_string_utf8_extract(x_23, x_5, x_25);
lean_dec(x_25);
lean_dec(x_23);
lean_ctor_set(x_17, 0, x_26);
x_27 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_12, x_16, x_14, x_8, x_10, x_17, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_free_object(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_22);
x_29 = l_Lean_Elab_elabModifiers___rarg___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg(x_21, x_32, x_2, x_3, x_4);
lean_dec(x_21);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_17, 0);
lean_inc(x_38);
lean_dec(x_17);
x_39 = l_Lean_Syntax_getArg(x_38, x_7);
if (lean_obj_tag(x_39) == 2)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_string_utf8_byte_size(x_40);
x_42 = lean_nat_sub(x_41, x_9);
lean_dec(x_41);
x_43 = lean_string_utf8_extract(x_40, x_5, x_42);
lean_dec(x_42);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_12, x_16, x_14, x_8, x_10, x_44, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_39);
x_47 = l_Lean_Elab_elabModifiers___rarg___closed__2;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg(x_38, x_50, x_2, x_3, x_4);
lean_dec(x_38);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
lean_inc(x_2);
x_15 = l_Lean_Name_append(x_1, x_2);
x_16 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_17 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_16, x_15, x_12, x_13, x_14);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_2);
lean_ctor_set(x_20, 4, x_7);
lean_ctor_set(x_20, 5, x_8);
lean_ctor_set(x_20, 6, x_9);
lean_ctor_set_uint8(x_20, sizeof(void*)*7, x_5);
lean_ctor_set_uint8(x_20, sizeof(void*)*7 + 1, x_6);
x_21 = lean_array_push(x_10, x_20);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_2);
lean_ctor_set(x_24, 4, x_7);
lean_ctor_set(x_24, 5, x_8);
lean_ctor_set(x_24, 6, x_9);
lean_ctor_set_uint8(x_24, sizeof(void*)*7, x_5);
lean_ctor_set_uint8(x_24, sizeof(void*)*7 + 1, x_6);
x_25 = lean_array_push(x_10, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkProjectionImp___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', identifiers starting with '_' are reserved to the system");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, size_t x_9, size_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = x_9 == x_10;
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_array_uget(x_8, x_9);
x_17 = l_Lean_Syntax_getId(x_16);
x_18 = l_Lean_isInternalSubobjectFieldName(x_17);
x_19 = l_Lean_Elab_Command_getRef(x_12, x_13, x_14);
if (x_18 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_replaceRef(x_16, x_20);
lean_dec(x_20);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_12, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_12, 3);
lean_inc(x_26);
x_27 = lean_ctor_get(x_12, 4);
lean_inc(x_27);
x_28 = lean_ctor_get(x_12, 5);
lean_inc(x_28);
x_29 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_24);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_26);
lean_ctor_set(x_29, 4, x_27);
lean_ctor_set(x_29, 5, x_28);
lean_ctor_set(x_29, 6, x_22);
x_30 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_31 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___lambda__1(x_1, x_17, x_3, x_16, x_2, x_4, x_5, x_6, x_7, x_11, x_30, x_29, x_13, x_21);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = 1;
x_35 = x_9 + x_34;
x_9 = x_35;
x_11 = x_32;
x_14 = x_33;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_31);
if (x_37 == 0)
{
return x_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_31, 0);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_41 = lean_ctor_get(x_19, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_19, 1);
lean_inc(x_42);
lean_dec(x_19);
x_43 = l_Lean_replaceRef(x_16, x_41);
lean_dec(x_41);
lean_dec(x_16);
x_44 = !lean_is_exclusive(x_12);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_45 = lean_ctor_get(x_12, 6);
lean_dec(x_45);
lean_ctor_set(x_12, 6, x_43);
x_46 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_46, 0, x_17);
x_47 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_50, x_12, x_13, x_42);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
return x_51;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_56 = lean_ctor_get(x_12, 0);
x_57 = lean_ctor_get(x_12, 1);
x_58 = lean_ctor_get(x_12, 2);
x_59 = lean_ctor_get(x_12, 3);
x_60 = lean_ctor_get(x_12, 4);
x_61 = lean_ctor_get(x_12, 5);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_12);
x_62 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_62, 0, x_56);
lean_ctor_set(x_62, 1, x_57);
lean_ctor_set(x_62, 2, x_58);
lean_ctor_set(x_62, 3, x_59);
lean_ctor_set(x_62, 4, x_60);
lean_ctor_set(x_62, 5, x_61);
lean_ctor_set(x_62, 6, x_43);
x_63 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_63, 0, x_17);
x_64 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3;
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_67, x_62, x_13, x_42);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_11);
lean_ctor_set(x_73, 1, x_14);
return x_73;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_isNone(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = l_Lean_BinderInfo_beq(x_2, x_13);
if (x_12 == 0)
{
uint8_t x_57; 
x_57 = 1;
x_15 = x_57;
goto block_56;
}
else
{
uint8_t x_58; 
x_58 = 0;
x_15 = x_58;
goto block_56;
}
block_56:
{
lean_object* x_16; 
if (x_14 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_unsigned_to_nat(4u);
x_44 = l_Lean_Syntax_getArg(x_1, x_43);
x_45 = l_Lean_Elab_expandDeclSig(x_44);
lean_dec(x_44);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 1);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_45, 1, x_48);
x_16 = x_45;
goto block_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_16 = x_52;
goto block_42;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_unsigned_to_nat(4u);
x_54 = l_Lean_Syntax_getArg(x_1, x_53);
x_55 = l_Lean_Elab_expandOptDeclSig(x_54);
lean_dec(x_54);
x_16 = x_55;
goto block_42;
}
block_42:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = l_Lean_Syntax_getArgs(x_20);
lean_dec(x_20);
x_22 = lean_array_get_size(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_lt(x_23, x_22);
if (x_14 == 0)
{
lean_object* x_33; 
x_33 = lean_box(0);
x_25 = x_33;
goto block_32;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_unsigned_to_nat(5u);
x_35 = l_Lean_Syntax_getArg(x_1, x_34);
x_36 = l_Lean_Syntax_isNone(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = l_Lean_Syntax_getArg(x_35, x_23);
lean_dec(x_35);
x_38 = lean_unsigned_to_nat(1u);
x_39 = l_Lean_Syntax_getArg(x_37, x_38);
lean_dec(x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_25 = x_40;
goto block_32;
}
else
{
lean_object* x_41; 
lean_dec(x_35);
x_41 = lean_box(0);
x_25 = x_41;
goto block_32;
}
}
block_32:
{
if (x_24 == 0)
{
lean_object* x_26; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_9);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = lean_nat_dec_le(x_22, x_22);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_5);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_3);
lean_ctor_set(x_28, 1, x_9);
return x_28;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; 
x_29 = 0;
x_30 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_31 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(x_4, x_2, x_5, x_15, x_17, x_18, x_25, x_21, x_29, x_30, x_3, x_7, x_8, x_9);
lean_dec(x_21);
return x_31;
}
}
}
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' field in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Lean_Elab_Modifiers_isProtected(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1(x_1, x_2, x_3, x_4, x_5, x_12, x_8, x_9, x_10);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = l_Lean_Elab_Modifiers_isPrivate(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1(x_1, x_2, x_3, x_4, x_5, x_15, x_8, x_9, x_10);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_3);
x_17 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__3;
x_18 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_17, x_8, x_9, x_10);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' field in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_inc(x_6);
x_11 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_10, x_6, x_7, x_8);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
x_14 = l_Lean_Elab_Command_checkValidFieldModifier(x_12, x_6, x_7, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Elab_Modifiers_isPrivate(x_12);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2(x_1, x_5, x_2, x_3, x_12, x_4, x_17, x_6, x_7, x_15);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2(x_1, x_5, x_2, x_3, x_12, x_4, x_20, x_6, x_7, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_2);
x_22 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__3;
x_23 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1___rarg(x_22, x_6, x_7, x_15);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
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
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
return x_11;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structExplicitBinder");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_2 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structImplicitBinder");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_2 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structInstBinder");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_2 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected kind of structure field");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_4 == x_5;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_70; 
x_11 = lean_array_uget(x_3, x_4);
lean_inc(x_11);
x_12 = l_Lean_Syntax_getKind(x_11);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2;
x_14 = lean_name_eq(x_12, x_13);
x_70 = l_Lean_Elab_Command_getRef(x_7, x_8, x_9);
if (x_14 == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = 0;
x_15 = x_73;
x_16 = x_71;
x_17 = x_72;
goto block_69;
}
else
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = 1;
x_15 = x_76;
x_16 = x_74;
x_17 = x_75;
goto block_69;
}
block_69:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = l_Lean_replaceRef(x_11, x_16);
lean_dec(x_16);
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
x_21 = lean_ctor_get(x_7, 2);
x_22 = lean_ctor_get(x_7, 3);
x_23 = lean_ctor_get(x_7, 4);
x_24 = lean_ctor_get(x_7, 5);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_25 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
lean_ctor_set(x_25, 5, x_24);
lean_ctor_set(x_25, 6, x_18);
if (x_15 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4;
x_27 = lean_name_eq(x_12, x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6;
x_29 = lean_name_eq(x_12, x_28);
lean_dec(x_12);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_6);
x_30 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9;
x_31 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_30, x_25, x_8, x_17);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; lean_object* x_37; 
x_36 = 3;
x_37 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_11, x_6, x_2, x_1, x_36, x_25, x_8, x_17);
lean_dec(x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = 1;
x_41 = x_4 + x_40;
x_4 = x_41;
x_6 = x_38;
x_9 = x_39;
goto _start;
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_37);
if (x_43 == 0)
{
return x_37;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_37, 0);
x_45 = lean_ctor_get(x_37, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_37);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; lean_object* x_48; 
lean_dec(x_12);
x_47 = 1;
x_48 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_11, x_6, x_2, x_1, x_47, x_25, x_8, x_17);
lean_dec(x_11);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; size_t x_51; size_t x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = 1;
x_52 = x_4 + x_51;
x_4 = x_52;
x_6 = x_49;
x_9 = x_50;
goto _start;
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_48);
if (x_54 == 0)
{
return x_48;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_48, 0);
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_48);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
uint8_t x_58; lean_object* x_59; 
lean_dec(x_12);
x_58 = 0;
x_59 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_11, x_6, x_2, x_1, x_58, x_25, x_8, x_17);
lean_dec(x_11);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; size_t x_62; size_t x_63; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = 1;
x_63 = x_4 + x_62;
x_4 = x_63;
x_6 = x_60;
x_9 = x_61;
goto _start;
}
else
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_59);
if (x_65 == 0)
{
return x_59;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_59, 0);
x_67 = lean_ctor_get(x_59, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_59);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
}
else
{
lean_object* x_77; 
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_6);
lean_ctor_set(x_77, 1, x_9);
return x_77;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_4 == x_5;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_70; 
x_11 = lean_array_uget(x_3, x_4);
lean_inc(x_11);
x_12 = l_Lean_Syntax_getKind(x_11);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2;
x_14 = lean_name_eq(x_12, x_13);
x_70 = l_Lean_Elab_Command_getRef(x_7, x_8, x_9);
if (x_14 == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = 0;
x_15 = x_73;
x_16 = x_71;
x_17 = x_72;
goto block_69;
}
else
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = 1;
x_15 = x_76;
x_16 = x_74;
x_17 = x_75;
goto block_69;
}
block_69:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = l_Lean_replaceRef(x_11, x_16);
lean_dec(x_16);
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
x_21 = lean_ctor_get(x_7, 2);
x_22 = lean_ctor_get(x_7, 3);
x_23 = lean_ctor_get(x_7, 4);
x_24 = lean_ctor_get(x_7, 5);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_25 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
lean_ctor_set(x_25, 5, x_24);
lean_ctor_set(x_25, 6, x_18);
if (x_15 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4;
x_27 = lean_name_eq(x_12, x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6;
x_29 = lean_name_eq(x_12, x_28);
lean_dec(x_12);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_6);
x_30 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9;
x_31 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1___rarg(x_30, x_25, x_8, x_17);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; lean_object* x_37; 
x_36 = 3;
x_37 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_11, x_6, x_2, x_1, x_36, x_25, x_8, x_17);
lean_dec(x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = 1;
x_41 = x_4 + x_40;
x_4 = x_41;
x_6 = x_38;
x_9 = x_39;
goto _start;
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_37);
if (x_43 == 0)
{
return x_37;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_37, 0);
x_45 = lean_ctor_get(x_37, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_37);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; lean_object* x_48; 
lean_dec(x_12);
x_47 = 1;
x_48 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_11, x_6, x_2, x_1, x_47, x_25, x_8, x_17);
lean_dec(x_11);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; size_t x_51; size_t x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = 1;
x_52 = x_4 + x_51;
x_4 = x_52;
x_6 = x_49;
x_9 = x_50;
goto _start;
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_48);
if (x_54 == 0)
{
return x_48;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_48, 0);
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_48);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
uint8_t x_58; lean_object* x_59; 
lean_dec(x_12);
x_58 = 0;
x_59 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_11, x_6, x_2, x_1, x_58, x_25, x_8, x_17);
lean_dec(x_11);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; size_t x_62; size_t x_63; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = 1;
x_63 = x_4 + x_62;
x_4 = x_63;
x_6 = x_60;
x_9 = x_61;
goto _start;
}
else
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_59);
if (x_65 == 0)
{
return x_59;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_59, 0);
x_67 = lean_ctor_get(x_59, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_59);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
}
else
{
lean_object* x_77; 
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_6);
lean_ctor_set(x_77, 1, x_9);
return x_77;
}
}
}
static uint8_t _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Elab_sortDeclLevelParams___closed__1;
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
static uint8_t _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Lean_Elab_sortDeclLevelParams___closed__1;
x_2 = lean_nat_dec_le(x_1, x_1);
return x_2;
}
}
static size_t _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Elab_sortDeclLevelParams___closed__1;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(5u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = l_Lean_Syntax_isNone(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_8, x_10);
lean_dec(x_8);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_11, x_12);
lean_dec(x_11);
x_14 = l_Lean_Syntax_getArgs(x_13);
lean_dec(x_13);
x_15 = lean_array_get_size(x_14);
x_16 = lean_nat_dec_lt(x_12, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_14);
x_17 = l_Array_empty___closed__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_15, x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_14);
x_20 = l_Array_empty___closed__1;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_6);
return x_21;
}
else
{
size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = 0;
x_23 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_24 = l_Array_empty___closed__1;
x_25 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(x_2, x_3, x_14, x_22, x_23, x_24, x_4, x_5, x_6);
lean_dec(x_14);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_8);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1;
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = l_Array_empty___closed__1;
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2;
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = l_Array_empty___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_6);
return x_31;
}
else
{
size_t x_32; lean_object* x_33; size_t x_34; lean_object* x_35; 
x_32 = 0;
x_33 = l_Array_empty___closed__1;
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3;
x_35 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(x_2, x_3, x_33, x_32, x_34, x_33, x_4, x_5, x_6);
return x_35;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_10, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___lambda__1(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_1);
return x_17;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_4);
lean_dec(x_4);
x_17 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_18 = lean_unbox_usize(x_10);
lean_dec(x_10);
x_19 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(x_1, x_15, x_3, x_16, x_5, x_6, x_7, x_8, x_17, x_18, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_1);
return x_19;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__1(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3(x_1, x_2, x_3, x_4, x_9, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_12 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(x_1, x_2, x_3, x_10, x_11, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_12 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(x_1, x_2, x_3, x_10, x_11, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
x_16 = l_Lean_isStructure(x_15, x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_free_object(x_11);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_10);
x_18 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_dec(x_2);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_10);
x_30 = l_Lean_isStructure(x_29, x_10);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_10);
x_32 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
else
{
lean_object* x_41; 
lean_dec(x_2);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_10);
lean_ctor_set(x_41, 1, x_28);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_9);
x_42 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3;
x_43 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_43;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
size_t x_11; size_t x_12; 
lean_dec(x_8);
x_11 = 1;
x_12 = x_5 + x_11;
{
size_t _tmp_4 = x_12;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_8);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_box(0);
x_4 = lean_array_get_size(x_1);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Array_findSomeM_x3f___rarg___closed__1;
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(x_2, x_7, x_1, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
return x_3;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_mkProjection___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkProjectionImp(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Meta_inferType___rarg___lambda__1(x_9, x_1, x_12, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_9);
lean_dec(x_1);
x_14 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_15 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_995____spec__1___rarg(x_14, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__3___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_2);
x_17 = l_Lean_Name_append(x_1, x_2);
x_18 = lean_box(0);
x_19 = 1;
x_20 = 0;
x_21 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_9);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*4 + 1, x_20);
x_22 = lean_array_push(x_3, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_4, x_23);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_1, x_5, x_6, x_7, x_8, x_24, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_25;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkProjectionImp(x_1, x_2, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_18);
x_20 = l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2(x_18, x_10, x_11, x_12, x_13, x_14, x_15, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed), 16, 8);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_4);
lean_closure_set(x_23, 3, x_5);
lean_closure_set(x_23, 4, x_1);
lean_closure_set(x_23, 5, x_6);
lean_closure_set(x_23, 6, x_7);
lean_closure_set(x_23, 7, x_8);
x_24 = l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__3___rarg(x_2, x_21, x_18, x_23, x_10, x_11, x_12, x_13, x_14, x_15, x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_17);
if (x_29 == 0)
{
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 0);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("field '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' from '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_6, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_apply_8(x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_array_fget(x_4, x_6);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(x_2, x_18, x_1, x_7, x_6, x_3, x_4, x_5, x_20, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_18);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_27, 0, x_3);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg), 14, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkProjection___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkProjection___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_1, x_2, x_3, x_4, x_6, x_14, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_2, x_13, x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
lean_inc(x_2);
x_17 = l_Lean_Name_append(x_16, x_2);
x_18 = lean_box(0);
x_19 = 2;
x_20 = 0;
lean_inc(x_8);
x_21 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_8);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*4 + 1, x_20);
x_22 = lean_array_push(x_3, x_21);
lean_inc(x_5);
x_23 = l_Lean_getStructureFieldsFlattened(x_4, x_5);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed), 11, 3);
lean_closure_set(x_24, 0, x_6);
lean_closure_set(x_24, 1, x_1);
lean_closure_set(x_24, 2, x_7);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_16, x_8, x_5, x_23, x_24, x_25, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_26;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_16 = lean_st_ref_get(x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*11);
lean_inc(x_2);
lean_inc(x_19);
x_21 = lean_is_class(x_19, x_2);
lean_inc(x_3);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2), 15, 7);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_3);
lean_closure_set(x_22, 2, x_4);
lean_closure_set(x_22, 3, x_19);
lean_closure_set(x_22, 4, x_2);
lean_closure_set(x_22, 5, x_5);
lean_closure_set(x_22, 6, x_6);
if (x_20 == 0)
{
uint8_t x_23; lean_object* x_24; 
x_23 = 0;
x_24 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_3, x_23, x_7, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_24;
}
else
{
if (x_21 == 0)
{
uint8_t x_25; lean_object* x_26; 
x_25 = 0;
x_26 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_3, x_25, x_7, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; 
x_27 = 3;
x_28 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_3, x_27, x_7, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_28;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("to");
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 7);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
x_14 = lean_nat_dec_lt(x_2, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_apply_8(x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_fget(x_12, x_2);
lean_dec(x_12);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 3);
x_19 = l_Lean_replaceRef(x_16, x_18);
lean_dec(x_18);
lean_ctor_set(x_9, 3, x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
x_20 = l_Lean_Elab_Term_elabType(x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_5);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_24);
x_26 = lean_erase_macro_scopes(x_24);
x_27 = l_Lean_Name_getString_x21(x_26);
lean_dec(x_26);
x_28 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_box(0);
x_31 = lean_name_mk_string(x_30, x_29);
x_32 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_3, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_16);
x_33 = lean_box(0);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_24, x_31, x_3, x_2, x_4, x_21, x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_35, 0, x_31);
x_36 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_16, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_16);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
return x_40;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_23);
if (x_45 == 0)
{
return x_23;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_23, 0);
x_47 = lean_ctor_get(x_23, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_23);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_9);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_20);
if (x_49 == 0)
{
return x_20;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_20, 0);
x_51 = lean_ctor_get(x_20, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_20);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_53 = lean_ctor_get(x_9, 0);
x_54 = lean_ctor_get(x_9, 1);
x_55 = lean_ctor_get(x_9, 2);
x_56 = lean_ctor_get(x_9, 3);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_9);
x_57 = l_Lean_replaceRef(x_16, x_56);
lean_dec(x_56);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_55);
lean_ctor_set(x_58, 3, x_57);
lean_inc(x_10);
lean_inc(x_58);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
x_59 = l_Lean_Elab_Term_elabType(x_16, x_5, x_6, x_7, x_8, x_58, x_10, x_11);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_5);
x_62 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_60, x_5, x_6, x_7, x_8, x_58, x_10, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
lean_inc(x_63);
x_65 = lean_erase_macro_scopes(x_63);
x_66 = l_Lean_Name_getString_x21(x_65);
lean_dec(x_65);
x_67 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = lean_box(0);
x_70 = lean_name_mk_string(x_69, x_68);
x_71 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_3, x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_16);
x_72 = lean_box(0);
x_73 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_63, x_70, x_3, x_2, x_4, x_60, x_72, x_5, x_6, x_7, x_8, x_58, x_10, x_64);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_63);
lean_dec(x_60);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_74, 0, x_70);
x_75 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_16, x_78, x_5, x_6, x_7, x_8, x_58, x_10, x_64);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_16);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_82 = x_79;
} else {
 lean_dec_ref(x_79);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_60);
lean_dec(x_58);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = lean_ctor_get(x_62, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_62, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_86 = x_62;
} else {
 lean_dec_ref(x_62);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_58);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = lean_ctor_get(x_59, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_59, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_90 = x_59;
} else {
 lean_dec_ref(x_59);
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
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 5);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 6);
lean_inc(x_11);
lean_dec(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_box(0);
x_17 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l_Lean_Elab_Term_elabTerm(x_15, x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_2, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_11, 0, x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_11);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_21);
lean_ctor_set(x_11, 0, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_16);
lean_ctor_set(x_27, 1, x_11);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_free_object(x_11);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_free_object(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_11, 0);
lean_inc(x_37);
lean_dec(x_11);
x_38 = lean_box(0);
x_39 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_40 = l_Lean_Elab_Term_elabTerm(x_37, x_38, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_2, x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_42);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_46 = x_43;
} else {
 lean_dec_ref(x_43);
 x_46 = lean_box(0);
}
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_38);
lean_ctor_set(x_48, 1, x_47);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_43, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_52 = x_43;
} else {
 lean_dec_ref(x_43);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_ctor_get(x_40, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_40, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_56 = x_40;
} else {
 lean_dec_ref(x_40);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_10);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_10, 0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_60 = l_Lean_Elab_Term_elabType(x_59, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_1, 6);
lean_inc(x_61);
lean_dec(x_1);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_60, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_2, x_62, x_3, x_4, x_5, x_6, x_7, x_8, x_63);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_64) == 0)
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_64, 0);
lean_ctor_set(x_10, 0, x_66);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_10);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_64, 0, x_68);
return x_64;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_64, 0);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_64);
lean_ctor_set(x_10, 0, x_69);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_10);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_70);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_free_object(x_10);
x_74 = !lean_is_exclusive(x_64);
if (x_74 == 0)
{
return x_64;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_64, 0);
x_76 = lean_ctor_get(x_64, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_64);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_60, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_60, 1);
lean_inc(x_79);
lean_dec(x_60);
x_80 = !lean_is_exclusive(x_61);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_61, 0);
lean_inc(x_78);
lean_ctor_set(x_61, 0, x_78);
x_82 = lean_box(0);
x_83 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_84 = l_Lean_Elab_Term_elabTermEnsuringType(x_81, x_61, x_83, x_82, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
lean_inc(x_5);
lean_inc(x_2);
x_87 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_2, x_78, x_3, x_4, x_5, x_6, x_7, x_8, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_2, x_85, x_3, x_4, x_5, x_6, x_7, x_8, x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_90, 0);
lean_ctor_set(x_10, 0, x_88);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_10);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_90, 0, x_94);
return x_90;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_95 = lean_ctor_get(x_90, 0);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_90);
lean_ctor_set(x_10, 0, x_88);
x_97 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_97, 0, x_95);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_10);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_96);
return x_99;
}
}
else
{
uint8_t x_100; 
lean_dec(x_88);
lean_free_object(x_10);
x_100 = !lean_is_exclusive(x_90);
if (x_100 == 0)
{
return x_90;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_90, 0);
x_102 = lean_ctor_get(x_90, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_90);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_85);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_87);
if (x_104 == 0)
{
return x_87;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_87, 0);
x_106 = lean_ctor_get(x_87, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_87);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_78);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_84);
if (x_108 == 0)
{
return x_84;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_84, 0);
x_110 = lean_ctor_get(x_84, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_84);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_61, 0);
lean_inc(x_112);
lean_dec(x_61);
lean_inc(x_78);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_78);
x_114 = lean_box(0);
x_115 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_116 = l_Lean_Elab_Term_elabTermEnsuringType(x_112, x_113, x_115, x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_5);
lean_inc(x_2);
x_119 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_2, x_78, x_3, x_4, x_5, x_6, x_7, x_8, x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_2, x_117, x_3, x_4, x_5, x_6, x_7, x_8, x_121);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_125 = x_122;
} else {
 lean_dec_ref(x_122);
 x_125 = lean_box(0);
}
lean_ctor_set(x_10, 0, x_120);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_123);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_10);
lean_ctor_set(x_127, 1, x_126);
if (lean_is_scalar(x_125)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_125;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_124);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_120);
lean_free_object(x_10);
x_129 = lean_ctor_get(x_122, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_122, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_131 = x_122;
} else {
 lean_dec_ref(x_122);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(1, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_117);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_133 = lean_ctor_get(x_119, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_119, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_135 = x_119;
} else {
 lean_dec_ref(x_119);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_78);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_137 = lean_ctor_get(x_116, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_116, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_139 = x_116;
} else {
 lean_dec_ref(x_116);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
}
else
{
uint8_t x_141; 
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = !lean_is_exclusive(x_60);
if (x_141 == 0)
{
return x_60;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_60, 0);
x_143 = lean_ctor_get(x_60, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_60);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_ctor_get(x_10, 0);
lean_inc(x_145);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_146 = l_Lean_Elab_Term_elabType(x_145, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_1, 6);
lean_inc(x_147);
lean_dec(x_1);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_146, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_dec(x_146);
x_150 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_2, x_148, x_3, x_4, x_5, x_6, x_7, x_8, x_149);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_153 = x_150;
} else {
 lean_dec_ref(x_150);
 x_153 = lean_box(0);
}
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_151);
x_155 = lean_box(0);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
if (lean_is_scalar(x_153)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_153;
}
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_152);
return x_157;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_158 = lean_ctor_get(x_150, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_150, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_160 = x_150;
} else {
 lean_dec_ref(x_150);
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
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; 
x_162 = lean_ctor_get(x_146, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_146, 1);
lean_inc(x_163);
lean_dec(x_146);
x_164 = lean_ctor_get(x_147, 0);
lean_inc(x_164);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 x_165 = x_147;
} else {
 lean_dec_ref(x_147);
 x_165 = lean_box(0);
}
lean_inc(x_162);
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 1, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_162);
x_167 = lean_box(0);
x_168 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_169 = l_Lean_Elab_Term_elabTermEnsuringType(x_164, x_166, x_168, x_167, x_3, x_4, x_5, x_6, x_7, x_8, x_163);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
lean_inc(x_5);
lean_inc(x_2);
x_172 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_2, x_162, x_3, x_4, x_5, x_6, x_7, x_8, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_2, x_170, x_3, x_4, x_5, x_6, x_7, x_8, x_174);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_178 = x_175;
} else {
 lean_dec_ref(x_175);
 x_178 = lean_box(0);
}
x_179 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_179, 0, x_173);
x_180 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_180, 0, x_176);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_178;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_177);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_173);
x_183 = lean_ctor_get(x_175, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_175, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_185 = x_175;
} else {
 lean_dec_ref(x_175);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_170);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_187 = lean_ctor_get(x_172, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_172, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_189 = x_172;
} else {
 lean_dec_ref(x_172);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_162);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_191 = lean_ctor_get(x_169, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_169, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_193 = x_169;
} else {
 lean_dec_ref(x_169);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
return x_194;
}
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_195 = lean_ctor_get(x_146, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_146, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_197 = x_146;
} else {
 lean_dec_ref(x_146);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_1(x_5, x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_10, x_2);
return x_11;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
x_19 = 0;
lean_inc(x_16);
x_20 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_8);
lean_ctor_set(x_20, 3, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*4 + 1, x_17);
x_21 = lean_array_push(x_4, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_5, x_22);
x_24 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_6, x_23, x_21, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_24;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_18 = 0;
lean_inc(x_16);
x_19 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_8);
lean_ctor_set(x_19, 3, x_3);
lean_ctor_set_uint8(x_19, sizeof(void*)*4, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*4 + 1, x_17);
x_20 = lean_array_push(x_4, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_5, x_21);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_6, x_22, x_20, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_23;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_1);
x_19 = l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__2(x_1, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_20);
x_23 = lean_box(0);
x_24 = 1;
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_25 = l_Lean_Elab_Term_elabTermEnsuringType(x_2, x_22, x_24, x_23, x_12, x_13, x_14, x_15, x_16, x_17, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_26);
x_29 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_29, 0, x_3);
lean_ctor_set(x_29, 1, x_4);
lean_ctor_set(x_29, 2, x_1);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_5);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_6);
x_30 = lean_array_push(x_7, x_29);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_8, x_31);
x_33 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_9, x_32, x_30, x_10, x_12, x_13, x_14, x_15, x_16, x_17, x_27);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
return x_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_25);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field, type expected");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has been declared in parent structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("omit field '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' type to set default value");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.Structure.0.Lean.Elab.Command.withFields");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10;
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11;
x_3 = lean_unsigned_to_nat(304u);
x_4 = lean_unsigned_to_nat(37u);
x_5 = l_Lean_Syntax_strLitToAtom___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_8(x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_array_fget(x_1, x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_3, x_17);
x_19 = !lean_is_exclusive(x_9);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_9, 3);
x_21 = l_Lean_replaceRef(x_16, x_20);
lean_dec(x_20);
lean_dec(x_16);
lean_ctor_set(x_9, 3, x_21);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_15, 4);
lean_inc(x_22);
x_23 = l_Lean_Syntax_getArgs(x_22);
lean_dec(x_22);
lean_inc(x_15);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue), 9, 1);
lean_closure_set(x_24, 0, x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = l_Lean_Elab_Term_elabBinders___rarg(x_23, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
x_31 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_dec(x_25);
x_33 = lean_ctor_get(x_28, 0);
lean_inc(x_33);
lean_dec(x_28);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_33);
x_34 = l_Lean_Meta_inferType___at_Lean_Elab_Term_throwTypeMismatchError___spec__2(x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_32);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_38 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed), 15, 7);
lean_closure_set(x_38, 0, x_15);
lean_closure_set(x_38, 1, x_33);
lean_closure_set(x_38, 2, x_17);
lean_closure_set(x_38, 3, x_3);
lean_closure_set(x_38, 4, x_2);
lean_closure_set(x_38, 5, x_1);
lean_closure_set(x_38, 6, x_4);
x_39 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_37, x_35, x_38, x_5, x_6, x_7, x_8, x_9, x_10, x_36);
return x_39;
}
else
{
uint8_t x_40; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_34);
if (x_40 == 0)
{
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_34, 0);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_34);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_25, 1);
lean_inc(x_44);
lean_dec(x_25);
x_45 = lean_ctor_get(x_26, 1);
lean_inc(x_45);
lean_dec(x_26);
x_46 = lean_ctor_get(x_27, 0);
lean_inc(x_46);
lean_dec(x_27);
x_47 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_48 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed), 15, 7);
lean_closure_set(x_48, 0, x_15);
lean_closure_set(x_48, 1, x_17);
lean_closure_set(x_48, 2, x_45);
lean_closure_set(x_48, 3, x_3);
lean_closure_set(x_48, 4, x_2);
lean_closure_set(x_48, 5, x_1);
lean_closure_set(x_48, 6, x_4);
x_49 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_47, x_46, x_48, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_9);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_25);
if (x_50 == 0)
{
return x_25;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_25, 0);
x_52 = lean_ctor_get(x_25, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_25);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_18, 0);
lean_inc(x_54);
lean_dec(x_18);
x_55 = lean_ctor_get_uint8(x_54, sizeof(void*)*4);
switch (x_55) {
case 0:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_54);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_56, 0, x_17);
x_57 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_60, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_61;
}
case 1:
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_15, 6);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_54);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_63 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_63, 0, x_17);
x_64 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_67, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; uint8_t x_78; uint8_t x_101; uint8_t x_123; 
x_69 = lean_ctor_get(x_54, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_54, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_54, 2);
lean_inc(x_71);
x_72 = lean_ctor_get_uint8(x_54, sizeof(void*)*4 + 1);
lean_dec(x_54);
x_73 = lean_ctor_get(x_62, 0);
lean_inc(x_73);
lean_dec(x_62);
x_74 = lean_ctor_get(x_15, 4);
lean_inc(x_74);
x_75 = l_Lean_Syntax_getArgs(x_74);
lean_dec(x_74);
x_76 = l_Array_isEmpty___rarg(x_75);
lean_dec(x_75);
x_77 = lean_ctor_get(x_15, 5);
lean_inc(x_77);
lean_dec(x_15);
if (x_76 == 0)
{
if (lean_obj_tag(x_77) == 0)
{
uint8_t x_145; 
x_145 = 1;
x_101 = x_145;
goto block_122;
}
else
{
uint8_t x_146; 
x_146 = 1;
x_123 = x_146;
goto block_144;
}
}
else
{
if (lean_obj_tag(x_77) == 0)
{
uint8_t x_147; 
x_147 = 0;
x_101 = x_147;
goto block_122;
}
else
{
uint8_t x_148; 
x_148 = 0;
x_123 = x_148;
goto block_144;
}
}
block_100:
{
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_77);
lean_dec(x_17);
x_79 = lean_box(0);
x_80 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_71, x_73, x_69, x_70, x_55, x_72, x_3, x_2, x_1, x_4, x_79, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_81, 0, x_17);
x_82 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_83 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_86 = l_Lean_Init_Prelude___instance__73;
x_87 = l_Option_get_x21___rarg___closed__4;
x_88 = lean_panic_fn(x_86, x_87);
x_89 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_88, x_85, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_88);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
return x_89;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_89, 0);
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_89);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_94 = lean_ctor_get(x_77, 0);
lean_inc(x_94);
lean_dec(x_77);
x_95 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_94, x_85, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_94);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
return x_95;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_95);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
block_122:
{
if (x_101 == 0)
{
uint8_t x_102; 
x_102 = 0;
x_78 = x_102;
goto block_100;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_103 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_103, 0, x_17);
x_104 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_105 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_107 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = l_Lean_Init_Prelude___instance__73;
x_109 = l_Option_get_x21___rarg___closed__4;
x_110 = lean_panic_fn(x_108, x_109);
x_111 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_110, x_107, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_110);
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
return x_111;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_111, 0);
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_111);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_116 = lean_ctor_get(x_77, 0);
lean_inc(x_116);
lean_dec(x_77);
x_117 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_116, x_107, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_116);
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
return x_117;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_117);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
}
block_144:
{
if (x_123 == 0)
{
uint8_t x_124; 
x_124 = 1;
x_78 = x_124;
goto block_100;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_125 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_125, 0, x_17);
x_126 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
x_128 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_129 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_130 = l_Lean_Init_Prelude___instance__73;
x_131 = l_Option_get_x21___rarg___closed__4;
x_132 = lean_panic_fn(x_130, x_131);
x_133 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_132, x_129, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_132);
x_134 = !lean_is_exclusive(x_133);
if (x_134 == 0)
{
return x_133;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_133, 0);
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_133);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_138 = lean_ctor_get(x_77, 0);
lean_inc(x_138);
lean_dec(x_77);
x_139 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_138, x_129, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_138);
x_140 = !lean_is_exclusive(x_139);
if (x_140 == 0)
{
return x_139;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_139, 0);
x_142 = lean_ctor_get(x_139, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_139);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
}
}
default: 
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_54);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_149 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_150 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12;
x_151 = lean_panic_fn(x_149, x_150);
x_152 = lean_apply_7(x_151, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_152;
}
}
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_153 = lean_ctor_get(x_9, 0);
x_154 = lean_ctor_get(x_9, 1);
x_155 = lean_ctor_get(x_9, 2);
x_156 = lean_ctor_get(x_9, 3);
lean_inc(x_156);
lean_inc(x_155);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_9);
x_157 = l_Lean_replaceRef(x_16, x_156);
lean_dec(x_156);
lean_dec(x_16);
x_158 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_158, 0, x_153);
lean_ctor_set(x_158, 1, x_154);
lean_ctor_set(x_158, 2, x_155);
lean_ctor_set(x_158, 3, x_157);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_15, 4);
lean_inc(x_159);
x_160 = l_Lean_Syntax_getArgs(x_159);
lean_dec(x_159);
lean_inc(x_15);
x_161 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue), 9, 1);
lean_closure_set(x_161, 0, x_15);
lean_inc(x_10);
lean_inc(x_158);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_162 = l_Lean_Elab_Term_elabBinders___rarg(x_160, x_161, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
if (lean_obj_tag(x_162) == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_166 = lean_ctor_get(x_162, 1);
lean_inc(x_166);
lean_dec(x_162);
x_167 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
x_168 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_167, x_5, x_6, x_7, x_8, x_158, x_10, x_166);
lean_dec(x_10);
lean_dec(x_158);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_162, 1);
lean_inc(x_169);
lean_dec(x_162);
x_170 = lean_ctor_get(x_165, 0);
lean_inc(x_170);
lean_dec(x_165);
lean_inc(x_10);
lean_inc(x_158);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_170);
x_171 = l_Lean_Meta_inferType___at_Lean_Elab_Term_throwTypeMismatchError___spec__2(x_170, x_5, x_6, x_7, x_8, x_158, x_10, x_169);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; lean_object* x_176; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_175 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed), 15, 7);
lean_closure_set(x_175, 0, x_15);
lean_closure_set(x_175, 1, x_170);
lean_closure_set(x_175, 2, x_17);
lean_closure_set(x_175, 3, x_3);
lean_closure_set(x_175, 4, x_2);
lean_closure_set(x_175, 5, x_1);
lean_closure_set(x_175, 6, x_4);
x_176 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_174, x_172, x_175, x_5, x_6, x_7, x_8, x_158, x_10, x_173);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
lean_dec(x_170);
lean_dec(x_158);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_177 = lean_ctor_get(x_171, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_171, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_179 = x_171;
} else {
 lean_dec_ref(x_171);
 x_179 = lean_box(0);
}
if (lean_is_scalar(x_179)) {
 x_180 = lean_alloc_ctor(1, 2, 0);
} else {
 x_180 = x_179;
}
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_178);
return x_180;
}
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; lean_object* x_185; lean_object* x_186; 
x_181 = lean_ctor_get(x_162, 1);
lean_inc(x_181);
lean_dec(x_162);
x_182 = lean_ctor_get(x_163, 1);
lean_inc(x_182);
lean_dec(x_163);
x_183 = lean_ctor_get(x_164, 0);
lean_inc(x_183);
lean_dec(x_164);
x_184 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_185 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed), 15, 7);
lean_closure_set(x_185, 0, x_15);
lean_closure_set(x_185, 1, x_17);
lean_closure_set(x_185, 2, x_182);
lean_closure_set(x_185, 3, x_3);
lean_closure_set(x_185, 4, x_2);
lean_closure_set(x_185, 5, x_1);
lean_closure_set(x_185, 6, x_4);
x_186 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_184, x_183, x_185, x_5, x_6, x_7, x_8, x_158, x_10, x_181);
return x_186;
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_158);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_187 = lean_ctor_get(x_162, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_162, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_189 = x_162;
} else {
 lean_dec_ref(x_162);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
else
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_ctor_get(x_18, 0);
lean_inc(x_191);
lean_dec(x_18);
x_192 = lean_ctor_get_uint8(x_191, sizeof(void*)*4);
switch (x_192) {
case 0:
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_191);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_193 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_193, 0, x_17);
x_194 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_195 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_193);
x_196 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_197 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_197, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_158);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_198;
}
case 1:
{
lean_object* x_199; 
x_199 = lean_ctor_get(x_15, 6);
lean_inc(x_199);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_191);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_200 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_200, 0, x_17);
x_201 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_202 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
x_203 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
x_204 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
x_205 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_204, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_158);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; uint8_t x_213; lean_object* x_214; uint8_t x_215; uint8_t x_238; uint8_t x_260; 
x_206 = lean_ctor_get(x_191, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_191, 1);
lean_inc(x_207);
x_208 = lean_ctor_get(x_191, 2);
lean_inc(x_208);
x_209 = lean_ctor_get_uint8(x_191, sizeof(void*)*4 + 1);
lean_dec(x_191);
x_210 = lean_ctor_get(x_199, 0);
lean_inc(x_210);
lean_dec(x_199);
x_211 = lean_ctor_get(x_15, 4);
lean_inc(x_211);
x_212 = l_Lean_Syntax_getArgs(x_211);
lean_dec(x_211);
x_213 = l_Array_isEmpty___rarg(x_212);
lean_dec(x_212);
x_214 = lean_ctor_get(x_15, 5);
lean_inc(x_214);
lean_dec(x_15);
if (x_213 == 0)
{
if (lean_obj_tag(x_214) == 0)
{
uint8_t x_282; 
x_282 = 1;
x_238 = x_282;
goto block_259;
}
else
{
uint8_t x_283; 
x_283 = 1;
x_260 = x_283;
goto block_281;
}
}
else
{
if (lean_obj_tag(x_214) == 0)
{
uint8_t x_284; 
x_284 = 0;
x_238 = x_284;
goto block_259;
}
else
{
uint8_t x_285; 
x_285 = 0;
x_260 = x_285;
goto block_281;
}
}
block_237:
{
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; 
lean_dec(x_214);
lean_dec(x_17);
x_216 = lean_box(0);
x_217 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_208, x_210, x_206, x_207, x_192, x_209, x_3, x_2, x_1, x_4, x_216, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_2);
return x_217;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
lean_dec(x_210);
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_206);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_218 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_218, 0, x_17);
x_219 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_220 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
x_221 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_222 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_223 = l_Lean_Init_Prelude___instance__73;
x_224 = l_Option_get_x21___rarg___closed__4;
x_225 = lean_panic_fn(x_223, x_224);
x_226 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_225, x_222, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_225);
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_229 = x_226;
} else {
 lean_dec_ref(x_226);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(1, 2, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_228);
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_231 = lean_ctor_get(x_214, 0);
lean_inc(x_231);
lean_dec(x_214);
x_232 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_231, x_222, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_231);
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_235 = x_232;
} else {
 lean_dec_ref(x_232);
 x_235 = lean_box(0);
}
if (lean_is_scalar(x_235)) {
 x_236 = lean_alloc_ctor(1, 2, 0);
} else {
 x_236 = x_235;
}
lean_ctor_set(x_236, 0, x_233);
lean_ctor_set(x_236, 1, x_234);
return x_236;
}
}
}
block_259:
{
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = 0;
x_215 = x_239;
goto block_237;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_210);
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_206);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_240 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_240, 0, x_17);
x_241 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_242 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_240);
x_243 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_244 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_245 = l_Lean_Init_Prelude___instance__73;
x_246 = l_Option_get_x21___rarg___closed__4;
x_247 = lean_panic_fn(x_245, x_246);
x_248 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_247, x_244, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_247);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_248, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 x_251 = x_248;
} else {
 lean_dec_ref(x_248);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_253 = lean_ctor_get(x_214, 0);
lean_inc(x_253);
lean_dec(x_214);
x_254 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_253, x_244, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_253);
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_257 = x_254;
} else {
 lean_dec_ref(x_254);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(1, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
}
}
block_281:
{
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = 1;
x_215 = x_261;
goto block_237;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_210);
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_206);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_262 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_262, 0, x_17);
x_263 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_264 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_262);
x_265 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_266 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_267 = l_Lean_Init_Prelude___instance__73;
x_268 = l_Option_get_x21___rarg___closed__4;
x_269 = lean_panic_fn(x_267, x_268);
x_270 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_269, x_266, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_269);
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_273 = x_270;
} else {
 lean_dec_ref(x_270);
 x_273 = lean_box(0);
}
if (lean_is_scalar(x_273)) {
 x_274 = lean_alloc_ctor(1, 2, 0);
} else {
 x_274 = x_273;
}
lean_ctor_set(x_274, 0, x_271);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_275 = lean_ctor_get(x_214, 0);
lean_inc(x_275);
lean_dec(x_214);
x_276 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_275, x_266, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_275);
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_279 = x_276;
} else {
 lean_dec_ref(x_276);
 x_279 = lean_box(0);
}
if (lean_is_scalar(x_279)) {
 x_280 = lean_alloc_ctor(1, 2, 0);
} else {
 x_280 = x_279;
}
lean_ctor_set(x_280, 0, x_277);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
}
}
}
default: 
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
lean_dec(x_191);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_286 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_287 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12;
x_288 = lean_panic_fn(x_286, x_287);
x_289 = lean_apply_7(x_288, x_5, x_6, x_7, x_8, x_158, x_10, x_11);
return x_289;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_5);
lean_dec(x_5);
x_20 = lean_unbox(x_6);
lean_dec(x_6);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_1, x_2, x_3, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_11);
lean_dec(x_8);
return x_21;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected structure resulting type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 3)
{
uint8_t x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3;
x_19 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_2 == x_3;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_16 = l_Lean_Meta_inferType___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_19 = l_Lean_Elab_Term_collectUsedFVars(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_14, 3);
lean_inc(x_20);
lean_dec(x_14);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = x_2 + x_22;
x_24 = lean_box(0);
x_2 = x_23;
x_4 = x_24;
x_12 = x_21;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_28 = l_Lean_Elab_Term_collectUsedFVars(x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = 1;
x_32 = x_2 + x_31;
x_2 = x_32;
x_4 = x_29;
x_12 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_42 = !lean_is_exclusive(x_16);
if (x_42 == 0)
{
return x_16;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_16, 0);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_16);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_12);
return x_46;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_array_get_size(x_1);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_lt(x_26, x_25);
if (x_27 == 0)
{
lean_dec(x_25);
x_11 = x_10;
goto block_24;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_25, x_25);
if (x_28 == 0)
{
lean_dec(x_25);
x_11 = x_10;
goto block_24;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = 0;
x_30 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_31 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__2(x_1, x_29, x_30, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_11 = x_33;
goto block_24;
}
else
{
uint8_t x_34; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_32);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
block_24:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_12, x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_11);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(x_2, x_20, x_21, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_11);
return x_23;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = l_Lean_CollectFVars_Lean_Util_CollectFVars___instance__1___closed__1;
x_12 = lean_st_mk_ref(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(x_2, x_3, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_13, x_16);
lean_dec(x_13);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_removeUnused(x_1, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_apply_1(x_4, x_18);
x_20 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_16, x_17, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
return x_12;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_12);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 2);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Meta_inferType___rarg___lambda__1(x_10, x_1, x_13, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_10);
lean_dec(x_1);
x_15 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_16 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_995____spec__1___rarg(x_15, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_levelMVarToParam_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_inferType___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_2 == x_3;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_2 + x_18;
x_2 = x_19;
x_4 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_10, x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_20 = lean_box(0);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(x_1, x_18, x_19, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 < x_1;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_array_uget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_3, x_2, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
x_23 = lean_ctor_get_uint8(x_18, sizeof(void*)*4 + 1);
x_24 = lean_ctor_get(x_18, 3);
lean_inc(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_21);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = 1;
x_28 = x_2 + x_27;
x_29 = x_18;
x_30 = lean_array_uset(x_17, x_2, x_29);
x_2 = x_28;
x_3 = x_30;
x_11 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_ctor_get(x_18, 3);
lean_dec(x_33);
x_34 = lean_ctor_get(x_18, 2);
lean_dec(x_34);
x_35 = lean_ctor_get(x_18, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_18, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_dec(x_25);
x_38 = !lean_is_exclusive(x_24);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_24, 0);
lean_inc(x_5);
x_40 = l_Lean_Elab_Term_levelMVarToParam_x27(x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_ctor_set(x_24, 0, x_41);
x_43 = 1;
x_44 = x_2 + x_43;
x_45 = x_18;
x_46 = lean_array_uset(x_17, x_2, x_45);
x_2 = x_44;
x_3 = x_46;
x_11 = x_42;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_24, 0);
lean_inc(x_48);
lean_dec(x_24);
lean_inc(x_5);
x_49 = l_Lean_Elab_Term_levelMVarToParam_x27(x_48, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_18, 3, x_52);
x_53 = 1;
x_54 = x_2 + x_53;
x_55 = x_18;
x_56 = lean_array_uset(x_17, x_2, x_55);
x_2 = x_54;
x_3 = x_56;
x_11 = x_51;
goto _start;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; size_t x_66; size_t x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_18);
x_58 = lean_ctor_get(x_25, 1);
lean_inc(x_58);
lean_dec(x_25);
x_59 = lean_ctor_get(x_24, 0);
lean_inc(x_59);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_60 = x_24;
} else {
 lean_dec_ref(x_24);
 x_60 = lean_box(0);
}
lean_inc(x_5);
x_61 = l_Lean_Elab_Term_levelMVarToParam_x27(x_59, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
if (lean_is_scalar(x_60)) {
 x_64 = lean_alloc_ctor(1, 1, 0);
} else {
 x_64 = x_60;
}
lean_ctor_set(x_64, 0, x_62);
x_65 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_65, 0, x_19);
lean_ctor_set(x_65, 1, x_20);
lean_ctor_set(x_65, 2, x_21);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*4, x_22);
lean_ctor_set_uint8(x_65, sizeof(void*)*4 + 1, x_23);
x_66 = 1;
x_67 = x_2 + x_66;
x_68 = x_65;
x_69 = lean_array_uset(x_17, x_2, x_68);
x_2 = x_67;
x_3 = x_69;
x_11 = x_63;
goto _start;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_71 = !lean_is_exclusive(x_25);
if (x_71 == 0)
{
return x_25;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_25, 0);
x_73 = lean_ctor_get(x_25, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_25);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = x_3;
x_19 = lean_box_usize(x_17);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1;
x_21 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed), 11, 3);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
lean_closure_set(x_21, 2, x_18);
x_22 = x_21;
x_23 = lean_apply_8(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_12);
if (x_28 == 0)
{
return x_12;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_12, 0);
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_12);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_4);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_st_mk_ref(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_13);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(x_1, x_2, x_3, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_13, x_17);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_4 == x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_uget(x_3, x_4);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_17 = l_Lean_Meta_inferType___at_Lean_Elab_Term_throwTypeMismatchError___spec__2(x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l___private_Lean_Meta_InferType_0__Lean_Meta_getLevelImp(x_18, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_21, x_9, x_10, x_11, x_12, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_7);
lean_inc(x_2);
x_26 = l_Lean_Elab_Command_accLevelAtCtor(x_24, x_1, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 1;
x_30 = x_4 + x_29;
x_4 = x_30;
x_6 = x_27;
x_13 = x_28;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_20);
if (x_36 == 0)
{
return x_20;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_20, 0);
x_38 = lean_ctor_get(x_20, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_20);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_17);
if (x_40 == 0)
{
return x_17;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_6);
lean_ctor_set(x_44, 1, x_13);
return x_44;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_14 = l_Array_empty___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_11, x_11);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_17 = l_Array_empty___closed__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_10);
return x_18;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = 0;
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = l_Array_empty___closed__1;
x_22 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(x_1, x_2, x_3, x_19, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_assignLevelMVar___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_6, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_metavar_ctx_assign_level(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_6, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
x_26 = lean_ctor_get(x_11, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_27 = lean_metavar_ctx_assign_level(x_23, x_1, x_2);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_26);
x_29 = lean_st_ref_set(x_6, x_28, x_12);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compute resulting universe level of structure, provide universe explicitly");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Level_getOffsetAux(x_11, x_13);
x_15 = l_Lean_Level_getLevelOffset(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_15) == 5)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_14);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(x_15, x_14, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Command_mkResultUniverse(x_18, x_14);
lean_dec(x_14);
lean_dec(x_18);
x_21 = l_Lean_Meta_assignLevelMVar___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___spec__1(x_16, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
lean_dec(x_3);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Meta_instantiateMVarsImp(x_2, x_5, x_6, x_7, x_8, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_28 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3;
x_29 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Meta_assignLevelMVar___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_assignLevelMVar___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_inferType___at_Lean_Elab_Term_throwTypeMismatchError___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_instantiateMVarsImp(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_CollectLevelParams_main(x_15, x_1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = l_Lean_CollectLevelParams_main(x_17, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_10, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(x_1, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_4, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_2 + x_18;
x_2 = x_19;
x_4 = x_16;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_CollectLevelParams_Lean_Util_CollectLevelParams___instance__1___closed__1;
x_13 = l_Lean_CollectLevelParams_main(x_1, x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_2, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_array_get_size(x_4);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_ctor_get(x_19, 2);
lean_inc(x_24);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_24);
return x_17;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_le(x_21, x_21);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_26 = lean_ctor_get(x_19, 2);
lean_inc(x_26);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; 
lean_free_object(x_17);
x_27 = 0;
x_28 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_29 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_4, x_27, x_28, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_31, 2);
lean_inc(x_32);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = lean_ctor_get(x_33, 2);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_29);
if (x_37 == 0)
{
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
x_43 = lean_array_get_size(x_4);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_nat_dec_lt(x_44, x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_43);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_46 = lean_ctor_get(x_41, 2);
lean_inc(x_46);
lean_dec(x_41);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_42);
return x_47;
}
else
{
uint8_t x_48; 
x_48 = lean_nat_dec_le(x_43, x_43);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_43);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_49 = lean_ctor_get(x_41, 2);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
else
{
size_t x_51; size_t x_52; lean_object* x_53; 
x_51 = 0;
x_52 = lean_usize_of_nat(x_43);
lean_dec(x_43);
x_53 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_4, x_51, x_52, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 2);
lean_inc(x_57);
lean_dec(x_54);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_53, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_61 = x_53;
} else {
 lean_dec_ref(x_53);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_63 = !lean_is_exclusive(x_17);
if (x_63 == 0)
{
return x_17;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_17, 0);
x_65 = lean_ctor_get(x_17, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_17);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_67 = !lean_is_exclusive(x_14);
if (x_67 == 0)
{
return x_14;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_14, 0);
x_69 = lean_ctor_get(x_14, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_14);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_1(x_3, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_2, x_13);
lean_dec(x_2);
x_15 = l_Lean_Elab_Command_Lean_Elab_Structure___instance__1;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l_Lean_Meta_instantiateMVarsImp(x_3, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_mkOptionalNode___closed__2;
x_25 = lean_array_push(x_24, x_17);
x_26 = lean_expr_abstract(x_22, x_25);
lean_dec(x_25);
lean_dec(x_22);
x_27 = lean_ctor_get_uint8(x_16, sizeof(void*)*4);
lean_dec(x_16);
switch (x_27) {
case 0:
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = l_Lean_LocalDecl_userName(x_19);
x_29 = l_Lean_LocalDecl_binderInfo(x_19);
x_30 = l_Lean_LocalDecl_type(x_19);
lean_dec(x_19);
x_31 = l_Lean_mkForall(x_28, x_29, x_30, x_26);
x_2 = x_14;
x_3 = x_31;
x_10 = x_23;
goto _start;
}
case 1:
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_LocalDecl_value(x_19);
lean_dec(x_19);
x_34 = lean_expr_instantiate1(x_26, x_33);
lean_dec(x_33);
lean_dec(x_26);
x_2 = x_14;
x_3 = x_34;
x_10 = x_23;
goto _start;
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_36 = l_Lean_LocalDecl_userName(x_19);
x_37 = l_myMacro____x40_Init_Notation___hyg_7262____closed__14;
x_38 = l_Lean_Name_appendBefore(x_36, x_37);
x_39 = l_Lean_LocalDecl_binderInfo(x_19);
x_40 = l_Lean_LocalDecl_type(x_19);
lean_dec(x_19);
x_41 = l_Lean_mkForall(x_38, x_39, x_40, x_26);
x_2 = x_14;
x_3 = x_41;
x_10 = x_23;
goto _start;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_18);
if (x_47 == 0)
{
return x_18;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_18, 0);
x_49 = lean_ctor_get(x_18, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_18);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_10);
return x_51;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_inc(x_13);
x_14 = l_List_map___at_Lean_Meta_addGlobalInstanceImp___spec__1(x_2);
x_15 = l_Lean_mkConst(x_13, x_14);
x_16 = l_Lean_mkAppN(x_15, x_3);
x_17 = lean_array_get_size(x_4);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 3);
x_20 = l_Lean_replaceRef(x_12, x_19);
lean_dec(x_19);
lean_dec(x_12);
lean_ctor_set(x_9, 3, x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_4, x_17, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_7);
lean_inc(x_3);
x_24 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_3, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_instantiateMVarsImp(x_25, x_7, x_8, x_9, x_10, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_array_get_size(x_3);
lean_dec(x_3);
x_31 = lean_ctor_get(x_1, 9);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*4);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_31, 3);
lean_inc(x_33);
lean_dec(x_31);
x_34 = 1;
x_35 = l_Lean_Expr_inferImplicit(x_29, x_30, x_34);
lean_dec(x_30);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_27, 0, x_36);
return x_27;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_31, 3);
lean_inc(x_37);
lean_dec(x_31);
x_38 = 0;
x_39 = l_Lean_Expr_inferImplicit(x_29, x_30, x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_27, 0, x_40);
return x_27;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_27, 0);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_27);
x_43 = lean_array_get_size(x_3);
lean_dec(x_3);
x_44 = lean_ctor_get(x_1, 9);
lean_inc(x_44);
lean_dec(x_1);
x_45 = lean_ctor_get_uint8(x_44, sizeof(void*)*4);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_44, 3);
lean_inc(x_46);
lean_dec(x_44);
x_47 = 1;
x_48 = l_Lean_Expr_inferImplicit(x_41, x_43, x_47);
lean_dec(x_43);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
else
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_44, 3);
lean_inc(x_51);
lean_dec(x_44);
x_52 = 0;
x_53 = l_Lean_Expr_inferImplicit(x_41, x_43, x_52);
lean_dec(x_43);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_42);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_27);
if (x_56 == 0)
{
return x_27;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_27, 0);
x_58 = lean_ctor_get(x_27, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_27);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_24);
if (x_60 == 0)
{
return x_24;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_24, 0);
x_62 = lean_ctor_get(x_24, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_24);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_21);
if (x_64 == 0)
{
return x_21;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_21, 0);
x_66 = lean_ctor_get(x_21, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_21);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_68 = lean_ctor_get(x_9, 0);
x_69 = lean_ctor_get(x_9, 1);
x_70 = lean_ctor_get(x_9, 2);
x_71 = lean_ctor_get(x_9, 3);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_9);
x_72 = l_Lean_replaceRef(x_12, x_71);
lean_dec(x_71);
lean_dec(x_12);
x_73 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_69);
lean_ctor_set(x_73, 2, x_70);
lean_ctor_set(x_73, 3, x_72);
lean_inc(x_10);
lean_inc(x_73);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_74 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_4, x_17, x_16, x_5, x_6, x_7, x_8, x_73, x_10, x_11);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
lean_inc(x_7);
lean_inc(x_3);
x_77 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_3, x_75, x_5, x_6, x_7, x_8, x_73, x_10, x_76);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_Meta_instantiateMVarsImp(x_78, x_7, x_8, x_73, x_10, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
 x_83 = lean_box(0);
}
x_84 = lean_array_get_size(x_3);
lean_dec(x_3);
x_85 = lean_ctor_get(x_1, 9);
lean_inc(x_85);
lean_dec(x_1);
x_86 = lean_ctor_get_uint8(x_85, sizeof(void*)*4);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_ctor_get(x_85, 3);
lean_inc(x_87);
lean_dec(x_85);
x_88 = 1;
x_89 = l_Lean_Expr_inferImplicit(x_81, x_84, x_88);
lean_dec(x_84);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_89);
if (lean_is_scalar(x_83)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_83;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_82);
return x_91;
}
else
{
lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_92 = lean_ctor_get(x_85, 3);
lean_inc(x_92);
lean_dec(x_85);
x_93 = 0;
x_94 = l_Lean_Expr_inferImplicit(x_81, x_84, x_93);
lean_dec(x_84);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_94);
if (lean_is_scalar(x_83)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_83;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_82);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_3);
lean_dec(x_1);
x_97 = lean_ctor_get(x_80, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_80, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_99 = x_80;
} else {
 lean_dec_ref(x_80);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_73);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_101 = lean_ctor_get(x_77, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_77, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_103 = x_77;
} else {
 lean_dec_ref(x_77);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_73);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_105 = lean_ctor_get(x_74, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_74, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_107 = x_74;
} else {
 lean_dec_ref(x_74);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = lean_mk_projections(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_mk_projections(x_14, x_1, x_2, x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l_Lean_setEnv___at_Lean_Elab_Term_declareTacticSyntax___spec__3(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_4);
return x_21;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(uint8_t x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (x_1 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_6);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
if (x_2 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
else
{
if (x_3 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
lean_dec(x_6);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_mkNoConfusion___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__5(x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_19;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___closed__2;
lean_inc(x_12);
x_14 = l_Lean_Environment_contains(x_12, x_13);
x_15 = l_myMacro____x40_Init_Notation___hyg_2549____closed__4;
lean_inc(x_12);
x_16 = l_Lean_Environment_contains(x_12, x_15);
x_17 = l_myMacro____x40_Init_Notation___hyg_2883____closed__4;
x_18 = l_Lean_Environment_contains(x_12, x_17);
lean_inc(x_6);
lean_inc(x_2);
x_19 = l_Lean_mkRecOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_19) == 0)
{
if (x_14 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_14, x_16, x_18, x_1, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_6);
lean_inc(x_2);
x_24 = l_Lean_mkCasesOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_14, x_16, x_18, x_1, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_25);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_13, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkId___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkIdImp(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_mkAuxDefinition___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_st_ref_get(x_11, x_12);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 3);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get_uint8(x_35, sizeof(void*)*1);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = 0;
x_13 = x_38;
x_14 = x_37;
goto block_32;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_dec(x_33);
x_40 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_516____closed__4;
x_41 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_40, x_8, x_9, x_10, x_11, x_39);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_unbox(x_42);
lean_dec(x_42);
x_13 = x_44;
x_14 = x_43;
goto block_32;
}
block_32:
{
if (x_13 == 0)
{
lean_object* x_15; 
x_15 = l___private_Lean_Meta_Closure_0__Lean_Meta_mkAuxDefinitionImp(x_1, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc(x_1);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_inc(x_2);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_2);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__8;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
lean_inc(x_3);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_3);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_17);
x_28 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_516____closed__4;
x_29 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_28, x_27, x_8, x_9, x_10, x_11, x_14);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l___private_Lean_Meta_Closure_0__Lean_Meta_mkAuxDefinitionImp(x_1, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_30);
return x_31;
}
}
}
}
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_set_reducibility_status(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_8, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
x_26 = lean_ctor_get(x_11, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_27 = lean_set_reducibility_status(x_23, x_1, x_2);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_26);
x_29 = lean_st_ref_set(x_8, x_28, x_12);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkIdImp(x_17, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_15);
x_22 = l_Lean_Meta_mkAuxDefinition___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(x_15, x_16, x_19, x_21, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = 0;
x_25 = l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(x_15, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_2 + x_28;
x_2 = x_29;
x_4 = x_26;
x_11 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_31 = !lean_is_exclusive(x_22);
if (x_31 == 0)
{
return x_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_4);
lean_ctor_set(x_39, 1, x_11);
return x_39;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_Term_Quotation_Lean_Elab_Quotation___instance__1___spec__1___rarg___boxed), 8, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = l_Lean_Meta_getLocalInstances___at_Lean_Elab_Term_removeUnused___spec__1___rarg(x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_array_get_size(x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_2);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
x_17 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_13, x_13);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_2);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
x_20 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_20;
}
else
{
size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_22 = lean_box(0);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1;
x_24 = lean_box_usize(x_21);
x_25 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4___boxed), 11, 4);
lean_closure_set(x_25, 0, x_2);
lean_closure_set(x_25, 1, x_23);
lean_closure_set(x_25, 2, x_24);
lean_closure_set(x_25, 3, x_22);
x_26 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_26;
}
}
}
}
lean_object* l_Lean_Meta_mkId___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_mkId___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_mkAuxDefinition___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Meta_mkAuxDefinition___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(x_1, x_2, x_3, x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_addGlobalInstance___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_6, 3);
x_14 = lean_add_instance(x_12, x_1, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_setEnv___at_Lean_Elab_Term_declareTacticSyntax___spec__3(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_io_error_to_string(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_inc(x_13);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_13);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set(x_14, 0, x_23);
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_14);
x_26 = lean_io_error_to_string(x_24);
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_inc(x_13);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
return x_30;
}
}
}
}
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = l_Lean_Meta_addGlobalInstance___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_1 = x_12;
x_8 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_12);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_default");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_inferType___at_Lean_Elab_Term_throwTypeMismatchError___spec__2(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
x_23 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__2;
x_24 = l_Lean_Name_append(x_22, x_23);
lean_dec(x_22);
x_25 = lean_ctor_get(x_17, 3);
lean_inc(x_25);
lean_dec(x_17);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; 
x_26 = l_Lean_Expr_Lean_Expr___instance__11;
x_27 = l_Option_get_x21___rarg___closed__4;
x_28 = lean_panic_fn(x_26, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
x_31 = 1;
x_32 = x_2 + x_31;
x_33 = x_30;
x_34 = lean_array_uset(x_16, x_2, x_33);
x_2 = x_32;
x_3 = x_34;
x_10 = x_21;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_24);
lean_ctor_set(x_38, 1, x_37);
x_39 = 1;
x_40 = x_2 + x_39;
x_41 = x_38;
x_42 = lean_array_uset(x_16, x_2, x_41);
x_2 = x_40;
x_3 = x_42;
x_10 = x_21;
goto _start;
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_19);
if (x_44 == 0)
{
return x_19;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_19, 0);
x_46 = lean_ctor_get(x_19, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_19);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
if (x_7 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_Expr_fvarId_x21(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Lean_LocalContext_updateBinderInfo(x_4, x_11, x_12);
x_2 = x_9;
x_4 = x_13;
goto _start;
}
else
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Expr_fvarId_x21(x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = l_Lean_LocalContext_updateBinderInfo(x_4, x_7, x_8);
x_10 = 1;
x_11 = x_2 + x_10;
x_2 = x_11;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
x_8 = 1;
x_9 = x_2 + x_8;
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
x_11 = lean_array_push(x_4, x_6);
x_2 = x_9;
x_4 = x_11;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_7);
x_9 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_5);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 1);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_11);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_13);
if (x_18 == 0)
{
size_t x_19; size_t x_20; 
lean_dec(x_16);
lean_dec(x_13);
x_19 = 1;
x_20 = x_2 + x_19;
x_2 = x_20;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_22; uint8_t x_23; 
x_22 = l_Lean_LocalDecl_binderInfo(x_16);
lean_dec(x_16);
x_23 = l_Lean_BinderInfo_isInstImplicit(x_22);
if (x_23 == 0)
{
size_t x_24; size_t x_25; 
lean_dec(x_13);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
x_11 = x_17;
goto _start;
}
else
{
lean_object* x_27; size_t x_28; size_t x_29; 
x_27 = lean_array_push(x_4, x_13);
x_28 = 1;
x_29 = x_2 + x_28;
x_2 = x_29;
x_4 = x_27;
x_11 = x_17;
goto _start;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_15);
if (x_31 == 0)
{
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 0);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_15);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_4);
lean_ctor_set(x_35, 1, x_11);
return x_35;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
if (x_7 == 0)
{
lean_object* x_10; 
x_10 = lean_array_push(x_4, x_6);
x_2 = x_9;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
}
else
{
return x_4;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_839____closed__1;
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(x_8, x_1, x_2, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_205 = lean_ctor_get(x_13, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_13, 1);
lean_inc(x_206);
x_207 = lean_ctor_get(x_13, 2);
lean_inc(x_207);
x_208 = lean_ctor_get(x_13, 3);
lean_inc(x_208);
x_209 = l_Lean_replaceRef(x_5, x_208);
lean_dec(x_208);
x_210 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_210, 0, x_205);
lean_ctor_set(x_210, 1, x_206);
lean_ctor_set(x_210, 2, x_207);
lean_ctor_set(x_210, 3, x_209);
if (x_6 == 0)
{
lean_object* x_211; 
lean_inc(x_14);
lean_inc(x_210);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
lean_inc(x_7);
x_211 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_7, x_9, x_10, x_11, x_12, x_210, x_14, x_18);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
lean_inc(x_9);
x_214 = l_Lean_Elab_Command_checkResultingUniverse(x_212, x_9, x_10, x_11, x_12, x_210, x_14, x_213);
lean_dec(x_210);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; 
x_215 = lean_ctor_get(x_214, 1);
lean_inc(x_215);
lean_dec(x_214);
x_19 = x_7;
x_20 = x_215;
goto block_204;
}
else
{
uint8_t x_216; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_216 = !lean_is_exclusive(x_214);
if (x_216 == 0)
{
return x_214;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_214, 0);
x_218 = lean_ctor_get(x_214, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_214);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
}
}
else
{
uint8_t x_220; 
lean_dec(x_210);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_220 = !lean_is_exclusive(x_211);
if (x_220 == 0)
{
return x_211;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_211, 0);
x_222 = lean_ctor_get(x_211, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_211);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
return x_223;
}
}
}
else
{
lean_object* x_224; 
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_224 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(x_17, x_7, x_9, x_10, x_11, x_12, x_210, x_14, x_18);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_19 = x_225;
x_20 = x_226;
goto block_204;
}
else
{
uint8_t x_227; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_227 = !lean_is_exclusive(x_224);
if (x_227 == 0)
{
return x_224;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_224, 0);
x_229 = lean_ctor_get(x_224, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_224);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
return x_230;
}
}
}
block_204:
{
lean_object* x_21; uint8_t x_181; lean_object* x_182; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_192 = lean_st_ref_get(x_14, x_20);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_193, 3);
lean_inc(x_194);
lean_dec(x_193);
x_195 = lean_ctor_get_uint8(x_194, sizeof(void*)*1);
lean_dec(x_194);
if (x_195 == 0)
{
lean_object* x_196; uint8_t x_197; 
x_196 = lean_ctor_get(x_192, 1);
lean_inc(x_196);
lean_dec(x_192);
x_197 = 0;
x_181 = x_197;
x_182 = x_196;
goto block_191;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; 
x_198 = lean_ctor_get(x_192, 1);
lean_inc(x_198);
lean_dec(x_192);
x_199 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2;
x_200 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_199, x_9, x_10, x_11, x_12, x_13, x_14, x_198);
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = lean_unbox(x_201);
lean_dec(x_201);
x_181 = x_203;
x_182 = x_202;
goto block_191;
}
block_180:
{
lean_object* x_22; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_19);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(x_19, x_8, x_1, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
x_27 = l_Lean_Elab_sortDeclLevelParams(x_25, x_26, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_30, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_27, 0);
lean_inc(x_32);
lean_dec(x_27);
x_33 = l_Array_append___rarg(x_8, x_1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_3);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(x_3, x_32, x_33, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_11);
lean_inc(x_33);
x_37 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_33, x_19, x_9, x_10, x_11, x_12, x_13, x_14, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_40 = l_Lean_Meta_instantiateMVarsImp(x_38, x_11, x_12, x_13, x_14, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_3, 4);
lean_inc(x_43);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_35);
lean_ctor_set(x_45, 1, x_44);
lean_inc(x_43);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_41);
lean_ctor_set(x_46, 2, x_45);
x_47 = lean_array_get_size(x_33);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_44);
x_49 = lean_ctor_get(x_3, 1);
lean_inc(x_49);
x_50 = lean_ctor_get_uint8(x_49, sizeof(void*)*2 + 3);
lean_inc(x_47);
x_51 = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(x_51, 0, x_32);
lean_ctor_set(x_51, 1, x_47);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set_uint8(x_51, sizeof(void*)*3, x_50);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_51);
x_52 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_51, x_9, x_10, x_11, x_12, x_13, x_14, x_42);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
lean_inc(x_13);
lean_inc(x_9);
x_54 = l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(x_51, x_9, x_10, x_11, x_12, x_13, x_14, x_53);
lean_dec(x_51);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_122; uint8_t x_123; uint8_t x_124; lean_object* x_125; 
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_array_get_size(x_17);
x_122 = lean_unsigned_to_nat(0u);
x_123 = lean_nat_dec_lt(x_122, x_56);
x_124 = lean_ctor_get_uint8(x_3, sizeof(void*)*11);
lean_dec(x_3);
if (x_123 == 0)
{
lean_inc(x_4);
x_125 = x_4;
goto block_151;
}
else
{
uint8_t x_152; 
x_152 = lean_nat_dec_le(x_56, x_56);
if (x_152 == 0)
{
lean_inc(x_4);
x_125 = x_4;
goto block_151;
}
else
{
size_t x_153; size_t x_154; lean_object* x_155; 
x_153 = 0;
x_154 = lean_usize_of_nat(x_56);
lean_inc(x_4);
x_155 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(x_17, x_153, x_154, x_4);
x_125 = x_155;
goto block_151;
}
}
block_121:
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; 
x_59 = l_Array_toList___rarg(x_57);
lean_dec(x_57);
x_60 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_59);
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
lean_dec(x_49);
x_62 = 0;
x_63 = 1;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
x_64 = l_Lean_Elab_Term_applyAttributesAt(x_43, x_61, x_62, x_63, x_9, x_10, x_11, x_12, x_13, x_14, x_58);
lean_dec(x_61);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(x_60, x_9, x_10, x_11, x_12, x_13, x_14, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; size_t x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_ctor_get(x_11, 1);
lean_inc(x_68);
x_69 = lean_unsigned_to_nat(0u);
x_70 = lean_nat_dec_lt(x_69, x_56);
x_71 = 0;
if (x_70 == 0)
{
x_72 = x_4;
goto block_109;
}
else
{
uint8_t x_110; 
x_110 = lean_nat_dec_le(x_56, x_56);
if (x_110 == 0)
{
x_72 = x_4;
goto block_109;
}
else
{
size_t x_111; lean_object* x_112; 
x_111 = lean_usize_of_nat(x_56);
x_112 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_17, x_71, x_111, x_4);
x_72 = x_112;
goto block_109;
}
}
block_109:
{
lean_object* x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_array_get_size(x_72);
x_74 = lean_usize_of_nat(x_73);
lean_dec(x_73);
x_75 = x_72;
x_76 = lean_box_usize(x_74);
x_77 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1;
x_78 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___boxed), 10, 3);
lean_closure_set(x_78, 0, x_76);
lean_closure_set(x_78, 1, x_77);
lean_closure_set(x_78, 2, x_75);
x_79 = x_78;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_80 = lean_apply_7(x_79, x_9, x_10, x_11, x_12, x_13, x_14, x_67);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_nat_dec_lt(x_69, x_47);
if (x_83 == 0)
{
lean_dec(x_47);
lean_dec(x_33);
if (x_70 == 0)
{
lean_object* x_84; 
lean_dec(x_56);
lean_dec(x_17);
x_84 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_68, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_84;
}
else
{
uint8_t x_85; 
x_85 = lean_nat_dec_le(x_56, x_56);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_56);
lean_dec(x_17);
x_86 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_68, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_86;
}
else
{
size_t x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_88 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_17, x_71, x_87, x_68);
lean_dec(x_17);
x_89 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_88, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_89;
}
}
}
else
{
uint8_t x_90; 
x_90 = lean_nat_dec_le(x_47, x_47);
if (x_90 == 0)
{
lean_dec(x_47);
lean_dec(x_33);
if (x_70 == 0)
{
lean_object* x_91; 
lean_dec(x_56);
lean_dec(x_17);
x_91 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_68, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_91;
}
else
{
uint8_t x_92; 
x_92 = lean_nat_dec_le(x_56, x_56);
if (x_92 == 0)
{
lean_object* x_93; 
lean_dec(x_56);
lean_dec(x_17);
x_93 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_68, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_93;
}
else
{
size_t x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_95 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_17, x_71, x_94, x_68);
lean_dec(x_17);
x_96 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_95, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_96;
}
}
}
else
{
size_t x_97; lean_object* x_98; 
x_97 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_98 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(x_33, x_71, x_97, x_68);
lean_dec(x_33);
if (x_70 == 0)
{
lean_object* x_99; 
lean_dec(x_56);
lean_dec(x_17);
x_99 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_98, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_99;
}
else
{
uint8_t x_100; 
x_100 = lean_nat_dec_le(x_56, x_56);
if (x_100 == 0)
{
lean_object* x_101; 
lean_dec(x_56);
lean_dec(x_17);
x_101 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_98, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_101;
}
else
{
size_t x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_103 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_17, x_71, x_102, x_98);
lean_dec(x_17);
x_104 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_103, x_81, x_9, x_10, x_11, x_12, x_13, x_14, x_82);
return x_104;
}
}
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_68);
lean_dec(x_56);
lean_dec(x_47);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_105 = !lean_is_exclusive(x_80);
if (x_105 == 0)
{
return x_80;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_80, 0);
x_107 = lean_ctor_get(x_80, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_80);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_56);
lean_dec(x_47);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_113 = !lean_is_exclusive(x_66);
if (x_113 == 0)
{
return x_66;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_66, 0);
x_115 = lean_ctor_get(x_66, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_66);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_47);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_117 = !lean_is_exclusive(x_64);
if (x_117 == 0)
{
return x_64;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_64, 0);
x_119 = lean_ctor_get(x_64, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_64);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
block_151:
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = l_Array_toList___rarg(x_125);
lean_dec(x_125);
x_127 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_126);
lean_inc(x_9);
lean_inc(x_43);
x_128 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(x_43, x_127, x_124, x_9, x_10, x_11, x_12, x_13, x_14, x_55);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
lean_dec(x_128);
lean_inc(x_13);
lean_inc(x_9);
x_130 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(x_43, x_9, x_10, x_11, x_12, x_13, x_14, x_129);
if (lean_obj_tag(x_130) == 0)
{
if (x_123 == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
lean_inc(x_4);
x_57 = x_4;
x_58 = x_131;
goto block_121;
}
else
{
lean_object* x_132; uint8_t x_133; 
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_nat_dec_le(x_56, x_56);
if (x_133 == 0)
{
lean_inc(x_4);
x_57 = x_4;
x_58 = x_132;
goto block_121;
}
else
{
size_t x_134; size_t x_135; lean_object* x_136; 
x_134 = 0;
x_135 = lean_usize_of_nat(x_56);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
x_136 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(x_17, x_134, x_135, x_4, x_9, x_10, x_11, x_12, x_13, x_14, x_132);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_57 = x_137;
x_58 = x_138;
goto block_121;
}
else
{
uint8_t x_139; 
lean_dec(x_56);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_139 = !lean_is_exclusive(x_136);
if (x_139 == 0)
{
return x_136;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_136, 0);
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_136);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
}
}
else
{
uint8_t x_143; 
lean_dec(x_56);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_143 = !lean_is_exclusive(x_130);
if (x_143 == 0)
{
return x_130;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_130, 0);
x_145 = lean_ctor_get(x_130, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_130);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_56);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_147 = !lean_is_exclusive(x_128);
if (x_147 == 0)
{
return x_128;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_128, 0);
x_149 = lean_ctor_get(x_128, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_128);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
else
{
uint8_t x_156; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_156 = !lean_is_exclusive(x_54);
if (x_156 == 0)
{
return x_54;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_54, 0);
x_158 = lean_ctor_get(x_54, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_54);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
else
{
uint8_t x_160; 
lean_dec(x_51);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_33);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_160 = !lean_is_exclusive(x_52);
if (x_160 == 0)
{
return x_52;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_52, 0);
x_162 = lean_ctor_get(x_52, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_52);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
else
{
uint8_t x_164; 
lean_dec(x_35);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_164 = !lean_is_exclusive(x_40);
if (x_164 == 0)
{
return x_40;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_40, 0);
x_166 = lean_ctor_get(x_40, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_40);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
uint8_t x_168; 
lean_dec(x_35);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_168 = !lean_is_exclusive(x_37);
if (x_168 == 0)
{
return x_37;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_37, 0);
x_170 = lean_ctor_get(x_37, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_37);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
else
{
uint8_t x_172; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_172 = !lean_is_exclusive(x_34);
if (x_172 == 0)
{
return x_34;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_34, 0);
x_174 = lean_ctor_get(x_34, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_34);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
return x_175;
}
}
}
}
else
{
uint8_t x_176; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_176 = !lean_is_exclusive(x_22);
if (x_176 == 0)
{
return x_22;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_22, 0);
x_178 = lean_ctor_get(x_22, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_22);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
return x_179;
}
}
}
block_191:
{
if (x_181 == 0)
{
x_21 = x_182;
goto block_180;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_inc(x_19);
x_183 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_183, 0, x_19);
x_184 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__4;
x_185 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_183);
x_186 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_187 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
x_188 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2;
x_189 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_188, x_187, x_9, x_10, x_11, x_12, x_13, x_14, x_182);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
lean_dec(x_189);
x_21 = x_190;
goto block_180;
}
}
}
}
else
{
uint8_t x_231; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_231 = !lean_is_exclusive(x_16);
if (x_231 == 0)
{
return x_16;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_16, 0);
x_233 = lean_ctor_get(x_16, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_16);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_1);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_6);
x_20 = l_Lean_Elab_Command_shouldInferResultUniverse(x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_2, 5);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 6);
lean_inc(x_24);
lean_inc(x_5);
lean_inc(x_24);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed), 15, 7);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_5);
lean_closure_set(x_25, 2, x_2);
lean_closure_set(x_25, 3, x_3);
lean_closure_set(x_25, 4, x_4);
lean_closure_set(x_25, 5, x_21);
lean_closure_set(x_25, 6, x_1);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(x_23, x_24, x_5, x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_22);
lean_dec(x_5);
lean_dec(x_24);
lean_dec(x_23);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_17);
if (x_31 == 0)
{
return x_17;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_17, 0);
x_33 = lean_ctor_get(x_17, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_17);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_1, 10);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2), 12, 4);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_4);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_13, x_15, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = l_Array_empty___closed__1;
lean_inc(x_11);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3), 12, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_12);
lean_closure_set(x_13, 3, x_11);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_8, 3);
x_16 = l_Lean_replaceRef(x_11, x_15);
lean_dec(x_15);
lean_dec(x_11);
lean_ctor_set(x_8, 3, x_16);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_1, x_17, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_8, 0);
x_20 = lean_ctor_get(x_8, 1);
x_21 = lean_ctor_get(x_8, 2);
x_22 = lean_ctor_get(x_8, 3);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_23 = l_Lean_replaceRef(x_11, x_22);
lean_dec(x_22);
lean_dec(x_11);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_1, x_25, x_12, x_13, x_4, x_5, x_6, x_7, x_24, x_9, x_10);
return x_26;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected Type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 8);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_9);
x_10 = l_Lean_Elab_Term_elabType(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_11);
lean_dec(x_1);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3;
x_15 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_9, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_9);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_9);
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(x_1, x_11, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_addGlobalInstance___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_addGlobalInstance___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(x_1, x_2, x_3, x_4, x_5, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabStructure_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabStructure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_2);
lean_ctor_set(x_20, 2, x_3);
lean_ctor_set(x_20, 3, x_4);
lean_ctor_set(x_20, 4, x_6);
lean_ctor_set(x_20, 5, x_7);
lean_ctor_set(x_20, 6, x_12);
lean_ctor_set(x_20, 7, x_8);
lean_ctor_set(x_20, 8, x_9);
lean_ctor_set(x_20, 9, x_10);
lean_ctor_set(x_20, 10, x_11);
lean_ctor_set_uint8(x_20, sizeof(void*)*11, x_5);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(x_20, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_21;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = l_Lean_Elab_Term_resetMessageLog(x_13, x_14, x_15, x_16, x_17, x_18, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_box(x_5);
lean_inc(x_4);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__1___boxed), 19, 11);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
lean_closure_set(x_23, 3, x_4);
lean_closure_set(x_23, 4, x_22);
lean_closure_set(x_23, 5, x_6);
lean_closure_set(x_23, 6, x_12);
lean_closure_set(x_23, 7, x_7);
lean_closure_set(x_23, 8, x_8);
lean_closure_set(x_23, 9, x_9);
lean_closure_set(x_23, 10, x_10);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_24, 0, x_11);
lean_closure_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Term_withLevelNames___rarg(x_4, x_24, x_13, x_14, x_15, x_16, x_17, x_18, x_21);
return x_25;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Elab_Command_getLevelNames___rarg(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
x_14 = l_Lean_Elab_Command_expandDeclId(x_1, x_2, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 2);
lean_inc(x_18);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_3);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(x_3, x_2, x_17, x_8, x_9, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(x_3, x_2, x_17, x_8, x_9, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_17);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_17);
x_26 = lean_st_ref_get(x_9, x_24);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l___private_Lean_Elab_Command_0__Lean_Elab_Command_getVarDecls(x_27);
lean_dec(x_27);
x_30 = lean_box(x_4);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__2___boxed), 19, 11);
lean_closure_set(x_31, 0, x_3);
lean_closure_set(x_31, 1, x_2);
lean_closure_set(x_31, 2, x_12);
lean_closure_set(x_31, 3, x_18);
lean_closure_set(x_31, 4, x_30);
lean_closure_set(x_31, 5, x_17);
lean_closure_set(x_31, 6, x_5);
lean_closure_set(x_31, 7, x_7);
lean_closure_set(x_31, 8, x_20);
lean_closure_set(x_31, 9, x_23);
lean_closure_set(x_31, 10, x_6);
x_32 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_32, 0, x_29);
lean_closure_set(x_32, 1, x_31);
x_33 = l_Lean_Elab_Command_liftTermElabM___rarg(x_25, x_32, x_8, x_9, x_28);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_22);
if (x_34 == 0)
{
return x_22;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_22, 0);
x_36 = lean_ctor_get(x_22, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_22);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
return x_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("classTk");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_2 = l_Lean_Elab_Command_elabStructure___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Sort");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Init_Prelude___instance__72___closed__1;
x_2 = l_Lean_Elab_Command_elabStructure___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Command_elabStructure___closed__4;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Level_elabLevel___closed__6;
x_2 = l_myMacro____x40_Init_Notation___hyg_7262____closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Command_elabStructure___closed__6;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nullKind___closed__2;
x_2 = l_Lean_Elab_Command_elabStructure___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabStructure___closed__5;
x_2 = l_Lean_Elab_Command_elabStructure___closed__8;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabSort___closed__1;
x_2 = l_Lean_Elab_Command_elabStructure___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn____x40_Lean_Class___hyg_767____closed__2;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_elabStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_3);
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Syntax_getKind(x_9);
x_11 = l_Lean_Elab_Command_elabStructure___closed__2;
x_12 = lean_name_eq(x_10, x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_2, x_15);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(3u);
x_19 = l_Lean_Syntax_getArg(x_2, x_18);
x_20 = l_Lean_Syntax_isNone(x_19);
x_21 = lean_unsigned_to_nat(4u);
x_22 = l_Lean_Syntax_getArg(x_2, x_21);
x_23 = l_Lean_Syntax_isNone(x_22);
if (x_12 == 0)
{
x_24 = x_1;
goto block_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = l_Lean_Elab_Command_elabStructure___closed__11;
x_42 = l_Lean_Elab_Modifiers_addAttribute(x_1, x_41);
x_24 = x_42;
goto block_40;
}
block_40:
{
lean_object* x_25; 
if (x_20 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = l_Lean_Syntax_getArg(x_19, x_8);
lean_dec(x_19);
x_37 = l_Lean_Syntax_getArg(x_36, x_13);
lean_dec(x_36);
x_38 = l_Lean_Syntax_getSepArgs(x_37);
lean_dec(x_37);
x_25 = x_38;
goto block_35;
}
else
{
lean_object* x_39; 
lean_dec(x_19);
x_39 = l_Array_empty___closed__1;
x_25 = x_39;
goto block_35;
}
block_35:
{
if (x_23 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_Lean_Syntax_getArg(x_22, x_8);
lean_dec(x_22);
x_27 = l_Lean_Syntax_getArg(x_26, x_13);
lean_dec(x_26);
x_28 = l_Lean_Elab_Command_elabStructure___lambda__3(x_14, x_24, x_2, x_12, x_25, x_17, x_27, x_3, x_4, x_7);
lean_dec(x_14);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
x_29 = l_Lean_Elab_Command_getCurrMacroScope(x_3, x_4, x_7);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_Elab_Command_getMainModule___rarg(x_4, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Elab_Command_elabStructure___closed__10;
x_34 = l_Lean_Elab_Command_elabStructure___lambda__3(x_14, x_24, x_2, x_12, x_25, x_17, x_33, x_3, x_4, x_32);
lean_dec(x_14);
return x_34;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_6);
if (x_43 == 0)
{
return x_6;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_6, 0);
x_45 = lean_ctor_get(x_6, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_6);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_5);
lean_dec(x_5);
x_21 = l_Lean_Elab_Command_elabStructure___lambda__1(x_1, x_2, x_3, x_4, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_21;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_5);
lean_dec(x_5);
x_21 = l_Lean_Elab_Command_elabStructure___lambda__2(x_1, x_2, x_3, x_4, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_21;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l_Lean_Elab_Command_elabStructure___lambda__3(x_1, x_2, x_3, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_elabStructure(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_3490_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Closure(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
lean_object* initialize_Lean_Elab_DeclModifiers(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
lean_object* initialize_Lean_Elab_Inductive(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Structure(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclModifiers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_StructFieldInfo_inferMod___default = _init_l_Lean_Elab_Command_StructFieldInfo_inferMod___default();
l_Lean_Elab_Command_StructFieldInfo_value_x3f___default = _init_l_Lean_Elab_Command_StructFieldInfo_value_x3f___default();
lean_mark_persistent(l_Lean_Elab_Command_StructFieldInfo_value_x3f___default);
l_Lean_Elab_Command_Lean_Elab_Structure___instance__1___closed__1 = _init_l_Lean_Elab_Command_Lean_Elab_Structure___instance__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_Lean_Elab_Structure___instance__1___closed__1);
l_Lean_Elab_Command_Lean_Elab_Structure___instance__1 = _init_l_Lean_Elab_Command_Lean_Elab_Structure___instance__1();
lean_mark_persistent(l_Lean_Elab_Command_Lean_Elab_Structure___instance__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__2___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___lambda__3___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__4);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__5 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__5();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__5);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__6);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__7 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__7();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__7);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__8 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__8();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__8);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___closed__9);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1();
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2();
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3();
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3);
l_Lean_Elab_Command_elabStructure___closed__1 = _init_l_Lean_Elab_Command_elabStructure___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__1);
l_Lean_Elab_Command_elabStructure___closed__2 = _init_l_Lean_Elab_Command_elabStructure___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__2);
l_Lean_Elab_Command_elabStructure___closed__3 = _init_l_Lean_Elab_Command_elabStructure___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__3);
l_Lean_Elab_Command_elabStructure___closed__4 = _init_l_Lean_Elab_Command_elabStructure___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__4);
l_Lean_Elab_Command_elabStructure___closed__5 = _init_l_Lean_Elab_Command_elabStructure___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__5);
l_Lean_Elab_Command_elabStructure___closed__6 = _init_l_Lean_Elab_Command_elabStructure___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__6);
l_Lean_Elab_Command_elabStructure___closed__7 = _init_l_Lean_Elab_Command_elabStructure___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__7);
l_Lean_Elab_Command_elabStructure___closed__8 = _init_l_Lean_Elab_Command_elabStructure___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__8);
l_Lean_Elab_Command_elabStructure___closed__9 = _init_l_Lean_Elab_Command_elabStructure___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__9);
l_Lean_Elab_Command_elabStructure___closed__10 = _init_l_Lean_Elab_Command_elabStructure___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__10);
l_Lean_Elab_Command_elabStructure___closed__11 = _init_l_Lean_Elab_Command_elabStructure___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__11);
res = l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_3490_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
