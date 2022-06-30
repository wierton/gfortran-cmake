/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/wierton/gcc/gcc/config/i386/i386.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "/home/wierton/gcc/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "/home/wierton/gcc/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "/home/wierton/gcc/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "/home/wierton/gcc/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "/home/wierton/gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "/home/wierton/gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "/home/wierton/gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "/home/wierton/gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "/home/wierton/gcc/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "/home/wierton/gcc/gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "/home/wierton/gcc/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "/home/wierton/gcc/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "/home/wierton/gcc/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "/home/wierton/gcc/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "/home/wierton/gcc/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "/home/wierton/gcc/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "/home/wierton/gcc/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "/home/wierton/gcc/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "/home/wierton/gcc/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "/home/wierton/gcc/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "/home/wierton/gcc/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_Bf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return flags_reg_operand (op, mode);
}
static inline bool
satisfies_constraint_Bg (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return GOT_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Bm (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vector_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Bc (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (memory_operand (op, mode)) && (
#line 188 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(constant_address_p (XEXP (op, 0))));
}
static inline bool
satisfies_constraint_Bk (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (memory_operand (op, mode)) && (!(
#line 193 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(ix86_gpr_tls_address_pattern_p (op))));
}
static inline bool
satisfies_constraint_Bn (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return norex_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Br (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return bcst_mem_operand (op, mode);
}
static inline bool
satisfies_constraint_Bs (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ((!(
#line 205 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && ((!(
#line 206 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_X32))) && (sibcall_memory_operand (op, mode)))) || ((
#line 208 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_X32)) && ((
#line 209 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(Pmode == DImode)) && (GOT_memory_operand (op, mode))));
}
static inline bool
satisfies_constraint_Bw (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ((!(
#line 214 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && ((!(
#line 215 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_X32))) && (memory_operand (op, mode)))) || ((
#line 217 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_X32)) && ((
#line 218 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(Pmode == DImode)) && (GOT_memory_operand (op, mode))));
}
static inline bool
satisfies_constraint_Bz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return constant_call_address_operand (op, mode);
}
static inline bool
satisfies_constraint_BC (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 227 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_SSE)) && ((
#line 228 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(op == constm1_rtx)) || (vector_all_ones_operand (op, mode)));
}
static inline bool
satisfies_constraint_BF (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 233 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(TARGET_SSE)) && (float_vector_all_ones_operand (op, mode));
}
static inline bool
satisfies_constraint_BM (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 242 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_Wb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 249 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 7)));
}
static inline bool
satisfies_constraint_Ww (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 254 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 15)));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 259 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 264 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 269 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 275 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(ival == 0xff)) || ((
#line 276 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(ival == 0xffff)) || (
#line 277 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(ival == (HOST_WIDE_INT) 0xffffffff))));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 282 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3)));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 288 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 293 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 302 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(standard_80387_constant_p (op) > 0));
}
static inline bool
satisfies_constraint_C (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 307 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(op == const0_rtx)) || (const0_operand (op, mode));
}
static inline bool
satisfies_constraint_e (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_We (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (x86_64_immediate_operand (op, mode)) && (
#line 326 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(mode != VOIDmode));
}
static inline bool
satisfies_constraint_Wz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (x86_64_zext_immediate_operand (op, mode)) && (
#line 333 "/home/wierton/gcc/gcc/config/i386/constraints.md"
(mode != VOIDmode));
}
static inline bool
satisfies_constraint_Wd (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_hilo_int_operand (op, mode);
}
static inline bool
satisfies_constraint_Wf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_dwzext_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Z (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_zext_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Tv (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vsib_address_operand (op, mode);
}
static inline bool
satisfies_constraint_Ts (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return address_no_seg_operand (op, mode);
}
#endif /* tm-constrs.h */
