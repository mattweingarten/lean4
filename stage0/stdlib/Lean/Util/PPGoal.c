// Lean compiler output
// Module: Lean.Util.PPGoal
// Imports: Init Lean.Util.PPExt
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
lean_object* l_List_reverse___rarg(lean_object*);
extern lean_object* l_Lean_Name_toString___closed__1;
lean_object* l_Lean_ppGoal___lambda__1(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_ppGoal_pushPending_match__1(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_ppGoal_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_pushPending___closed__2;
lean_object* l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal___closed__2;
size_t l_USize_sub(size_t, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_joinSep___at_Lean_ppGoal_pushPending___spec__1(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__4;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_ppGoal___closed__6;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_pushPending___closed__3;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2;
extern lean_object* l_Init_Data_Repr___instance__18___closed__2;
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_ppVars_match__1(lean_object*);
lean_object* l_Lean_ppGoal___lambda__2(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_match__4(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__3;
lean_object* l_Lean_ppGoal___closed__4;
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__5;
uint8_t l_Lean_KVMap_getBool(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ppGoal___closed__9;
lean_object* l_Lean_ppGoal_ppVars___closed__3;
lean_object* l_Std_PersistentArray_foldlM___at_Lean_ppGoal___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_match__2(lean_object*);
lean_object* l_Lean_ppGoal_ppVars_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_ppAuxDeclsDefault;
lean_object* l_Lean_ppGoal_pushPending_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Format_isNil(lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l___kind_term____x40_Init_Notation___hyg_6293____closed__6;
size_t l_USize_land(size_t, size_t);
lean_object* l_Std_PersistentArray_foldlM___at_Lean_ppGoal___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__11___closed__2;
lean_object* l_Lean_ppGoal_match__1(lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6_(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
extern lean_object* l_Lean_getSanitizeNames___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_getSanitizeNames___closed__1;
lean_object* l_Lean_ppGoal_pushPending___closed__1;
lean_object* l_Lean_ppGoal_ppVars___closed__2;
lean_object* lean_register_option(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_find_decl(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_ppVars___closed__1;
lean_object* l_Lean_ppGoal___closed__5;
lean_object* l_Lean_getAuxDeclsOption___boxed(lean_object*);
lean_object* l_Lean_ppGoal_ppVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_pushPending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_simp_macro_scopes(lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_ppGoal_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_ppGoal___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal___closed__8;
lean_object* l_Lean_ppGoal___closed__7;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
uint8_t l_Lean_getAuxDeclsOption(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal___closed__1;
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal_match__3(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Std_PersistentArray_getAux___rarg___closed__1;
static uint8_t _init_l_Lean_ppAuxDeclsDefault() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("auxDecls");
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_getSanitizeNames___closed__2;
x_2 = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_Lean_ppAuxDeclsDefault;
x_2 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("display auxiliary declarations used to compile recursive functions");
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__3;
x_2 = l_Lean_getSanitizeNames___closed__1;
x_3 = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2;
x_3 = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__5;
x_4 = lean_register_option(x_2, x_3, x_1);
return x_4;
}
}
uint8_t l_Lean_getAuxDeclsOption(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2;
x_3 = l_Lean_ppAuxDeclsDefault;
x_4 = l_Lean_KVMap_getBool(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_getAuxDeclsOption___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getAuxDeclsOption(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_ppGoal_pushPending_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_apply_1(x_4, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_2(x_5, x_1, x_8);
return x_9;
}
}
}
}
lean_object* l_Lean_ppGoal_pushPending_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ppGoal_pushPending_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_ppGoal_ppVars_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_9 = lean_box(x_8);
x_10 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
lean_dec(x_1);
x_17 = lean_box(x_16);
x_18 = lean_apply_6(x_3, x_11, x_12, x_13, x_14, x_15, x_17);
return x_18;
}
}
}
lean_object* l_Lean_ppGoal_ppVars_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ppGoal_ppVars_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ppGoal_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_ppGoal_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ppGoal_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_ppGoal_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_ppGoal_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ppGoal_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ppGoal_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_ppGoal_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ppGoal_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_ppGoal_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_ppGoal_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ppGoal_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Format_joinSep___at_Lean_ppGoal_pushPending___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_Name_toString___closed__1;
x_7 = l_Lean_Name_toStringWithSep(x_6, x_5);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_Name_toString___closed__1;
x_11 = l_Lean_Name_toStringWithSep(x_10, x_9);
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_inc(x_2);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_2);
x_14 = l_Lean_Format_joinSep___at_Lean_ppGoal_pushPending___spec__1(x_4, x_2);
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
static lean_object* _init_l_Lean_ppGoal_pushPending___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Init_Data_Repr___instance__18___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ppGoal_pushPending___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" :");
return x_1;
}
}
static lean_object* _init_l_Lean_ppGoal_pushPending___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ppGoal_pushPending___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_ppGoal_pushPending(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_List_isEmpty___rarg(x_4);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_apply_1(x_3, x_6);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_apply_2(x_2, x_12, x_7);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_List_reverse___rarg(x_4);
x_17 = l_Lean_ppGoal_pushPending___closed__1;
x_18 = l_Lean_Format_joinSep___at_Lean_ppGoal_pushPending___spec__1(x_16, x_17);
x_19 = l_Lean_ppGoal_pushPending___closed__3;
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_box(1);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
x_23 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = 0;
x_26 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_9);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_13, 0, x_27);
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = l_List_reverse___rarg(x_4);
x_31 = l_Lean_ppGoal_pushPending___closed__1;
x_32 = l_Lean_Format_joinSep___at_Lean_ppGoal_pushPending___spec__1(x_30, x_31);
x_33 = l_Lean_ppGoal_pushPending___closed__3;
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_box(1);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_28);
x_37 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_37);
x_39 = 0;
x_40 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*1, x_39);
x_41 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_41, 0, x_9);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_29);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_13);
if (x_43 == 0)
{
return x_13;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_13, 0);
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_13);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
else
{
lean_object* x_47; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_6);
lean_ctor_set(x_47, 1, x_7);
return x_47;
}
}
}
static lean_object* _init_l_Lean_ppGoal_ppVars___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___kind_term____x40_Init_Notation___hyg_6293____closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ppGoal_ppVars___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" :=");
return x_1;
}
}
static lean_object* _init_l_Lean_ppGoal_ppVars___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ppGoal_ppVars___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_ppGoal_ppVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 3);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_simp_macro_scopes(x_10);
x_13 = lean_apply_1(x_3, x_11);
lean_inc(x_13);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_5);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_7);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_6, 0);
lean_inc(x_19);
x_20 = lean_expr_eqv(x_19, x_13);
lean_dec(x_13);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = l_Lean_ppGoal_pushPending(x_1, x_2, x_4, x_5, x_6, x_7, x_9);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_12);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_12);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_28);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_14);
lean_dec(x_12);
x_35 = !lean_is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_12);
lean_ctor_set(x_39, 1, x_5);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_14);
lean_ctor_set(x_40, 1, x_7);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_9);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_8, 2);
lean_inc(x_43);
x_44 = lean_ctor_get(x_8, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_8, 4);
lean_inc(x_45);
lean_dec(x_8);
x_46 = lean_simp_macro_scopes(x_43);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_47 = l_Lean_ppGoal_pushPending(x_1, x_2, x_4, x_5, x_6, x_7, x_9);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_apply_1(x_4, x_48);
lean_inc(x_3);
x_51 = lean_apply_1(x_3, x_44);
x_52 = lean_apply_1(x_3, x_45);
lean_inc(x_2);
x_53 = lean_apply_2(x_2, x_51, x_49);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_apply_2(x_2, x_52, x_55);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = l_Lean_Name_toString___closed__1;
x_60 = l_Lean_Name_toStringWithSep(x_59, x_46);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = l_Lean_ppGoal_ppVars___closed__1;
x_63 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_54);
x_65 = l_Lean_ppGoal_ppVars___closed__3;
x_66 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_box(1);
x_68 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_58);
x_69 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_69, 0, x_1);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_69);
x_71 = 0;
x_72 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set_uint8(x_72, sizeof(void*)*1, x_71);
x_73 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_73, 0, x_50);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_box(0);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_56, 0, x_77);
return x_56;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_78 = lean_ctor_get(x_56, 0);
x_79 = lean_ctor_get(x_56, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_56);
x_80 = l_Lean_Name_toString___closed__1;
x_81 = l_Lean_Name_toStringWithSep(x_80, x_46);
x_82 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = l_Lean_ppGoal_ppVars___closed__1;
x_84 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_54);
x_86 = l_Lean_ppGoal_ppVars___closed__3;
x_87 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_box(1);
x_89 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_78);
x_90 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_90, 0, x_1);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_91, 0, x_87);
lean_ctor_set(x_91, 1, x_90);
x_92 = 0;
x_93 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set_uint8(x_93, sizeof(void*)*1, x_92);
x_94 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_94, 0, x_50);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_box(0);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_79);
return x_99;
}
}
else
{
uint8_t x_100; 
lean_dec(x_54);
lean_dec(x_50);
lean_dec(x_46);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_56);
if (x_100 == 0)
{
return x_56;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_56, 0);
x_102 = lean_ctor_get(x_56, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_56);
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
lean_dec(x_52);
lean_dec(x_50);
lean_dec(x_46);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_53);
if (x_104 == 0)
{
return x_53;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_53, 0);
x_106 = lean_ctor_get(x_53, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_53);
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
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_47);
if (x_108 == 0)
{
return x_47;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_47, 0);
x_110 = lean_ctor_get(x_47, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_47);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_uget(x_6, x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_13 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4(x_1, x_2, x_3, x_4, x_5, x_12, x_9, x_10);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_7 + x_16;
x_7 = x_17;
x_9 = x_14;
x_10 = x_15;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_10);
return x_23;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__6(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = x_7 + x_13;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
if (x_2 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
x_24 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_16);
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_22, x_23, x_17, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_7 + x_28;
x_7 = x_29;
x_9 = x_26;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; 
lean_dec(x_17);
x_35 = 1;
x_36 = x_7 + x_35;
x_7 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_40 == 0)
{
lean_object* x_41; 
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_41 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_38, x_39, x_17, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = x_7 + x_44;
x_7 = x_45;
x_9 = x_42;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_17);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_39);
lean_ctor_set(x_9, 1, x_51);
x_52 = 1;
x_53 = x_7 + x_52;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_9, 0);
lean_inc(x_55);
lean_dec(x_9);
x_56 = lean_ctor_get(x_16, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_58 = x_16;
} else {
 lean_dec_ref(x_16);
 x_58 = lean_box(0);
}
x_59 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_60 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_55, x_56, x_57, x_17, x_10);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = 1;
x_64 = x_7 + x_63;
x_7 = x_64;
x_9 = x_61;
x_10 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_68 = x_60;
} else {
 lean_dec_ref(x_60);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; size_t x_72; size_t x_73; 
lean_dec(x_17);
if (lean_is_scalar(x_58)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_58;
}
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_57);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = 1;
x_73 = x_7 + x_72;
x_7 = x_73;
x_9 = x_71;
goto _start;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
x_76 = lean_ctor_get(x_9, 0);
lean_inc(x_76);
lean_dec(x_9);
x_77 = lean_ctor_get(x_16, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_16, 1);
lean_inc(x_78);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_79 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_76, x_77, x_78, x_75, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_7 + x_82;
x_7 = x_83;
x_9 = x_80;
x_10 = x_81;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_79);
if (x_85 == 0)
{
return x_79;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_9);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_array_get_size(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_8);
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__5(x_1, x_2, x_3, x_4, x_5, x_9, x_16, x_17, x_7, x_8);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_6, 0);
x_20 = lean_array_get_size(x_19);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_8);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_le(x_20, x_20);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_28 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__6(x_1, x_2, x_3, x_4, x_5, x_19, x_26, x_27, x_7, x_8);
return x_28;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_uget(x_6, x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_13 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4(x_1, x_2, x_3, x_4, x_5, x_12, x_9, x_10);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_7 + x_16;
x_7 = x_17;
x_9 = x_14;
x_10 = x_15;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_10);
return x_23;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__8(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = x_7 + x_13;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
if (x_2 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
x_24 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_16);
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_22, x_23, x_17, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_7 + x_28;
x_7 = x_29;
x_9 = x_26;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; 
lean_dec(x_17);
x_35 = 1;
x_36 = x_7 + x_35;
x_7 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_40 == 0)
{
lean_object* x_41; 
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_41 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_38, x_39, x_17, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = x_7 + x_44;
x_7 = x_45;
x_9 = x_42;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_17);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_39);
lean_ctor_set(x_9, 1, x_51);
x_52 = 1;
x_53 = x_7 + x_52;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_9, 0);
lean_inc(x_55);
lean_dec(x_9);
x_56 = lean_ctor_get(x_16, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_58 = x_16;
} else {
 lean_dec_ref(x_16);
 x_58 = lean_box(0);
}
x_59 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_60 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_55, x_56, x_57, x_17, x_10);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = 1;
x_64 = x_7 + x_63;
x_7 = x_64;
x_9 = x_61;
x_10 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_68 = x_60;
} else {
 lean_dec_ref(x_60);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; size_t x_72; size_t x_73; 
lean_dec(x_17);
if (lean_is_scalar(x_58)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_58;
}
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_57);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = 1;
x_73 = x_7 + x_72;
x_7 = x_73;
x_9 = x_71;
goto _start;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
x_76 = lean_ctor_get(x_9, 0);
lean_inc(x_76);
lean_dec(x_9);
x_77 = lean_ctor_get(x_16, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_16, 1);
lean_inc(x_78);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_79 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_76, x_77, x_78, x_75, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_7 + x_82;
x_7 = x_83;
x_9 = x_80;
x_10 = x_81;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_79);
if (x_85 == 0)
{
return x_79;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_9);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = x_7 >> x_8;
x_13 = lean_usize_to_nat(x_12);
x_14 = l_Std_PersistentArray_getAux___rarg___closed__1;
x_15 = lean_array_get(x_14, x_11, x_13);
x_16 = 1;
x_17 = x_16 << x_8;
x_18 = x_17 - x_16;
x_19 = x_7 & x_18;
x_20 = 5;
x_21 = x_8 - x_20;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_22 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3(x_1, x_2, x_3, x_4, x_5, x_15, x_19, x_21, x_9, x_10);
lean_dec(x_15);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_13, x_26);
lean_dec(x_13);
x_28 = lean_array_get_size(x_11);
x_29 = lean_nat_dec_lt(x_27, x_28);
if (x_29 == 0)
{
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_22;
}
else
{
uint8_t x_30; 
x_30 = lean_nat_dec_le(x_28, x_28);
if (x_30 == 0)
{
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_22;
}
else
{
size_t x_31; size_t x_32; lean_object* x_33; 
lean_free_object(x_22);
x_31 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_32 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_33 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7(x_1, x_2, x_3, x_4, x_5, x_11, x_31, x_32, x_24, x_25);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_ctor_get(x_22, 0);
x_35 = lean_ctor_get(x_22, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_22);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_13, x_36);
lean_dec(x_13);
x_38 = lean_array_get_size(x_11);
x_39 = lean_nat_dec_lt(x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_35);
return x_40;
}
else
{
uint8_t x_41; 
x_41 = lean_nat_dec_le(x_38, x_38);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_35);
return x_42;
}
else
{
size_t x_43; size_t x_44; lean_object* x_45; 
x_43 = lean_usize_of_nat(x_37);
lean_dec(x_37);
x_44 = lean_usize_of_nat(x_38);
lean_dec(x_38);
x_45 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7(x_1, x_2, x_3, x_4, x_5, x_11, x_43, x_44, x_34, x_35);
return x_45;
}
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_22);
if (x_46 == 0)
{
return x_22;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_22, 0);
x_48 = lean_ctor_get(x_22, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_22);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_6, 0);
x_51 = lean_usize_to_nat(x_7);
x_52 = lean_array_get_size(x_50);
x_53 = lean_nat_dec_lt(x_51, x_52);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_9);
lean_ctor_set(x_54, 1, x_10);
return x_54;
}
else
{
uint8_t x_55; 
x_55 = lean_nat_dec_le(x_52, x_52);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_9);
lean_ctor_set(x_56, 1, x_10);
return x_56;
}
else
{
size_t x_57; size_t x_58; lean_object* x_59; 
x_57 = lean_usize_of_nat(x_51);
lean_dec(x_51);
x_58 = lean_usize_of_nat(x_52);
lean_dec(x_52);
x_59 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__8(x_1, x_2, x_3, x_4, x_5, x_50, x_57, x_58, x_9, x_10);
return x_59;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = x_7 + x_13;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
if (x_2 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
x_24 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_16);
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_22, x_23, x_17, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_7 + x_28;
x_7 = x_29;
x_9 = x_26;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; 
lean_dec(x_17);
x_35 = 1;
x_36 = x_7 + x_35;
x_7 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_40 == 0)
{
lean_object* x_41; 
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_41 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_38, x_39, x_17, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = x_7 + x_44;
x_7 = x_45;
x_9 = x_42;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_17);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_39);
lean_ctor_set(x_9, 1, x_51);
x_52 = 1;
x_53 = x_7 + x_52;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_9, 0);
lean_inc(x_55);
lean_dec(x_9);
x_56 = lean_ctor_get(x_16, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_58 = x_16;
} else {
 lean_dec_ref(x_16);
 x_58 = lean_box(0);
}
x_59 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_60 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_55, x_56, x_57, x_17, x_10);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = 1;
x_64 = x_7 + x_63;
x_7 = x_64;
x_9 = x_61;
x_10 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_68 = x_60;
} else {
 lean_dec_ref(x_60);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; size_t x_72; size_t x_73; 
lean_dec(x_17);
if (lean_is_scalar(x_58)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_58;
}
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_57);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = 1;
x_73 = x_7 + x_72;
x_7 = x_73;
x_9 = x_71;
goto _start;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
x_76 = lean_ctor_get(x_9, 0);
lean_inc(x_76);
lean_dec(x_9);
x_77 = lean_ctor_get(x_16, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_16, 1);
lean_inc(x_78);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_79 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_76, x_77, x_78, x_75, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_7 + x_82;
x_7 = x_83;
x_9 = x_80;
x_10 = x_81;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_79);
if (x_85 == 0)
{
return x_79;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_9);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__10(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = x_7 + x_13;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
if (x_2 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
x_24 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_16);
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_22, x_23, x_17, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_7 + x_28;
x_7 = x_29;
x_9 = x_26;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; 
lean_dec(x_17);
x_35 = 1;
x_36 = x_7 + x_35;
x_7 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_40 == 0)
{
lean_object* x_41; 
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_41 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_38, x_39, x_17, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = x_7 + x_44;
x_7 = x_45;
x_9 = x_42;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_17);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_39);
lean_ctor_set(x_9, 1, x_51);
x_52 = 1;
x_53 = x_7 + x_52;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_9, 0);
lean_inc(x_55);
lean_dec(x_9);
x_56 = lean_ctor_get(x_16, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_58 = x_16;
} else {
 lean_dec_ref(x_16);
 x_58 = lean_box(0);
}
x_59 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_60 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_55, x_56, x_57, x_17, x_10);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = 1;
x_64 = x_7 + x_63;
x_7 = x_64;
x_9 = x_61;
x_10 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_68 = x_60;
} else {
 lean_dec_ref(x_60);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; size_t x_72; size_t x_73; 
lean_dec(x_17);
if (lean_is_scalar(x_58)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_58;
}
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_57);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = 1;
x_73 = x_7 + x_72;
x_7 = x_73;
x_9 = x_71;
goto _start;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
x_76 = lean_ctor_get(x_9, 0);
lean_inc(x_76);
lean_dec(x_9);
x_77 = lean_ctor_get(x_16, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_16, 1);
lean_inc(x_78);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_79 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_76, x_77, x_78, x_75, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_7 + x_82;
x_7 = x_83;
x_9 = x_80;
x_10 = x_81;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_79);
if (x_85 == 0)
{
return x_79;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_9);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__12(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_uget(x_6, x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_13 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11(x_1, x_2, x_3, x_4, x_5, x_12, x_9, x_10);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_7 + x_16;
x_7 = x_17;
x_9 = x_14;
x_10 = x_15;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_10);
return x_23;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__13(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = x_7 + x_13;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
if (x_2 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
x_24 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_16);
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_22, x_23, x_17, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_7 + x_28;
x_7 = x_29;
x_9 = x_26;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; 
lean_dec(x_17);
x_35 = 1;
x_36 = x_7 + x_35;
x_7 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_40 == 0)
{
lean_object* x_41; 
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_41 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_38, x_39, x_17, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = x_7 + x_44;
x_7 = x_45;
x_9 = x_42;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_17);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_39);
lean_ctor_set(x_9, 1, x_51);
x_52 = 1;
x_53 = x_7 + x_52;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_9, 0);
lean_inc(x_55);
lean_dec(x_9);
x_56 = lean_ctor_get(x_16, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_58 = x_16;
} else {
 lean_dec_ref(x_16);
 x_58 = lean_box(0);
}
x_59 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_60 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_55, x_56, x_57, x_17, x_10);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = 1;
x_64 = x_7 + x_63;
x_7 = x_64;
x_9 = x_61;
x_10 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_68 = x_60;
} else {
 lean_dec_ref(x_60);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; size_t x_72; size_t x_73; 
lean_dec(x_17);
if (lean_is_scalar(x_58)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_58;
}
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_57);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = 1;
x_73 = x_7 + x_72;
x_7 = x_73;
x_9 = x_71;
goto _start;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
x_76 = lean_ctor_get(x_9, 0);
lean_inc(x_76);
lean_dec(x_9);
x_77 = lean_ctor_get(x_16, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_16, 1);
lean_inc(x_78);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_79 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_76, x_77, x_78, x_75, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_7 + x_82;
x_7 = x_83;
x_9 = x_80;
x_10 = x_81;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_79);
if (x_85 == 0)
{
return x_79;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_9);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_array_get_size(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_8);
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__12(x_1, x_2, x_3, x_4, x_5, x_9, x_16, x_17, x_7, x_8);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_6, 0);
x_20 = lean_array_get_size(x_19);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_8);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_le(x_20, x_20);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_28 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__13(x_1, x_2, x_3, x_4, x_5, x_19, x_26, x_27, x_7, x_8);
return x_28;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_7 == x_8;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = x_7 + x_13;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
if (x_2 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
x_24 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_16);
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_22, x_23, x_17, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_7 + x_28;
x_7 = x_29;
x_9 = x_26;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; 
lean_dec(x_17);
x_35 = 1;
x_36 = x_7 + x_35;
x_7 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_40 == 0)
{
lean_object* x_41; 
lean_free_object(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_41 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_19, x_38, x_39, x_17, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = x_7 + x_44;
x_7 = x_45;
x_9 = x_42;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_17);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_39);
lean_ctor_set(x_9, 1, x_51);
x_52 = 1;
x_53 = x_7 + x_52;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_9, 0);
lean_inc(x_55);
lean_dec(x_9);
x_56 = lean_ctor_get(x_16, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_58 = x_16;
} else {
 lean_dec_ref(x_16);
 x_58 = lean_box(0);
}
x_59 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_60 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_55, x_56, x_57, x_17, x_10);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = 1;
x_64 = x_7 + x_63;
x_7 = x_64;
x_9 = x_61;
x_10 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_68 = x_60;
} else {
 lean_dec_ref(x_60);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; size_t x_72; size_t x_73; 
lean_dec(x_17);
if (lean_is_scalar(x_58)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_58;
}
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_57);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = 1;
x_73 = x_7 + x_72;
x_7 = x_73;
x_9 = x_71;
goto _start;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
x_76 = lean_ctor_get(x_9, 0);
lean_inc(x_76);
lean_dec(x_9);
x_77 = lean_ctor_get(x_16, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_16, 1);
lean_inc(x_78);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_79 = l_Lean_ppGoal_ppVars(x_1, x_3, x_4, x_5, x_76, x_77, x_78, x_75, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_7 + x_82;
x_7 = x_83;
x_9 = x_80;
x_10 = x_81;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_79);
if (x_85 == 0)
{
return x_79;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_9);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
}
}
lean_object* l_Std_PersistentArray_foldlM___at_Lean_ppGoal___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_8, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_6, 3);
x_13 = lean_nat_dec_le(x_12, x_8);
if (x_13 == 0)
{
lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_usize_of_nat(x_8);
x_16 = lean_ctor_get_usize(x_6, 4);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_17 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_16, x_7, x_9);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_6, 1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_nat_dec_lt(x_10, x_22);
if (x_23 == 0)
{
lean_dec(x_22);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_17;
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_le(x_22, x_22);
if (x_24 == 0)
{
lean_dec(x_22);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_17;
}
else
{
size_t x_25; size_t x_26; lean_object* x_27; 
lean_free_object(x_17);
x_25 = 0;
x_26 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9(x_1, x_2, x_3, x_4, x_5, x_21, x_25, x_26, x_19, x_20);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_ctor_get(x_6, 1);
x_31 = lean_array_get_size(x_30);
x_32 = lean_nat_dec_lt(x_10, x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_31);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_29);
return x_33;
}
else
{
uint8_t x_34; 
x_34 = lean_nat_dec_le(x_31, x_31);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_31);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_29);
return x_35;
}
else
{
size_t x_36; size_t x_37; lean_object* x_38; 
x_36 = 0;
x_37 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_38 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9(x_1, x_2, x_3, x_4, x_5, x_30, x_36, x_37, x_28, x_29);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_6, 1);
x_44 = lean_nat_sub(x_8, x_12);
x_45 = lean_array_get_size(x_43);
x_46 = lean_nat_dec_lt(x_44, x_45);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_7);
lean_ctor_set(x_47, 1, x_9);
return x_47;
}
else
{
uint8_t x_48; 
x_48 = lean_nat_dec_le(x_45, x_45);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_7);
lean_ctor_set(x_49, 1, x_9);
return x_49;
}
else
{
size_t x_50; size_t x_51; lean_object* x_52; 
x_50 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_51 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_52 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__10(x_1, x_2, x_3, x_4, x_5, x_43, x_50, x_51, x_7, x_9);
return x_52;
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_6, 0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_54 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11(x_1, x_2, x_3, x_4, x_5, x_53, x_7, x_9);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_ctor_get(x_54, 1);
x_58 = lean_ctor_get(x_6, 1);
x_59 = lean_array_get_size(x_58);
x_60 = lean_nat_dec_lt(x_10, x_59);
if (x_60 == 0)
{
lean_dec(x_59);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_54;
}
else
{
uint8_t x_61; 
x_61 = lean_nat_dec_le(x_59, x_59);
if (x_61 == 0)
{
lean_dec(x_59);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_54;
}
else
{
size_t x_62; size_t x_63; lean_object* x_64; 
lean_free_object(x_54);
x_62 = 0;
x_63 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_64 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14(x_1, x_2, x_3, x_4, x_5, x_58, x_62, x_63, x_56, x_57);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_65 = lean_ctor_get(x_54, 0);
x_66 = lean_ctor_get(x_54, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_54);
x_67 = lean_ctor_get(x_6, 1);
x_68 = lean_array_get_size(x_67);
x_69 = lean_nat_dec_lt(x_10, x_68);
if (x_69 == 0)
{
lean_object* x_70; 
lean_dec(x_68);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_66);
return x_70;
}
else
{
uint8_t x_71; 
x_71 = lean_nat_dec_le(x_68, x_68);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_68);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_66);
return x_72;
}
else
{
size_t x_73; size_t x_74; lean_object* x_75; 
x_73 = 0;
x_74 = lean_usize_of_nat(x_68);
lean_dec(x_68);
x_75 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14(x_1, x_2, x_3, x_4, x_5, x_67, x_73, x_74, x_65, x_66);
return x_75;
}
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_54);
if (x_76 == 0)
{
return x_54;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_54, 0);
x_78 = lean_ctor_get(x_54, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_54);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 1);
x_11 = l_Std_PersistentArray_foldlM___at_Lean_ppGoal___spec__2(x_1, x_2, x_3, x_4, x_5, x_10, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_ppGoal___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_instantiateMVars(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_ppGoal___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Format_isNil(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
else
{
return x_1;
}
}
}
static lean_object* _init_l_Lean_ppGoal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown goal");
return x_1;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ppGoal___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("⊢");
return x_1;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ppGoal___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("case ");
return x_1;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ppGoal___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_ppGoal___closed__7;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_ppGoal___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_ppGoal___lambda__2), 1, 0);
return x_1;
}
}
lean_object* l_Lean_ppGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_ctor_get(x_1, 4);
x_9 = lean_ctor_get(x_1, 5);
x_10 = lean_ctor_get(x_1, 2);
lean_dec(x_10);
lean_inc(x_6);
x_11 = lean_metavar_ctx_find_decl(x_6, x_2);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_free_object(x_1);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_12 = l_Lean_ppGoal___closed__2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_38 = l_Lean_getAuxDeclsOption(x_7);
x_39 = lean_ctor_get(x_14, 1);
lean_inc(x_39);
x_40 = lean_box(0);
lean_inc(x_7);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_7);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_40);
x_42 = l_Lean_LocalContext_sanitizeNames(x_39, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_43);
lean_inc(x_6);
lean_ctor_set(x_1, 2, x_43);
lean_inc(x_1);
x_44 = lean_alloc_closure((void*)(l_Lean_ppExpr), 3, 1);
lean_closure_set(x_44, 0, x_1);
x_45 = lean_alloc_closure((void*)(l_Lean_ppGoal___lambda__1), 2, 1);
lean_closure_set(x_45, 0, x_6);
x_46 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__11___closed__2;
x_47 = l_Lean_ppGoal___closed__9;
x_48 = l_Lean_ppGoal___closed__8;
x_49 = lean_unsigned_to_nat(0u);
lean_inc(x_44);
x_50 = l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1(x_46, x_38, x_44, x_45, x_47, x_43, x_48, x_49, x_3);
lean_dec(x_43);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = l_Lean_ppGoal_pushPending(x_46, x_44, x_47, x_54, x_55, x_56, x_53);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Format_isNil(x_58);
x_61 = lean_ctor_get(x_14, 2);
lean_inc(x_61);
x_62 = l_Lean_ppExpr(x_1, x_61, x_59);
if (x_60 == 0)
{
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_box(1);
x_66 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_66, 0, x_58);
lean_ctor_set(x_66, 1, x_65);
x_15 = x_66;
x_16 = x_63;
x_17 = x_64;
goto block_37;
}
else
{
uint8_t x_67; 
lean_dec(x_58);
lean_dec(x_14);
x_67 = !lean_is_exclusive(x_62);
if (x_67 == 0)
{
return x_62;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_62, 0);
x_69 = lean_ctor_get(x_62, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_62);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_62, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_62, 1);
lean_inc(x_72);
lean_dec(x_62);
x_15 = x_58;
x_16 = x_71;
x_17 = x_72;
goto block_37;
}
else
{
uint8_t x_73; 
lean_dec(x_58);
lean_dec(x_14);
x_73 = !lean_is_exclusive(x_62);
if (x_73 == 0)
{
return x_62;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_62, 0);
x_75 = lean_ctor_get(x_62, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_62);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_1);
lean_dec(x_14);
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
else
{
uint8_t x_81; 
lean_dec(x_44);
lean_dec(x_1);
lean_dec(x_14);
x_81 = !lean_is_exclusive(x_50);
if (x_81 == 0)
{
return x_50;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_50, 0);
x_83 = lean_ctor_get(x_50, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_50);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
block_37:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = l_Lean_ppGoal___closed__4;
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_ppGoal_pushPending___closed__1;
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__11___closed__2;
x_23 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
lean_dec(x_14);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_17);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = lean_erase_macro_scopes(x_25);
x_28 = l_Lean_Name_toString___closed__1;
x_29 = l_Lean_Name_toStringWithSep(x_28, x_27);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_Lean_ppGoal___closed__6;
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_box(1);
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_24);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_17);
return x_36;
}
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_85 = lean_ctor_get(x_1, 0);
x_86 = lean_ctor_get(x_1, 1);
x_87 = lean_ctor_get(x_1, 3);
x_88 = lean_ctor_get(x_1, 4);
x_89 = lean_ctor_get(x_1, 5);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_1);
lean_inc(x_86);
x_90 = lean_metavar_ctx_find_decl(x_86, x_2);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
x_91 = l_Lean_ppGoal___closed__2;
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_3);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_93 = lean_ctor_get(x_90, 0);
lean_inc(x_93);
lean_dec(x_90);
x_117 = l_Lean_getAuxDeclsOption(x_87);
x_118 = lean_ctor_get(x_93, 1);
lean_inc(x_118);
x_119 = lean_box(0);
lean_inc(x_87);
x_120 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_120, 0, x_87);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_120, 2, x_119);
x_121 = l_Lean_LocalContext_sanitizeNames(x_118, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
lean_dec(x_121);
lean_inc(x_122);
lean_inc(x_86);
x_123 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_123, 0, x_85);
lean_ctor_set(x_123, 1, x_86);
lean_ctor_set(x_123, 2, x_122);
lean_ctor_set(x_123, 3, x_87);
lean_ctor_set(x_123, 4, x_88);
lean_ctor_set(x_123, 5, x_89);
lean_inc(x_123);
x_124 = lean_alloc_closure((void*)(l_Lean_ppExpr), 3, 1);
lean_closure_set(x_124, 0, x_123);
x_125 = lean_alloc_closure((void*)(l_Lean_ppGoal___lambda__1), 2, 1);
lean_closure_set(x_125, 0, x_86);
x_126 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__11___closed__2;
x_127 = l_Lean_ppGoal___closed__9;
x_128 = l_Lean_ppGoal___closed__8;
x_129 = lean_unsigned_to_nat(0u);
lean_inc(x_124);
x_130 = l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1(x_126, x_117, x_124, x_125, x_127, x_122, x_128, x_129, x_3);
lean_dec(x_122);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
lean_dec(x_131);
x_135 = lean_ctor_get(x_132, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_132, 1);
lean_inc(x_136);
lean_dec(x_132);
x_137 = l_Lean_ppGoal_pushPending(x_126, x_124, x_127, x_134, x_135, x_136, x_133);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; uint8_t x_140; lean_object* x_141; lean_object* x_142; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
x_140 = l_Lean_Format_isNil(x_138);
x_141 = lean_ctor_get(x_93, 2);
lean_inc(x_141);
x_142 = l_Lean_ppExpr(x_123, x_141, x_139);
if (x_140 == 0)
{
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = lean_box(1);
x_146 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_146, 0, x_138);
lean_ctor_set(x_146, 1, x_145);
x_94 = x_146;
x_95 = x_143;
x_96 = x_144;
goto block_116;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_138);
lean_dec(x_93);
x_147 = lean_ctor_get(x_142, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_142, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_149 = x_142;
} else {
 lean_dec_ref(x_142);
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
else
{
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_142, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_142, 1);
lean_inc(x_152);
lean_dec(x_142);
x_94 = x_138;
x_95 = x_151;
x_96 = x_152;
goto block_116;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_138);
lean_dec(x_93);
x_153 = lean_ctor_get(x_142, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_142, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_155 = x_142;
} else {
 lean_dec_ref(x_142);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_123);
lean_dec(x_93);
x_157 = lean_ctor_get(x_137, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_137, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_159 = x_137;
} else {
 lean_dec_ref(x_137);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_124);
lean_dec(x_123);
lean_dec(x_93);
x_161 = lean_ctor_get(x_130, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_130, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_163 = x_130;
} else {
 lean_dec_ref(x_130);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_161);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
block_116:
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_97 = l_Lean_ppGoal___closed__4;
x_98 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_98, 0, x_94);
lean_ctor_set(x_98, 1, x_97);
x_99 = l_Lean_ppGoal_pushPending___closed__1;
x_100 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
x_101 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__11___closed__2;
x_102 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_95);
x_103 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_ctor_get(x_93, 0);
lean_inc(x_104);
lean_dec(x_93);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; 
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_96);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_106 = lean_erase_macro_scopes(x_104);
x_107 = l_Lean_Name_toString___closed__1;
x_108 = l_Lean_Name_toStringWithSep(x_107, x_106);
x_109 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_109, 0, x_108);
x_110 = l_Lean_ppGoal___closed__6;
x_111 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = lean_box(1);
x_113 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_103);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_96);
return x_115;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__5(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__6(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__4(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__8(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_ppGoal___spec__3(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__9(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__10(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__12(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__13(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_ppGoal___spec__11(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_13 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__14(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_13, x_9, x_10);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Std_PersistentArray_foldlM___at_Lean_ppGoal___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Std_PersistentArray_foldlM___at_Lean_ppGoal___spec__2(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_11;
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_LocalContext_foldlM___at_Lean_ppGoal___spec__1(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_11;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_PPExt(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Util_PPGoal(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PPExt(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ppAuxDeclsDefault = _init_l_Lean_ppAuxDeclsDefault();
l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__1 = _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__1();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__1);
l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2 = _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__2);
l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__3 = _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__3();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__3);
l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__4 = _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__4();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__4);
l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__5 = _init_l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__5();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6____closed__5);
res = l_Lean_initFn____x40_Lean_Util_PPGoal___hyg_6_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ppGoal_pushPending___closed__1 = _init_l_Lean_ppGoal_pushPending___closed__1();
lean_mark_persistent(l_Lean_ppGoal_pushPending___closed__1);
l_Lean_ppGoal_pushPending___closed__2 = _init_l_Lean_ppGoal_pushPending___closed__2();
lean_mark_persistent(l_Lean_ppGoal_pushPending___closed__2);
l_Lean_ppGoal_pushPending___closed__3 = _init_l_Lean_ppGoal_pushPending___closed__3();
lean_mark_persistent(l_Lean_ppGoal_pushPending___closed__3);
l_Lean_ppGoal_ppVars___closed__1 = _init_l_Lean_ppGoal_ppVars___closed__1();
lean_mark_persistent(l_Lean_ppGoal_ppVars___closed__1);
l_Lean_ppGoal_ppVars___closed__2 = _init_l_Lean_ppGoal_ppVars___closed__2();
lean_mark_persistent(l_Lean_ppGoal_ppVars___closed__2);
l_Lean_ppGoal_ppVars___closed__3 = _init_l_Lean_ppGoal_ppVars___closed__3();
lean_mark_persistent(l_Lean_ppGoal_ppVars___closed__3);
l_Lean_ppGoal___closed__1 = _init_l_Lean_ppGoal___closed__1();
lean_mark_persistent(l_Lean_ppGoal___closed__1);
l_Lean_ppGoal___closed__2 = _init_l_Lean_ppGoal___closed__2();
lean_mark_persistent(l_Lean_ppGoal___closed__2);
l_Lean_ppGoal___closed__3 = _init_l_Lean_ppGoal___closed__3();
lean_mark_persistent(l_Lean_ppGoal___closed__3);
l_Lean_ppGoal___closed__4 = _init_l_Lean_ppGoal___closed__4();
lean_mark_persistent(l_Lean_ppGoal___closed__4);
l_Lean_ppGoal___closed__5 = _init_l_Lean_ppGoal___closed__5();
lean_mark_persistent(l_Lean_ppGoal___closed__5);
l_Lean_ppGoal___closed__6 = _init_l_Lean_ppGoal___closed__6();
lean_mark_persistent(l_Lean_ppGoal___closed__6);
l_Lean_ppGoal___closed__7 = _init_l_Lean_ppGoal___closed__7();
lean_mark_persistent(l_Lean_ppGoal___closed__7);
l_Lean_ppGoal___closed__8 = _init_l_Lean_ppGoal___closed__8();
lean_mark_persistent(l_Lean_ppGoal___closed__8);
l_Lean_ppGoal___closed__9 = _init_l_Lean_ppGoal___closed__9();
lean_mark_persistent(l_Lean_ppGoal___closed__9);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
