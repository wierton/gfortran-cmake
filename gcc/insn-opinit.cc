/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010f10, CODE_FOR_extendqihi2 },
  { 0x010f11, CODE_FOR_extendqisi2 },
  { 0x010f12, CODE_FOR_extendqidi2 },
  { 0x011011, CODE_FOR_extendhisi2 },
  { 0x011012, CODE_FOR_extendhidi2 },
  { 0x011112, CODE_FOR_extendsidi2 },
  { 0x012b2c, CODE_FOR_extendhfsf2 },
  { 0x012b2d, CODE_FOR_extendhfdf2 },
  { 0x012c2d, CODE_FOR_extendsfdf2 },
  { 0x012c2e, CODE_FOR_extendsfxf2 },
  { 0x012d2e, CODE_FOR_extenddfxf2 },
  { 0x014250, CODE_FOR_extendv2qiv2di2 },
  { 0x01434f, CODE_FOR_extendv4qiv4si2 },
  { 0x014355, CODE_FOR_extendv4qiv4di2 },
  { 0x014450, CODE_FOR_extendv2hiv2di2 },
  { 0x01464e, CODE_FOR_extendv8qiv8hi2 },
  { 0x014654, CODE_FOR_extendv8qiv8si2 },
  { 0x01465a, CODE_FOR_extendv8qiv8di2 },
  { 0x01474f, CODE_FOR_extendv4hiv4si2 },
  { 0x014755, CODE_FOR_extendv4hiv4di2 },
  { 0x014850, CODE_FOR_extendv2siv2di2 },
  { 0x014d53, CODE_FOR_extendv16qiv16hi2 },
  { 0x014d59, CODE_FOR_extendv16qiv16si2 },
  { 0x014e54, CODE_FOR_extendv8hiv8si2 },
  { 0x014e5a, CODE_FOR_extendv8hiv8di2 },
  { 0x014f55, CODE_FOR_extendv4siv4di2 },
  { 0x015258, CODE_FOR_extendv32qiv32hi2 },
  { 0x015359, CODE_FOR_extendv16hiv16si2 },
  { 0x01545a, CODE_FOR_extendv8siv8di2 },
  { 0x016268, CODE_FOR_extendv2hfv2df2 },
  { 0x016367, CODE_FOR_extendv4hfv4sf2 },
  { 0x01636b, CODE_FOR_extendv4hfv4df2 },
  { 0x016468, CODE_FOR_extendv2sfv2df2 },
  { 0x01666a, CODE_FOR_extendv8hfv8sf2 },
  { 0x01666f, CODE_FOR_extendv8hfv8df2 },
  { 0x01676b, CODE_FOR_extendv4sfv4df2 },
  { 0x01696e, CODE_FOR_extendv16hfv16sf2 },
  { 0x016a6f, CODE_FOR_extendv8sfv8df2 },
  { 0x022c2b, CODE_FOR_truncsfhf2 },
  { 0x022d2b, CODE_FOR_truncdfhf2 },
  { 0x022d2c, CODE_FOR_truncdfsf2 },
  { 0x022e2c, CODE_FOR_truncxfsf2 },
  { 0x022e2d, CODE_FOR_truncxfdf2 },
  { 0x024e46, CODE_FOR_truncv8hiv8qi2 },
  { 0x024f43, CODE_FOR_truncv4siv4qi2 },
  { 0x024f47, CODE_FOR_truncv4siv4hi2 },
  { 0x025042, CODE_FOR_truncv2div2qi2 },
  { 0x025044, CODE_FOR_truncv2div2hi2 },
  { 0x025048, CODE_FOR_truncv2div2si2 },
  { 0x02534d, CODE_FOR_truncv16hiv16qi2 },
  { 0x025446, CODE_FOR_truncv8siv8qi2 },
  { 0x02544e, CODE_FOR_truncv8siv8hi2 },
  { 0x025543, CODE_FOR_truncv4div4qi2 },
  { 0x025547, CODE_FOR_truncv4div4hi2 },
  { 0x02554f, CODE_FOR_truncv4div4si2 },
  { 0x025852, CODE_FOR_truncv32hiv32qi2 },
  { 0x02594d, CODE_FOR_truncv16siv16qi2 },
  { 0x025953, CODE_FOR_truncv16siv16hi2 },
  { 0x025a46, CODE_FOR_truncv8div8qi2 },
  { 0x025a4e, CODE_FOR_truncv8div8hi2 },
  { 0x025a54, CODE_FOR_truncv8div8si2 },
  { 0x026763, CODE_FOR_truncv4sfv4hf2 },
  { 0x026862, CODE_FOR_truncv2dfv2hf2 },
  { 0x026864, CODE_FOR_truncv2dfv2sf2 },
  { 0x026a66, CODE_FOR_truncv8sfv8hf2 },
  { 0x026b63, CODE_FOR_truncv4dfv4hf2 },
  { 0x026b67, CODE_FOR_truncv4dfv4sf2 },
  { 0x026e69, CODE_FOR_truncv16sfv16hf2 },
  { 0x026f66, CODE_FOR_truncv8dfv8hf2 },
  { 0x026f6a, CODE_FOR_truncv8dfv8sf2 },
  { 0x030f10, CODE_FOR_zero_extendqihi2 },
  { 0x030f11, CODE_FOR_zero_extendqisi2 },
  { 0x030f12, CODE_FOR_zero_extendqidi2 },
  { 0x031011, CODE_FOR_zero_extendhisi2 },
  { 0x031012, CODE_FOR_zero_extendhidi2 },
  { 0x031112, CODE_FOR_zero_extendsidi2 },
  { 0x034250, CODE_FOR_zero_extendv2qiv2di2 },
  { 0x03434f, CODE_FOR_zero_extendv4qiv4si2 },
  { 0x034355, CODE_FOR_zero_extendv4qiv4di2 },
  { 0x034450, CODE_FOR_zero_extendv2hiv2di2 },
  { 0x03464e, CODE_FOR_zero_extendv8qiv8hi2 },
  { 0x034654, CODE_FOR_zero_extendv8qiv8si2 },
  { 0x03465a, CODE_FOR_zero_extendv8qiv8di2 },
  { 0x03474f, CODE_FOR_zero_extendv4hiv4si2 },
  { 0x034755, CODE_FOR_zero_extendv4hiv4di2 },
  { 0x034850, CODE_FOR_zero_extendv2siv2di2 },
  { 0x034d53, CODE_FOR_zero_extendv16qiv16hi2 },
  { 0x034d59, CODE_FOR_zero_extendv16qiv16si2 },
  { 0x034e54, CODE_FOR_zero_extendv8hiv8si2 },
  { 0x034e5a, CODE_FOR_zero_extendv8hiv8di2 },
  { 0x034f55, CODE_FOR_zero_extendv4siv4di2 },
  { 0x035258, CODE_FOR_zero_extendv32qiv32hi2 },
  { 0x035359, CODE_FOR_zero_extendv16hiv16si2 },
  { 0x03545a, CODE_FOR_zero_extendv8siv8di2 },
  { 0x06102c, CODE_FOR_floathisf2 },
  { 0x06102d, CODE_FOR_floathidf2 },
  { 0x06102e, CODE_FOR_floathixf2 },
  { 0x06112b, CODE_FOR_floatsihf2 },
  { 0x06112c, CODE_FOR_floatsisf2 },
  { 0x06112d, CODE_FOR_floatsidf2 },
  { 0x06112e, CODE_FOR_floatsixf2 },
  { 0x06122b, CODE_FOR_floatdihf2 },
  { 0x06122c, CODE_FOR_floatdisf2 },
  { 0x06122d, CODE_FOR_floatdidf2 },
  { 0x06122e, CODE_FOR_floatdixf2 },
  { 0x064864, CODE_FOR_floatv2siv2sf2 },
  { 0x064868, CODE_FOR_floatv2siv2df2 },
  { 0x064e66, CODE_FOR_floatv8hiv8hf2 },
  { 0x064f63, CODE_FOR_floatv4siv4hf2 },
  { 0x064f67, CODE_FOR_floatv4siv4sf2 },
  { 0x064f6b, CODE_FOR_floatv4siv4df2 },
  { 0x065062, CODE_FOR_floatv2div2hf2 },
  { 0x065064, CODE_FOR_floatv2div2sf2 },
  { 0x065068, CODE_FOR_floatv2div2df2 },
  { 0x065369, CODE_FOR_floatv16hiv16hf2 },
  { 0x065466, CODE_FOR_floatv8siv8hf2 },
  { 0x06546a, CODE_FOR_floatv8siv8sf2 },
  { 0x06546f, CODE_FOR_floatv8siv8df2 },
  { 0x065563, CODE_FOR_floatv4div4hf2 },
  { 0x065567, CODE_FOR_floatv4div4sf2 },
  { 0x06556b, CODE_FOR_floatv4div4df2 },
  { 0x06586d, CODE_FOR_floatv32hiv32hf2 },
  { 0x065969, CODE_FOR_floatv16siv16hf2 },
  { 0x06596e, CODE_FOR_floatv16siv16sf2 },
  { 0x065a66, CODE_FOR_floatv8div8hf2 },
  { 0x065a6a, CODE_FOR_floatv8div8sf2 },
  { 0x065a6f, CODE_FOR_floatv8div8df2 },
  { 0x070f2c, CODE_FOR_floatunsqisf2 },
  { 0x070f2d, CODE_FOR_floatunsqidf2 },
  { 0x07102c, CODE_FOR_floatunshisf2 },
  { 0x07102d, CODE_FOR_floatunshidf2 },
  { 0x07112b, CODE_FOR_floatunssihf2 },
  { 0x07112c, CODE_FOR_floatunssisf2 },
  { 0x07112d, CODE_FOR_floatunssidf2 },
  { 0x07112e, CODE_FOR_floatunssixf2 },
  { 0x07122b, CODE_FOR_floatunsdihf2 },
  { 0x07122c, CODE_FOR_floatunsdisf2 },
  { 0x07122d, CODE_FOR_floatunsdidf2 },
  { 0x074864, CODE_FOR_floatunsv2siv2sf2 },
  { 0x074868, CODE_FOR_floatunsv2siv2df2 },
  { 0x074e66, CODE_FOR_floatunsv8hiv8hf2 },
  { 0x074f63, CODE_FOR_floatunsv4siv4hf2 },
  { 0x074f67, CODE_FOR_floatunsv4siv4sf2 },
  { 0x075062, CODE_FOR_floatunsv2div2hf2 },
  { 0x075064, CODE_FOR_floatunsv2div2sf2 },
  { 0x075068, CODE_FOR_floatunsv2div2df2 },
  { 0x075369, CODE_FOR_floatunsv16hiv16hf2 },
  { 0x075466, CODE_FOR_floatunsv8siv8hf2 },
  { 0x07546a, CODE_FOR_floatunsv8siv8sf2 },
  { 0x075563, CODE_FOR_floatunsv4div4hf2 },
  { 0x075567, CODE_FOR_floatunsv4div4sf2 },
  { 0x07556b, CODE_FOR_floatunsv4div4df2 },
  { 0x07586d, CODE_FOR_floatunsv32hiv32hf2 },
  { 0x075969, CODE_FOR_floatunsv16siv16hf2 },
  { 0x07596e, CODE_FOR_floatunsv16siv16sf2 },
  { 0x075a66, CODE_FOR_floatunsv8div8hf2 },
  { 0x075a6a, CODE_FOR_floatunsv8div8sf2 },
  { 0x075a6f, CODE_FOR_floatunsv8div8df2 },
  { 0x082c11, CODE_FOR_lrintsfsi2 },
  { 0x082c12, CODE_FOR_lrintsfdi2 },
  { 0x082d11, CODE_FOR_lrintdfsi2 },
  { 0x082d12, CODE_FOR_lrintdfdi2 },
  { 0x082e10, CODE_FOR_lrintxfhi2 },
  { 0x082e11, CODE_FOR_lrintxfsi2 },
  { 0x082e12, CODE_FOR_lrintxfdi2 },
  { 0x092c10, CODE_FOR_lroundsfhi2 },
  { 0x092c11, CODE_FOR_lroundsfsi2 },
  { 0x092c12, CODE_FOR_lroundsfdi2 },
  { 0x092d10, CODE_FOR_lrounddfhi2 },
  { 0x092d11, CODE_FOR_lrounddfsi2 },
  { 0x092d12, CODE_FOR_lrounddfdi2 },
  { 0x092e10, CODE_FOR_lroundxfhi2 },
  { 0x092e11, CODE_FOR_lroundxfsi2 },
  { 0x092e12, CODE_FOR_lroundxfdi2 },
  { 0x0a2c11, CODE_FOR_lfloorsfsi2 },
  { 0x0a2c12, CODE_FOR_lfloorsfdi2 },
  { 0x0a2d11, CODE_FOR_lfloordfsi2 },
  { 0x0a2d12, CODE_FOR_lfloordfdi2 },
  { 0x0a2e10, CODE_FOR_lfloorxfhi2 },
  { 0x0a2e11, CODE_FOR_lfloorxfsi2 },
  { 0x0a2e12, CODE_FOR_lfloorxfdi2 },
  { 0x0b2c11, CODE_FOR_lceilsfsi2 },
  { 0x0b2c12, CODE_FOR_lceilsfdi2 },
  { 0x0b2d11, CODE_FOR_lceildfsi2 },
  { 0x0b2d12, CODE_FOR_lceildfdi2 },
  { 0x0b2e10, CODE_FOR_lceilxfhi2 },
  { 0x0b2e11, CODE_FOR_lceilxfsi2 },
  { 0x0b2e12, CODE_FOR_lceilxfdi2 },
  { 0x102b11, CODE_FOR_fix_trunchfsi2 },
  { 0x102b12, CODE_FOR_fix_trunchfdi2 },
  { 0x102c10, CODE_FOR_fix_truncsfhi2 },
  { 0x102c11, CODE_FOR_fix_truncsfsi2 },
  { 0x102c12, CODE_FOR_fix_truncsfdi2 },
  { 0x102d10, CODE_FOR_fix_truncdfhi2 },
  { 0x102d11, CODE_FOR_fix_truncdfsi2 },
  { 0x102d12, CODE_FOR_fix_truncdfdi2 },
  { 0x102e10, CODE_FOR_fix_truncxfhi2 },
  { 0x102e11, CODE_FOR_fix_truncxfsi2 },
  { 0x102e12, CODE_FOR_fix_truncxfdi2 },
  { 0x106250, CODE_FOR_fix_truncv2hfv2di2 },
  { 0x10634f, CODE_FOR_fix_truncv4hfv4si2 },
  { 0x106355, CODE_FOR_fix_truncv4hfv4di2 },
  { 0x106448, CODE_FOR_fix_truncv2sfv2si2 },
  { 0x106450, CODE_FOR_fix_truncv2sfv2di2 },
  { 0x10664e, CODE_FOR_fix_truncv8hfv8hi2 },
  { 0x106654, CODE_FOR_fix_truncv8hfv8si2 },
  { 0x10665a, CODE_FOR_fix_truncv8hfv8di2 },
  { 0x10674f, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x106755, CODE_FOR_fix_truncv4sfv4di2 },
  { 0x106848, CODE_FOR_fix_truncv2dfv2si2 },
  { 0x106850, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x106953, CODE_FOR_fix_truncv16hfv16hi2 },
  { 0x106959, CODE_FOR_fix_truncv16hfv16si2 },
  { 0x106a54, CODE_FOR_fix_truncv8sfv8si2 },
  { 0x106a5a, CODE_FOR_fix_truncv8sfv8di2 },
  { 0x106b4f, CODE_FOR_fix_truncv4dfv4si2 },
  { 0x106b55, CODE_FOR_fix_truncv4dfv4di2 },
  { 0x106d58, CODE_FOR_fix_truncv32hfv32hi2 },
  { 0x106e59, CODE_FOR_fix_truncv16sfv16si2 },
  { 0x106f54, CODE_FOR_fix_truncv8dfv8si2 },
  { 0x106f5a, CODE_FOR_fix_truncv8dfv8di2 },
  { 0x112b10, CODE_FOR_fixuns_trunchfhi2 },
  { 0x112b11, CODE_FOR_fixuns_trunchfsi2 },
  { 0x112b12, CODE_FOR_fixuns_trunchfdi2 },
  { 0x112c10, CODE_FOR_fixuns_truncsfhi2 },
  { 0x112c11, CODE_FOR_fixuns_truncsfsi2 },
  { 0x112c12, CODE_FOR_fixuns_truncsfdi2 },
  { 0x112d10, CODE_FOR_fixuns_truncdfhi2 },
  { 0x112d11, CODE_FOR_fixuns_truncdfsi2 },
  { 0x112d12, CODE_FOR_fixuns_truncdfdi2 },
  { 0x116250, CODE_FOR_fixuns_truncv2hfv2di2 },
  { 0x11634f, CODE_FOR_fixuns_truncv4hfv4si2 },
  { 0x116355, CODE_FOR_fixuns_truncv4hfv4di2 },
  { 0x116448, CODE_FOR_fixuns_truncv2sfv2si2 },
  { 0x116450, CODE_FOR_fixuns_truncv2sfv2di2 },
  { 0x11664e, CODE_FOR_fixuns_truncv8hfv8hi2 },
  { 0x116654, CODE_FOR_fixuns_truncv8hfv8si2 },
  { 0x11665a, CODE_FOR_fixuns_truncv8hfv8di2 },
  { 0x11674f, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x116755, CODE_FOR_fixuns_truncv4sfv4di2 },
  { 0x116848, CODE_FOR_fixuns_truncv2dfv2si2 },
  { 0x116850, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x116953, CODE_FOR_fixuns_truncv16hfv16hi2 },
  { 0x116959, CODE_FOR_fixuns_truncv16hfv16si2 },
  { 0x116a54, CODE_FOR_fixuns_truncv8sfv8si2 },
  { 0x116a5a, CODE_FOR_fixuns_truncv8sfv8di2 },
  { 0x116b55, CODE_FOR_fixuns_truncv4dfv4di2 },
  { 0x116d58, CODE_FOR_fixuns_truncv32hfv32hi2 },
  { 0x116e59, CODE_FOR_fixuns_truncv16sfv16si2 },
  { 0x116f54, CODE_FOR_fixuns_truncv8dfv8si2 },
  { 0x116f5a, CODE_FOR_fixuns_truncv8dfv8di2 },
  { 0x120f10, CODE_FOR_mulqihi3 },
  { 0x121112, CODE_FOR_mulsidi3 },
  { 0x121213, CODE_FOR_mulditi3 },
  { 0x130f10, CODE_FOR_umulqihi3 },
  { 0x131112, CODE_FOR_umulsidi3 },
  { 0x131213, CODE_FOR_umulditi3 },
  { 0x214242, CODE_FOR_vcondv2qiv2qi },
  { 0x214343, CODE_FOR_vcondv4qiv4qi },
  { 0x214444, CODE_FOR_vcondv2hiv2hi },
  { 0x214646, CODE_FOR_vcondv8qiv8qi },
  { 0x214647, CODE_FOR_vcondv4hiv8qi },
  { 0x214648, CODE_FOR_vcondv2siv8qi },
  { 0x214664, CODE_FOR_vcondv2sfv8qi },
  { 0x214746, CODE_FOR_vcondv8qiv4hi },
  { 0x214747, CODE_FOR_vcondv4hiv4hi },
  { 0x214748, CODE_FOR_vcondv2siv4hi },
  { 0x214764, CODE_FOR_vcondv2sfv4hi },
  { 0x214846, CODE_FOR_vcondv8qiv2si },
  { 0x214847, CODE_FOR_vcondv4hiv2si },
  { 0x214848, CODE_FOR_vcondv2siv2si },
  { 0x214864, CODE_FOR_vcondv2sfv2si },
  { 0x214d4d, CODE_FOR_vcondv16qiv16qi },
  { 0x214d4e, CODE_FOR_vcondv8hiv16qi },
  { 0x214d4f, CODE_FOR_vcondv4siv16qi },
  { 0x214d50, CODE_FOR_vcondv2div16qi },
  { 0x214d67, CODE_FOR_vcondv4sfv16qi },
  { 0x214d68, CODE_FOR_vcondv2dfv16qi },
  { 0x214e4d, CODE_FOR_vcondv16qiv8hi },
  { 0x214e4e, CODE_FOR_vcondv8hiv8hi },
  { 0x214e4f, CODE_FOR_vcondv4siv8hi },
  { 0x214e50, CODE_FOR_vcondv2div8hi },
  { 0x214e66, CODE_FOR_vcondv8hfv8hi },
  { 0x214e67, CODE_FOR_vcondv4sfv8hi },
  { 0x214e68, CODE_FOR_vcondv2dfv8hi },
  { 0x214f4d, CODE_FOR_vcondv16qiv4si },
  { 0x214f4e, CODE_FOR_vcondv8hiv4si },
  { 0x214f4f, CODE_FOR_vcondv4siv4si },
  { 0x214f50, CODE_FOR_vcondv2div4si },
  { 0x214f67, CODE_FOR_vcondv4sfv4si },
  { 0x214f68, CODE_FOR_vcondv2dfv4si },
  { 0x215050, CODE_FOR_vcondv2div2di },
  { 0x215068, CODE_FOR_vcondv2dfv2di },
  { 0x215252, CODE_FOR_vcondv32qiv32qi },
  { 0x215253, CODE_FOR_vcondv16hiv32qi },
  { 0x215254, CODE_FOR_vcondv8siv32qi },
  { 0x215255, CODE_FOR_vcondv4div32qi },
  { 0x21526a, CODE_FOR_vcondv8sfv32qi },
  { 0x21526b, CODE_FOR_vcondv4dfv32qi },
  { 0x215352, CODE_FOR_vcondv32qiv16hi },
  { 0x215353, CODE_FOR_vcondv16hiv16hi },
  { 0x215354, CODE_FOR_vcondv8siv16hi },
  { 0x215355, CODE_FOR_vcondv4div16hi },
  { 0x215369, CODE_FOR_vcondv16hfv16hi },
  { 0x21536a, CODE_FOR_vcondv8sfv16hi },
  { 0x21536b, CODE_FOR_vcondv4dfv16hi },
  { 0x215452, CODE_FOR_vcondv32qiv8si },
  { 0x215453, CODE_FOR_vcondv16hiv8si },
  { 0x215454, CODE_FOR_vcondv8siv8si },
  { 0x215455, CODE_FOR_vcondv4div8si },
  { 0x21546a, CODE_FOR_vcondv8sfv8si },
  { 0x21546b, CODE_FOR_vcondv4dfv8si },
  { 0x215552, CODE_FOR_vcondv32qiv4di },
  { 0x215553, CODE_FOR_vcondv16hiv4di },
  { 0x215554, CODE_FOR_vcondv8siv4di },
  { 0x215555, CODE_FOR_vcondv4div4di },
  { 0x21556a, CODE_FOR_vcondv8sfv4di },
  { 0x21556b, CODE_FOR_vcondv4dfv4di },
  { 0x215757, CODE_FOR_vcondv64qiv64qi },
  { 0x215758, CODE_FOR_vcondv32hiv64qi },
  { 0x215759, CODE_FOR_vcondv16siv64qi },
  { 0x21575a, CODE_FOR_vcondv8div64qi },
  { 0x21576e, CODE_FOR_vcondv16sfv64qi },
  { 0x21576f, CODE_FOR_vcondv8dfv64qi },
  { 0x215857, CODE_FOR_vcondv64qiv32hi },
  { 0x215858, CODE_FOR_vcondv32hiv32hi },
  { 0x215859, CODE_FOR_vcondv16siv32hi },
  { 0x21585a, CODE_FOR_vcondv8div32hi },
  { 0x21586d, CODE_FOR_vcondv32hfv32hi },
  { 0x21586e, CODE_FOR_vcondv16sfv32hi },
  { 0x21586f, CODE_FOR_vcondv8dfv32hi },
  { 0x215957, CODE_FOR_vcondv64qiv16si },
  { 0x215958, CODE_FOR_vcondv32hiv16si },
  { 0x215959, CODE_FOR_vcondv16siv16si },
  { 0x21595a, CODE_FOR_vcondv8div16si },
  { 0x21596e, CODE_FOR_vcondv16sfv16si },
  { 0x21596f, CODE_FOR_vcondv8dfv16si },
  { 0x215a57, CODE_FOR_vcondv64qiv8di },
  { 0x215a58, CODE_FOR_vcondv32hiv8di },
  { 0x215a59, CODE_FOR_vcondv16siv8di },
  { 0x215a5a, CODE_FOR_vcondv8div8di },
  { 0x215a6e, CODE_FOR_vcondv16sfv8di },
  { 0x215a6f, CODE_FOR_vcondv8dfv8di },
  { 0x216448, CODE_FOR_vcondv2siv2sf },
  { 0x216464, CODE_FOR_vcondv2sfv2sf },
  { 0x21664e, CODE_FOR_vcondv8hiv8hf },
  { 0x216666, CODE_FOR_vcondv8hfv8hf },
  { 0x21674d, CODE_FOR_vcondv16qiv4sf },
  { 0x21674e, CODE_FOR_vcondv8hiv4sf },
  { 0x21674f, CODE_FOR_vcondv4siv4sf },
  { 0x216750, CODE_FOR_vcondv2div4sf },
  { 0x216767, CODE_FOR_vcondv4sfv4sf },
  { 0x216768, CODE_FOR_vcondv2dfv4sf },
  { 0x21684d, CODE_FOR_vcondv16qiv2df },
  { 0x21684e, CODE_FOR_vcondv8hiv2df },
  { 0x21684f, CODE_FOR_vcondv4siv2df },
  { 0x216850, CODE_FOR_vcondv2div2df },
  { 0x216867, CODE_FOR_vcondv4sfv2df },
  { 0x216868, CODE_FOR_vcondv2dfv2df },
  { 0x216953, CODE_FOR_vcondv16hiv16hf },
  { 0x216969, CODE_FOR_vcondv16hfv16hf },
  { 0x216a52, CODE_FOR_vcondv32qiv8sf },
  { 0x216a53, CODE_FOR_vcondv16hiv8sf },
  { 0x216a54, CODE_FOR_vcondv8siv8sf },
  { 0x216a55, CODE_FOR_vcondv4div8sf },
  { 0x216a6a, CODE_FOR_vcondv8sfv8sf },
  { 0x216a6b, CODE_FOR_vcondv4dfv8sf },
  { 0x216b52, CODE_FOR_vcondv32qiv4df },
  { 0x216b53, CODE_FOR_vcondv16hiv4df },
  { 0x216b54, CODE_FOR_vcondv8siv4df },
  { 0x216b55, CODE_FOR_vcondv4div4df },
  { 0x216b6a, CODE_FOR_vcondv8sfv4df },
  { 0x216b6b, CODE_FOR_vcondv4dfv4df },
  { 0x216d58, CODE_FOR_vcondv32hiv32hf },
  { 0x216d6d, CODE_FOR_vcondv32hfv32hf },
  { 0x216e57, CODE_FOR_vcondv64qiv16sf },
  { 0x216e58, CODE_FOR_vcondv32hiv16sf },
  { 0x216e59, CODE_FOR_vcondv16siv16sf },
  { 0x216e5a, CODE_FOR_vcondv8div16sf },
  { 0x216e6e, CODE_FOR_vcondv16sfv16sf },
  { 0x216e6f, CODE_FOR_vcondv8dfv16sf },
  { 0x216f57, CODE_FOR_vcondv64qiv8df },
  { 0x216f58, CODE_FOR_vcondv32hiv8df },
  { 0x216f59, CODE_FOR_vcondv16siv8df },
  { 0x216f5a, CODE_FOR_vcondv8div8df },
  { 0x216f6e, CODE_FOR_vcondv16sfv8df },
  { 0x216f6f, CODE_FOR_vcondv8dfv8df },
  { 0x224242, CODE_FOR_vconduv2qiv2qi },
  { 0x224343, CODE_FOR_vconduv4qiv4qi },
  { 0x224444, CODE_FOR_vconduv2hiv2hi },
  { 0x224646, CODE_FOR_vconduv8qiv8qi },
  { 0x224647, CODE_FOR_vconduv4hiv8qi },
  { 0x224648, CODE_FOR_vconduv2siv8qi },
  { 0x224664, CODE_FOR_vconduv2sfv8qi },
  { 0x224746, CODE_FOR_vconduv8qiv4hi },
  { 0x224747, CODE_FOR_vconduv4hiv4hi },
  { 0x224748, CODE_FOR_vconduv2siv4hi },
  { 0x224764, CODE_FOR_vconduv2sfv4hi },
  { 0x224846, CODE_FOR_vconduv8qiv2si },
  { 0x224847, CODE_FOR_vconduv4hiv2si },
  { 0x224848, CODE_FOR_vconduv2siv2si },
  { 0x224864, CODE_FOR_vconduv2sfv2si },
  { 0x224d4d, CODE_FOR_vconduv16qiv16qi },
  { 0x224d4e, CODE_FOR_vconduv8hiv16qi },
  { 0x224d4f, CODE_FOR_vconduv4siv16qi },
  { 0x224d50, CODE_FOR_vconduv2div16qi },
  { 0x224d67, CODE_FOR_vconduv4sfv16qi },
  { 0x224d68, CODE_FOR_vconduv2dfv16qi },
  { 0x224e4d, CODE_FOR_vconduv16qiv8hi },
  { 0x224e4e, CODE_FOR_vconduv8hiv8hi },
  { 0x224e4f, CODE_FOR_vconduv4siv8hi },
  { 0x224e50, CODE_FOR_vconduv2div8hi },
  { 0x224e66, CODE_FOR_vconduv8hfv8hi },
  { 0x224e67, CODE_FOR_vconduv4sfv8hi },
  { 0x224e68, CODE_FOR_vconduv2dfv8hi },
  { 0x224f4d, CODE_FOR_vconduv16qiv4si },
  { 0x224f4e, CODE_FOR_vconduv8hiv4si },
  { 0x224f4f, CODE_FOR_vconduv4siv4si },
  { 0x224f50, CODE_FOR_vconduv2div4si },
  { 0x224f67, CODE_FOR_vconduv4sfv4si },
  { 0x224f68, CODE_FOR_vconduv2dfv4si },
  { 0x225050, CODE_FOR_vconduv2div2di },
  { 0x225068, CODE_FOR_vconduv2dfv2di },
  { 0x225252, CODE_FOR_vconduv32qiv32qi },
  { 0x225253, CODE_FOR_vconduv16hiv32qi },
  { 0x225254, CODE_FOR_vconduv8siv32qi },
  { 0x225255, CODE_FOR_vconduv4div32qi },
  { 0x22526a, CODE_FOR_vconduv8sfv32qi },
  { 0x22526b, CODE_FOR_vconduv4dfv32qi },
  { 0x225352, CODE_FOR_vconduv32qiv16hi },
  { 0x225353, CODE_FOR_vconduv16hiv16hi },
  { 0x225354, CODE_FOR_vconduv8siv16hi },
  { 0x225355, CODE_FOR_vconduv4div16hi },
  { 0x225369, CODE_FOR_vconduv16hfv16hi },
  { 0x22536a, CODE_FOR_vconduv8sfv16hi },
  { 0x22536b, CODE_FOR_vconduv4dfv16hi },
  { 0x225452, CODE_FOR_vconduv32qiv8si },
  { 0x225453, CODE_FOR_vconduv16hiv8si },
  { 0x225454, CODE_FOR_vconduv8siv8si },
  { 0x225455, CODE_FOR_vconduv4div8si },
  { 0x22546a, CODE_FOR_vconduv8sfv8si },
  { 0x22546b, CODE_FOR_vconduv4dfv8si },
  { 0x225552, CODE_FOR_vconduv32qiv4di },
  { 0x225553, CODE_FOR_vconduv16hiv4di },
  { 0x225554, CODE_FOR_vconduv8siv4di },
  { 0x225555, CODE_FOR_vconduv4div4di },
  { 0x22556a, CODE_FOR_vconduv8sfv4di },
  { 0x22556b, CODE_FOR_vconduv4dfv4di },
  { 0x225757, CODE_FOR_vconduv64qiv64qi },
  { 0x225758, CODE_FOR_vconduv32hiv64qi },
  { 0x225759, CODE_FOR_vconduv16siv64qi },
  { 0x22575a, CODE_FOR_vconduv8div64qi },
  { 0x22576e, CODE_FOR_vconduv16sfv64qi },
  { 0x22576f, CODE_FOR_vconduv8dfv64qi },
  { 0x225857, CODE_FOR_vconduv64qiv32hi },
  { 0x225858, CODE_FOR_vconduv32hiv32hi },
  { 0x225859, CODE_FOR_vconduv16siv32hi },
  { 0x22585a, CODE_FOR_vconduv8div32hi },
  { 0x22586d, CODE_FOR_vconduv32hfv32hi },
  { 0x22586e, CODE_FOR_vconduv16sfv32hi },
  { 0x22586f, CODE_FOR_vconduv8dfv32hi },
  { 0x225957, CODE_FOR_vconduv64qiv16si },
  { 0x225958, CODE_FOR_vconduv32hiv16si },
  { 0x225959, CODE_FOR_vconduv16siv16si },
  { 0x22595a, CODE_FOR_vconduv8div16si },
  { 0x22596e, CODE_FOR_vconduv16sfv16si },
  { 0x22596f, CODE_FOR_vconduv8dfv16si },
  { 0x225a57, CODE_FOR_vconduv64qiv8di },
  { 0x225a58, CODE_FOR_vconduv32hiv8di },
  { 0x225a59, CODE_FOR_vconduv16siv8di },
  { 0x225a5a, CODE_FOR_vconduv8div8di },
  { 0x225a6e, CODE_FOR_vconduv16sfv8di },
  { 0x225a6f, CODE_FOR_vconduv8dfv8di },
  { 0x235050, CODE_FOR_vcondeqv2div2di },
  { 0x235068, CODE_FOR_vcondeqv2dfv2di },
  { 0x240f4e, CODE_FOR_vcond_mask_v8hiqi },
  { 0x240f4f, CODE_FOR_vcond_mask_v4siqi },
  { 0x240f50, CODE_FOR_vcond_mask_v2diqi },
  { 0x240f54, CODE_FOR_vcond_mask_v8siqi },
  { 0x240f55, CODE_FOR_vcond_mask_v4diqi },
  { 0x240f5a, CODE_FOR_vcond_mask_v8diqi },
  { 0x240f66, CODE_FOR_vcond_mask_v8hfqi },
  { 0x240f67, CODE_FOR_vcond_mask_v4sfqi },
  { 0x240f68, CODE_FOR_vcond_mask_v2dfqi },
  { 0x240f6a, CODE_FOR_vcond_mask_v8sfqi },
  { 0x240f6b, CODE_FOR_vcond_mask_v4dfqi },
  { 0x240f6f, CODE_FOR_vcond_mask_v8dfqi },
  { 0x24104d, CODE_FOR_vcond_mask_v16qihi },
  { 0x241053, CODE_FOR_vcond_mask_v16hihi },
  { 0x241059, CODE_FOR_vcond_mask_v16sihi },
  { 0x241069, CODE_FOR_vcond_mask_v16hfhi },
  { 0x24106e, CODE_FOR_vcond_mask_v16sfhi },
  { 0x241152, CODE_FOR_vcond_mask_v32qisi },
  { 0x241158, CODE_FOR_vcond_mask_v32hisi },
  { 0x24116d, CODE_FOR_vcond_mask_v32hfsi },
  { 0x241257, CODE_FOR_vcond_mask_v64qidi },
  { 0x244242, CODE_FOR_vcond_mask_v2qiv2qi },
  { 0x244343, CODE_FOR_vcond_mask_v4qiv4qi },
  { 0x244444, CODE_FOR_vcond_mask_v2hiv2hi },
  { 0x244646, CODE_FOR_vcond_mask_v8qiv8qi },
  { 0x244747, CODE_FOR_vcond_mask_v4hiv4hi },
  { 0x244848, CODE_FOR_vcond_mask_v2siv2si },
  { 0x244864, CODE_FOR_vcond_mask_v2sfv2si },
  { 0x244d4d, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x244e4e, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x244f4f, CODE_FOR_vcond_mask_v4siv4si },
  { 0x244f67, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x245050, CODE_FOR_vcond_mask_v2div2di },
  { 0x245068, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x245151, CODE_FOR_vcond_mask_v1tiv1ti },
  { 0x245252, CODE_FOR_vcond_mask_v32qiv32qi },
  { 0x245353, CODE_FOR_vcond_mask_v16hiv16hi },
  { 0x245454, CODE_FOR_vcond_mask_v8siv8si },
  { 0x24546a, CODE_FOR_vcond_mask_v8sfv8si },
  { 0x245555, CODE_FOR_vcond_mask_v4div4di },
  { 0x24556b, CODE_FOR_vcond_mask_v4dfv4di },
  { 0x250f4e, CODE_FOR_vec_cmpv8hiqi },
  { 0x250f4f, CODE_FOR_vec_cmpv4siqi },
  { 0x250f50, CODE_FOR_vec_cmpv2diqi },
  { 0x250f54, CODE_FOR_vec_cmpv8siqi },
  { 0x250f55, CODE_FOR_vec_cmpv4diqi },
  { 0x250f5a, CODE_FOR_vec_cmpv8diqi },
  { 0x250f66, CODE_FOR_vec_cmpv8hfqi },
  { 0x250f67, CODE_FOR_vec_cmpv4sfqi },
  { 0x250f68, CODE_FOR_vec_cmpv2dfqi },
  { 0x250f6a, CODE_FOR_vec_cmpv8sfqi },
  { 0x250f6b, CODE_FOR_vec_cmpv4dfqi },
  { 0x250f6f, CODE_FOR_vec_cmpv8dfqi },
  { 0x25104d, CODE_FOR_vec_cmpv16qihi },
  { 0x251053, CODE_FOR_vec_cmpv16hihi },
  { 0x251059, CODE_FOR_vec_cmpv16sihi },
  { 0x251069, CODE_FOR_vec_cmpv16hfhi },
  { 0x25106e, CODE_FOR_vec_cmpv16sfhi },
  { 0x251152, CODE_FOR_vec_cmpv32qisi },
  { 0x251158, CODE_FOR_vec_cmpv32hisi },
  { 0x25116d, CODE_FOR_vec_cmpv32hfsi },
  { 0x251257, CODE_FOR_vec_cmpv64qidi },
  { 0x254242, CODE_FOR_vec_cmpv2qiv2qi },
  { 0x254343, CODE_FOR_vec_cmpv4qiv4qi },
  { 0x254444, CODE_FOR_vec_cmpv2hiv2hi },
  { 0x254646, CODE_FOR_vec_cmpv8qiv8qi },
  { 0x254747, CODE_FOR_vec_cmpv4hiv4hi },
  { 0x254848, CODE_FOR_vec_cmpv2siv2si },
  { 0x254864, CODE_FOR_vec_cmpv2sfv2si },
  { 0x254d4d, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x254e4e, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x254f4f, CODE_FOR_vec_cmpv4siv4si },
  { 0x254f67, CODE_FOR_vec_cmpv4sfv4si },
  { 0x255050, CODE_FOR_vec_cmpv2div2di },
  { 0x255068, CODE_FOR_vec_cmpv2dfv2di },
  { 0x255252, CODE_FOR_vec_cmpv32qiv32qi },
  { 0x255353, CODE_FOR_vec_cmpv16hiv16hi },
  { 0x255454, CODE_FOR_vec_cmpv8siv8si },
  { 0x25546a, CODE_FOR_vec_cmpv8sfv8si },
  { 0x255555, CODE_FOR_vec_cmpv4div4di },
  { 0x25556b, CODE_FOR_vec_cmpv4dfv4di },
  { 0x260f4e, CODE_FOR_vec_cmpuv8hiqi },
  { 0x260f4f, CODE_FOR_vec_cmpuv4siqi },
  { 0x260f50, CODE_FOR_vec_cmpuv2diqi },
  { 0x260f54, CODE_FOR_vec_cmpuv8siqi },
  { 0x260f55, CODE_FOR_vec_cmpuv4diqi },
  { 0x260f5a, CODE_FOR_vec_cmpuv8diqi },
  { 0x26104d, CODE_FOR_vec_cmpuv16qihi },
  { 0x261053, CODE_FOR_vec_cmpuv16hihi },
  { 0x261059, CODE_FOR_vec_cmpuv16sihi },
  { 0x261152, CODE_FOR_vec_cmpuv32qisi },
  { 0x261158, CODE_FOR_vec_cmpuv32hisi },
  { 0x261257, CODE_FOR_vec_cmpuv64qidi },
  { 0x264242, CODE_FOR_vec_cmpuv2qiv2qi },
  { 0x264343, CODE_FOR_vec_cmpuv4qiv4qi },
  { 0x264444, CODE_FOR_vec_cmpuv2hiv2hi },
  { 0x264646, CODE_FOR_vec_cmpuv8qiv8qi },
  { 0x264747, CODE_FOR_vec_cmpuv4hiv4hi },
  { 0x264848, CODE_FOR_vec_cmpuv2siv2si },
  { 0x264d4d, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x264e4e, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x264f4f, CODE_FOR_vec_cmpuv4siv4si },
  { 0x265050, CODE_FOR_vec_cmpuv2div2di },
  { 0x265252, CODE_FOR_vec_cmpuv32qiv32qi },
  { 0x265353, CODE_FOR_vec_cmpuv16hiv16hi },
  { 0x265454, CODE_FOR_vec_cmpuv8siv8si },
  { 0x265555, CODE_FOR_vec_cmpuv4div4di },
  { 0x275050, CODE_FOR_vec_cmpeqv2div2di },
  { 0x275151, CODE_FOR_vec_cmpeqv1tiv1ti },
  { 0x280f4e, CODE_FOR_maskloadv8hiqi },
  { 0x280f4f, CODE_FOR_maskloadv4siqi },
  { 0x280f50, CODE_FOR_maskloadv2diqi },
  { 0x280f54, CODE_FOR_maskloadv8siqi },
  { 0x280f55, CODE_FOR_maskloadv4diqi },
  { 0x280f5a, CODE_FOR_maskloadv8diqi },
  { 0x280f66, CODE_FOR_maskloadv8hfqi },
  { 0x280f67, CODE_FOR_maskloadv4sfqi },
  { 0x280f68, CODE_FOR_maskloadv2dfqi },
  { 0x280f6a, CODE_FOR_maskloadv8sfqi },
  { 0x280f6b, CODE_FOR_maskloadv4dfqi },
  { 0x280f6f, CODE_FOR_maskloadv8dfqi },
  { 0x28104d, CODE_FOR_maskloadv16qihi },
  { 0x281053, CODE_FOR_maskloadv16hihi },
  { 0x281059, CODE_FOR_maskloadv16sihi },
  { 0x281069, CODE_FOR_maskloadv16hfhi },
  { 0x28106e, CODE_FOR_maskloadv16sfhi },
  { 0x281152, CODE_FOR_maskloadv32qisi },
  { 0x281158, CODE_FOR_maskloadv32hisi },
  { 0x28116d, CODE_FOR_maskloadv32hfsi },
  { 0x281257, CODE_FOR_maskloadv64qidi },
  { 0x284f4f, CODE_FOR_maskloadv4siv4si },
  { 0x284f67, CODE_FOR_maskloadv4sfv4si },
  { 0x285050, CODE_FOR_maskloadv2div2di },
  { 0x285068, CODE_FOR_maskloadv2dfv2di },
  { 0x285454, CODE_FOR_maskloadv8siv8si },
  { 0x28546a, CODE_FOR_maskloadv8sfv8si },
  { 0x285555, CODE_FOR_maskloadv4div4di },
  { 0x28556b, CODE_FOR_maskloadv4dfv4di },
  { 0x290f4e, CODE_FOR_maskstorev8hiqi },
  { 0x290f4f, CODE_FOR_maskstorev4siqi },
  { 0x290f50, CODE_FOR_maskstorev2diqi },
  { 0x290f54, CODE_FOR_maskstorev8siqi },
  { 0x290f55, CODE_FOR_maskstorev4diqi },
  { 0x290f5a, CODE_FOR_maskstorev8diqi },
  { 0x290f66, CODE_FOR_maskstorev8hfqi },
  { 0x290f67, CODE_FOR_maskstorev4sfqi },
  { 0x290f68, CODE_FOR_maskstorev2dfqi },
  { 0x290f6a, CODE_FOR_maskstorev8sfqi },
  { 0x290f6b, CODE_FOR_maskstorev4dfqi },
  { 0x290f6f, CODE_FOR_maskstorev8dfqi },
  { 0x29104d, CODE_FOR_maskstorev16qihi },
  { 0x291053, CODE_FOR_maskstorev16hihi },
  { 0x291059, CODE_FOR_maskstorev16sihi },
  { 0x291069, CODE_FOR_maskstorev16hfhi },
  { 0x29106e, CODE_FOR_maskstorev16sfhi },
  { 0x291152, CODE_FOR_maskstorev32qisi },
  { 0x291158, CODE_FOR_maskstorev32hisi },
  { 0x29116d, CODE_FOR_maskstorev32hfsi },
  { 0x291257, CODE_FOR_maskstorev64qidi },
  { 0x294f4f, CODE_FOR_maskstorev4siv4si },
  { 0x294f67, CODE_FOR_maskstorev4sfv4si },
  { 0x295050, CODE_FOR_maskstorev2div2di },
  { 0x295068, CODE_FOR_maskstorev2dfv2di },
  { 0x295454, CODE_FOR_maskstorev8siv8si },
  { 0x29546a, CODE_FOR_maskstorev8sfv8si },
  { 0x295555, CODE_FOR_maskstorev4div4di },
  { 0x29556b, CODE_FOR_maskstorev4dfv4di },
  { 0x2e0f43, CODE_FOR_vec_extractv4qiqi },
  { 0x2e0f46, CODE_FOR_vec_extractv8qiqi },
  { 0x2e0f4d, CODE_FOR_vec_extractv16qiqi },
  { 0x2e0f52, CODE_FOR_vec_extractv32qiqi },
  { 0x2e0f57, CODE_FOR_vec_extractv64qiqi },
  { 0x2e1044, CODE_FOR_vec_extractv2hihi },
  { 0x2e1047, CODE_FOR_vec_extractv4hihi },
  { 0x2e104e, CODE_FOR_vec_extractv8hihi },
  { 0x2e1053, CODE_FOR_vec_extractv16hihi },
  { 0x2e1058, CODE_FOR_vec_extractv32hihi },
  { 0x2e1148, CODE_FOR_vec_extractv2sisi },
  { 0x2e114f, CODE_FOR_vec_extractv4sisi },
  { 0x2e1154, CODE_FOR_vec_extractv8sisi },
  { 0x2e1159, CODE_FOR_vec_extractv16sisi },
  { 0x2e1250, CODE_FOR_vec_extractv2didi },
  { 0x2e1255, CODE_FOR_vec_extractv4didi },
  { 0x2e125a, CODE_FOR_vec_extractv8didi },
  { 0x2e1356, CODE_FOR_vec_extractv2titi },
  { 0x2e135b, CODE_FOR_vec_extractv4titi },
  { 0x2e2b66, CODE_FOR_vec_extractv8hfhf },
  { 0x2e2b69, CODE_FOR_vec_extractv16hfhf },
  { 0x2e2b6d, CODE_FOR_vec_extractv32hfhf },
  { 0x2e2c64, CODE_FOR_vec_extractv2sfsf },
  { 0x2e2c67, CODE_FOR_vec_extractv4sfsf },
  { 0x2e2c6a, CODE_FOR_vec_extractv8sfsf },
  { 0x2e2c6e, CODE_FOR_vec_extractv16sfsf },
  { 0x2e2d68, CODE_FOR_vec_extractv2dfdf },
  { 0x2e2d6b, CODE_FOR_vec_extractv4dfdf },
  { 0x2e2d6f, CODE_FOR_vec_extractv8dfdf },
  { 0x2e4d52, CODE_FOR_vec_extractv32qiv16qi },
  { 0x2e4e53, CODE_FOR_vec_extractv16hiv8hi },
  { 0x2e4f54, CODE_FOR_vec_extractv8siv4si },
  { 0x2e5055, CODE_FOR_vec_extractv4div2di },
  { 0x2e5257, CODE_FOR_vec_extractv64qiv32qi },
  { 0x2e5358, CODE_FOR_vec_extractv32hiv16hi },
  { 0x2e5459, CODE_FOR_vec_extractv16siv8si },
  { 0x2e555a, CODE_FOR_vec_extractv8div4di },
  { 0x2e6669, CODE_FOR_vec_extractv16hfv8hf },
  { 0x2e676a, CODE_FOR_vec_extractv8sfv4sf },
  { 0x2e686b, CODE_FOR_vec_extractv4dfv2df },
  { 0x2e696d, CODE_FOR_vec_extractv32hfv16hf },
  { 0x2e6a6e, CODE_FOR_vec_extractv16sfv8sf },
  { 0x2e6b6f, CODE_FOR_vec_extractv8dfv4df },
  { 0x2f0f43, CODE_FOR_vec_initv4qiqi },
  { 0x2f0f46, CODE_FOR_vec_initv8qiqi },
  { 0x2f0f4d, CODE_FOR_vec_initv16qiqi },
  { 0x2f0f52, CODE_FOR_vec_initv32qiqi },
  { 0x2f0f57, CODE_FOR_vec_initv64qiqi },
  { 0x2f1044, CODE_FOR_vec_initv2hihi },
  { 0x2f1047, CODE_FOR_vec_initv4hihi },
  { 0x2f104e, CODE_FOR_vec_initv8hihi },
  { 0x2f1053, CODE_FOR_vec_initv16hihi },
  { 0x2f1058, CODE_FOR_vec_initv32hihi },
  { 0x2f1148, CODE_FOR_vec_initv2sisi },
  { 0x2f114f, CODE_FOR_vec_initv4sisi },
  { 0x2f1154, CODE_FOR_vec_initv8sisi },
  { 0x2f1159, CODE_FOR_vec_initv16sisi },
  { 0x2f1250, CODE_FOR_vec_initv2didi },
  { 0x2f1255, CODE_FOR_vec_initv4didi },
  { 0x2f125a, CODE_FOR_vec_initv8didi },
  { 0x2f1356, CODE_FOR_vec_initv2titi },
  { 0x2f135b, CODE_FOR_vec_initv4titi },
  { 0x2f2b66, CODE_FOR_vec_initv8hfhf },
  { 0x2f2b69, CODE_FOR_vec_initv16hfhf },
  { 0x2f2b6d, CODE_FOR_vec_initv32hfhf },
  { 0x2f2c64, CODE_FOR_vec_initv2sfsf },
  { 0x2f2c67, CODE_FOR_vec_initv4sfsf },
  { 0x2f2c6a, CODE_FOR_vec_initv8sfsf },
  { 0x2f2c6e, CODE_FOR_vec_initv16sfsf },
  { 0x2f2d68, CODE_FOR_vec_initv2dfdf },
  { 0x2f2d6b, CODE_FOR_vec_initv4dfdf },
  { 0x2f2d6f, CODE_FOR_vec_initv8dfdf },
  { 0x2f464d, CODE_FOR_vec_initv16qiv8qi },
  { 0x2f474e, CODE_FOR_vec_initv8hiv4hi },
  { 0x2f484f, CODE_FOR_vec_initv4siv2si },
  { 0x2f4d52, CODE_FOR_vec_initv32qiv16qi },
  { 0x2f4e53, CODE_FOR_vec_initv16hiv8hi },
  { 0x2f4f54, CODE_FOR_vec_initv8siv4si },
  { 0x2f5055, CODE_FOR_vec_initv4div2di },
  { 0x2f5257, CODE_FOR_vec_initv64qiv32qi },
  { 0x2f5358, CODE_FOR_vec_initv32hiv16hi },
  { 0x2f5459, CODE_FOR_vec_initv16siv8si },
  { 0x2f555a, CODE_FOR_vec_initv8div4di },
  { 0x2f565b, CODE_FOR_vec_initv4tiv2ti },
  { 0x2f6366, CODE_FOR_vec_initv8hfv4hf },
  { 0x2f6467, CODE_FOR_vec_initv4sfv2sf },
  { 0x2f6669, CODE_FOR_vec_initv16hfv8hf },
  { 0x2f676a, CODE_FOR_vec_initv8sfv4sf },
  { 0x2f686b, CODE_FOR_vec_initv4dfv2df },
  { 0x2f696d, CODE_FOR_vec_initv32hfv16hf },
  { 0x2f6a6e, CODE_FOR_vec_initv16sfv8sf },
  { 0x2f6b6f, CODE_FOR_vec_initv8dfv4df },
  { 0x31000f, CODE_FOR_addqi3 },
  { 0x310010, CODE_FOR_addhi3 },
  { 0x310011, CODE_FOR_addsi3 },
  { 0x310012, CODE_FOR_adddi3 },
  { 0x310013, CODE_FOR_addti3 },
  { 0x31002b, CODE_FOR_addhf3 },
  { 0x31002c, CODE_FOR_addsf3 },
  { 0x31002d, CODE_FOR_adddf3 },
  { 0x31002e, CODE_FOR_addxf3 },
  { 0x310042, CODE_FOR_addv2qi3 },
  { 0x310043, CODE_FOR_addv4qi3 },
  { 0x310044, CODE_FOR_addv2hi3 },
  { 0x310046, CODE_FOR_addv8qi3 },
  { 0x310047, CODE_FOR_addv4hi3 },
  { 0x310048, CODE_FOR_addv2si3 },
  { 0x31004d, CODE_FOR_addv16qi3 },
  { 0x31004e, CODE_FOR_addv8hi3 },
  { 0x31004f, CODE_FOR_addv4si3 },
  { 0x310050, CODE_FOR_addv2di3 },
  { 0x310052, CODE_FOR_addv32qi3 },
  { 0x310053, CODE_FOR_addv16hi3 },
  { 0x310054, CODE_FOR_addv8si3 },
  { 0x310055, CODE_FOR_addv4di3 },
  { 0x310057, CODE_FOR_addv64qi3 },
  { 0x310058, CODE_FOR_addv32hi3 },
  { 0x310059, CODE_FOR_addv16si3 },
  { 0x31005a, CODE_FOR_addv8di3 },
  { 0x310062, CODE_FOR_addv2hf3 },
  { 0x310063, CODE_FOR_addv4hf3 },
  { 0x310064, CODE_FOR_addv2sf3 },
  { 0x310066, CODE_FOR_addv8hf3 },
  { 0x310067, CODE_FOR_addv4sf3 },
  { 0x310068, CODE_FOR_addv2df3 },
  { 0x310069, CODE_FOR_addv16hf3 },
  { 0x31006a, CODE_FOR_addv8sf3 },
  { 0x31006b, CODE_FOR_addv4df3 },
  { 0x31006d, CODE_FOR_addv32hf3 },
  { 0x31006e, CODE_FOR_addv16sf3 },
  { 0x31006f, CODE_FOR_addv8df3 },
  { 0x35000f, CODE_FOR_subqi3 },
  { 0x350010, CODE_FOR_subhi3 },
  { 0x350011, CODE_FOR_subsi3 },
  { 0x350012, CODE_FOR_subdi3 },
  { 0x350013, CODE_FOR_subti3 },
  { 0x35002b, CODE_FOR_subhf3 },
  { 0x35002c, CODE_FOR_subsf3 },
  { 0x35002d, CODE_FOR_subdf3 },
  { 0x35002e, CODE_FOR_subxf3 },
  { 0x350042, CODE_FOR_subv2qi3 },
  { 0x350043, CODE_FOR_subv4qi3 },
  { 0x350044, CODE_FOR_subv2hi3 },
  { 0x350046, CODE_FOR_subv8qi3 },
  { 0x350047, CODE_FOR_subv4hi3 },
  { 0x350048, CODE_FOR_subv2si3 },
  { 0x35004d, CODE_FOR_subv16qi3 },
  { 0x35004e, CODE_FOR_subv8hi3 },
  { 0x35004f, CODE_FOR_subv4si3 },
  { 0x350050, CODE_FOR_subv2di3 },
  { 0x350052, CODE_FOR_subv32qi3 },
  { 0x350053, CODE_FOR_subv16hi3 },
  { 0x350054, CODE_FOR_subv8si3 },
  { 0x350055, CODE_FOR_subv4di3 },
  { 0x350057, CODE_FOR_subv64qi3 },
  { 0x350058, CODE_FOR_subv32hi3 },
  { 0x350059, CODE_FOR_subv16si3 },
  { 0x35005a, CODE_FOR_subv8di3 },
  { 0x350062, CODE_FOR_subv2hf3 },
  { 0x350063, CODE_FOR_subv4hf3 },
  { 0x350064, CODE_FOR_subv2sf3 },
  { 0x350066, CODE_FOR_subv8hf3 },
  { 0x350067, CODE_FOR_subv4sf3 },
  { 0x350068, CODE_FOR_subv2df3 },
  { 0x350069, CODE_FOR_subv16hf3 },
  { 0x35006a, CODE_FOR_subv8sf3 },
  { 0x35006b, CODE_FOR_subv4df3 },
  { 0x35006d, CODE_FOR_subv32hf3 },
  { 0x35006e, CODE_FOR_subv16sf3 },
  { 0x35006f, CODE_FOR_subv8df3 },
  { 0x39000f, CODE_FOR_mulqi3 },
  { 0x390010, CODE_FOR_mulhi3 },
  { 0x390011, CODE_FOR_mulsi3 },
  { 0x390012, CODE_FOR_muldi3 },
  { 0x39002b, CODE_FOR_mulhf3 },
  { 0x39002c, CODE_FOR_mulsf3 },
  { 0x39002d, CODE_FOR_muldf3 },
  { 0x39002e, CODE_FOR_mulxf3 },
  { 0x390044, CODE_FOR_mulv2hi3 },
  { 0x390046, CODE_FOR_mulv8qi3 },
  { 0x390047, CODE_FOR_mulv4hi3 },
  { 0x39004d, CODE_FOR_mulv16qi3 },
  { 0x39004e, CODE_FOR_mulv8hi3 },
  { 0x39004f, CODE_FOR_mulv4si3 },
  { 0x390050, CODE_FOR_mulv2di3 },
  { 0x390052, CODE_FOR_mulv32qi3 },
  { 0x390053, CODE_FOR_mulv16hi3 },
  { 0x390054, CODE_FOR_mulv8si3 },
  { 0x390055, CODE_FOR_mulv4di3 },
  { 0x390057, CODE_FOR_mulv64qi3 },
  { 0x390058, CODE_FOR_mulv32hi3 },
  { 0x390059, CODE_FOR_mulv16si3 },
  { 0x39005a, CODE_FOR_mulv8di3 },
  { 0x390062, CODE_FOR_mulv2hf3 },
  { 0x390063, CODE_FOR_mulv4hf3 },
  { 0x390064, CODE_FOR_mulv2sf3 },
  { 0x390066, CODE_FOR_mulv8hf3 },
  { 0x390067, CODE_FOR_mulv4sf3 },
  { 0x390068, CODE_FOR_mulv2df3 },
  { 0x390069, CODE_FOR_mulv16hf3 },
  { 0x39006a, CODE_FOR_mulv8sf3 },
  { 0x39006b, CODE_FOR_mulv4df3 },
  { 0x39006d, CODE_FOR_mulv32hf3 },
  { 0x39006e, CODE_FOR_mulv16sf3 },
  { 0x39006f, CODE_FOR_mulv8df3 },
  { 0x3d002b, CODE_FOR_divhf3 },
  { 0x3d002c, CODE_FOR_divsf3 },
  { 0x3d002d, CODE_FOR_divdf3 },
  { 0x3d002e, CODE_FOR_divxf3 },
  { 0x3d0062, CODE_FOR_divv2hf3 },
  { 0x3d0063, CODE_FOR_divv4hf3 },
  { 0x3d0064, CODE_FOR_divv2sf3 },
  { 0x3d0066, CODE_FOR_divv8hf3 },
  { 0x3d0067, CODE_FOR_divv4sf3 },
  { 0x3d0068, CODE_FOR_divv2df3 },
  { 0x3d0069, CODE_FOR_divv16hf3 },
  { 0x3d006a, CODE_FOR_divv8sf3 },
  { 0x3d006b, CODE_FOR_divv4df3 },
  { 0x3d006d, CODE_FOR_divv32hf3 },
  { 0x3d006e, CODE_FOR_divv16sf3 },
  { 0x3d006f, CODE_FOR_divv8df3 },
  { 0x42000f, CODE_FOR_divmodqi4 },
  { 0x420010, CODE_FOR_divmodhi4 },
  { 0x420011, CODE_FOR_divmodsi4 },
  { 0x420012, CODE_FOR_divmoddi4 },
  { 0x43000f, CODE_FOR_udivmodqi4 },
  { 0x430010, CODE_FOR_udivmodhi4 },
  { 0x430011, CODE_FOR_udivmodsi4 },
  { 0x430012, CODE_FOR_udivmoddi4 },
  { 0x47000f, CODE_FOR_andqi3 },
  { 0x470010, CODE_FOR_andhi3 },
  { 0x470011, CODE_FOR_andsi3 },
  { 0x470012, CODE_FOR_anddi3 },
  { 0x47002c, CODE_FOR_andsf3 },
  { 0x47002d, CODE_FOR_anddf3 },
  { 0x47002f, CODE_FOR_andtf3 },
  { 0x470042, CODE_FOR_andv2qi3 },
  { 0x470043, CODE_FOR_andv4qi3 },
  { 0x470044, CODE_FOR_andv2hi3 },
  { 0x470046, CODE_FOR_andv8qi3 },
  { 0x470047, CODE_FOR_andv4hi3 },
  { 0x470048, CODE_FOR_andv2si3 },
  { 0x47004d, CODE_FOR_andv16qi3 },
  { 0x47004e, CODE_FOR_andv8hi3 },
  { 0x47004f, CODE_FOR_andv4si3 },
  { 0x470050, CODE_FOR_andv2di3 },
  { 0x470051, CODE_FOR_andv1ti3 },
  { 0x470052, CODE_FOR_andv32qi3 },
  { 0x470053, CODE_FOR_andv16hi3 },
  { 0x470054, CODE_FOR_andv8si3 },
  { 0x470055, CODE_FOR_andv4di3 },
  { 0x470057, CODE_FOR_andv64qi3 },
  { 0x470058, CODE_FOR_andv32hi3 },
  { 0x470059, CODE_FOR_andv16si3 },
  { 0x47005a, CODE_FOR_andv8di3 },
  { 0x470064, CODE_FOR_andv2sf3 },
  { 0x470066, CODE_FOR_andv8hf3 },
  { 0x470067, CODE_FOR_andv4sf3 },
  { 0x470068, CODE_FOR_andv2df3 },
  { 0x470069, CODE_FOR_andv16hf3 },
  { 0x47006a, CODE_FOR_andv8sf3 },
  { 0x47006b, CODE_FOR_andv4df3 },
  { 0x47006d, CODE_FOR_andv32hf3 },
  { 0x47006e, CODE_FOR_andv16sf3 },
  { 0x47006f, CODE_FOR_andv8df3 },
  { 0x48000f, CODE_FOR_iorqi3 },
  { 0x480010, CODE_FOR_iorhi3 },
  { 0x480011, CODE_FOR_iorsi3 },
  { 0x480012, CODE_FOR_iordi3 },
  { 0x48002c, CODE_FOR_iorsf3 },
  { 0x48002d, CODE_FOR_iordf3 },
  { 0x48002f, CODE_FOR_iortf3 },
  { 0x480042, CODE_FOR_iorv2qi3 },
  { 0x480043, CODE_FOR_iorv4qi3 },
  { 0x480044, CODE_FOR_iorv2hi3 },
  { 0x480046, CODE_FOR_iorv8qi3 },
  { 0x480047, CODE_FOR_iorv4hi3 },
  { 0x480048, CODE_FOR_iorv2si3 },
  { 0x48004d, CODE_FOR_iorv16qi3 },
  { 0x48004e, CODE_FOR_iorv8hi3 },
  { 0x48004f, CODE_FOR_iorv4si3 },
  { 0x480050, CODE_FOR_iorv2di3 },
  { 0x480051, CODE_FOR_iorv1ti3 },
  { 0x480052, CODE_FOR_iorv32qi3 },
  { 0x480053, CODE_FOR_iorv16hi3 },
  { 0x480054, CODE_FOR_iorv8si3 },
  { 0x480055, CODE_FOR_iorv4di3 },
  { 0x480057, CODE_FOR_iorv64qi3 },
  { 0x480058, CODE_FOR_iorv32hi3 },
  { 0x480059, CODE_FOR_iorv16si3 },
  { 0x48005a, CODE_FOR_iorv8di3 },
  { 0x480064, CODE_FOR_iorv2sf3 },
  { 0x480066, CODE_FOR_iorv8hf3 },
  { 0x480067, CODE_FOR_iorv4sf3 },
  { 0x480068, CODE_FOR_iorv2df3 },
  { 0x480069, CODE_FOR_iorv16hf3 },
  { 0x48006a, CODE_FOR_iorv8sf3 },
  { 0x48006b, CODE_FOR_iorv4df3 },
  { 0x48006d, CODE_FOR_iorv32hf3 },
  { 0x48006e, CODE_FOR_iorv16sf3 },
  { 0x48006f, CODE_FOR_iorv8df3 },
  { 0x49000f, CODE_FOR_xorqi3 },
  { 0x490010, CODE_FOR_xorhi3 },
  { 0x490011, CODE_FOR_xorsi3 },
  { 0x490012, CODE_FOR_xordi3 },
  { 0x49002c, CODE_FOR_xorsf3 },
  { 0x49002d, CODE_FOR_xordf3 },
  { 0x49002f, CODE_FOR_xortf3 },
  { 0x490042, CODE_FOR_xorv2qi3 },
  { 0x490043, CODE_FOR_xorv4qi3 },
  { 0x490044, CODE_FOR_xorv2hi3 },
  { 0x490046, CODE_FOR_xorv8qi3 },
  { 0x490047, CODE_FOR_xorv4hi3 },
  { 0x490048, CODE_FOR_xorv2si3 },
  { 0x49004d, CODE_FOR_xorv16qi3 },
  { 0x49004e, CODE_FOR_xorv8hi3 },
  { 0x49004f, CODE_FOR_xorv4si3 },
  { 0x490050, CODE_FOR_xorv2di3 },
  { 0x490051, CODE_FOR_xorv1ti3 },
  { 0x490052, CODE_FOR_xorv32qi3 },
  { 0x490053, CODE_FOR_xorv16hi3 },
  { 0x490054, CODE_FOR_xorv8si3 },
  { 0x490055, CODE_FOR_xorv4di3 },
  { 0x490057, CODE_FOR_xorv64qi3 },
  { 0x490058, CODE_FOR_xorv32hi3 },
  { 0x490059, CODE_FOR_xorv16si3 },
  { 0x49005a, CODE_FOR_xorv8di3 },
  { 0x490064, CODE_FOR_xorv2sf3 },
  { 0x490066, CODE_FOR_xorv8hf3 },
  { 0x490067, CODE_FOR_xorv4sf3 },
  { 0x490068, CODE_FOR_xorv2df3 },
  { 0x490069, CODE_FOR_xorv16hf3 },
  { 0x49006a, CODE_FOR_xorv8sf3 },
  { 0x49006b, CODE_FOR_xorv4df3 },
  { 0x49006d, CODE_FOR_xorv32hf3 },
  { 0x49006e, CODE_FOR_xorv16sf3 },
  { 0x49006f, CODE_FOR_xorv8df3 },
  { 0x4a000f, CODE_FOR_ashlqi3 },
  { 0x4a0010, CODE_FOR_ashlhi3 },
  { 0x4a0011, CODE_FOR_ashlsi3 },
  { 0x4a0012, CODE_FOR_ashldi3 },
  { 0x4a0013, CODE_FOR_ashlti3 },
  { 0x4a0042, CODE_FOR_ashlv2qi3 },
  { 0x4a0044, CODE_FOR_ashlv2hi3 },
  { 0x4a0047, CODE_FOR_ashlv4hi3 },
  { 0x4a0048, CODE_FOR_ashlv2si3 },
  { 0x4a004d, CODE_FOR_ashlv16qi3 },
  { 0x4a004e, CODE_FOR_ashlv8hi3 },
  { 0x4a004f, CODE_FOR_ashlv4si3 },
  { 0x4a0050, CODE_FOR_ashlv2di3 },
  { 0x4a0051, CODE_FOR_ashlv1ti3 },
  { 0x4a0052, CODE_FOR_ashlv32qi3 },
  { 0x4a0053, CODE_FOR_ashlv16hi3 },
  { 0x4a0054, CODE_FOR_ashlv8si3 },
  { 0x4a0055, CODE_FOR_ashlv4di3 },
  { 0x4a0057, CODE_FOR_ashlv64qi3 },
  { 0x4a0058, CODE_FOR_ashlv32hi3 },
  { 0x4a0059, CODE_FOR_ashlv16si3 },
  { 0x4a005a, CODE_FOR_ashlv8di3 },
  { 0x4d000f, CODE_FOR_ashrqi3 },
  { 0x4d0010, CODE_FOR_ashrhi3 },
  { 0x4d0011, CODE_FOR_ashrsi3 },
  { 0x4d0012, CODE_FOR_ashrdi3 },
  { 0x4d0013, CODE_FOR_ashrti3 },
  { 0x4d0042, CODE_FOR_ashrv2qi3 },
  { 0x4d0044, CODE_FOR_ashrv2hi3 },
  { 0x4d0047, CODE_FOR_ashrv4hi3 },
  { 0x4d0048, CODE_FOR_ashrv2si3 },
  { 0x4d004d, CODE_FOR_ashrv16qi3 },
  { 0x4d004e, CODE_FOR_ashrv8hi3 },
  { 0x4d004f, CODE_FOR_ashrv4si3 },
  { 0x4d0050, CODE_FOR_ashrv2di3 },
  { 0x4d0051, CODE_FOR_ashrv1ti3 },
  { 0x4d0052, CODE_FOR_ashrv32qi3 },
  { 0x4d0053, CODE_FOR_ashrv16hi3 },
  { 0x4d0054, CODE_FOR_ashrv8si3 },
  { 0x4d0055, CODE_FOR_ashrv4di3 },
  { 0x4d0057, CODE_FOR_ashrv64qi3 },
  { 0x4d0058, CODE_FOR_ashrv32hi3 },
  { 0x4d0059, CODE_FOR_ashrv16si3 },
  { 0x4d005a, CODE_FOR_ashrv8di3 },
  { 0x4e000f, CODE_FOR_lshrqi3 },
  { 0x4e0010, CODE_FOR_lshrhi3 },
  { 0x4e0011, CODE_FOR_lshrsi3 },
  { 0x4e0012, CODE_FOR_lshrdi3 },
  { 0x4e0013, CODE_FOR_lshrti3 },
  { 0x4e0042, CODE_FOR_lshrv2qi3 },
  { 0x4e0044, CODE_FOR_lshrv2hi3 },
  { 0x4e0047, CODE_FOR_lshrv4hi3 },
  { 0x4e0048, CODE_FOR_lshrv2si3 },
  { 0x4e004d, CODE_FOR_lshrv16qi3 },
  { 0x4e004e, CODE_FOR_lshrv8hi3 },
  { 0x4e004f, CODE_FOR_lshrv4si3 },
  { 0x4e0050, CODE_FOR_lshrv2di3 },
  { 0x4e0051, CODE_FOR_lshrv1ti3 },
  { 0x4e0052, CODE_FOR_lshrv32qi3 },
  { 0x4e0053, CODE_FOR_lshrv16hi3 },
  { 0x4e0054, CODE_FOR_lshrv8si3 },
  { 0x4e0055, CODE_FOR_lshrv4di3 },
  { 0x4e0057, CODE_FOR_lshrv64qi3 },
  { 0x4e0058, CODE_FOR_lshrv32hi3 },
  { 0x4e0059, CODE_FOR_lshrv16si3 },
  { 0x4e005a, CODE_FOR_lshrv8di3 },
  { 0x4f000f, CODE_FOR_rotlqi3 },
  { 0x4f0010, CODE_FOR_rotlhi3 },
  { 0x4f0011, CODE_FOR_rotlsi3 },
  { 0x4f0012, CODE_FOR_rotldi3 },
  { 0x4f0013, CODE_FOR_rotlti3 },
  { 0x4f004d, CODE_FOR_rotlv16qi3 },
  { 0x4f004e, CODE_FOR_rotlv8hi3 },
  { 0x4f004f, CODE_FOR_rotlv4si3 },
  { 0x4f0050, CODE_FOR_rotlv2di3 },
  { 0x4f0051, CODE_FOR_rotlv1ti3 },
  { 0x50000f, CODE_FOR_rotrqi3 },
  { 0x500010, CODE_FOR_rotrhi3 },
  { 0x500011, CODE_FOR_rotrsi3 },
  { 0x500012, CODE_FOR_rotrdi3 },
  { 0x500013, CODE_FOR_rotrti3 },
  { 0x50004d, CODE_FOR_rotrv16qi3 },
  { 0x50004e, CODE_FOR_rotrv8hi3 },
  { 0x50004f, CODE_FOR_rotrv4si3 },
  { 0x500050, CODE_FOR_rotrv2di3 },
  { 0x500051, CODE_FOR_rotrv1ti3 },
  { 0x510046, CODE_FOR_vashlv8qi3 },
  { 0x51004d, CODE_FOR_vashlv16qi3 },
  { 0x51004e, CODE_FOR_vashlv8hi3 },
  { 0x51004f, CODE_FOR_vashlv4si3 },
  { 0x510050, CODE_FOR_vashlv2di3 },
  { 0x510052, CODE_FOR_vashlv32qi3 },
  { 0x510053, CODE_FOR_vashlv16hi3 },
  { 0x510054, CODE_FOR_vashlv8si3 },
  { 0x510055, CODE_FOR_vashlv4di3 },
  { 0x510057, CODE_FOR_vashlv64qi3 },
  { 0x510058, CODE_FOR_vashlv32hi3 },
  { 0x510059, CODE_FOR_vashlv16si3 },
  { 0x51005a, CODE_FOR_vashlv8di3 },
  { 0x520046, CODE_FOR_vashrv8qi3 },
  { 0x52004d, CODE_FOR_vashrv16qi3 },
  { 0x52004e, CODE_FOR_vashrv8hi3 },
  { 0x52004f, CODE_FOR_vashrv4si3 },
  { 0x520050, CODE_FOR_vashrv2di3 },
  { 0x520052, CODE_FOR_vashrv32qi3 },
  { 0x520053, CODE_FOR_vashrv16hi3 },
  { 0x520054, CODE_FOR_vashrv8si3 },
  { 0x520055, CODE_FOR_vashrv4di3 },
  { 0x520057, CODE_FOR_vashrv64qi3 },
  { 0x520058, CODE_FOR_vashrv32hi3 },
  { 0x520059, CODE_FOR_vashrv16si3 },
  { 0x52005a, CODE_FOR_vashrv8di3 },
  { 0x530046, CODE_FOR_vlshrv8qi3 },
  { 0x53004d, CODE_FOR_vlshrv16qi3 },
  { 0x53004e, CODE_FOR_vlshrv8hi3 },
  { 0x53004f, CODE_FOR_vlshrv4si3 },
  { 0x530050, CODE_FOR_vlshrv2di3 },
  { 0x530052, CODE_FOR_vlshrv32qi3 },
  { 0x530053, CODE_FOR_vlshrv16hi3 },
  { 0x530054, CODE_FOR_vlshrv8si3 },
  { 0x530055, CODE_FOR_vlshrv4di3 },
  { 0x530057, CODE_FOR_vlshrv64qi3 },
  { 0x530058, CODE_FOR_vlshrv32hi3 },
  { 0x530059, CODE_FOR_vlshrv16si3 },
  { 0x53005a, CODE_FOR_vlshrv8di3 },
  { 0x54004d, CODE_FOR_vrotlv16qi3 },
  { 0x54004e, CODE_FOR_vrotlv8hi3 },
  { 0x54004f, CODE_FOR_vrotlv4si3 },
  { 0x540050, CODE_FOR_vrotlv2di3 },
  { 0x55004d, CODE_FOR_vrotrv16qi3 },
  { 0x55004e, CODE_FOR_vrotrv8hi3 },
  { 0x55004f, CODE_FOR_vrotrv4si3 },
  { 0x550050, CODE_FOR_vrotrv2di3 },
  { 0x56000f, CODE_FOR_sminqi3 },
  { 0x560010, CODE_FOR_sminhi3 },
  { 0x560011, CODE_FOR_sminsi3 },
  { 0x560012, CODE_FOR_smindi3 },
  { 0x560013, CODE_FOR_sminti3 },
  { 0x56002b, CODE_FOR_sminhf3 },
  { 0x56002c, CODE_FOR_sminsf3 },
  { 0x56002d, CODE_FOR_smindf3 },
  { 0x560042, CODE_FOR_sminv2qi3 },
  { 0x560043, CODE_FOR_sminv4qi3 },
  { 0x560044, CODE_FOR_sminv2hi3 },
  { 0x560046, CODE_FOR_sminv8qi3 },
  { 0x560047, CODE_FOR_sminv4hi3 },
  { 0x560048, CODE_FOR_sminv2si3 },
  { 0x56004d, CODE_FOR_sminv16qi3 },
  { 0x56004e, CODE_FOR_sminv8hi3 },
  { 0x56004f, CODE_FOR_sminv4si3 },
  { 0x560050, CODE_FOR_sminv2di3 },
  { 0x560052, CODE_FOR_sminv32qi3 },
  { 0x560053, CODE_FOR_sminv16hi3 },
  { 0x560054, CODE_FOR_sminv8si3 },
  { 0x560055, CODE_FOR_sminv4di3 },
  { 0x560057, CODE_FOR_sminv64qi3 },
  { 0x560058, CODE_FOR_sminv32hi3 },
  { 0x560059, CODE_FOR_sminv16si3 },
  { 0x56005a, CODE_FOR_sminv8di3 },
  { 0x560064, CODE_FOR_sminv2sf3 },
  { 0x560066, CODE_FOR_sminv8hf3 },
  { 0x560067, CODE_FOR_sminv4sf3 },
  { 0x560068, CODE_FOR_sminv2df3 },
  { 0x560069, CODE_FOR_sminv16hf3 },
  { 0x56006a, CODE_FOR_sminv8sf3 },
  { 0x56006b, CODE_FOR_sminv4df3 },
  { 0x56006d, CODE_FOR_sminv32hf3 },
  { 0x56006e, CODE_FOR_sminv16sf3 },
  { 0x56006f, CODE_FOR_sminv8df3 },
  { 0x57000f, CODE_FOR_smaxqi3 },
  { 0x570010, CODE_FOR_smaxhi3 },
  { 0x570011, CODE_FOR_smaxsi3 },
  { 0x570012, CODE_FOR_smaxdi3 },
  { 0x570013, CODE_FOR_smaxti3 },
  { 0x57002b, CODE_FOR_smaxhf3 },
  { 0x57002c, CODE_FOR_smaxsf3 },
  { 0x57002d, CODE_FOR_smaxdf3 },
  { 0x570042, CODE_FOR_smaxv2qi3 },
  { 0x570043, CODE_FOR_smaxv4qi3 },
  { 0x570044, CODE_FOR_smaxv2hi3 },
  { 0x570046, CODE_FOR_smaxv8qi3 },
  { 0x570047, CODE_FOR_smaxv4hi3 },
  { 0x570048, CODE_FOR_smaxv2si3 },
  { 0x57004d, CODE_FOR_smaxv16qi3 },
  { 0x57004e, CODE_FOR_smaxv8hi3 },
  { 0x57004f, CODE_FOR_smaxv4si3 },
  { 0x570050, CODE_FOR_smaxv2di3 },
  { 0x570052, CODE_FOR_smaxv32qi3 },
  { 0x570053, CODE_FOR_smaxv16hi3 },
  { 0x570054, CODE_FOR_smaxv8si3 },
  { 0x570055, CODE_FOR_smaxv4di3 },
  { 0x570057, CODE_FOR_smaxv64qi3 },
  { 0x570058, CODE_FOR_smaxv32hi3 },
  { 0x570059, CODE_FOR_smaxv16si3 },
  { 0x57005a, CODE_FOR_smaxv8di3 },
  { 0x570064, CODE_FOR_smaxv2sf3 },
  { 0x570066, CODE_FOR_smaxv8hf3 },
  { 0x570067, CODE_FOR_smaxv4sf3 },
  { 0x570068, CODE_FOR_smaxv2df3 },
  { 0x570069, CODE_FOR_smaxv16hf3 },
  { 0x57006a, CODE_FOR_smaxv8sf3 },
  { 0x57006b, CODE_FOR_smaxv4df3 },
  { 0x57006d, CODE_FOR_smaxv32hf3 },
  { 0x57006e, CODE_FOR_smaxv16sf3 },
  { 0x57006f, CODE_FOR_smaxv8df3 },
  { 0x58000f, CODE_FOR_uminqi3 },
  { 0x580010, CODE_FOR_uminhi3 },
  { 0x580011, CODE_FOR_uminsi3 },
  { 0x580012, CODE_FOR_umindi3 },
  { 0x580013, CODE_FOR_uminti3 },
  { 0x580042, CODE_FOR_uminv2qi3 },
  { 0x580043, CODE_FOR_uminv4qi3 },
  { 0x580044, CODE_FOR_uminv2hi3 },
  { 0x580046, CODE_FOR_uminv8qi3 },
  { 0x580047, CODE_FOR_uminv4hi3 },
  { 0x580048, CODE_FOR_uminv2si3 },
  { 0x58004d, CODE_FOR_uminv16qi3 },
  { 0x58004e, CODE_FOR_uminv8hi3 },
  { 0x58004f, CODE_FOR_uminv4si3 },
  { 0x580050, CODE_FOR_uminv2di3 },
  { 0x580052, CODE_FOR_uminv32qi3 },
  { 0x580053, CODE_FOR_uminv16hi3 },
  { 0x580054, CODE_FOR_uminv8si3 },
  { 0x580055, CODE_FOR_uminv4di3 },
  { 0x580057, CODE_FOR_uminv64qi3 },
  { 0x580058, CODE_FOR_uminv32hi3 },
  { 0x580059, CODE_FOR_uminv16si3 },
  { 0x58005a, CODE_FOR_uminv8di3 },
  { 0x59000f, CODE_FOR_umaxqi3 },
  { 0x590010, CODE_FOR_umaxhi3 },
  { 0x590011, CODE_FOR_umaxsi3 },
  { 0x590012, CODE_FOR_umaxdi3 },
  { 0x590013, CODE_FOR_umaxti3 },
  { 0x590042, CODE_FOR_umaxv2qi3 },
  { 0x590043, CODE_FOR_umaxv4qi3 },
  { 0x590044, CODE_FOR_umaxv2hi3 },
  { 0x590046, CODE_FOR_umaxv8qi3 },
  { 0x590047, CODE_FOR_umaxv4hi3 },
  { 0x590048, CODE_FOR_umaxv2si3 },
  { 0x59004d, CODE_FOR_umaxv16qi3 },
  { 0x59004e, CODE_FOR_umaxv8hi3 },
  { 0x59004f, CODE_FOR_umaxv4si3 },
  { 0x590050, CODE_FOR_umaxv2di3 },
  { 0x590052, CODE_FOR_umaxv32qi3 },
  { 0x590053, CODE_FOR_umaxv16hi3 },
  { 0x590054, CODE_FOR_umaxv8si3 },
  { 0x590055, CODE_FOR_umaxv4di3 },
  { 0x590057, CODE_FOR_umaxv64qi3 },
  { 0x590058, CODE_FOR_umaxv32hi3 },
  { 0x590059, CODE_FOR_umaxv16si3 },
  { 0x59005a, CODE_FOR_umaxv8di3 },
  { 0x5a000f, CODE_FOR_negqi2 },
  { 0x5a0010, CODE_FOR_neghi2 },
  { 0x5a0011, CODE_FOR_negsi2 },
  { 0x5a0012, CODE_FOR_negdi2 },
  { 0x5a0013, CODE_FOR_negti2 },
  { 0x5a002b, CODE_FOR_neghf2 },
  { 0x5a002c, CODE_FOR_negsf2 },
  { 0x5a002d, CODE_FOR_negdf2 },
  { 0x5a002e, CODE_FOR_negxf2 },
  { 0x5a002f, CODE_FOR_negtf2 },
  { 0x5a0042, CODE_FOR_negv2qi2 },
  { 0x5a0043, CODE_FOR_negv4qi2 },
  { 0x5a0044, CODE_FOR_negv2hi2 },
  { 0x5a0046, CODE_FOR_negv8qi2 },
  { 0x5a0047, CODE_FOR_negv4hi2 },
  { 0x5a0048, CODE_FOR_negv2si2 },
  { 0x5a004d, CODE_FOR_negv16qi2 },
  { 0x5a004e, CODE_FOR_negv8hi2 },
  { 0x5a004f, CODE_FOR_negv4si2 },
  { 0x5a0050, CODE_FOR_negv2di2 },
  { 0x5a0052, CODE_FOR_negv32qi2 },
  { 0x5a0053, CODE_FOR_negv16hi2 },
  { 0x5a0054, CODE_FOR_negv8si2 },
  { 0x5a0055, CODE_FOR_negv4di2 },
  { 0x5a0057, CODE_FOR_negv64qi2 },
  { 0x5a0058, CODE_FOR_negv32hi2 },
  { 0x5a0059, CODE_FOR_negv16si2 },
  { 0x5a005a, CODE_FOR_negv8di2 },
  { 0x5a0064, CODE_FOR_negv2sf2 },
  { 0x5a0066, CODE_FOR_negv8hf2 },
  { 0x5a0067, CODE_FOR_negv4sf2 },
  { 0x5a0068, CODE_FOR_negv2df2 },
  { 0x5a0069, CODE_FOR_negv16hf2 },
  { 0x5a006a, CODE_FOR_negv8sf2 },
  { 0x5a006b, CODE_FOR_negv4df2 },
  { 0x5a006d, CODE_FOR_negv32hf2 },
  { 0x5a006e, CODE_FOR_negv16sf2 },
  { 0x5a006f, CODE_FOR_negv8df2 },
  { 0x5e000f, CODE_FOR_absqi2 },
  { 0x5e0010, CODE_FOR_abshi2 },
  { 0x5e0011, CODE_FOR_abssi2 },
  { 0x5e0012, CODE_FOR_absdi2 },
  { 0x5e0013, CODE_FOR_absti2 },
  { 0x5e002b, CODE_FOR_abshf2 },
  { 0x5e002c, CODE_FOR_abssf2 },
  { 0x5e002d, CODE_FOR_absdf2 },
  { 0x5e002e, CODE_FOR_absxf2 },
  { 0x5e002f, CODE_FOR_abstf2 },
  { 0x5e0042, CODE_FOR_absv2qi2 },
  { 0x5e0043, CODE_FOR_absv4qi2 },
  { 0x5e0044, CODE_FOR_absv2hi2 },
  { 0x5e0046, CODE_FOR_absv8qi2 },
  { 0x5e0047, CODE_FOR_absv4hi2 },
  { 0x5e0048, CODE_FOR_absv2si2 },
  { 0x5e004d, CODE_FOR_absv16qi2 },
  { 0x5e004e, CODE_FOR_absv8hi2 },
  { 0x5e004f, CODE_FOR_absv4si2 },
  { 0x5e0050, CODE_FOR_absv2di2 },
  { 0x5e0052, CODE_FOR_absv32qi2 },
  { 0x5e0053, CODE_FOR_absv16hi2 },
  { 0x5e0054, CODE_FOR_absv8si2 },
  { 0x5e0055, CODE_FOR_absv4di2 },
  { 0x5e0057, CODE_FOR_absv64qi2 },
  { 0x5e0058, CODE_FOR_absv32hi2 },
  { 0x5e0059, CODE_FOR_absv16si2 },
  { 0x5e005a, CODE_FOR_absv8di2 },
  { 0x5e0064, CODE_FOR_absv2sf2 },
  { 0x5e0066, CODE_FOR_absv8hf2 },
  { 0x5e0067, CODE_FOR_absv4sf2 },
  { 0x5e0068, CODE_FOR_absv2df2 },
  { 0x5e0069, CODE_FOR_absv16hf2 },
  { 0x5e006a, CODE_FOR_absv8sf2 },
  { 0x5e006b, CODE_FOR_absv4df2 },
  { 0x5e006d, CODE_FOR_absv32hf2 },
  { 0x5e006e, CODE_FOR_absv16sf2 },
  { 0x5e006f, CODE_FOR_absv8df2 },
  { 0x60000f, CODE_FOR_one_cmplqi2 },
  { 0x600010, CODE_FOR_one_cmplhi2 },
  { 0x600011, CODE_FOR_one_cmplsi2 },
  { 0x600012, CODE_FOR_one_cmpldi2 },
  { 0x600042, CODE_FOR_one_cmplv2qi2 },
  { 0x600043, CODE_FOR_one_cmplv4qi2 },
  { 0x600044, CODE_FOR_one_cmplv2hi2 },
  { 0x600046, CODE_FOR_one_cmplv8qi2 },
  { 0x600047, CODE_FOR_one_cmplv4hi2 },
  { 0x600048, CODE_FOR_one_cmplv2si2 },
  { 0x60004d, CODE_FOR_one_cmplv16qi2 },
  { 0x60004e, CODE_FOR_one_cmplv8hi2 },
  { 0x60004f, CODE_FOR_one_cmplv4si2 },
  { 0x600050, CODE_FOR_one_cmplv2di2 },
  { 0x600051, CODE_FOR_one_cmplv1ti2 },
  { 0x600052, CODE_FOR_one_cmplv32qi2 },
  { 0x600053, CODE_FOR_one_cmplv16hi2 },
  { 0x600054, CODE_FOR_one_cmplv8si2 },
  { 0x600055, CODE_FOR_one_cmplv4di2 },
  { 0x600057, CODE_FOR_one_cmplv64qi2 },
  { 0x600058, CODE_FOR_one_cmplv32hi2 },
  { 0x600059, CODE_FOR_one_cmplv16si2 },
  { 0x60005a, CODE_FOR_one_cmplv8di2 },
  { 0x610010, CODE_FOR_bswaphi2 },
  { 0x610011, CODE_FOR_bswapsi2 },
  { 0x610012, CODE_FOR_bswapdi2 },
  { 0x620011, CODE_FOR_ffssi2 },
  { 0x620012, CODE_FOR_ffsdi2 },
  { 0x630011, CODE_FOR_clzsi2 },
  { 0x630012, CODE_FOR_clzdi2 },
  { 0x63004f, CODE_FOR_clzv4si2 },
  { 0x630050, CODE_FOR_clzv2di2 },
  { 0x630054, CODE_FOR_clzv8si2 },
  { 0x630055, CODE_FOR_clzv4di2 },
  { 0x630059, CODE_FOR_clzv16si2 },
  { 0x63005a, CODE_FOR_clzv8di2 },
  { 0x640011, CODE_FOR_ctzsi2 },
  { 0x640012, CODE_FOR_ctzdi2 },
  { 0x660010, CODE_FOR_popcounthi2 },
  { 0x660011, CODE_FOR_popcountsi2 },
  { 0x660012, CODE_FOR_popcountdi2 },
  { 0x66004d, CODE_FOR_popcountv16qi2 },
  { 0x66004e, CODE_FOR_popcountv8hi2 },
  { 0x66004f, CODE_FOR_popcountv4si2 },
  { 0x660050, CODE_FOR_popcountv2di2 },
  { 0x660052, CODE_FOR_popcountv32qi2 },
  { 0x660053, CODE_FOR_popcountv16hi2 },
  { 0x660054, CODE_FOR_popcountv8si2 },
  { 0x660055, CODE_FOR_popcountv4di2 },
  { 0x660057, CODE_FOR_popcountv64qi2 },
  { 0x660058, CODE_FOR_popcountv32hi2 },
  { 0x660059, CODE_FOR_popcountv16si2 },
  { 0x66005a, CODE_FOR_popcountv8di2 },
  { 0x67000f, CODE_FOR_parityqi2 },
  { 0x670010, CODE_FOR_parityhi2 },
  { 0x670011, CODE_FOR_paritysi2 },
  { 0x670012, CODE_FOR_paritydi2 },
  { 0x72002b, CODE_FOR_sqrthf2 },
  { 0x72002c, CODE_FOR_sqrtsf2 },
  { 0x72002d, CODE_FOR_sqrtdf2 },
  { 0x72002e, CODE_FOR_sqrtxf2 },
  { 0x720064, CODE_FOR_sqrtv2sf2 },
  { 0x720066, CODE_FOR_sqrtv8hf2 },
  { 0x720067, CODE_FOR_sqrtv4sf2 },
  { 0x720068, CODE_FOR_sqrtv2df2 },
  { 0x720069, CODE_FOR_sqrtv16hf2 },
  { 0x72006a, CODE_FOR_sqrtv8sf2 },
  { 0x72006b, CODE_FOR_sqrtv4df2 },
  { 0x72006d, CODE_FOR_sqrtv32hf2 },
  { 0x72006e, CODE_FOR_sqrtv16sf2 },
  { 0x72006f, CODE_FOR_sqrtv8df2 },
  { 0x81000f, CODE_FOR_movqi },
  { 0x810010, CODE_FOR_movhi },
  { 0x810011, CODE_FOR_movsi },
  { 0x810012, CODE_FOR_movdi },
  { 0x810013, CODE_FOR_movti },
  { 0x810014, CODE_FOR_movoi },
  { 0x810015, CODE_FOR_movxi },
  { 0x810016, CODE_FOR_movp2qi },
  { 0x810017, CODE_FOR_movp2hi },
  { 0x81002b, CODE_FOR_movhf },
  { 0x81002c, CODE_FOR_movsf },
  { 0x81002d, CODE_FOR_movdf },
  { 0x81002e, CODE_FOR_movxf },
  { 0x81002f, CODE_FOR_movtf },
  { 0x810038, CODE_FOR_movcdi },
  { 0x810042, CODE_FOR_movv2qi },
  { 0x810043, CODE_FOR_movv4qi },
  { 0x810044, CODE_FOR_movv2hi },
  { 0x810045, CODE_FOR_movv1si },
  { 0x810046, CODE_FOR_movv8qi },
  { 0x810047, CODE_FOR_movv4hi },
  { 0x810048, CODE_FOR_movv2si },
  { 0x810049, CODE_FOR_movv1di },
  { 0x81004d, CODE_FOR_movv16qi },
  { 0x81004e, CODE_FOR_movv8hi },
  { 0x81004f, CODE_FOR_movv4si },
  { 0x810050, CODE_FOR_movv2di },
  { 0x810051, CODE_FOR_movv1ti },
  { 0x810052, CODE_FOR_movv32qi },
  { 0x810053, CODE_FOR_movv16hi },
  { 0x810054, CODE_FOR_movv8si },
  { 0x810055, CODE_FOR_movv4di },
  { 0x810056, CODE_FOR_movv2ti },
  { 0x810057, CODE_FOR_movv64qi },
  { 0x810058, CODE_FOR_movv32hi },
  { 0x810059, CODE_FOR_movv16si },
  { 0x81005a, CODE_FOR_movv8di },
  { 0x81005b, CODE_FOR_movv4ti },
  { 0x810061, CODE_FOR_movv64si },
  { 0x810062, CODE_FOR_movv2hf },
  { 0x810063, CODE_FOR_movv4hf },
  { 0x810064, CODE_FOR_movv2sf },
  { 0x810066, CODE_FOR_movv8hf },
  { 0x810067, CODE_FOR_movv4sf },
  { 0x810068, CODE_FOR_movv2df },
  { 0x810069, CODE_FOR_movv16hf },
  { 0x81006a, CODE_FOR_movv8sf },
  { 0x81006b, CODE_FOR_movv4df },
  { 0x81006d, CODE_FOR_movv32hf },
  { 0x81006e, CODE_FOR_movv16sf },
  { 0x81006f, CODE_FOR_movv8df },
  { 0x810076, CODE_FOR_movv64sf },
  { 0x82000f, CODE_FOR_movstrictqi },
  { 0x820010, CODE_FOR_movstricthi },
  { 0x830042, CODE_FOR_movmisalignv2qi },
  { 0x830043, CODE_FOR_movmisalignv4qi },
  { 0x830044, CODE_FOR_movmisalignv2hi },
  { 0x830045, CODE_FOR_movmisalignv1si },
  { 0x830046, CODE_FOR_movmisalignv8qi },
  { 0x830047, CODE_FOR_movmisalignv4hi },
  { 0x830048, CODE_FOR_movmisalignv2si },
  { 0x830049, CODE_FOR_movmisalignv1di },
  { 0x83004d, CODE_FOR_movmisalignv16qi },
  { 0x83004e, CODE_FOR_movmisalignv8hi },
  { 0x83004f, CODE_FOR_movmisalignv4si },
  { 0x830050, CODE_FOR_movmisalignv2di },
  { 0x830051, CODE_FOR_movmisalignv1ti },
  { 0x830052, CODE_FOR_movmisalignv32qi },
  { 0x830053, CODE_FOR_movmisalignv16hi },
  { 0x830054, CODE_FOR_movmisalignv8si },
  { 0x830055, CODE_FOR_movmisalignv4di },
  { 0x830056, CODE_FOR_movmisalignv2ti },
  { 0x830057, CODE_FOR_movmisalignv64qi },
  { 0x830058, CODE_FOR_movmisalignv32hi },
  { 0x830059, CODE_FOR_movmisalignv16si },
  { 0x83005a, CODE_FOR_movmisalignv8di },
  { 0x83005b, CODE_FOR_movmisalignv4ti },
  { 0x830062, CODE_FOR_movmisalignv2hf },
  { 0x830063, CODE_FOR_movmisalignv4hf },
  { 0x830064, CODE_FOR_movmisalignv2sf },
  { 0x830066, CODE_FOR_movmisalignv8hf },
  { 0x830067, CODE_FOR_movmisalignv4sf },
  { 0x830068, CODE_FOR_movmisalignv2df },
  { 0x830069, CODE_FOR_movmisalignv16hf },
  { 0x83006a, CODE_FOR_movmisalignv8sf },
  { 0x83006b, CODE_FOR_movmisalignv4df },
  { 0x83006d, CODE_FOR_movmisalignv32hf },
  { 0x83006e, CODE_FOR_movmisalignv16sf },
  { 0x83006f, CODE_FOR_movmisalignv8df },
  { 0x840011, CODE_FOR_storentsi },
  { 0x840012, CODE_FOR_storentdi },
  { 0x84002c, CODE_FOR_storentsf },
  { 0x84002d, CODE_FOR_storentdf },
  { 0x840050, CODE_FOR_storentv2di },
  { 0x840055, CODE_FOR_storentv4di },
  { 0x84005a, CODE_FOR_storentv8di },
  { 0x840067, CODE_FOR_storentv4sf },
  { 0x840068, CODE_FOR_storentv2df },
  { 0x84006a, CODE_FOR_storentv8sf },
  { 0x84006b, CODE_FOR_storentv4df },
  { 0x84006e, CODE_FOR_storentv16sf },
  { 0x84006f, CODE_FOR_storentv8df },
  { 0x850010, CODE_FOR_insvhi },
  { 0x850011, CODE_FOR_insvsi },
  { 0x850012, CODE_FOR_insvdi },
  { 0x860010, CODE_FOR_extvhi },
  { 0x860011, CODE_FOR_extvsi },
  { 0x870010, CODE_FOR_extzvhi },
  { 0x870011, CODE_FOR_extzvsi },
  { 0x870012, CODE_FOR_extzvdi },
  { 0x8e0002, CODE_FOR_cbranchcc4 },
  { 0x8e000f, CODE_FOR_cbranchqi4 },
  { 0x8e0010, CODE_FOR_cbranchhi4 },
  { 0x8e0011, CODE_FOR_cbranchsi4 },
  { 0x8e0012, CODE_FOR_cbranchdi4 },
  { 0x8e0013, CODE_FOR_cbranchti4 },
  { 0x8e0014, CODE_FOR_cbranchoi4 },
  { 0x8e002b, CODE_FOR_cbranchhf4 },
  { 0x8e002c, CODE_FOR_cbranchsf4 },
  { 0x8e002d, CODE_FOR_cbranchdf4 },
  { 0x8e002e, CODE_FOR_cbranchxf4 },
  { 0x8e004f, CODE_FOR_cbranchv4si4 },
  { 0x8e0050, CODE_FOR_cbranchv2di4 },
  { 0x8e0054, CODE_FOR_cbranchv8si4 },
  { 0x8e0055, CODE_FOR_cbranchv4di4 },
  { 0x8f000f, CODE_FOR_addqicc },
  { 0x8f0010, CODE_FOR_addhicc },
  { 0x8f0011, CODE_FOR_addsicc },
  { 0x8f0012, CODE_FOR_adddicc },
  { 0x92000f, CODE_FOR_movqicc },
  { 0x920010, CODE_FOR_movhicc },
  { 0x920011, CODE_FOR_movsicc },
  { 0x920012, CODE_FOR_movdicc },
  { 0x92002b, CODE_FOR_movhfcc },
  { 0x92002c, CODE_FOR_movsfcc },
  { 0x92002d, CODE_FOR_movdfcc },
  { 0x92002e, CODE_FOR_movxfcc },
  { 0x93004d, CODE_FOR_cond_addv16qi },
  { 0x93004e, CODE_FOR_cond_addv8hi },
  { 0x93004f, CODE_FOR_cond_addv4si },
  { 0x930050, CODE_FOR_cond_addv2di },
  { 0x930052, CODE_FOR_cond_addv32qi },
  { 0x930053, CODE_FOR_cond_addv16hi },
  { 0x930054, CODE_FOR_cond_addv8si },
  { 0x930055, CODE_FOR_cond_addv4di },
  { 0x930057, CODE_FOR_cond_addv64qi },
  { 0x930058, CODE_FOR_cond_addv32hi },
  { 0x930059, CODE_FOR_cond_addv16si },
  { 0x93005a, CODE_FOR_cond_addv8di },
  { 0x930066, CODE_FOR_cond_addv8hf },
  { 0x930067, CODE_FOR_cond_addv4sf },
  { 0x930068, CODE_FOR_cond_addv2df },
  { 0x930069, CODE_FOR_cond_addv16hf },
  { 0x93006a, CODE_FOR_cond_addv8sf },
  { 0x93006b, CODE_FOR_cond_addv4df },
  { 0x93006d, CODE_FOR_cond_addv32hf },
  { 0x93006e, CODE_FOR_cond_addv16sf },
  { 0x93006f, CODE_FOR_cond_addv8df },
  { 0x94004d, CODE_FOR_cond_subv16qi },
  { 0x94004e, CODE_FOR_cond_subv8hi },
  { 0x94004f, CODE_FOR_cond_subv4si },
  { 0x940050, CODE_FOR_cond_subv2di },
  { 0x940052, CODE_FOR_cond_subv32qi },
  { 0x940053, CODE_FOR_cond_subv16hi },
  { 0x940054, CODE_FOR_cond_subv8si },
  { 0x940055, CODE_FOR_cond_subv4di },
  { 0x940057, CODE_FOR_cond_subv64qi },
  { 0x940058, CODE_FOR_cond_subv32hi },
  { 0x940059, CODE_FOR_cond_subv16si },
  { 0x94005a, CODE_FOR_cond_subv8di },
  { 0x940066, CODE_FOR_cond_subv8hf },
  { 0x940067, CODE_FOR_cond_subv4sf },
  { 0x940068, CODE_FOR_cond_subv2df },
  { 0x940069, CODE_FOR_cond_subv16hf },
  { 0x94006a, CODE_FOR_cond_subv8sf },
  { 0x94006b, CODE_FOR_cond_subv4df },
  { 0x94006d, CODE_FOR_cond_subv32hf },
  { 0x94006e, CODE_FOR_cond_subv16sf },
  { 0x94006f, CODE_FOR_cond_subv8df },
  { 0x95004e, CODE_FOR_cond_mulv8hi },
  { 0x95004f, CODE_FOR_cond_mulv4si },
  { 0x950050, CODE_FOR_cond_mulv2di },
  { 0x950053, CODE_FOR_cond_mulv16hi },
  { 0x950054, CODE_FOR_cond_mulv8si },
  { 0x950055, CODE_FOR_cond_mulv4di },
  { 0x950058, CODE_FOR_cond_mulv32hi },
  { 0x950059, CODE_FOR_cond_mulv16si },
  { 0x95005a, CODE_FOR_cond_mulv8di },
  { 0x950066, CODE_FOR_cond_mulv8hf },
  { 0x950067, CODE_FOR_cond_mulv4sf },
  { 0x950068, CODE_FOR_cond_mulv2df },
  { 0x950069, CODE_FOR_cond_mulv16hf },
  { 0x95006a, CODE_FOR_cond_mulv8sf },
  { 0x95006b, CODE_FOR_cond_mulv4df },
  { 0x95006d, CODE_FOR_cond_mulv32hf },
  { 0x95006e, CODE_FOR_cond_mulv16sf },
  { 0x95006f, CODE_FOR_cond_mulv8df },
  { 0x960066, CODE_FOR_cond_divv8hf },
  { 0x960067, CODE_FOR_cond_divv4sf },
  { 0x960068, CODE_FOR_cond_divv2df },
  { 0x960069, CODE_FOR_cond_divv16hf },
  { 0x96006a, CODE_FOR_cond_divv8sf },
  { 0x96006b, CODE_FOR_cond_divv4df },
  { 0x96006d, CODE_FOR_cond_divv32hf },
  { 0x96006e, CODE_FOR_cond_divv16sf },
  { 0x96006f, CODE_FOR_cond_divv8df },
  { 0x9a004f, CODE_FOR_cond_andv4si },
  { 0x9a0050, CODE_FOR_cond_andv2di },
  { 0x9a0054, CODE_FOR_cond_andv8si },
  { 0x9a0055, CODE_FOR_cond_andv4di },
  { 0x9a0059, CODE_FOR_cond_andv16si },
  { 0x9a005a, CODE_FOR_cond_andv8di },
  { 0x9b004f, CODE_FOR_cond_iorv4si },
  { 0x9b0050, CODE_FOR_cond_iorv2di },
  { 0x9b0054, CODE_FOR_cond_iorv8si },
  { 0x9b0055, CODE_FOR_cond_iorv4di },
  { 0x9b0059, CODE_FOR_cond_iorv16si },
  { 0x9b005a, CODE_FOR_cond_iorv8di },
  { 0x9c004f, CODE_FOR_cond_xorv4si },
  { 0x9c0050, CODE_FOR_cond_xorv2di },
  { 0x9c0054, CODE_FOR_cond_xorv8si },
  { 0x9c0055, CODE_FOR_cond_xorv4di },
  { 0x9c0059, CODE_FOR_cond_xorv16si },
  { 0x9c005a, CODE_FOR_cond_xorv8di },
  { 0x9d004e, CODE_FOR_cond_ashlv8hi },
  { 0x9d004f, CODE_FOR_cond_ashlv4si },
  { 0x9d0050, CODE_FOR_cond_ashlv2di },
  { 0x9d0053, CODE_FOR_cond_ashlv16hi },
  { 0x9d0054, CODE_FOR_cond_ashlv8si },
  { 0x9d0055, CODE_FOR_cond_ashlv4di },
  { 0x9d0058, CODE_FOR_cond_ashlv32hi },
  { 0x9d0059, CODE_FOR_cond_ashlv16si },
  { 0x9d005a, CODE_FOR_cond_ashlv8di },
  { 0x9e004e, CODE_FOR_cond_ashrv8hi },
  { 0x9e004f, CODE_FOR_cond_ashrv4si },
  { 0x9e0050, CODE_FOR_cond_ashrv2di },
  { 0x9e0053, CODE_FOR_cond_ashrv16hi },
  { 0x9e0054, CODE_FOR_cond_ashrv8si },
  { 0x9e0055, CODE_FOR_cond_ashrv4di },
  { 0x9e0058, CODE_FOR_cond_ashrv32hi },
  { 0x9e0059, CODE_FOR_cond_ashrv16si },
  { 0x9e005a, CODE_FOR_cond_ashrv8di },
  { 0x9f004e, CODE_FOR_cond_lshrv8hi },
  { 0x9f004f, CODE_FOR_cond_lshrv4si },
  { 0x9f0050, CODE_FOR_cond_lshrv2di },
  { 0x9f0053, CODE_FOR_cond_lshrv16hi },
  { 0x9f0054, CODE_FOR_cond_lshrv8si },
  { 0x9f0055, CODE_FOR_cond_lshrv4di },
  { 0x9f0058, CODE_FOR_cond_lshrv32hi },
  { 0x9f0059, CODE_FOR_cond_lshrv16si },
  { 0x9f005a, CODE_FOR_cond_lshrv8di },
  { 0xa0004d, CODE_FOR_cond_sminv16qi },
  { 0xa0004e, CODE_FOR_cond_sminv8hi },
  { 0xa0004f, CODE_FOR_cond_sminv4si },
  { 0xa00050, CODE_FOR_cond_sminv2di },
  { 0xa00052, CODE_FOR_cond_sminv32qi },
  { 0xa00053, CODE_FOR_cond_sminv16hi },
  { 0xa00054, CODE_FOR_cond_sminv8si },
  { 0xa00055, CODE_FOR_cond_sminv4di },
  { 0xa00057, CODE_FOR_cond_sminv64qi },
  { 0xa00058, CODE_FOR_cond_sminv32hi },
  { 0xa00059, CODE_FOR_cond_sminv16si },
  { 0xa0005a, CODE_FOR_cond_sminv8di },
  { 0xa00066, CODE_FOR_cond_sminv8hf },
  { 0xa00067, CODE_FOR_cond_sminv4sf },
  { 0xa00068, CODE_FOR_cond_sminv2df },
  { 0xa00069, CODE_FOR_cond_sminv16hf },
  { 0xa0006a, CODE_FOR_cond_sminv8sf },
  { 0xa0006b, CODE_FOR_cond_sminv4df },
  { 0xa0006d, CODE_FOR_cond_sminv32hf },
  { 0xa0006e, CODE_FOR_cond_sminv16sf },
  { 0xa0006f, CODE_FOR_cond_sminv8df },
  { 0xa1004d, CODE_FOR_cond_smaxv16qi },
  { 0xa1004e, CODE_FOR_cond_smaxv8hi },
  { 0xa1004f, CODE_FOR_cond_smaxv4si },
  { 0xa10050, CODE_FOR_cond_smaxv2di },
  { 0xa10052, CODE_FOR_cond_smaxv32qi },
  { 0xa10053, CODE_FOR_cond_smaxv16hi },
  { 0xa10054, CODE_FOR_cond_smaxv8si },
  { 0xa10055, CODE_FOR_cond_smaxv4di },
  { 0xa10057, CODE_FOR_cond_smaxv64qi },
  { 0xa10058, CODE_FOR_cond_smaxv32hi },
  { 0xa10059, CODE_FOR_cond_smaxv16si },
  { 0xa1005a, CODE_FOR_cond_smaxv8di },
  { 0xa10066, CODE_FOR_cond_smaxv8hf },
  { 0xa10067, CODE_FOR_cond_smaxv4sf },
  { 0xa10068, CODE_FOR_cond_smaxv2df },
  { 0xa10069, CODE_FOR_cond_smaxv16hf },
  { 0xa1006a, CODE_FOR_cond_smaxv8sf },
  { 0xa1006b, CODE_FOR_cond_smaxv4df },
  { 0xa1006d, CODE_FOR_cond_smaxv32hf },
  { 0xa1006e, CODE_FOR_cond_smaxv16sf },
  { 0xa1006f, CODE_FOR_cond_smaxv8df },
  { 0xa2004d, CODE_FOR_cond_uminv16qi },
  { 0xa2004e, CODE_FOR_cond_uminv8hi },
  { 0xa2004f, CODE_FOR_cond_uminv4si },
  { 0xa20050, CODE_FOR_cond_uminv2di },
  { 0xa20052, CODE_FOR_cond_uminv32qi },
  { 0xa20053, CODE_FOR_cond_uminv16hi },
  { 0xa20054, CODE_FOR_cond_uminv8si },
  { 0xa20055, CODE_FOR_cond_uminv4di },
  { 0xa20057, CODE_FOR_cond_uminv64qi },
  { 0xa20058, CODE_FOR_cond_uminv32hi },
  { 0xa20059, CODE_FOR_cond_uminv16si },
  { 0xa2005a, CODE_FOR_cond_uminv8di },
  { 0xa3004d, CODE_FOR_cond_umaxv16qi },
  { 0xa3004e, CODE_FOR_cond_umaxv8hi },
  { 0xa3004f, CODE_FOR_cond_umaxv4si },
  { 0xa30050, CODE_FOR_cond_umaxv2di },
  { 0xa30052, CODE_FOR_cond_umaxv32qi },
  { 0xa30053, CODE_FOR_cond_umaxv16hi },
  { 0xa30054, CODE_FOR_cond_umaxv8si },
  { 0xa30055, CODE_FOR_cond_umaxv4di },
  { 0xa30057, CODE_FOR_cond_umaxv64qi },
  { 0xa30058, CODE_FOR_cond_umaxv32hi },
  { 0xa30059, CODE_FOR_cond_umaxv16si },
  { 0xa3005a, CODE_FOR_cond_umaxv8di },
  { 0xa60066, CODE_FOR_cond_fmav8hf },
  { 0xa60067, CODE_FOR_cond_fmav4sf },
  { 0xa60068, CODE_FOR_cond_fmav2df },
  { 0xa60069, CODE_FOR_cond_fmav16hf },
  { 0xa6006a, CODE_FOR_cond_fmav8sf },
  { 0xa6006b, CODE_FOR_cond_fmav4df },
  { 0xa6006d, CODE_FOR_cond_fmav32hf },
  { 0xa6006e, CODE_FOR_cond_fmav16sf },
  { 0xa6006f, CODE_FOR_cond_fmav8df },
  { 0xa70066, CODE_FOR_cond_fmsv8hf },
  { 0xa70067, CODE_FOR_cond_fmsv4sf },
  { 0xa70068, CODE_FOR_cond_fmsv2df },
  { 0xa70069, CODE_FOR_cond_fmsv16hf },
  { 0xa7006a, CODE_FOR_cond_fmsv8sf },
  { 0xa7006b, CODE_FOR_cond_fmsv4df },
  { 0xa7006d, CODE_FOR_cond_fmsv32hf },
  { 0xa7006e, CODE_FOR_cond_fmsv16sf },
  { 0xa7006f, CODE_FOR_cond_fmsv8df },
  { 0xa80066, CODE_FOR_cond_fnmav8hf },
  { 0xa80067, CODE_FOR_cond_fnmav4sf },
  { 0xa80068, CODE_FOR_cond_fnmav2df },
  { 0xa80069, CODE_FOR_cond_fnmav16hf },
  { 0xa8006a, CODE_FOR_cond_fnmav8sf },
  { 0xa8006b, CODE_FOR_cond_fnmav4df },
  { 0xa8006d, CODE_FOR_cond_fnmav32hf },
  { 0xa8006e, CODE_FOR_cond_fnmav16sf },
  { 0xa8006f, CODE_FOR_cond_fnmav8df },
  { 0xa90066, CODE_FOR_cond_fnmsv8hf },
  { 0xa90067, CODE_FOR_cond_fnmsv4sf },
  { 0xa90068, CODE_FOR_cond_fnmsv2df },
  { 0xa90069, CODE_FOR_cond_fnmsv16hf },
  { 0xa9006a, CODE_FOR_cond_fnmsv8sf },
  { 0xa9006b, CODE_FOR_cond_fnmsv4df },
  { 0xa9006d, CODE_FOR_cond_fnmsv32hf },
  { 0xa9006e, CODE_FOR_cond_fnmsv16sf },
  { 0xa9006f, CODE_FOR_cond_fnmsv8df },
  { 0xac0002, CODE_FOR_cstorecc4 },
  { 0xac000f, CODE_FOR_cstoreqi4 },
  { 0xac0010, CODE_FOR_cstorehi4 },
  { 0xac0011, CODE_FOR_cstoresi4 },
  { 0xac0012, CODE_FOR_cstoredi4 },
  { 0xac0013, CODE_FOR_cstoreti4 },
  { 0xac002b, CODE_FOR_cstorehf4 },
  { 0xac002c, CODE_FOR_cstoresf4 },
  { 0xac002d, CODE_FOR_cstoredf4 },
  { 0xac002e, CODE_FOR_cstorexf4 },
  { 0xae000f, CODE_FOR_addvqi4 },
  { 0xae0010, CODE_FOR_addvhi4 },
  { 0xae0011, CODE_FOR_addvsi4 },
  { 0xae0012, CODE_FOR_addvdi4 },
  { 0xae0013, CODE_FOR_addvti4 },
  { 0xaf000f, CODE_FOR_subvqi4 },
  { 0xaf0010, CODE_FOR_subvhi4 },
  { 0xaf0011, CODE_FOR_subvsi4 },
  { 0xaf0012, CODE_FOR_subvdi4 },
  { 0xaf0013, CODE_FOR_subvti4 },
  { 0xb0000f, CODE_FOR_mulvqi4 },
  { 0xb00010, CODE_FOR_mulvhi4 },
  { 0xb00011, CODE_FOR_mulvsi4 },
  { 0xb00012, CODE_FOR_mulvdi4 },
  { 0xb1000f, CODE_FOR_uaddvqi4 },
  { 0xb10010, CODE_FOR_uaddvhi4 },
  { 0xb10011, CODE_FOR_uaddvsi4 },
  { 0xb10012, CODE_FOR_uaddvdi4 },
  { 0xb10013, CODE_FOR_uaddvti4 },
  { 0xb2000f, CODE_FOR_usubvqi4 },
  { 0xb20010, CODE_FOR_usubvhi4 },
  { 0xb20011, CODE_FOR_usubvsi4 },
  { 0xb20012, CODE_FOR_usubvdi4 },
  { 0xb3000f, CODE_FOR_umulvqi4 },
  { 0xb30010, CODE_FOR_umulvhi4 },
  { 0xb30011, CODE_FOR_umulvsi4 },
  { 0xb30012, CODE_FOR_umulvdi4 },
  { 0xb4000f, CODE_FOR_negvqi3 },
  { 0xb40010, CODE_FOR_negvhi3 },
  { 0xb40011, CODE_FOR_negvsi3 },
  { 0xb40012, CODE_FOR_negvdi3 },
  { 0xb6002c, CODE_FOR_spaceshipsf3 },
  { 0xb6002d, CODE_FOR_spaceshipdf3 },
  { 0xb6002e, CODE_FOR_spaceshipxf3 },
  { 0xb70011, CODE_FOR_smulsi3_highpart },
  { 0xb70012, CODE_FOR_smuldi3_highpart },
  { 0xb70044, CODE_FOR_smulv2hi3_highpart },
  { 0xb70047, CODE_FOR_smulv4hi3_highpart },
  { 0xb7004e, CODE_FOR_smulv8hi3_highpart },
  { 0xb70053, CODE_FOR_smulv16hi3_highpart },
  { 0xb70058, CODE_FOR_smulv32hi3_highpart },
  { 0xb80011, CODE_FOR_umulsi3_highpart },
  { 0xb80012, CODE_FOR_umuldi3_highpart },
  { 0xb80044, CODE_FOR_umulv2hi3_highpart },
  { 0xb80047, CODE_FOR_umulv4hi3_highpart },
  { 0xb8004e, CODE_FOR_umulv8hi3_highpart },
  { 0xb80053, CODE_FOR_umulv16hi3_highpart },
  { 0xb80058, CODE_FOR_umulv32hi3_highpart },
  { 0xb90011, CODE_FOR_cmpmemsi },
  { 0xbb0011, CODE_FOR_cmpstrnsi },
  { 0xbc0011, CODE_FOR_cpymemsi },
  { 0xbc0012, CODE_FOR_cpymemdi },
  { 0xbe0011, CODE_FOR_setmemsi },
  { 0xbe0012, CODE_FOR_setmemdi },
  { 0xbf0011, CODE_FOR_strlensi },
  { 0xbf0012, CODE_FOR_strlendi },
  { 0xc1002b, CODE_FOR_fmahf4 },
  { 0xc1002c, CODE_FOR_fmasf4 },
  { 0xc1002d, CODE_FOR_fmadf4 },
  { 0xc10064, CODE_FOR_fmav2sf4 },
  { 0xc10066, CODE_FOR_fmav8hf4 },
  { 0xc10067, CODE_FOR_fmav4sf4 },
  { 0xc10068, CODE_FOR_fmav2df4 },
  { 0xc10069, CODE_FOR_fmav16hf4 },
  { 0xc1006a, CODE_FOR_fmav8sf4 },
  { 0xc1006b, CODE_FOR_fmav4df4 },
  { 0xc1006d, CODE_FOR_fmav32hf4 },
  { 0xc1006e, CODE_FOR_fmav16sf4 },
  { 0xc1006f, CODE_FOR_fmav8df4 },
  { 0xc2002b, CODE_FOR_fmshf4 },
  { 0xc2002c, CODE_FOR_fmssf4 },
  { 0xc2002d, CODE_FOR_fmsdf4 },
  { 0xc20064, CODE_FOR_fmsv2sf4 },
  { 0xc20066, CODE_FOR_fmsv8hf4 },
  { 0xc20067, CODE_FOR_fmsv4sf4 },
  { 0xc20068, CODE_FOR_fmsv2df4 },
  { 0xc20069, CODE_FOR_fmsv16hf4 },
  { 0xc2006a, CODE_FOR_fmsv8sf4 },
  { 0xc2006b, CODE_FOR_fmsv4df4 },
  { 0xc2006d, CODE_FOR_fmsv32hf4 },
  { 0xc2006e, CODE_FOR_fmsv16sf4 },
  { 0xc2006f, CODE_FOR_fmsv8df4 },
  { 0xc3002b, CODE_FOR_fnmahf4 },
  { 0xc3002c, CODE_FOR_fnmasf4 },
  { 0xc3002d, CODE_FOR_fnmadf4 },
  { 0xc30064, CODE_FOR_fnmav2sf4 },
  { 0xc30066, CODE_FOR_fnmav8hf4 },
  { 0xc30067, CODE_FOR_fnmav4sf4 },
  { 0xc30068, CODE_FOR_fnmav2df4 },
  { 0xc30069, CODE_FOR_fnmav16hf4 },
  { 0xc3006a, CODE_FOR_fnmav8sf4 },
  { 0xc3006b, CODE_FOR_fnmav4df4 },
  { 0xc3006d, CODE_FOR_fnmav32hf4 },
  { 0xc3006e, CODE_FOR_fnmav16sf4 },
  { 0xc3006f, CODE_FOR_fnmav8df4 },
  { 0xc4002b, CODE_FOR_fnmshf4 },
  { 0xc4002c, CODE_FOR_fnmssf4 },
  { 0xc4002d, CODE_FOR_fnmsdf4 },
  { 0xc40064, CODE_FOR_fnmsv2sf4 },
  { 0xc40066, CODE_FOR_fnmsv8hf4 },
  { 0xc40067, CODE_FOR_fnmsv4sf4 },
  { 0xc40068, CODE_FOR_fnmsv2df4 },
  { 0xc40069, CODE_FOR_fnmsv16hf4 },
  { 0xc4006a, CODE_FOR_fnmsv8sf4 },
  { 0xc4006b, CODE_FOR_fnmsv4df4 },
  { 0xc4006d, CODE_FOR_fnmsv32hf4 },
  { 0xc4006e, CODE_FOR_fnmsv16sf4 },
  { 0xc4006f, CODE_FOR_fnmsv8df4 },
  { 0xc5002b, CODE_FOR_rinthf2 },
  { 0xc5002c, CODE_FOR_rintsf2 },
  { 0xc5002d, CODE_FOR_rintdf2 },
  { 0xc5002e, CODE_FOR_rintxf2 },
  { 0xc50066, CODE_FOR_rintv8hf2 },
  { 0xc50067, CODE_FOR_rintv4sf2 },
  { 0xc50068, CODE_FOR_rintv2df2 },
  { 0xc50069, CODE_FOR_rintv16hf2 },
  { 0xc5006a, CODE_FOR_rintv8sf2 },
  { 0xc5006b, CODE_FOR_rintv4df2 },
  { 0xc5006d, CODE_FOR_rintv32hf2 },
  { 0xc5006e, CODE_FOR_rintv16sf2 },
  { 0xc5006f, CODE_FOR_rintv8df2 },
  { 0xc6002c, CODE_FOR_roundsf2 },
  { 0xc6002d, CODE_FOR_rounddf2 },
  { 0xc6002e, CODE_FOR_roundxf2 },
  { 0xc60067, CODE_FOR_roundv4sf2 },
  { 0xc60068, CODE_FOR_roundv2df2 },
  { 0xc6006a, CODE_FOR_roundv8sf2 },
  { 0xc6006b, CODE_FOR_roundv4df2 },
  { 0xc6006e, CODE_FOR_roundv16sf2 },
  { 0xc6006f, CODE_FOR_roundv8df2 },
  { 0xc7002b, CODE_FOR_roundevenhf2 },
  { 0xc7002c, CODE_FOR_roundevensf2 },
  { 0xc7002d, CODE_FOR_roundevendf2 },
  { 0xc7002e, CODE_FOR_roundevenxf2 },
  { 0xc8002b, CODE_FOR_floorhf2 },
  { 0xc8002c, CODE_FOR_floorsf2 },
  { 0xc8002d, CODE_FOR_floordf2 },
  { 0xc8002e, CODE_FOR_floorxf2 },
  { 0xc9002b, CODE_FOR_ceilhf2 },
  { 0xc9002c, CODE_FOR_ceilsf2 },
  { 0xc9002d, CODE_FOR_ceildf2 },
  { 0xc9002e, CODE_FOR_ceilxf2 },
  { 0xca002b, CODE_FOR_btrunchf2 },
  { 0xca002c, CODE_FOR_btruncsf2 },
  { 0xca002d, CODE_FOR_btruncdf2 },
  { 0xca002e, CODE_FOR_btruncxf2 },
  { 0xcb002b, CODE_FOR_nearbyinthf2 },
  { 0xcb002c, CODE_FOR_nearbyintsf2 },
  { 0xcb002d, CODE_FOR_nearbyintdf2 },
  { 0xcb002e, CODE_FOR_nearbyintxf2 },
  { 0xcb0066, CODE_FOR_nearbyintv8hf2 },
  { 0xcb0067, CODE_FOR_nearbyintv4sf2 },
  { 0xcb0068, CODE_FOR_nearbyintv2df2 },
  { 0xcb0069, CODE_FOR_nearbyintv16hf2 },
  { 0xcb006a, CODE_FOR_nearbyintv8sf2 },
  { 0xcb006b, CODE_FOR_nearbyintv4df2 },
  { 0xcb006d, CODE_FOR_nearbyintv32hf2 },
  { 0xcb006e, CODE_FOR_nearbyintv16sf2 },
  { 0xcb006f, CODE_FOR_nearbyintv8df2 },
  { 0xcc002c, CODE_FOR_acossf2 },
  { 0xcc002d, CODE_FOR_acosdf2 },
  { 0xcc002e, CODE_FOR_acosxf2 },
  { 0xcd002c, CODE_FOR_acoshsf2 },
  { 0xcd002d, CODE_FOR_acoshdf2 },
  { 0xcd002e, CODE_FOR_acoshxf2 },
  { 0xce002c, CODE_FOR_asinsf2 },
  { 0xce002d, CODE_FOR_asindf2 },
  { 0xce002e, CODE_FOR_asinxf2 },
  { 0xcf002c, CODE_FOR_asinhsf2 },
  { 0xcf002d, CODE_FOR_asinhdf2 },
  { 0xcf002e, CODE_FOR_asinhxf2 },
  { 0xd0002c, CODE_FOR_atan2sf3 },
  { 0xd0002d, CODE_FOR_atan2df3 },
  { 0xd0002e, CODE_FOR_atan2xf3 },
  { 0xd1002c, CODE_FOR_atansf2 },
  { 0xd1002d, CODE_FOR_atandf2 },
  { 0xd1002e, CODE_FOR_atanxf2 },
  { 0xd2002c, CODE_FOR_atanhsf2 },
  { 0xd2002d, CODE_FOR_atanhdf2 },
  { 0xd2002e, CODE_FOR_atanhxf2 },
  { 0xd3002b, CODE_FOR_copysignhf3 },
  { 0xd3002c, CODE_FOR_copysignsf3 },
  { 0xd3002d, CODE_FOR_copysigndf3 },
  { 0xd3002f, CODE_FOR_copysigntf3 },
  { 0xd30064, CODE_FOR_copysignv2sf3 },
  { 0xd30066, CODE_FOR_copysignv8hf3 },
  { 0xd30067, CODE_FOR_copysignv4sf3 },
  { 0xd30068, CODE_FOR_copysignv2df3 },
  { 0xd30069, CODE_FOR_copysignv16hf3 },
  { 0xd3006a, CODE_FOR_copysignv8sf3 },
  { 0xd3006b, CODE_FOR_copysignv4df3 },
  { 0xd3006d, CODE_FOR_copysignv32hf3 },
  { 0xd3006e, CODE_FOR_copysignv16sf3 },
  { 0xd3006f, CODE_FOR_copysignv8df3 },
  { 0xd4002b, CODE_FOR_xorsignhf3 },
  { 0xd4002c, CODE_FOR_xorsignsf3 },
  { 0xd4002d, CODE_FOR_xorsigndf3 },
  { 0xd40064, CODE_FOR_xorsignv2sf3 },
  { 0xd40066, CODE_FOR_xorsignv8hf3 },
  { 0xd40067, CODE_FOR_xorsignv4sf3 },
  { 0xd40068, CODE_FOR_xorsignv2df3 },
  { 0xd40069, CODE_FOR_xorsignv16hf3 },
  { 0xd4006a, CODE_FOR_xorsignv8sf3 },
  { 0xd4006b, CODE_FOR_xorsignv4df3 },
  { 0xd4006d, CODE_FOR_xorsignv32hf3 },
  { 0xd4006e, CODE_FOR_xorsignv16sf3 },
  { 0xd4006f, CODE_FOR_xorsignv8df3 },
  { 0xd70066, CODE_FOR_cmulv8hf3 },
  { 0xd70069, CODE_FOR_cmulv16hf3 },
  { 0xd7006d, CODE_FOR_cmulv32hf3 },
  { 0xd80066, CODE_FOR_cmul_conjv8hf3 },
  { 0xd80069, CODE_FOR_cmul_conjv16hf3 },
  { 0xd8006d, CODE_FOR_cmul_conjv32hf3 },
  { 0xd90066, CODE_FOR_cmlav8hf4 },
  { 0xd90069, CODE_FOR_cmlav16hf4 },
  { 0xd9006d, CODE_FOR_cmlav32hf4 },
  { 0xda0066, CODE_FOR_cmla_conjv8hf4 },
  { 0xda0069, CODE_FOR_cmla_conjv16hf4 },
  { 0xda006d, CODE_FOR_cmla_conjv32hf4 },
  { 0xdd002c, CODE_FOR_cossf2 },
  { 0xdd002d, CODE_FOR_cosdf2 },
  { 0xdd002e, CODE_FOR_cosxf2 },
  { 0xde002c, CODE_FOR_coshsf2 },
  { 0xde002d, CODE_FOR_coshdf2 },
  { 0xde002e, CODE_FOR_coshxf2 },
  { 0xdf002c, CODE_FOR_exp10sf2 },
  { 0xdf002d, CODE_FOR_exp10df2 },
  { 0xdf002e, CODE_FOR_exp10xf2 },
  { 0xe0002c, CODE_FOR_exp2sf2 },
  { 0xe0002d, CODE_FOR_exp2df2 },
  { 0xe0002e, CODE_FOR_exp2xf2 },
  { 0xe1002c, CODE_FOR_expsf2 },
  { 0xe1002d, CODE_FOR_expdf2 },
  { 0xe1002e, CODE_FOR_expxf2 },
  { 0xe2002c, CODE_FOR_expm1sf2 },
  { 0xe2002d, CODE_FOR_expm1df2 },
  { 0xe2002e, CODE_FOR_expm1xf2 },
  { 0xe3002c, CODE_FOR_fmodsf3 },
  { 0xe3002d, CODE_FOR_fmoddf3 },
  { 0xe3002e, CODE_FOR_fmodxf3 },
  { 0xe4002c, CODE_FOR_hypotsf3 },
  { 0xe4002d, CODE_FOR_hypotdf3 },
  { 0xe5002c, CODE_FOR_ilogbsf2 },
  { 0xe5002d, CODE_FOR_ilogbdf2 },
  { 0xe5002e, CODE_FOR_ilogbxf2 },
  { 0xe7002c, CODE_FOR_ldexpsf3 },
  { 0xe7002d, CODE_FOR_ldexpdf3 },
  { 0xe7002e, CODE_FOR_ldexpxf3 },
  { 0xe8002c, CODE_FOR_log10sf2 },
  { 0xe8002d, CODE_FOR_log10df2 },
  { 0xe8002e, CODE_FOR_log10xf2 },
  { 0xe9002c, CODE_FOR_log1psf2 },
  { 0xe9002d, CODE_FOR_log1pdf2 },
  { 0xe9002e, CODE_FOR_log1pxf2 },
  { 0xea002c, CODE_FOR_log2sf2 },
  { 0xea002d, CODE_FOR_log2df2 },
  { 0xea002e, CODE_FOR_log2xf2 },
  { 0xeb002c, CODE_FOR_logsf2 },
  { 0xeb002d, CODE_FOR_logdf2 },
  { 0xeb002e, CODE_FOR_logxf2 },
  { 0xec002c, CODE_FOR_logbsf2 },
  { 0xec002d, CODE_FOR_logbdf2 },
  { 0xec002e, CODE_FOR_logbxf2 },
  { 0xee002c, CODE_FOR_remaindersf3 },
  { 0xee002d, CODE_FOR_remainderdf3 },
  { 0xee002e, CODE_FOR_remainderxf3 },
  { 0xef002b, CODE_FOR_rsqrthf2 },
  { 0xef002c, CODE_FOR_rsqrtsf2 },
  { 0xef0066, CODE_FOR_rsqrtv8hf2 },
  { 0xef0067, CODE_FOR_rsqrtv4sf2 },
  { 0xef0069, CODE_FOR_rsqrtv16hf2 },
  { 0xef006a, CODE_FOR_rsqrtv8sf2 },
  { 0xef006d, CODE_FOR_rsqrtv32hf2 },
  { 0xef006e, CODE_FOR_rsqrtv16sf2 },
  { 0xf0002c, CODE_FOR_scalbsf3 },
  { 0xf0002d, CODE_FOR_scalbdf3 },
  { 0xf0002e, CODE_FOR_scalbxf3 },
  { 0xf1002c, CODE_FOR_signbitsf2 },
  { 0xf1002d, CODE_FOR_signbitdf2 },
  { 0xf1002e, CODE_FOR_signbitxf2 },
  { 0xf1002f, CODE_FOR_signbittf2 },
  { 0xf10064, CODE_FOR_signbitv2sf2 },
  { 0xf10067, CODE_FOR_signbitv4sf2 },
  { 0xf1006a, CODE_FOR_signbitv8sf2 },
  { 0xf1006e, CODE_FOR_signbitv16sf2 },
  { 0xf2002c, CODE_FOR_significandsf2 },
  { 0xf2002d, CODE_FOR_significanddf2 },
  { 0xf2002e, CODE_FOR_significandxf2 },
  { 0xf3002c, CODE_FOR_sinsf2 },
  { 0xf3002d, CODE_FOR_sindf2 },
  { 0xf3002e, CODE_FOR_sinxf2 },
  { 0xf4002c, CODE_FOR_sincossf3 },
  { 0xf4002d, CODE_FOR_sincosdf3 },
  { 0xf4002e, CODE_FOR_sincosxf3 },
  { 0xf5002c, CODE_FOR_sinhsf2 },
  { 0xf5002d, CODE_FOR_sinhdf2 },
  { 0xf5002e, CODE_FOR_sinhxf2 },
  { 0xf6002c, CODE_FOR_tansf2 },
  { 0xf6002d, CODE_FOR_tandf2 },
  { 0xf6002e, CODE_FOR_tanxf2 },
  { 0xf7002c, CODE_FOR_tanhsf2 },
  { 0xf7002d, CODE_FOR_tanhdf2 },
  { 0xf7002e, CODE_FOR_tanhxf2 },
  { 0xff0043, CODE_FOR_reduc_smax_scal_v4qi },
  { 0xff0047, CODE_FOR_reduc_smax_scal_v4hi },
  { 0xff004d, CODE_FOR_reduc_smax_scal_v16qi },
  { 0xff004e, CODE_FOR_reduc_smax_scal_v8hi },
  { 0xff004f, CODE_FOR_reduc_smax_scal_v4si },
  { 0xff0050, CODE_FOR_reduc_smax_scal_v2di },
  { 0xff0052, CODE_FOR_reduc_smax_scal_v32qi },
  { 0xff0053, CODE_FOR_reduc_smax_scal_v16hi },
  { 0xff0054, CODE_FOR_reduc_smax_scal_v8si },
  { 0xff0055, CODE_FOR_reduc_smax_scal_v4di },
  { 0xff0057, CODE_FOR_reduc_smax_scal_v64qi },
  { 0xff0058, CODE_FOR_reduc_smax_scal_v32hi },
  { 0xff0059, CODE_FOR_reduc_smax_scal_v16si },
  { 0xff005a, CODE_FOR_reduc_smax_scal_v8di },
  { 0xff0066, CODE_FOR_reduc_smax_scal_v8hf },
  { 0xff0067, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xff0068, CODE_FOR_reduc_smax_scal_v2df },
  { 0xff0069, CODE_FOR_reduc_smax_scal_v16hf },
  { 0xff006a, CODE_FOR_reduc_smax_scal_v8sf },
  { 0xff006b, CODE_FOR_reduc_smax_scal_v4df },
  { 0xff006d, CODE_FOR_reduc_smax_scal_v32hf },
  { 0xff006e, CODE_FOR_reduc_smax_scal_v16sf },
  { 0xff006f, CODE_FOR_reduc_smax_scal_v8df },
  { 0x1000043, CODE_FOR_reduc_smin_scal_v4qi },
  { 0x1000047, CODE_FOR_reduc_smin_scal_v4hi },
  { 0x100004d, CODE_FOR_reduc_smin_scal_v16qi },
  { 0x100004e, CODE_FOR_reduc_smin_scal_v8hi },
  { 0x100004f, CODE_FOR_reduc_smin_scal_v4si },
  { 0x1000050, CODE_FOR_reduc_smin_scal_v2di },
  { 0x1000052, CODE_FOR_reduc_smin_scal_v32qi },
  { 0x1000053, CODE_FOR_reduc_smin_scal_v16hi },
  { 0x1000054, CODE_FOR_reduc_smin_scal_v8si },
  { 0x1000055, CODE_FOR_reduc_smin_scal_v4di },
  { 0x1000057, CODE_FOR_reduc_smin_scal_v64qi },
  { 0x1000058, CODE_FOR_reduc_smin_scal_v32hi },
  { 0x1000059, CODE_FOR_reduc_smin_scal_v16si },
  { 0x100005a, CODE_FOR_reduc_smin_scal_v8di },
  { 0x1000066, CODE_FOR_reduc_smin_scal_v8hf },
  { 0x1000067, CODE_FOR_reduc_smin_scal_v4sf },
  { 0x1000068, CODE_FOR_reduc_smin_scal_v2df },
  { 0x1000069, CODE_FOR_reduc_smin_scal_v16hf },
  { 0x100006a, CODE_FOR_reduc_smin_scal_v8sf },
  { 0x100006b, CODE_FOR_reduc_smin_scal_v4df },
  { 0x100006d, CODE_FOR_reduc_smin_scal_v32hf },
  { 0x100006e, CODE_FOR_reduc_smin_scal_v16sf },
  { 0x100006f, CODE_FOR_reduc_smin_scal_v8df },
  { 0x1010043, CODE_FOR_reduc_plus_scal_v4qi },
  { 0x1010046, CODE_FOR_reduc_plus_scal_v8qi },
  { 0x1010047, CODE_FOR_reduc_plus_scal_v4hi },
  { 0x101004d, CODE_FOR_reduc_plus_scal_v16qi },
  { 0x1010052, CODE_FOR_reduc_plus_scal_v32qi },
  { 0x1010057, CODE_FOR_reduc_plus_scal_v64qi },
  { 0x1010066, CODE_FOR_reduc_plus_scal_v8hf },
  { 0x1010067, CODE_FOR_reduc_plus_scal_v4sf },
  { 0x1010068, CODE_FOR_reduc_plus_scal_v2df },
  { 0x1010069, CODE_FOR_reduc_plus_scal_v16hf },
  { 0x101006a, CODE_FOR_reduc_plus_scal_v8sf },
  { 0x101006b, CODE_FOR_reduc_plus_scal_v4df },
  { 0x101006d, CODE_FOR_reduc_plus_scal_v32hf },
  { 0x101006e, CODE_FOR_reduc_plus_scal_v16sf },
  { 0x101006f, CODE_FOR_reduc_plus_scal_v8df },
  { 0x1020043, CODE_FOR_reduc_umax_scal_v4qi },
  { 0x1020047, CODE_FOR_reduc_umax_scal_v4hi },
  { 0x1020052, CODE_FOR_reduc_umax_scal_v32qi },
  { 0x1020053, CODE_FOR_reduc_umax_scal_v16hi },
  { 0x1020054, CODE_FOR_reduc_umax_scal_v8si },
  { 0x1020055, CODE_FOR_reduc_umax_scal_v4di },
  { 0x1020057, CODE_FOR_reduc_umax_scal_v64qi },
  { 0x1020058, CODE_FOR_reduc_umax_scal_v32hi },
  { 0x1020059, CODE_FOR_reduc_umax_scal_v16si },
  { 0x102005a, CODE_FOR_reduc_umax_scal_v8di },
  { 0x1030043, CODE_FOR_reduc_umin_scal_v4qi },
  { 0x1030047, CODE_FOR_reduc_umin_scal_v4hi },
  { 0x103004e, CODE_FOR_reduc_umin_scal_v8hi },
  { 0x1030052, CODE_FOR_reduc_umin_scal_v32qi },
  { 0x1030053, CODE_FOR_reduc_umin_scal_v16hi },
  { 0x1030054, CODE_FOR_reduc_umin_scal_v8si },
  { 0x1030055, CODE_FOR_reduc_umin_scal_v4di },
  { 0x1030057, CODE_FOR_reduc_umin_scal_v64qi },
  { 0x1030058, CODE_FOR_reduc_umin_scal_v32hi },
  { 0x1030059, CODE_FOR_reduc_umin_scal_v16si },
  { 0x103005a, CODE_FOR_reduc_umin_scal_v8di },
  { 0x10e0042, CODE_FOR_uavgv2qi3_ceil },
  { 0x10e0043, CODE_FOR_uavgv4qi3_ceil },
  { 0x10e0044, CODE_FOR_uavgv2hi3_ceil },
  { 0x10e0046, CODE_FOR_uavgv8qi3_ceil },
  { 0x10e0047, CODE_FOR_uavgv4hi3_ceil },
  { 0x10e004d, CODE_FOR_uavgv16qi3_ceil },
  { 0x10e004e, CODE_FOR_uavgv8hi3_ceil },
  { 0x10e0052, CODE_FOR_uavgv32qi3_ceil },
  { 0x10e0053, CODE_FOR_uavgv16hi3_ceil },
  { 0x10e0057, CODE_FOR_uavgv64qi3_ceil },
  { 0x10e0058, CODE_FOR_uavgv32hi3_ceil },
  { 0x10f004e, CODE_FOR_sdot_prodv8hi },
  { 0x10f004f, CODE_FOR_sdot_prodv4si },
  { 0x10f0053, CODE_FOR_sdot_prodv16hi },
  { 0x10f0058, CODE_FOR_sdot_prodv32hi },
  { 0x112004d, CODE_FOR_usdot_prodv16qi },
  { 0x1120052, CODE_FOR_usdot_prodv32qi },
  { 0x1120057, CODE_FOR_usdot_prodv64qi },
  { 0x1140046, CODE_FOR_usadv8qi },
  { 0x114004d, CODE_FOR_usadv16qi },
  { 0x1140052, CODE_FOR_usadv32qi },
  { 0x1140057, CODE_FOR_usadv64qi },
  { 0x1170044, CODE_FOR_smulhrsv2hi3 },
  { 0x1170047, CODE_FOR_smulhrsv4hi3 },
  { 0x117004e, CODE_FOR_smulhrsv8hi3 },
  { 0x1170053, CODE_FOR_smulhrsv16hi3 },
  { 0x1170058, CODE_FOR_smulhrsv32hi3 },
  { 0x11b0068, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0x11b006b, CODE_FOR_vec_pack_sfix_trunc_v4df },
  { 0x11b006f, CODE_FOR_vec_pack_sfix_trunc_v8df },
  { 0x11d000f, CODE_FOR_vec_pack_trunc_qi },
  { 0x11d0010, CODE_FOR_vec_pack_trunc_hi },
  { 0x11d0011, CODE_FOR_vec_pack_trunc_si },
  { 0x11d0044, CODE_FOR_vec_pack_trunc_v2hi },
  { 0x11d0047, CODE_FOR_vec_pack_trunc_v4hi },
  { 0x11d0048, CODE_FOR_vec_pack_trunc_v2si },
  { 0x11d004e, CODE_FOR_vec_pack_trunc_v8hi },
  { 0x11d004f, CODE_FOR_vec_pack_trunc_v4si },
  { 0x11d0050, CODE_FOR_vec_pack_trunc_v2di },
  { 0x11d0053, CODE_FOR_vec_pack_trunc_v16hi },
  { 0x11d0054, CODE_FOR_vec_pack_trunc_v8si },
  { 0x11d0055, CODE_FOR_vec_pack_trunc_v4di },
  { 0x11d0058, CODE_FOR_vec_pack_trunc_v32hi },
  { 0x11d0059, CODE_FOR_vec_pack_trunc_v16si },
  { 0x11d005a, CODE_FOR_vec_pack_trunc_v8di },
  { 0x11d0068, CODE_FOR_vec_pack_trunc_v2df },
  { 0x11d006b, CODE_FOR_vec_pack_trunc_v4df },
  { 0x11d006f, CODE_FOR_vec_pack_trunc_v8df },
  { 0x11e0068, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0x11e006b, CODE_FOR_vec_pack_ufix_trunc_v4df },
  { 0x11e006f, CODE_FOR_vec_pack_ufix_trunc_v8df },
  { 0x11f000f, CODE_FOR_vec_pack_sbool_trunc_qi },
  { 0x1210050, CODE_FOR_vec_packs_float_v2di },
  { 0x1210055, CODE_FOR_vec_packs_float_v4di },
  { 0x121005a, CODE_FOR_vec_packs_float_v8di },
  { 0x1220050, CODE_FOR_vec_packu_float_v2di },
  { 0x1220055, CODE_FOR_vec_packu_float_v4di },
  { 0x122005a, CODE_FOR_vec_packu_float_v8di },
  { 0x123004d, CODE_FOR_vec_permv16qi },
  { 0x123004e, CODE_FOR_vec_permv8hi },
  { 0x123004f, CODE_FOR_vec_permv4si },
  { 0x1230050, CODE_FOR_vec_permv2di },
  { 0x1230052, CODE_FOR_vec_permv32qi },
  { 0x1230053, CODE_FOR_vec_permv16hi },
  { 0x1230054, CODE_FOR_vec_permv8si },
  { 0x1230055, CODE_FOR_vec_permv4di },
  { 0x1230057, CODE_FOR_vec_permv64qi },
  { 0x1230058, CODE_FOR_vec_permv32hi },
  { 0x1230059, CODE_FOR_vec_permv16si },
  { 0x123005a, CODE_FOR_vec_permv8di },
  { 0x1230066, CODE_FOR_vec_permv8hf },
  { 0x1230067, CODE_FOR_vec_permv4sf },
  { 0x1230068, CODE_FOR_vec_permv2df },
  { 0x1230069, CODE_FOR_vec_permv16hf },
  { 0x123006a, CODE_FOR_vec_permv8sf },
  { 0x123006b, CODE_FOR_vec_permv4df },
  { 0x123006d, CODE_FOR_vec_permv32hf },
  { 0x123006e, CODE_FOR_vec_permv16sf },
  { 0x123006f, CODE_FOR_vec_permv8df },
  { 0x1250043, CODE_FOR_vec_setv4qi },
  { 0x1250044, CODE_FOR_vec_setv2hi },
  { 0x1250046, CODE_FOR_vec_setv8qi },
  { 0x1250047, CODE_FOR_vec_setv4hi },
  { 0x1250048, CODE_FOR_vec_setv2si },
  { 0x125004d, CODE_FOR_vec_setv16qi },
  { 0x125004e, CODE_FOR_vec_setv8hi },
  { 0x125004f, CODE_FOR_vec_setv4si },
  { 0x1250050, CODE_FOR_vec_setv2di },
  { 0x1250052, CODE_FOR_vec_setv32qi },
  { 0x1250053, CODE_FOR_vec_setv16hi },
  { 0x1250054, CODE_FOR_vec_setv8si },
  { 0x1250055, CODE_FOR_vec_setv4di },
  { 0x1250057, CODE_FOR_vec_setv64qi },
  { 0x1250058, CODE_FOR_vec_setv32hi },
  { 0x1250059, CODE_FOR_vec_setv16si },
  { 0x125005a, CODE_FOR_vec_setv8di },
  { 0x1250064, CODE_FOR_vec_setv2sf },
  { 0x1250066, CODE_FOR_vec_setv8hf },
  { 0x1250067, CODE_FOR_vec_setv4sf },
  { 0x1250068, CODE_FOR_vec_setv2df },
  { 0x1250069, CODE_FOR_vec_setv16hf },
  { 0x125006a, CODE_FOR_vec_setv8sf },
  { 0x125006b, CODE_FOR_vec_setv4df },
  { 0x125006d, CODE_FOR_vec_setv32hf },
  { 0x125006e, CODE_FOR_vec_setv16sf },
  { 0x125006f, CODE_FOR_vec_setv8df },
  { 0x126004d, CODE_FOR_vec_shl_v16qi },
  { 0x126004e, CODE_FOR_vec_shl_v8hi },
  { 0x126004f, CODE_FOR_vec_shl_v4si },
  { 0x1260050, CODE_FOR_vec_shl_v2di },
  { 0x1260067, CODE_FOR_vec_shl_v4sf },
  { 0x1260068, CODE_FOR_vec_shl_v2df },
  { 0x127004d, CODE_FOR_vec_shr_v16qi },
  { 0x127004e, CODE_FOR_vec_shr_v8hi },
  { 0x127004f, CODE_FOR_vec_shr_v4si },
  { 0x1270050, CODE_FOR_vec_shr_v2di },
  { 0x1270067, CODE_FOR_vec_shr_v4sf },
  { 0x1270068, CODE_FOR_vec_shr_v2df },
  { 0x1280067, CODE_FOR_vec_unpack_sfix_trunc_hi_v4sf },
  { 0x128006a, CODE_FOR_vec_unpack_sfix_trunc_hi_v8sf },
  { 0x128006e, CODE_FOR_vec_unpack_sfix_trunc_hi_v16sf },
  { 0x1290067, CODE_FOR_vec_unpack_sfix_trunc_lo_v4sf },
  { 0x129006a, CODE_FOR_vec_unpack_sfix_trunc_lo_v8sf },
  { 0x129006e, CODE_FOR_vec_unpack_sfix_trunc_lo_v16sf },
  { 0x12a0067, CODE_FOR_vec_unpack_ufix_trunc_hi_v4sf },
  { 0x12a006a, CODE_FOR_vec_unpack_ufix_trunc_hi_v8sf },
  { 0x12a006e, CODE_FOR_vec_unpack_ufix_trunc_hi_v16sf },
  { 0x12b0067, CODE_FOR_vec_unpack_ufix_trunc_lo_v4sf },
  { 0x12b006a, CODE_FOR_vec_unpack_ufix_trunc_lo_v8sf },
  { 0x12b006e, CODE_FOR_vec_unpack_ufix_trunc_lo_v16sf },
  { 0x12c004e, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0x12c004f, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0x12c0053, CODE_FOR_vec_unpacks_float_hi_v16hi },
  { 0x12c0054, CODE_FOR_vec_unpacks_float_hi_v8si },
  { 0x12c0058, CODE_FOR_vec_unpacks_float_hi_v32hi },
  { 0x12c0059, CODE_FOR_vec_unpacks_float_hi_v16si },
  { 0x12d004e, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0x12d004f, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0x12d0053, CODE_FOR_vec_unpacks_float_lo_v16hi },
  { 0x12d0054, CODE_FOR_vec_unpacks_float_lo_v8si },
  { 0x12d0058, CODE_FOR_vec_unpacks_float_lo_v32hi },
  { 0x12d0059, CODE_FOR_vec_unpacks_float_lo_v16si },
  { 0x12e0010, CODE_FOR_vec_unpacks_hi_hi },
  { 0x12e0011, CODE_FOR_vec_unpacks_hi_si },
  { 0x12e0012, CODE_FOR_vec_unpacks_hi_di },
  { 0x12e0043, CODE_FOR_vec_unpacks_hi_v4qi },
  { 0x12e0046, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0x12e0047, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0x12e004d, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x12e004e, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x12e004f, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x12e0052, CODE_FOR_vec_unpacks_hi_v32qi },
  { 0x12e0053, CODE_FOR_vec_unpacks_hi_v16hi },
  { 0x12e0054, CODE_FOR_vec_unpacks_hi_v8si },
  { 0x12e0057, CODE_FOR_vec_unpacks_hi_v64qi },
  { 0x12e0058, CODE_FOR_vec_unpacks_hi_v32hi },
  { 0x12e0059, CODE_FOR_vec_unpacks_hi_v16si },
  { 0x12e0067, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0x12e006a, CODE_FOR_vec_unpacks_hi_v8sf },
  { 0x12e006e, CODE_FOR_vec_unpacks_hi_v16sf },
  { 0x12f0010, CODE_FOR_vec_unpacks_lo_hi },
  { 0x12f0011, CODE_FOR_vec_unpacks_lo_si },
  { 0x12f0012, CODE_FOR_vec_unpacks_lo_di },
  { 0x12f0043, CODE_FOR_vec_unpacks_lo_v4qi },
  { 0x12f0046, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0x12f0047, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0x12f004d, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x12f004e, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x12f004f, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x12f0052, CODE_FOR_vec_unpacks_lo_v32qi },
  { 0x12f0053, CODE_FOR_vec_unpacks_lo_v16hi },
  { 0x12f0054, CODE_FOR_vec_unpacks_lo_v8si },
  { 0x12f0057, CODE_FOR_vec_unpacks_lo_v64qi },
  { 0x12f0058, CODE_FOR_vec_unpacks_lo_v32hi },
  { 0x12f0059, CODE_FOR_vec_unpacks_lo_v16si },
  { 0x12f0067, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0x12f006a, CODE_FOR_vec_unpacks_lo_v8sf },
  { 0x12f006e, CODE_FOR_vec_unpacks_lo_v16sf },
  { 0x130000f, CODE_FOR_vec_unpacks_sbool_hi_qi },
  { 0x131000f, CODE_FOR_vec_unpacks_sbool_lo_qi },
  { 0x132004e, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0x132004f, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0x1320053, CODE_FOR_vec_unpacku_float_hi_v16hi },
  { 0x1320054, CODE_FOR_vec_unpacku_float_hi_v8si },
  { 0x1320058, CODE_FOR_vec_unpacku_float_hi_v32hi },
  { 0x1320059, CODE_FOR_vec_unpacku_float_hi_v16si },
  { 0x133004e, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0x133004f, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0x1330053, CODE_FOR_vec_unpacku_float_lo_v16hi },
  { 0x1330054, CODE_FOR_vec_unpacku_float_lo_v8si },
  { 0x1330058, CODE_FOR_vec_unpacku_float_lo_v32hi },
  { 0x1330059, CODE_FOR_vec_unpacku_float_lo_v16si },
  { 0x1340043, CODE_FOR_vec_unpacku_hi_v4qi },
  { 0x1340046, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0x1340047, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0x134004d, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x134004e, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x134004f, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x1340052, CODE_FOR_vec_unpacku_hi_v32qi },
  { 0x1340053, CODE_FOR_vec_unpacku_hi_v16hi },
  { 0x1340054, CODE_FOR_vec_unpacku_hi_v8si },
  { 0x1340057, CODE_FOR_vec_unpacku_hi_v64qi },
  { 0x1340058, CODE_FOR_vec_unpacku_hi_v32hi },
  { 0x1340059, CODE_FOR_vec_unpacku_hi_v16si },
  { 0x1350043, CODE_FOR_vec_unpacku_lo_v4qi },
  { 0x1350046, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0x1350047, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0x135004d, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x135004e, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x135004f, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x1350052, CODE_FOR_vec_unpacku_lo_v32qi },
  { 0x1350053, CODE_FOR_vec_unpacku_lo_v16hi },
  { 0x1350054, CODE_FOR_vec_unpacku_lo_v8si },
  { 0x1350057, CODE_FOR_vec_unpacku_lo_v64qi },
  { 0x1350058, CODE_FOR_vec_unpacku_lo_v32hi },
  { 0x1350059, CODE_FOR_vec_unpacku_lo_v16si },
  { 0x136004f, CODE_FOR_vec_widen_smult_even_v4si },
  { 0x1360054, CODE_FOR_vec_widen_smult_even_v8si },
  { 0x1360059, CODE_FOR_vec_widen_smult_even_v16si },
  { 0x137004d, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0x137004e, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0x137004f, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0x1370052, CODE_FOR_vec_widen_smult_hi_v32qi },
  { 0x1370053, CODE_FOR_vec_widen_smult_hi_v16hi },
  { 0x1370054, CODE_FOR_vec_widen_smult_hi_v8si },
  { 0x138004d, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0x138004e, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0x138004f, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0x1380052, CODE_FOR_vec_widen_smult_lo_v32qi },
  { 0x1380053, CODE_FOR_vec_widen_smult_lo_v16hi },
  { 0x1380054, CODE_FOR_vec_widen_smult_lo_v8si },
  { 0x139004f, CODE_FOR_vec_widen_smult_odd_v4si },
  { 0x1390054, CODE_FOR_vec_widen_smult_odd_v8si },
  { 0x1390059, CODE_FOR_vec_widen_smult_odd_v16si },
  { 0x140004f, CODE_FOR_vec_widen_umult_even_v4si },
  { 0x1400054, CODE_FOR_vec_widen_umult_even_v8si },
  { 0x1400059, CODE_FOR_vec_widen_umult_even_v16si },
  { 0x141004d, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0x141004e, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0x141004f, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0x1410052, CODE_FOR_vec_widen_umult_hi_v32qi },
  { 0x1410053, CODE_FOR_vec_widen_umult_hi_v16hi },
  { 0x1410054, CODE_FOR_vec_widen_umult_hi_v8si },
  { 0x142004d, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0x142004e, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0x142004f, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x1420052, CODE_FOR_vec_widen_umult_lo_v32qi },
  { 0x1420053, CODE_FOR_vec_widen_umult_lo_v16hi },
  { 0x1420054, CODE_FOR_vec_widen_umult_lo_v8si },
  { 0x143004f, CODE_FOR_vec_widen_umult_odd_v4si },
  { 0x1430054, CODE_FOR_vec_widen_umult_odd_v8si },
  { 0x1430059, CODE_FOR_vec_widen_umult_odd_v16si },
  { 0x14a0064, CODE_FOR_vec_addsubv2sf3 },
  { 0x14a0067, CODE_FOR_vec_addsubv4sf3 },
  { 0x14a0068, CODE_FOR_vec_addsubv2df3 },
  { 0x14a006a, CODE_FOR_vec_addsubv8sf3 },
  { 0x14a006b, CODE_FOR_vec_addsubv4df3 },
  { 0x14b0067, CODE_FOR_vec_fmaddsubv4sf4 },
  { 0x14b0068, CODE_FOR_vec_fmaddsubv2df4 },
  { 0x14b006a, CODE_FOR_vec_fmaddsubv8sf4 },
  { 0x14b006b, CODE_FOR_vec_fmaddsubv4df4 },
  { 0x14b006e, CODE_FOR_vec_fmaddsubv16sf4 },
  { 0x14b006f, CODE_FOR_vec_fmaddsubv8df4 },
  { 0x14c0067, CODE_FOR_vec_fmsubaddv4sf4 },
  { 0x14c0068, CODE_FOR_vec_fmsubaddv2df4 },
  { 0x14c006a, CODE_FOR_vec_fmsubaddv8sf4 },
  { 0x14c006b, CODE_FOR_vec_fmsubaddv4df4 },
  { 0x14c006e, CODE_FOR_vec_fmsubaddv16sf4 },
  { 0x14c006f, CODE_FOR_vec_fmsubaddv8df4 },
  { 0x155000f, CODE_FOR_atomic_addqi },
  { 0x1550010, CODE_FOR_atomic_addhi },
  { 0x1550011, CODE_FOR_atomic_addsi },
  { 0x1550012, CODE_FOR_atomic_adddi },
  { 0x156000f, CODE_FOR_atomic_and_fetchqi },
  { 0x1560010, CODE_FOR_atomic_and_fetchhi },
  { 0x1560011, CODE_FOR_atomic_and_fetchsi },
  { 0x1560012, CODE_FOR_atomic_and_fetchdi },
  { 0x1560013, CODE_FOR_atomic_and_fetchti },
  { 0x157000f, CODE_FOR_atomic_andqi },
  { 0x1570010, CODE_FOR_atomic_andhi },
  { 0x1570011, CODE_FOR_atomic_andsi },
  { 0x1570012, CODE_FOR_atomic_anddi },
  { 0x1580010, CODE_FOR_atomic_bit_test_and_sethi },
  { 0x1580011, CODE_FOR_atomic_bit_test_and_setsi },
  { 0x1580012, CODE_FOR_atomic_bit_test_and_setdi },
  { 0x1590010, CODE_FOR_atomic_bit_test_and_complementhi },
  { 0x1590011, CODE_FOR_atomic_bit_test_and_complementsi },
  { 0x1590012, CODE_FOR_atomic_bit_test_and_complementdi },
  { 0x15a0010, CODE_FOR_atomic_bit_test_and_resethi },
  { 0x15a0011, CODE_FOR_atomic_bit_test_and_resetsi },
  { 0x15a0012, CODE_FOR_atomic_bit_test_and_resetdi },
  { 0x15b000f, CODE_FOR_atomic_compare_and_swapqi },
  { 0x15b0010, CODE_FOR_atomic_compare_and_swaphi },
  { 0x15b0011, CODE_FOR_atomic_compare_and_swapsi },
  { 0x15b0012, CODE_FOR_atomic_compare_and_swapdi },
  { 0x15b0013, CODE_FOR_atomic_compare_and_swapti },
  { 0x15c000f, CODE_FOR_atomic_exchangeqi },
  { 0x15c0010, CODE_FOR_atomic_exchangehi },
  { 0x15c0011, CODE_FOR_atomic_exchangesi },
  { 0x15c0012, CODE_FOR_atomic_exchangedi },
  { 0x15d000f, CODE_FOR_atomic_fetch_addqi },
  { 0x15d0010, CODE_FOR_atomic_fetch_addhi },
  { 0x15d0011, CODE_FOR_atomic_fetch_addsi },
  { 0x15d0012, CODE_FOR_atomic_fetch_adddi },
  { 0x15e000f, CODE_FOR_atomic_fetch_andqi },
  { 0x15e0010, CODE_FOR_atomic_fetch_andhi },
  { 0x15e0011, CODE_FOR_atomic_fetch_andsi },
  { 0x15e0012, CODE_FOR_atomic_fetch_anddi },
  { 0x15e0013, CODE_FOR_atomic_fetch_andti },
  { 0x15f000f, CODE_FOR_atomic_fetch_nandqi },
  { 0x15f0010, CODE_FOR_atomic_fetch_nandhi },
  { 0x15f0011, CODE_FOR_atomic_fetch_nandsi },
  { 0x15f0012, CODE_FOR_atomic_fetch_nanddi },
  { 0x15f0013, CODE_FOR_atomic_fetch_nandti },
  { 0x160000f, CODE_FOR_atomic_fetch_orqi },
  { 0x1600010, CODE_FOR_atomic_fetch_orhi },
  { 0x1600011, CODE_FOR_atomic_fetch_orsi },
  { 0x1600012, CODE_FOR_atomic_fetch_ordi },
  { 0x1600013, CODE_FOR_atomic_fetch_orti },
  { 0x162000f, CODE_FOR_atomic_fetch_xorqi },
  { 0x1620010, CODE_FOR_atomic_fetch_xorhi },
  { 0x1620011, CODE_FOR_atomic_fetch_xorsi },
  { 0x1620012, CODE_FOR_atomic_fetch_xordi },
  { 0x1620013, CODE_FOR_atomic_fetch_xorti },
  { 0x163000f, CODE_FOR_atomic_loadqi },
  { 0x1630010, CODE_FOR_atomic_loadhi },
  { 0x1630011, CODE_FOR_atomic_loadsi },
  { 0x1630012, CODE_FOR_atomic_loaddi },
  { 0x164000f, CODE_FOR_atomic_nand_fetchqi },
  { 0x1640010, CODE_FOR_atomic_nand_fetchhi },
  { 0x1640011, CODE_FOR_atomic_nand_fetchsi },
  { 0x1640012, CODE_FOR_atomic_nand_fetchdi },
  { 0x1640013, CODE_FOR_atomic_nand_fetchti },
  { 0x166000f, CODE_FOR_atomic_or_fetchqi },
  { 0x1660010, CODE_FOR_atomic_or_fetchhi },
  { 0x1660011, CODE_FOR_atomic_or_fetchsi },
  { 0x1660012, CODE_FOR_atomic_or_fetchdi },
  { 0x1660013, CODE_FOR_atomic_or_fetchti },
  { 0x167000f, CODE_FOR_atomic_orqi },
  { 0x1670010, CODE_FOR_atomic_orhi },
  { 0x1670011, CODE_FOR_atomic_orsi },
  { 0x1670012, CODE_FOR_atomic_ordi },
  { 0x168000f, CODE_FOR_atomic_storeqi },
  { 0x1680010, CODE_FOR_atomic_storehi },
  { 0x1680011, CODE_FOR_atomic_storesi },
  { 0x1680012, CODE_FOR_atomic_storedi },
  { 0x16a000f, CODE_FOR_atomic_subqi },
  { 0x16a0010, CODE_FOR_atomic_subhi },
  { 0x16a0011, CODE_FOR_atomic_subsi },
  { 0x16a0012, CODE_FOR_atomic_subdi },
  { 0x16b000f, CODE_FOR_atomic_xor_fetchqi },
  { 0x16b0010, CODE_FOR_atomic_xor_fetchhi },
  { 0x16b0011, CODE_FOR_atomic_xor_fetchsi },
  { 0x16b0012, CODE_FOR_atomic_xor_fetchdi },
  { 0x16b0013, CODE_FOR_atomic_xor_fetchti },
  { 0x16c000f, CODE_FOR_atomic_xorqi },
  { 0x16c0010, CODE_FOR_atomic_xorhi },
  { 0x16c0011, CODE_FOR_atomic_xorsi },
  { 0x16c0012, CODE_FOR_atomic_xordi },
  { 0x16d000f, CODE_FOR_atomic_add_fetch_cmp_0qi },
  { 0x16d0010, CODE_FOR_atomic_add_fetch_cmp_0hi },
  { 0x16d0011, CODE_FOR_atomic_add_fetch_cmp_0si },
  { 0x16d0012, CODE_FOR_atomic_add_fetch_cmp_0di },
  { 0x16e000f, CODE_FOR_atomic_sub_fetch_cmp_0qi },
  { 0x16e0010, CODE_FOR_atomic_sub_fetch_cmp_0hi },
  { 0x16e0011, CODE_FOR_atomic_sub_fetch_cmp_0si },
  { 0x16e0012, CODE_FOR_atomic_sub_fetch_cmp_0di },
  { 0x16f000f, CODE_FOR_atomic_and_fetch_cmp_0qi },
  { 0x16f0010, CODE_FOR_atomic_and_fetch_cmp_0hi },
  { 0x16f0011, CODE_FOR_atomic_and_fetch_cmp_0si },
  { 0x16f0012, CODE_FOR_atomic_and_fetch_cmp_0di },
  { 0x170000f, CODE_FOR_atomic_or_fetch_cmp_0qi },
  { 0x1700010, CODE_FOR_atomic_or_fetch_cmp_0hi },
  { 0x1700011, CODE_FOR_atomic_or_fetch_cmp_0si },
  { 0x1700012, CODE_FOR_atomic_or_fetch_cmp_0di },
  { 0x171000f, CODE_FOR_atomic_xor_fetch_cmp_0qi },
  { 0x1710010, CODE_FOR_atomic_xor_fetch_cmp_0hi },
  { 0x1710011, CODE_FOR_atomic_xor_fetch_cmp_0si },
  { 0x1710012, CODE_FOR_atomic_xor_fetch_cmp_0di },
  { 0x1720011, CODE_FOR_get_thread_pointersi },
  { 0x1720012, CODE_FOR_get_thread_pointerdi },
  { 0x176004d, CODE_FOR_vec_duplicatev16qi },
  { 0x176004e, CODE_FOR_vec_duplicatev8hi },
  { 0x176004f, CODE_FOR_vec_duplicatev4si },
  { 0x1760050, CODE_FOR_vec_duplicatev2di },
  { 0x1760052, CODE_FOR_vec_duplicatev32qi },
  { 0x1760053, CODE_FOR_vec_duplicatev16hi },
  { 0x1760054, CODE_FOR_vec_duplicatev8si },
  { 0x1760055, CODE_FOR_vec_duplicatev4di },
  { 0x1760057, CODE_FOR_vec_duplicatev64qi },
  { 0x1760058, CODE_FOR_vec_duplicatev32hi },
  { 0x1760059, CODE_FOR_vec_duplicatev16si },
  { 0x176005a, CODE_FOR_vec_duplicatev8di },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendhfsf2;
  ena[7] = HAVE_extendhfdf2;
  ena[8] = HAVE_extendsfdf2;
  ena[9] = HAVE_extendsfxf2;
  ena[10] = HAVE_extenddfxf2;
  ena[11] = HAVE_extendv2qiv2di2;
  ena[12] = HAVE_extendv4qiv4si2;
  ena[13] = HAVE_extendv4qiv4di2;
  ena[14] = HAVE_extendv2hiv2di2;
  ena[15] = HAVE_extendv8qiv8hi2;
  ena[16] = HAVE_extendv8qiv8si2;
  ena[17] = HAVE_extendv8qiv8di2;
  ena[18] = HAVE_extendv4hiv4si2;
  ena[19] = HAVE_extendv4hiv4di2;
  ena[20] = HAVE_extendv2siv2di2;
  ena[21] = HAVE_extendv16qiv16hi2;
  ena[22] = HAVE_extendv16qiv16si2;
  ena[23] = HAVE_extendv8hiv8si2;
  ena[24] = HAVE_extendv8hiv8di2;
  ena[25] = HAVE_extendv4siv4di2;
  ena[26] = HAVE_extendv32qiv32hi2;
  ena[27] = HAVE_extendv16hiv16si2;
  ena[28] = HAVE_extendv8siv8di2;
  ena[29] = HAVE_extendv2hfv2df2;
  ena[30] = HAVE_extendv4hfv4sf2;
  ena[31] = HAVE_extendv4hfv4df2;
  ena[32] = HAVE_extendv2sfv2df2;
  ena[33] = HAVE_extendv8hfv8sf2;
  ena[34] = HAVE_extendv8hfv8df2;
  ena[35] = HAVE_extendv4sfv4df2;
  ena[36] = HAVE_extendv16hfv16sf2;
  ena[37] = HAVE_extendv8sfv8df2;
  ena[38] = HAVE_truncsfhf2;
  ena[39] = HAVE_truncdfhf2;
  ena[40] = HAVE_truncdfsf2;
  ena[41] = HAVE_truncxfsf2;
  ena[42] = HAVE_truncxfdf2;
  ena[43] = HAVE_truncv8hiv8qi2;
  ena[44] = HAVE_truncv4siv4qi2;
  ena[45] = HAVE_truncv4siv4hi2;
  ena[46] = HAVE_truncv2div2qi2;
  ena[47] = HAVE_truncv2div2hi2;
  ena[48] = HAVE_truncv2div2si2;
  ena[49] = HAVE_truncv16hiv16qi2;
  ena[50] = HAVE_truncv8siv8qi2;
  ena[51] = HAVE_truncv8siv8hi2;
  ena[52] = HAVE_truncv4div4qi2;
  ena[53] = HAVE_truncv4div4hi2;
  ena[54] = HAVE_truncv4div4si2;
  ena[55] = HAVE_truncv32hiv32qi2;
  ena[56] = HAVE_truncv16siv16qi2;
  ena[57] = HAVE_truncv16siv16hi2;
  ena[58] = HAVE_truncv8div8qi2;
  ena[59] = HAVE_truncv8div8hi2;
  ena[60] = HAVE_truncv8div8si2;
  ena[61] = HAVE_truncv4sfv4hf2;
  ena[62] = HAVE_truncv2dfv2hf2;
  ena[63] = HAVE_truncv2dfv2sf2;
  ena[64] = HAVE_truncv8sfv8hf2;
  ena[65] = HAVE_truncv4dfv4hf2;
  ena[66] = HAVE_truncv4dfv4sf2;
  ena[67] = HAVE_truncv16sfv16hf2;
  ena[68] = HAVE_truncv8dfv8hf2;
  ena[69] = HAVE_truncv8dfv8sf2;
  ena[70] = HAVE_zero_extendqihi2;
  ena[71] = HAVE_zero_extendqisi2;
  ena[72] = HAVE_zero_extendqidi2;
  ena[73] = HAVE_zero_extendhisi2;
  ena[74] = HAVE_zero_extendhidi2;
  ena[75] = HAVE_zero_extendsidi2;
  ena[76] = HAVE_zero_extendv2qiv2di2;
  ena[77] = HAVE_zero_extendv4qiv4si2;
  ena[78] = HAVE_zero_extendv4qiv4di2;
  ena[79] = HAVE_zero_extendv2hiv2di2;
  ena[80] = HAVE_zero_extendv8qiv8hi2;
  ena[81] = HAVE_zero_extendv8qiv8si2;
  ena[82] = HAVE_zero_extendv8qiv8di2;
  ena[83] = HAVE_zero_extendv4hiv4si2;
  ena[84] = HAVE_zero_extendv4hiv4di2;
  ena[85] = HAVE_zero_extendv2siv2di2;
  ena[86] = HAVE_zero_extendv16qiv16hi2;
  ena[87] = HAVE_zero_extendv16qiv16si2;
  ena[88] = HAVE_zero_extendv8hiv8si2;
  ena[89] = HAVE_zero_extendv8hiv8di2;
  ena[90] = HAVE_zero_extendv4siv4di2;
  ena[91] = HAVE_zero_extendv32qiv32hi2;
  ena[92] = HAVE_zero_extendv16hiv16si2;
  ena[93] = HAVE_zero_extendv8siv8di2;
  ena[94] = HAVE_floathisf2;
  ena[95] = HAVE_floathidf2;
  ena[96] = HAVE_floathixf2;
  ena[97] = HAVE_floatsihf2;
  ena[98] = HAVE_floatsisf2;
  ena[99] = HAVE_floatsidf2;
  ena[100] = HAVE_floatsixf2;
  ena[101] = HAVE_floatdihf2;
  ena[102] = HAVE_floatdisf2;
  ena[103] = HAVE_floatdidf2;
  ena[104] = HAVE_floatdixf2;
  ena[105] = HAVE_floatv2siv2sf2;
  ena[106] = HAVE_floatv2siv2df2;
  ena[107] = HAVE_floatv8hiv8hf2;
  ena[108] = HAVE_floatv4siv4hf2;
  ena[109] = HAVE_floatv4siv4sf2;
  ena[110] = HAVE_floatv4siv4df2;
  ena[111] = HAVE_floatv2div2hf2;
  ena[112] = HAVE_floatv2div2sf2;
  ena[113] = HAVE_floatv2div2df2;
  ena[114] = HAVE_floatv16hiv16hf2;
  ena[115] = HAVE_floatv8siv8hf2;
  ena[116] = HAVE_floatv8siv8sf2;
  ena[117] = HAVE_floatv8siv8df2;
  ena[118] = HAVE_floatv4div4hf2;
  ena[119] = HAVE_floatv4div4sf2;
  ena[120] = HAVE_floatv4div4df2;
  ena[121] = HAVE_floatv32hiv32hf2;
  ena[122] = HAVE_floatv16siv16hf2;
  ena[123] = HAVE_floatv16siv16sf2;
  ena[124] = HAVE_floatv8div8hf2;
  ena[125] = HAVE_floatv8div8sf2;
  ena[126] = HAVE_floatv8div8df2;
  ena[127] = HAVE_floatunsqisf2;
  ena[128] = HAVE_floatunsqidf2;
  ena[129] = HAVE_floatunshisf2;
  ena[130] = HAVE_floatunshidf2;
  ena[131] = HAVE_floatunssihf2;
  ena[132] = HAVE_floatunssisf2;
  ena[133] = HAVE_floatunssidf2;
  ena[134] = HAVE_floatunssixf2;
  ena[135] = HAVE_floatunsdihf2;
  ena[136] = HAVE_floatunsdisf2;
  ena[137] = HAVE_floatunsdidf2;
  ena[138] = HAVE_floatunsv2siv2sf2;
  ena[139] = HAVE_floatunsv2siv2df2;
  ena[140] = HAVE_floatunsv8hiv8hf2;
  ena[141] = HAVE_floatunsv4siv4hf2;
  ena[142] = HAVE_floatunsv4siv4sf2;
  ena[143] = HAVE_floatunsv2div2hf2;
  ena[144] = HAVE_floatunsv2div2sf2;
  ena[145] = HAVE_floatunsv2div2df2;
  ena[146] = HAVE_floatunsv16hiv16hf2;
  ena[147] = HAVE_floatunsv8siv8hf2;
  ena[148] = HAVE_floatunsv8siv8sf2;
  ena[149] = HAVE_floatunsv4div4hf2;
  ena[150] = HAVE_floatunsv4div4sf2;
  ena[151] = HAVE_floatunsv4div4df2;
  ena[152] = HAVE_floatunsv32hiv32hf2;
  ena[153] = HAVE_floatunsv16siv16hf2;
  ena[154] = HAVE_floatunsv16siv16sf2;
  ena[155] = HAVE_floatunsv8div8hf2;
  ena[156] = HAVE_floatunsv8div8sf2;
  ena[157] = HAVE_floatunsv8div8df2;
  ena[158] = HAVE_lrintsfsi2;
  ena[159] = HAVE_lrintsfdi2;
  ena[160] = HAVE_lrintdfsi2;
  ena[161] = HAVE_lrintdfdi2;
  ena[162] = HAVE_lrintxfhi2;
  ena[163] = HAVE_lrintxfsi2;
  ena[164] = HAVE_lrintxfdi2;
  ena[165] = HAVE_lroundsfhi2;
  ena[166] = HAVE_lroundsfsi2;
  ena[167] = HAVE_lroundsfdi2;
  ena[168] = HAVE_lrounddfhi2;
  ena[169] = HAVE_lrounddfsi2;
  ena[170] = HAVE_lrounddfdi2;
  ena[171] = HAVE_lroundxfhi2;
  ena[172] = HAVE_lroundxfsi2;
  ena[173] = HAVE_lroundxfdi2;
  ena[174] = HAVE_lfloorsfsi2;
  ena[175] = HAVE_lfloorsfdi2;
  ena[176] = HAVE_lfloordfsi2;
  ena[177] = HAVE_lfloordfdi2;
  ena[178] = HAVE_lfloorxfhi2;
  ena[179] = HAVE_lfloorxfsi2;
  ena[180] = HAVE_lfloorxfdi2;
  ena[181] = HAVE_lceilsfsi2;
  ena[182] = HAVE_lceilsfdi2;
  ena[183] = HAVE_lceildfsi2;
  ena[184] = HAVE_lceildfdi2;
  ena[185] = HAVE_lceilxfhi2;
  ena[186] = HAVE_lceilxfsi2;
  ena[187] = HAVE_lceilxfdi2;
  ena[188] = HAVE_fix_trunchfsi2;
  ena[189] = HAVE_fix_trunchfdi2;
  ena[190] = HAVE_fix_truncsfhi2;
  ena[191] = HAVE_fix_truncsfsi2;
  ena[192] = HAVE_fix_truncsfdi2;
  ena[193] = HAVE_fix_truncdfhi2;
  ena[194] = HAVE_fix_truncdfsi2;
  ena[195] = HAVE_fix_truncdfdi2;
  ena[196] = HAVE_fix_truncxfhi2;
  ena[197] = HAVE_fix_truncxfsi2;
  ena[198] = HAVE_fix_truncxfdi2;
  ena[199] = HAVE_fix_truncv2hfv2di2;
  ena[200] = HAVE_fix_truncv4hfv4si2;
  ena[201] = HAVE_fix_truncv4hfv4di2;
  ena[202] = HAVE_fix_truncv2sfv2si2;
  ena[203] = HAVE_fix_truncv2sfv2di2;
  ena[204] = HAVE_fix_truncv8hfv8hi2;
  ena[205] = HAVE_fix_truncv8hfv8si2;
  ena[206] = HAVE_fix_truncv8hfv8di2;
  ena[207] = HAVE_fix_truncv4sfv4si2;
  ena[208] = HAVE_fix_truncv4sfv4di2;
  ena[209] = HAVE_fix_truncv2dfv2si2;
  ena[210] = HAVE_fix_truncv2dfv2di2;
  ena[211] = HAVE_fix_truncv16hfv16hi2;
  ena[212] = HAVE_fix_truncv16hfv16si2;
  ena[213] = HAVE_fix_truncv8sfv8si2;
  ena[214] = HAVE_fix_truncv8sfv8di2;
  ena[215] = HAVE_fix_truncv4dfv4si2;
  ena[216] = HAVE_fix_truncv4dfv4di2;
  ena[217] = HAVE_fix_truncv32hfv32hi2;
  ena[218] = HAVE_fix_truncv16sfv16si2;
  ena[219] = HAVE_fix_truncv8dfv8si2;
  ena[220] = HAVE_fix_truncv8dfv8di2;
  ena[221] = HAVE_fixuns_trunchfhi2;
  ena[222] = HAVE_fixuns_trunchfsi2;
  ena[223] = HAVE_fixuns_trunchfdi2;
  ena[224] = HAVE_fixuns_truncsfhi2;
  ena[225] = HAVE_fixuns_truncsfsi2;
  ena[226] = HAVE_fixuns_truncsfdi2;
  ena[227] = HAVE_fixuns_truncdfhi2;
  ena[228] = HAVE_fixuns_truncdfsi2;
  ena[229] = HAVE_fixuns_truncdfdi2;
  ena[230] = HAVE_fixuns_truncv2hfv2di2;
  ena[231] = HAVE_fixuns_truncv4hfv4si2;
  ena[232] = HAVE_fixuns_truncv4hfv4di2;
  ena[233] = HAVE_fixuns_truncv2sfv2si2;
  ena[234] = HAVE_fixuns_truncv2sfv2di2;
  ena[235] = HAVE_fixuns_truncv8hfv8hi2;
  ena[236] = HAVE_fixuns_truncv8hfv8si2;
  ena[237] = HAVE_fixuns_truncv8hfv8di2;
  ena[238] = HAVE_fixuns_truncv4sfv4si2;
  ena[239] = HAVE_fixuns_truncv4sfv4di2;
  ena[240] = HAVE_fixuns_truncv2dfv2si2;
  ena[241] = HAVE_fixuns_truncv2dfv2di2;
  ena[242] = HAVE_fixuns_truncv16hfv16hi2;
  ena[243] = HAVE_fixuns_truncv16hfv16si2;
  ena[244] = HAVE_fixuns_truncv8sfv8si2;
  ena[245] = HAVE_fixuns_truncv8sfv8di2;
  ena[246] = HAVE_fixuns_truncv4dfv4di2;
  ena[247] = HAVE_fixuns_truncv32hfv32hi2;
  ena[248] = HAVE_fixuns_truncv16sfv16si2;
  ena[249] = HAVE_fixuns_truncv8dfv8si2;
  ena[250] = HAVE_fixuns_truncv8dfv8di2;
  ena[251] = HAVE_mulqihi3;
  ena[252] = HAVE_mulsidi3;
  ena[253] = HAVE_mulditi3;
  ena[254] = HAVE_umulqihi3;
  ena[255] = HAVE_umulsidi3;
  ena[256] = HAVE_umulditi3;
  ena[257] = HAVE_vcondv2qiv2qi;
  ena[258] = HAVE_vcondv4qiv4qi;
  ena[259] = HAVE_vcondv2hiv2hi;
  ena[260] = HAVE_vcondv8qiv8qi;
  ena[261] = HAVE_vcondv4hiv8qi;
  ena[262] = HAVE_vcondv2siv8qi;
  ena[263] = HAVE_vcondv2sfv8qi;
  ena[264] = HAVE_vcondv8qiv4hi;
  ena[265] = HAVE_vcondv4hiv4hi;
  ena[266] = HAVE_vcondv2siv4hi;
  ena[267] = HAVE_vcondv2sfv4hi;
  ena[268] = HAVE_vcondv8qiv2si;
  ena[269] = HAVE_vcondv4hiv2si;
  ena[270] = HAVE_vcondv2siv2si;
  ena[271] = HAVE_vcondv2sfv2si;
  ena[272] = HAVE_vcondv16qiv16qi;
  ena[273] = HAVE_vcondv8hiv16qi;
  ena[274] = HAVE_vcondv4siv16qi;
  ena[275] = HAVE_vcondv2div16qi;
  ena[276] = HAVE_vcondv4sfv16qi;
  ena[277] = HAVE_vcondv2dfv16qi;
  ena[278] = HAVE_vcondv16qiv8hi;
  ena[279] = HAVE_vcondv8hiv8hi;
  ena[280] = HAVE_vcondv4siv8hi;
  ena[281] = HAVE_vcondv2div8hi;
  ena[282] = HAVE_vcondv8hfv8hi;
  ena[283] = HAVE_vcondv4sfv8hi;
  ena[284] = HAVE_vcondv2dfv8hi;
  ena[285] = HAVE_vcondv16qiv4si;
  ena[286] = HAVE_vcondv8hiv4si;
  ena[287] = HAVE_vcondv4siv4si;
  ena[288] = HAVE_vcondv2div4si;
  ena[289] = HAVE_vcondv4sfv4si;
  ena[290] = HAVE_vcondv2dfv4si;
  ena[291] = HAVE_vcondv2div2di;
  ena[292] = HAVE_vcondv2dfv2di;
  ena[293] = HAVE_vcondv32qiv32qi;
  ena[294] = HAVE_vcondv16hiv32qi;
  ena[295] = HAVE_vcondv8siv32qi;
  ena[296] = HAVE_vcondv4div32qi;
  ena[297] = HAVE_vcondv8sfv32qi;
  ena[298] = HAVE_vcondv4dfv32qi;
  ena[299] = HAVE_vcondv32qiv16hi;
  ena[300] = HAVE_vcondv16hiv16hi;
  ena[301] = HAVE_vcondv8siv16hi;
  ena[302] = HAVE_vcondv4div16hi;
  ena[303] = HAVE_vcondv16hfv16hi;
  ena[304] = HAVE_vcondv8sfv16hi;
  ena[305] = HAVE_vcondv4dfv16hi;
  ena[306] = HAVE_vcondv32qiv8si;
  ena[307] = HAVE_vcondv16hiv8si;
  ena[308] = HAVE_vcondv8siv8si;
  ena[309] = HAVE_vcondv4div8si;
  ena[310] = HAVE_vcondv8sfv8si;
  ena[311] = HAVE_vcondv4dfv8si;
  ena[312] = HAVE_vcondv32qiv4di;
  ena[313] = HAVE_vcondv16hiv4di;
  ena[314] = HAVE_vcondv8siv4di;
  ena[315] = HAVE_vcondv4div4di;
  ena[316] = HAVE_vcondv8sfv4di;
  ena[317] = HAVE_vcondv4dfv4di;
  ena[318] = HAVE_vcondv64qiv64qi;
  ena[319] = HAVE_vcondv32hiv64qi;
  ena[320] = HAVE_vcondv16siv64qi;
  ena[321] = HAVE_vcondv8div64qi;
  ena[322] = HAVE_vcondv16sfv64qi;
  ena[323] = HAVE_vcondv8dfv64qi;
  ena[324] = HAVE_vcondv64qiv32hi;
  ena[325] = HAVE_vcondv32hiv32hi;
  ena[326] = HAVE_vcondv16siv32hi;
  ena[327] = HAVE_vcondv8div32hi;
  ena[328] = HAVE_vcondv32hfv32hi;
  ena[329] = HAVE_vcondv16sfv32hi;
  ena[330] = HAVE_vcondv8dfv32hi;
  ena[331] = HAVE_vcondv64qiv16si;
  ena[332] = HAVE_vcondv32hiv16si;
  ena[333] = HAVE_vcondv16siv16si;
  ena[334] = HAVE_vcondv8div16si;
  ena[335] = HAVE_vcondv16sfv16si;
  ena[336] = HAVE_vcondv8dfv16si;
  ena[337] = HAVE_vcondv64qiv8di;
  ena[338] = HAVE_vcondv32hiv8di;
  ena[339] = HAVE_vcondv16siv8di;
  ena[340] = HAVE_vcondv8div8di;
  ena[341] = HAVE_vcondv16sfv8di;
  ena[342] = HAVE_vcondv8dfv8di;
  ena[343] = HAVE_vcondv2siv2sf;
  ena[344] = HAVE_vcondv2sfv2sf;
  ena[345] = HAVE_vcondv8hiv8hf;
  ena[346] = HAVE_vcondv8hfv8hf;
  ena[347] = HAVE_vcondv16qiv4sf;
  ena[348] = HAVE_vcondv8hiv4sf;
  ena[349] = HAVE_vcondv4siv4sf;
  ena[350] = HAVE_vcondv2div4sf;
  ena[351] = HAVE_vcondv4sfv4sf;
  ena[352] = HAVE_vcondv2dfv4sf;
  ena[353] = HAVE_vcondv16qiv2df;
  ena[354] = HAVE_vcondv8hiv2df;
  ena[355] = HAVE_vcondv4siv2df;
  ena[356] = HAVE_vcondv2div2df;
  ena[357] = HAVE_vcondv4sfv2df;
  ena[358] = HAVE_vcondv2dfv2df;
  ena[359] = HAVE_vcondv16hiv16hf;
  ena[360] = HAVE_vcondv16hfv16hf;
  ena[361] = HAVE_vcondv32qiv8sf;
  ena[362] = HAVE_vcondv16hiv8sf;
  ena[363] = HAVE_vcondv8siv8sf;
  ena[364] = HAVE_vcondv4div8sf;
  ena[365] = HAVE_vcondv8sfv8sf;
  ena[366] = HAVE_vcondv4dfv8sf;
  ena[367] = HAVE_vcondv32qiv4df;
  ena[368] = HAVE_vcondv16hiv4df;
  ena[369] = HAVE_vcondv8siv4df;
  ena[370] = HAVE_vcondv4div4df;
  ena[371] = HAVE_vcondv8sfv4df;
  ena[372] = HAVE_vcondv4dfv4df;
  ena[373] = HAVE_vcondv32hiv32hf;
  ena[374] = HAVE_vcondv32hfv32hf;
  ena[375] = HAVE_vcondv64qiv16sf;
  ena[376] = HAVE_vcondv32hiv16sf;
  ena[377] = HAVE_vcondv16siv16sf;
  ena[378] = HAVE_vcondv8div16sf;
  ena[379] = HAVE_vcondv16sfv16sf;
  ena[380] = HAVE_vcondv8dfv16sf;
  ena[381] = HAVE_vcondv64qiv8df;
  ena[382] = HAVE_vcondv32hiv8df;
  ena[383] = HAVE_vcondv16siv8df;
  ena[384] = HAVE_vcondv8div8df;
  ena[385] = HAVE_vcondv16sfv8df;
  ena[386] = HAVE_vcondv8dfv8df;
  ena[387] = HAVE_vconduv2qiv2qi;
  ena[388] = HAVE_vconduv4qiv4qi;
  ena[389] = HAVE_vconduv2hiv2hi;
  ena[390] = HAVE_vconduv8qiv8qi;
  ena[391] = HAVE_vconduv4hiv8qi;
  ena[392] = HAVE_vconduv2siv8qi;
  ena[393] = HAVE_vconduv2sfv8qi;
  ena[394] = HAVE_vconduv8qiv4hi;
  ena[395] = HAVE_vconduv4hiv4hi;
  ena[396] = HAVE_vconduv2siv4hi;
  ena[397] = HAVE_vconduv2sfv4hi;
  ena[398] = HAVE_vconduv8qiv2si;
  ena[399] = HAVE_vconduv4hiv2si;
  ena[400] = HAVE_vconduv2siv2si;
  ena[401] = HAVE_vconduv2sfv2si;
  ena[402] = HAVE_vconduv16qiv16qi;
  ena[403] = HAVE_vconduv8hiv16qi;
  ena[404] = HAVE_vconduv4siv16qi;
  ena[405] = HAVE_vconduv2div16qi;
  ena[406] = HAVE_vconduv4sfv16qi;
  ena[407] = HAVE_vconduv2dfv16qi;
  ena[408] = HAVE_vconduv16qiv8hi;
  ena[409] = HAVE_vconduv8hiv8hi;
  ena[410] = HAVE_vconduv4siv8hi;
  ena[411] = HAVE_vconduv2div8hi;
  ena[412] = HAVE_vconduv8hfv8hi;
  ena[413] = HAVE_vconduv4sfv8hi;
  ena[414] = HAVE_vconduv2dfv8hi;
  ena[415] = HAVE_vconduv16qiv4si;
  ena[416] = HAVE_vconduv8hiv4si;
  ena[417] = HAVE_vconduv4siv4si;
  ena[418] = HAVE_vconduv2div4si;
  ena[419] = HAVE_vconduv4sfv4si;
  ena[420] = HAVE_vconduv2dfv4si;
  ena[421] = HAVE_vconduv2div2di;
  ena[422] = HAVE_vconduv2dfv2di;
  ena[423] = HAVE_vconduv32qiv32qi;
  ena[424] = HAVE_vconduv16hiv32qi;
  ena[425] = HAVE_vconduv8siv32qi;
  ena[426] = HAVE_vconduv4div32qi;
  ena[427] = HAVE_vconduv8sfv32qi;
  ena[428] = HAVE_vconduv4dfv32qi;
  ena[429] = HAVE_vconduv32qiv16hi;
  ena[430] = HAVE_vconduv16hiv16hi;
  ena[431] = HAVE_vconduv8siv16hi;
  ena[432] = HAVE_vconduv4div16hi;
  ena[433] = HAVE_vconduv16hfv16hi;
  ena[434] = HAVE_vconduv8sfv16hi;
  ena[435] = HAVE_vconduv4dfv16hi;
  ena[436] = HAVE_vconduv32qiv8si;
  ena[437] = HAVE_vconduv16hiv8si;
  ena[438] = HAVE_vconduv8siv8si;
  ena[439] = HAVE_vconduv4div8si;
  ena[440] = HAVE_vconduv8sfv8si;
  ena[441] = HAVE_vconduv4dfv8si;
  ena[442] = HAVE_vconduv32qiv4di;
  ena[443] = HAVE_vconduv16hiv4di;
  ena[444] = HAVE_vconduv8siv4di;
  ena[445] = HAVE_vconduv4div4di;
  ena[446] = HAVE_vconduv8sfv4di;
  ena[447] = HAVE_vconduv4dfv4di;
  ena[448] = HAVE_vconduv64qiv64qi;
  ena[449] = HAVE_vconduv32hiv64qi;
  ena[450] = HAVE_vconduv16siv64qi;
  ena[451] = HAVE_vconduv8div64qi;
  ena[452] = HAVE_vconduv16sfv64qi;
  ena[453] = HAVE_vconduv8dfv64qi;
  ena[454] = HAVE_vconduv64qiv32hi;
  ena[455] = HAVE_vconduv32hiv32hi;
  ena[456] = HAVE_vconduv16siv32hi;
  ena[457] = HAVE_vconduv8div32hi;
  ena[458] = HAVE_vconduv32hfv32hi;
  ena[459] = HAVE_vconduv16sfv32hi;
  ena[460] = HAVE_vconduv8dfv32hi;
  ena[461] = HAVE_vconduv64qiv16si;
  ena[462] = HAVE_vconduv32hiv16si;
  ena[463] = HAVE_vconduv16siv16si;
  ena[464] = HAVE_vconduv8div16si;
  ena[465] = HAVE_vconduv16sfv16si;
  ena[466] = HAVE_vconduv8dfv16si;
  ena[467] = HAVE_vconduv64qiv8di;
  ena[468] = HAVE_vconduv32hiv8di;
  ena[469] = HAVE_vconduv16siv8di;
  ena[470] = HAVE_vconduv8div8di;
  ena[471] = HAVE_vconduv16sfv8di;
  ena[472] = HAVE_vconduv8dfv8di;
  ena[473] = HAVE_vcondeqv2div2di;
  ena[474] = HAVE_vcondeqv2dfv2di;
  ena[475] = HAVE_vcond_mask_v8hiqi;
  ena[476] = HAVE_vcond_mask_v4siqi;
  ena[477] = HAVE_vcond_mask_v2diqi;
  ena[478] = HAVE_vcond_mask_v8siqi;
  ena[479] = HAVE_vcond_mask_v4diqi;
  ena[480] = HAVE_vcond_mask_v8diqi;
  ena[481] = HAVE_vcond_mask_v8hfqi;
  ena[482] = HAVE_vcond_mask_v4sfqi;
  ena[483] = HAVE_vcond_mask_v2dfqi;
  ena[484] = HAVE_vcond_mask_v8sfqi;
  ena[485] = HAVE_vcond_mask_v4dfqi;
  ena[486] = HAVE_vcond_mask_v8dfqi;
  ena[487] = HAVE_vcond_mask_v16qihi;
  ena[488] = HAVE_vcond_mask_v16hihi;
  ena[489] = HAVE_vcond_mask_v16sihi;
  ena[490] = HAVE_vcond_mask_v16hfhi;
  ena[491] = HAVE_vcond_mask_v16sfhi;
  ena[492] = HAVE_vcond_mask_v32qisi;
  ena[493] = HAVE_vcond_mask_v32hisi;
  ena[494] = HAVE_vcond_mask_v32hfsi;
  ena[495] = HAVE_vcond_mask_v64qidi;
  ena[496] = HAVE_vcond_mask_v2qiv2qi;
  ena[497] = HAVE_vcond_mask_v4qiv4qi;
  ena[498] = HAVE_vcond_mask_v2hiv2hi;
  ena[499] = HAVE_vcond_mask_v8qiv8qi;
  ena[500] = HAVE_vcond_mask_v4hiv4hi;
  ena[501] = HAVE_vcond_mask_v2siv2si;
  ena[502] = HAVE_vcond_mask_v2sfv2si;
  ena[503] = HAVE_vcond_mask_v16qiv16qi;
  ena[504] = HAVE_vcond_mask_v8hiv8hi;
  ena[505] = HAVE_vcond_mask_v4siv4si;
  ena[506] = HAVE_vcond_mask_v4sfv4si;
  ena[507] = HAVE_vcond_mask_v2div2di;
  ena[508] = HAVE_vcond_mask_v2dfv2di;
  ena[509] = HAVE_vcond_mask_v1tiv1ti;
  ena[510] = HAVE_vcond_mask_v32qiv32qi;
  ena[511] = HAVE_vcond_mask_v16hiv16hi;
  ena[512] = HAVE_vcond_mask_v8siv8si;
  ena[513] = HAVE_vcond_mask_v8sfv8si;
  ena[514] = HAVE_vcond_mask_v4div4di;
  ena[515] = HAVE_vcond_mask_v4dfv4di;
  ena[516] = HAVE_vec_cmpv8hiqi;
  ena[517] = HAVE_vec_cmpv4siqi;
  ena[518] = HAVE_vec_cmpv2diqi;
  ena[519] = HAVE_vec_cmpv8siqi;
  ena[520] = HAVE_vec_cmpv4diqi;
  ena[521] = HAVE_vec_cmpv8diqi;
  ena[522] = HAVE_vec_cmpv8hfqi;
  ena[523] = HAVE_vec_cmpv4sfqi;
  ena[524] = HAVE_vec_cmpv2dfqi;
  ena[525] = HAVE_vec_cmpv8sfqi;
  ena[526] = HAVE_vec_cmpv4dfqi;
  ena[527] = HAVE_vec_cmpv8dfqi;
  ena[528] = HAVE_vec_cmpv16qihi;
  ena[529] = HAVE_vec_cmpv16hihi;
  ena[530] = HAVE_vec_cmpv16sihi;
  ena[531] = HAVE_vec_cmpv16hfhi;
  ena[532] = HAVE_vec_cmpv16sfhi;
  ena[533] = HAVE_vec_cmpv32qisi;
  ena[534] = HAVE_vec_cmpv32hisi;
  ena[535] = HAVE_vec_cmpv32hfsi;
  ena[536] = HAVE_vec_cmpv64qidi;
  ena[537] = HAVE_vec_cmpv2qiv2qi;
  ena[538] = HAVE_vec_cmpv4qiv4qi;
  ena[539] = HAVE_vec_cmpv2hiv2hi;
  ena[540] = HAVE_vec_cmpv8qiv8qi;
  ena[541] = HAVE_vec_cmpv4hiv4hi;
  ena[542] = HAVE_vec_cmpv2siv2si;
  ena[543] = HAVE_vec_cmpv2sfv2si;
  ena[544] = HAVE_vec_cmpv16qiv16qi;
  ena[545] = HAVE_vec_cmpv8hiv8hi;
  ena[546] = HAVE_vec_cmpv4siv4si;
  ena[547] = HAVE_vec_cmpv4sfv4si;
  ena[548] = HAVE_vec_cmpv2div2di;
  ena[549] = HAVE_vec_cmpv2dfv2di;
  ena[550] = HAVE_vec_cmpv32qiv32qi;
  ena[551] = HAVE_vec_cmpv16hiv16hi;
  ena[552] = HAVE_vec_cmpv8siv8si;
  ena[553] = HAVE_vec_cmpv8sfv8si;
  ena[554] = HAVE_vec_cmpv4div4di;
  ena[555] = HAVE_vec_cmpv4dfv4di;
  ena[556] = HAVE_vec_cmpuv8hiqi;
  ena[557] = HAVE_vec_cmpuv4siqi;
  ena[558] = HAVE_vec_cmpuv2diqi;
  ena[559] = HAVE_vec_cmpuv8siqi;
  ena[560] = HAVE_vec_cmpuv4diqi;
  ena[561] = HAVE_vec_cmpuv8diqi;
  ena[562] = HAVE_vec_cmpuv16qihi;
  ena[563] = HAVE_vec_cmpuv16hihi;
  ena[564] = HAVE_vec_cmpuv16sihi;
  ena[565] = HAVE_vec_cmpuv32qisi;
  ena[566] = HAVE_vec_cmpuv32hisi;
  ena[567] = HAVE_vec_cmpuv64qidi;
  ena[568] = HAVE_vec_cmpuv2qiv2qi;
  ena[569] = HAVE_vec_cmpuv4qiv4qi;
  ena[570] = HAVE_vec_cmpuv2hiv2hi;
  ena[571] = HAVE_vec_cmpuv8qiv8qi;
  ena[572] = HAVE_vec_cmpuv4hiv4hi;
  ena[573] = HAVE_vec_cmpuv2siv2si;
  ena[574] = HAVE_vec_cmpuv16qiv16qi;
  ena[575] = HAVE_vec_cmpuv8hiv8hi;
  ena[576] = HAVE_vec_cmpuv4siv4si;
  ena[577] = HAVE_vec_cmpuv2div2di;
  ena[578] = HAVE_vec_cmpuv32qiv32qi;
  ena[579] = HAVE_vec_cmpuv16hiv16hi;
  ena[580] = HAVE_vec_cmpuv8siv8si;
  ena[581] = HAVE_vec_cmpuv4div4di;
  ena[582] = HAVE_vec_cmpeqv2div2di;
  ena[583] = HAVE_vec_cmpeqv1tiv1ti;
  ena[584] = HAVE_maskloadv8hiqi;
  ena[585] = HAVE_maskloadv4siqi;
  ena[586] = HAVE_maskloadv2diqi;
  ena[587] = HAVE_maskloadv8siqi;
  ena[588] = HAVE_maskloadv4diqi;
  ena[589] = HAVE_maskloadv8diqi;
  ena[590] = HAVE_maskloadv8hfqi;
  ena[591] = HAVE_maskloadv4sfqi;
  ena[592] = HAVE_maskloadv2dfqi;
  ena[593] = HAVE_maskloadv8sfqi;
  ena[594] = HAVE_maskloadv4dfqi;
  ena[595] = HAVE_maskloadv8dfqi;
  ena[596] = HAVE_maskloadv16qihi;
  ena[597] = HAVE_maskloadv16hihi;
  ena[598] = HAVE_maskloadv16sihi;
  ena[599] = HAVE_maskloadv16hfhi;
  ena[600] = HAVE_maskloadv16sfhi;
  ena[601] = HAVE_maskloadv32qisi;
  ena[602] = HAVE_maskloadv32hisi;
  ena[603] = HAVE_maskloadv32hfsi;
  ena[604] = HAVE_maskloadv64qidi;
  ena[605] = HAVE_maskloadv4siv4si;
  ena[606] = HAVE_maskloadv4sfv4si;
  ena[607] = HAVE_maskloadv2div2di;
  ena[608] = HAVE_maskloadv2dfv2di;
  ena[609] = HAVE_maskloadv8siv8si;
  ena[610] = HAVE_maskloadv8sfv8si;
  ena[611] = HAVE_maskloadv4div4di;
  ena[612] = HAVE_maskloadv4dfv4di;
  ena[613] = HAVE_maskstorev8hiqi;
  ena[614] = HAVE_maskstorev4siqi;
  ena[615] = HAVE_maskstorev2diqi;
  ena[616] = HAVE_maskstorev8siqi;
  ena[617] = HAVE_maskstorev4diqi;
  ena[618] = HAVE_maskstorev8diqi;
  ena[619] = HAVE_maskstorev8hfqi;
  ena[620] = HAVE_maskstorev4sfqi;
  ena[621] = HAVE_maskstorev2dfqi;
  ena[622] = HAVE_maskstorev8sfqi;
  ena[623] = HAVE_maskstorev4dfqi;
  ena[624] = HAVE_maskstorev8dfqi;
  ena[625] = HAVE_maskstorev16qihi;
  ena[626] = HAVE_maskstorev16hihi;
  ena[627] = HAVE_maskstorev16sihi;
  ena[628] = HAVE_maskstorev16hfhi;
  ena[629] = HAVE_maskstorev16sfhi;
  ena[630] = HAVE_maskstorev32qisi;
  ena[631] = HAVE_maskstorev32hisi;
  ena[632] = HAVE_maskstorev32hfsi;
  ena[633] = HAVE_maskstorev64qidi;
  ena[634] = HAVE_maskstorev4siv4si;
  ena[635] = HAVE_maskstorev4sfv4si;
  ena[636] = HAVE_maskstorev2div2di;
  ena[637] = HAVE_maskstorev2dfv2di;
  ena[638] = HAVE_maskstorev8siv8si;
  ena[639] = HAVE_maskstorev8sfv8si;
  ena[640] = HAVE_maskstorev4div4di;
  ena[641] = HAVE_maskstorev4dfv4di;
  ena[642] = HAVE_vec_extractv4qiqi;
  ena[643] = HAVE_vec_extractv8qiqi;
  ena[644] = HAVE_vec_extractv16qiqi;
  ena[645] = HAVE_vec_extractv32qiqi;
  ena[646] = HAVE_vec_extractv64qiqi;
  ena[647] = HAVE_vec_extractv2hihi;
  ena[648] = HAVE_vec_extractv4hihi;
  ena[649] = HAVE_vec_extractv8hihi;
  ena[650] = HAVE_vec_extractv16hihi;
  ena[651] = HAVE_vec_extractv32hihi;
  ena[652] = HAVE_vec_extractv2sisi;
  ena[653] = HAVE_vec_extractv4sisi;
  ena[654] = HAVE_vec_extractv8sisi;
  ena[655] = HAVE_vec_extractv16sisi;
  ena[656] = HAVE_vec_extractv2didi;
  ena[657] = HAVE_vec_extractv4didi;
  ena[658] = HAVE_vec_extractv8didi;
  ena[659] = HAVE_vec_extractv2titi;
  ena[660] = HAVE_vec_extractv4titi;
  ena[661] = HAVE_vec_extractv8hfhf;
  ena[662] = HAVE_vec_extractv16hfhf;
  ena[663] = HAVE_vec_extractv32hfhf;
  ena[664] = HAVE_vec_extractv2sfsf;
  ena[665] = HAVE_vec_extractv4sfsf;
  ena[666] = HAVE_vec_extractv8sfsf;
  ena[667] = HAVE_vec_extractv16sfsf;
  ena[668] = HAVE_vec_extractv2dfdf;
  ena[669] = HAVE_vec_extractv4dfdf;
  ena[670] = HAVE_vec_extractv8dfdf;
  ena[671] = HAVE_vec_extractv32qiv16qi;
  ena[672] = HAVE_vec_extractv16hiv8hi;
  ena[673] = HAVE_vec_extractv8siv4si;
  ena[674] = HAVE_vec_extractv4div2di;
  ena[675] = HAVE_vec_extractv64qiv32qi;
  ena[676] = HAVE_vec_extractv32hiv16hi;
  ena[677] = HAVE_vec_extractv16siv8si;
  ena[678] = HAVE_vec_extractv8div4di;
  ena[679] = HAVE_vec_extractv16hfv8hf;
  ena[680] = HAVE_vec_extractv8sfv4sf;
  ena[681] = HAVE_vec_extractv4dfv2df;
  ena[682] = HAVE_vec_extractv32hfv16hf;
  ena[683] = HAVE_vec_extractv16sfv8sf;
  ena[684] = HAVE_vec_extractv8dfv4df;
  ena[685] = HAVE_vec_initv4qiqi;
  ena[686] = HAVE_vec_initv8qiqi;
  ena[687] = HAVE_vec_initv16qiqi;
  ena[688] = HAVE_vec_initv32qiqi;
  ena[689] = HAVE_vec_initv64qiqi;
  ena[690] = HAVE_vec_initv2hihi;
  ena[691] = HAVE_vec_initv4hihi;
  ena[692] = HAVE_vec_initv8hihi;
  ena[693] = HAVE_vec_initv16hihi;
  ena[694] = HAVE_vec_initv32hihi;
  ena[695] = HAVE_vec_initv2sisi;
  ena[696] = HAVE_vec_initv4sisi;
  ena[697] = HAVE_vec_initv8sisi;
  ena[698] = HAVE_vec_initv16sisi;
  ena[699] = HAVE_vec_initv2didi;
  ena[700] = HAVE_vec_initv4didi;
  ena[701] = HAVE_vec_initv8didi;
  ena[702] = HAVE_vec_initv2titi;
  ena[703] = HAVE_vec_initv4titi;
  ena[704] = HAVE_vec_initv8hfhf;
  ena[705] = HAVE_vec_initv16hfhf;
  ena[706] = HAVE_vec_initv32hfhf;
  ena[707] = HAVE_vec_initv2sfsf;
  ena[708] = HAVE_vec_initv4sfsf;
  ena[709] = HAVE_vec_initv8sfsf;
  ena[710] = HAVE_vec_initv16sfsf;
  ena[711] = HAVE_vec_initv2dfdf;
  ena[712] = HAVE_vec_initv4dfdf;
  ena[713] = HAVE_vec_initv8dfdf;
  ena[714] = HAVE_vec_initv16qiv8qi;
  ena[715] = HAVE_vec_initv8hiv4hi;
  ena[716] = HAVE_vec_initv4siv2si;
  ena[717] = HAVE_vec_initv32qiv16qi;
  ena[718] = HAVE_vec_initv16hiv8hi;
  ena[719] = HAVE_vec_initv8siv4si;
  ena[720] = HAVE_vec_initv4div2di;
  ena[721] = HAVE_vec_initv64qiv32qi;
  ena[722] = HAVE_vec_initv32hiv16hi;
  ena[723] = HAVE_vec_initv16siv8si;
  ena[724] = HAVE_vec_initv8div4di;
  ena[725] = HAVE_vec_initv4tiv2ti;
  ena[726] = HAVE_vec_initv8hfv4hf;
  ena[727] = HAVE_vec_initv4sfv2sf;
  ena[728] = HAVE_vec_initv16hfv8hf;
  ena[729] = HAVE_vec_initv8sfv4sf;
  ena[730] = HAVE_vec_initv4dfv2df;
  ena[731] = HAVE_vec_initv32hfv16hf;
  ena[732] = HAVE_vec_initv16sfv8sf;
  ena[733] = HAVE_vec_initv8dfv4df;
  ena[734] = HAVE_addqi3;
  ena[735] = HAVE_addhi3;
  ena[736] = HAVE_addsi3;
  ena[737] = HAVE_adddi3;
  ena[738] = HAVE_addti3;
  ena[739] = HAVE_addhf3;
  ena[740] = HAVE_addsf3;
  ena[741] = HAVE_adddf3;
  ena[742] = HAVE_addxf3;
  ena[743] = HAVE_addv2qi3;
  ena[744] = HAVE_addv4qi3;
  ena[745] = HAVE_addv2hi3;
  ena[746] = HAVE_addv8qi3;
  ena[747] = HAVE_addv4hi3;
  ena[748] = HAVE_addv2si3;
  ena[749] = HAVE_addv16qi3;
  ena[750] = HAVE_addv8hi3;
  ena[751] = HAVE_addv4si3;
  ena[752] = HAVE_addv2di3;
  ena[753] = HAVE_addv32qi3;
  ena[754] = HAVE_addv16hi3;
  ena[755] = HAVE_addv8si3;
  ena[756] = HAVE_addv4di3;
  ena[757] = HAVE_addv64qi3;
  ena[758] = HAVE_addv32hi3;
  ena[759] = HAVE_addv16si3;
  ena[760] = HAVE_addv8di3;
  ena[761] = HAVE_addv2hf3;
  ena[762] = HAVE_addv4hf3;
  ena[763] = HAVE_addv2sf3;
  ena[764] = HAVE_addv8hf3;
  ena[765] = HAVE_addv4sf3;
  ena[766] = HAVE_addv2df3;
  ena[767] = HAVE_addv16hf3;
  ena[768] = HAVE_addv8sf3;
  ena[769] = HAVE_addv4df3;
  ena[770] = HAVE_addv32hf3;
  ena[771] = HAVE_addv16sf3;
  ena[772] = HAVE_addv8df3;
  ena[773] = HAVE_subqi3;
  ena[774] = HAVE_subhi3;
  ena[775] = HAVE_subsi3;
  ena[776] = HAVE_subdi3;
  ena[777] = HAVE_subti3;
  ena[778] = HAVE_subhf3;
  ena[779] = HAVE_subsf3;
  ena[780] = HAVE_subdf3;
  ena[781] = HAVE_subxf3;
  ena[782] = HAVE_subv2qi3;
  ena[783] = HAVE_subv4qi3;
  ena[784] = HAVE_subv2hi3;
  ena[785] = HAVE_subv8qi3;
  ena[786] = HAVE_subv4hi3;
  ena[787] = HAVE_subv2si3;
  ena[788] = HAVE_subv16qi3;
  ena[789] = HAVE_subv8hi3;
  ena[790] = HAVE_subv4si3;
  ena[791] = HAVE_subv2di3;
  ena[792] = HAVE_subv32qi3;
  ena[793] = HAVE_subv16hi3;
  ena[794] = HAVE_subv8si3;
  ena[795] = HAVE_subv4di3;
  ena[796] = HAVE_subv64qi3;
  ena[797] = HAVE_subv32hi3;
  ena[798] = HAVE_subv16si3;
  ena[799] = HAVE_subv8di3;
  ena[800] = HAVE_subv2hf3;
  ena[801] = HAVE_subv4hf3;
  ena[802] = HAVE_subv2sf3;
  ena[803] = HAVE_subv8hf3;
  ena[804] = HAVE_subv4sf3;
  ena[805] = HAVE_subv2df3;
  ena[806] = HAVE_subv16hf3;
  ena[807] = HAVE_subv8sf3;
  ena[808] = HAVE_subv4df3;
  ena[809] = HAVE_subv32hf3;
  ena[810] = HAVE_subv16sf3;
  ena[811] = HAVE_subv8df3;
  ena[812] = HAVE_mulqi3;
  ena[813] = HAVE_mulhi3;
  ena[814] = HAVE_mulsi3;
  ena[815] = HAVE_muldi3;
  ena[816] = HAVE_mulhf3;
  ena[817] = HAVE_mulsf3;
  ena[818] = HAVE_muldf3;
  ena[819] = HAVE_mulxf3;
  ena[820] = HAVE_mulv2hi3;
  ena[821] = HAVE_mulv8qi3;
  ena[822] = HAVE_mulv4hi3;
  ena[823] = HAVE_mulv16qi3;
  ena[824] = HAVE_mulv8hi3;
  ena[825] = HAVE_mulv4si3;
  ena[826] = HAVE_mulv2di3;
  ena[827] = HAVE_mulv32qi3;
  ena[828] = HAVE_mulv16hi3;
  ena[829] = HAVE_mulv8si3;
  ena[830] = HAVE_mulv4di3;
  ena[831] = HAVE_mulv64qi3;
  ena[832] = HAVE_mulv32hi3;
  ena[833] = HAVE_mulv16si3;
  ena[834] = HAVE_mulv8di3;
  ena[835] = HAVE_mulv2hf3;
  ena[836] = HAVE_mulv4hf3;
  ena[837] = HAVE_mulv2sf3;
  ena[838] = HAVE_mulv8hf3;
  ena[839] = HAVE_mulv4sf3;
  ena[840] = HAVE_mulv2df3;
  ena[841] = HAVE_mulv16hf3;
  ena[842] = HAVE_mulv8sf3;
  ena[843] = HAVE_mulv4df3;
  ena[844] = HAVE_mulv32hf3;
  ena[845] = HAVE_mulv16sf3;
  ena[846] = HAVE_mulv8df3;
  ena[847] = HAVE_divhf3;
  ena[848] = HAVE_divsf3;
  ena[849] = HAVE_divdf3;
  ena[850] = HAVE_divxf3;
  ena[851] = HAVE_divv2hf3;
  ena[852] = HAVE_divv4hf3;
  ena[853] = HAVE_divv2sf3;
  ena[854] = HAVE_divv8hf3;
  ena[855] = HAVE_divv4sf3;
  ena[856] = HAVE_divv2df3;
  ena[857] = HAVE_divv16hf3;
  ena[858] = HAVE_divv8sf3;
  ena[859] = HAVE_divv4df3;
  ena[860] = HAVE_divv32hf3;
  ena[861] = HAVE_divv16sf3;
  ena[862] = HAVE_divv8df3;
  ena[863] = HAVE_divmodqi4;
  ena[864] = HAVE_divmodhi4;
  ena[865] = HAVE_divmodsi4;
  ena[866] = HAVE_divmoddi4;
  ena[867] = HAVE_udivmodqi4;
  ena[868] = HAVE_udivmodhi4;
  ena[869] = HAVE_udivmodsi4;
  ena[870] = HAVE_udivmoddi4;
  ena[871] = HAVE_andqi3;
  ena[872] = HAVE_andhi3;
  ena[873] = HAVE_andsi3;
  ena[874] = HAVE_anddi3;
  ena[875] = HAVE_andsf3;
  ena[876] = HAVE_anddf3;
  ena[877] = HAVE_andtf3;
  ena[878] = HAVE_andv2qi3;
  ena[879] = HAVE_andv4qi3;
  ena[880] = HAVE_andv2hi3;
  ena[881] = HAVE_andv8qi3;
  ena[882] = HAVE_andv4hi3;
  ena[883] = HAVE_andv2si3;
  ena[884] = HAVE_andv16qi3;
  ena[885] = HAVE_andv8hi3;
  ena[886] = HAVE_andv4si3;
  ena[887] = HAVE_andv2di3;
  ena[888] = HAVE_andv1ti3;
  ena[889] = HAVE_andv32qi3;
  ena[890] = HAVE_andv16hi3;
  ena[891] = HAVE_andv8si3;
  ena[892] = HAVE_andv4di3;
  ena[893] = HAVE_andv64qi3;
  ena[894] = HAVE_andv32hi3;
  ena[895] = HAVE_andv16si3;
  ena[896] = HAVE_andv8di3;
  ena[897] = HAVE_andv2sf3;
  ena[898] = HAVE_andv8hf3;
  ena[899] = HAVE_andv4sf3;
  ena[900] = HAVE_andv2df3;
  ena[901] = HAVE_andv16hf3;
  ena[902] = HAVE_andv8sf3;
  ena[903] = HAVE_andv4df3;
  ena[904] = HAVE_andv32hf3;
  ena[905] = HAVE_andv16sf3;
  ena[906] = HAVE_andv8df3;
  ena[907] = HAVE_iorqi3;
  ena[908] = HAVE_iorhi3;
  ena[909] = HAVE_iorsi3;
  ena[910] = HAVE_iordi3;
  ena[911] = HAVE_iorsf3;
  ena[912] = HAVE_iordf3;
  ena[913] = HAVE_iortf3;
  ena[914] = HAVE_iorv2qi3;
  ena[915] = HAVE_iorv4qi3;
  ena[916] = HAVE_iorv2hi3;
  ena[917] = HAVE_iorv8qi3;
  ena[918] = HAVE_iorv4hi3;
  ena[919] = HAVE_iorv2si3;
  ena[920] = HAVE_iorv16qi3;
  ena[921] = HAVE_iorv8hi3;
  ena[922] = HAVE_iorv4si3;
  ena[923] = HAVE_iorv2di3;
  ena[924] = HAVE_iorv1ti3;
  ena[925] = HAVE_iorv32qi3;
  ena[926] = HAVE_iorv16hi3;
  ena[927] = HAVE_iorv8si3;
  ena[928] = HAVE_iorv4di3;
  ena[929] = HAVE_iorv64qi3;
  ena[930] = HAVE_iorv32hi3;
  ena[931] = HAVE_iorv16si3;
  ena[932] = HAVE_iorv8di3;
  ena[933] = HAVE_iorv2sf3;
  ena[934] = HAVE_iorv8hf3;
  ena[935] = HAVE_iorv4sf3;
  ena[936] = HAVE_iorv2df3;
  ena[937] = HAVE_iorv16hf3;
  ena[938] = HAVE_iorv8sf3;
  ena[939] = HAVE_iorv4df3;
  ena[940] = HAVE_iorv32hf3;
  ena[941] = HAVE_iorv16sf3;
  ena[942] = HAVE_iorv8df3;
  ena[943] = HAVE_xorqi3;
  ena[944] = HAVE_xorhi3;
  ena[945] = HAVE_xorsi3;
  ena[946] = HAVE_xordi3;
  ena[947] = HAVE_xorsf3;
  ena[948] = HAVE_xordf3;
  ena[949] = HAVE_xortf3;
  ena[950] = HAVE_xorv2qi3;
  ena[951] = HAVE_xorv4qi3;
  ena[952] = HAVE_xorv2hi3;
  ena[953] = HAVE_xorv8qi3;
  ena[954] = HAVE_xorv4hi3;
  ena[955] = HAVE_xorv2si3;
  ena[956] = HAVE_xorv16qi3;
  ena[957] = HAVE_xorv8hi3;
  ena[958] = HAVE_xorv4si3;
  ena[959] = HAVE_xorv2di3;
  ena[960] = HAVE_xorv1ti3;
  ena[961] = HAVE_xorv32qi3;
  ena[962] = HAVE_xorv16hi3;
  ena[963] = HAVE_xorv8si3;
  ena[964] = HAVE_xorv4di3;
  ena[965] = HAVE_xorv64qi3;
  ena[966] = HAVE_xorv32hi3;
  ena[967] = HAVE_xorv16si3;
  ena[968] = HAVE_xorv8di3;
  ena[969] = HAVE_xorv2sf3;
  ena[970] = HAVE_xorv8hf3;
  ena[971] = HAVE_xorv4sf3;
  ena[972] = HAVE_xorv2df3;
  ena[973] = HAVE_xorv16hf3;
  ena[974] = HAVE_xorv8sf3;
  ena[975] = HAVE_xorv4df3;
  ena[976] = HAVE_xorv32hf3;
  ena[977] = HAVE_xorv16sf3;
  ena[978] = HAVE_xorv8df3;
  ena[979] = HAVE_ashlqi3;
  ena[980] = HAVE_ashlhi3;
  ena[981] = HAVE_ashlsi3;
  ena[982] = HAVE_ashldi3;
  ena[983] = HAVE_ashlti3;
  ena[984] = HAVE_ashlv2qi3;
  ena[985] = HAVE_ashlv2hi3;
  ena[986] = HAVE_ashlv4hi3;
  ena[987] = HAVE_ashlv2si3;
  ena[988] = HAVE_ashlv16qi3;
  ena[989] = HAVE_ashlv8hi3;
  ena[990] = HAVE_ashlv4si3;
  ena[991] = HAVE_ashlv2di3;
  ena[992] = HAVE_ashlv1ti3;
  ena[993] = HAVE_ashlv32qi3;
  ena[994] = HAVE_ashlv16hi3;
  ena[995] = HAVE_ashlv8si3;
  ena[996] = HAVE_ashlv4di3;
  ena[997] = HAVE_ashlv64qi3;
  ena[998] = HAVE_ashlv32hi3;
  ena[999] = HAVE_ashlv16si3;
  ena[1000] = HAVE_ashlv8di3;
  ena[1001] = HAVE_ashrqi3;
  ena[1002] = HAVE_ashrhi3;
  ena[1003] = HAVE_ashrsi3;
  ena[1004] = HAVE_ashrdi3;
  ena[1005] = HAVE_ashrti3;
  ena[1006] = HAVE_ashrv2qi3;
  ena[1007] = HAVE_ashrv2hi3;
  ena[1008] = HAVE_ashrv4hi3;
  ena[1009] = HAVE_ashrv2si3;
  ena[1010] = HAVE_ashrv16qi3;
  ena[1011] = HAVE_ashrv8hi3;
  ena[1012] = HAVE_ashrv4si3;
  ena[1013] = HAVE_ashrv2di3;
  ena[1014] = HAVE_ashrv1ti3;
  ena[1015] = HAVE_ashrv32qi3;
  ena[1016] = HAVE_ashrv16hi3;
  ena[1017] = HAVE_ashrv8si3;
  ena[1018] = HAVE_ashrv4di3;
  ena[1019] = HAVE_ashrv64qi3;
  ena[1020] = HAVE_ashrv32hi3;
  ena[1021] = HAVE_ashrv16si3;
  ena[1022] = HAVE_ashrv8di3;
  ena[1023] = HAVE_lshrqi3;
  ena[1024] = HAVE_lshrhi3;
  ena[1025] = HAVE_lshrsi3;
  ena[1026] = HAVE_lshrdi3;
  ena[1027] = HAVE_lshrti3;
  ena[1028] = HAVE_lshrv2qi3;
  ena[1029] = HAVE_lshrv2hi3;
  ena[1030] = HAVE_lshrv4hi3;
  ena[1031] = HAVE_lshrv2si3;
  ena[1032] = HAVE_lshrv16qi3;
  ena[1033] = HAVE_lshrv8hi3;
  ena[1034] = HAVE_lshrv4si3;
  ena[1035] = HAVE_lshrv2di3;
  ena[1036] = HAVE_lshrv1ti3;
  ena[1037] = HAVE_lshrv32qi3;
  ena[1038] = HAVE_lshrv16hi3;
  ena[1039] = HAVE_lshrv8si3;
  ena[1040] = HAVE_lshrv4di3;
  ena[1041] = HAVE_lshrv64qi3;
  ena[1042] = HAVE_lshrv32hi3;
  ena[1043] = HAVE_lshrv16si3;
  ena[1044] = HAVE_lshrv8di3;
  ena[1045] = HAVE_rotlqi3;
  ena[1046] = HAVE_rotlhi3;
  ena[1047] = HAVE_rotlsi3;
  ena[1048] = HAVE_rotldi3;
  ena[1049] = HAVE_rotlti3;
  ena[1050] = HAVE_rotlv16qi3;
  ena[1051] = HAVE_rotlv8hi3;
  ena[1052] = HAVE_rotlv4si3;
  ena[1053] = HAVE_rotlv2di3;
  ena[1054] = HAVE_rotlv1ti3;
  ena[1055] = HAVE_rotrqi3;
  ena[1056] = HAVE_rotrhi3;
  ena[1057] = HAVE_rotrsi3;
  ena[1058] = HAVE_rotrdi3;
  ena[1059] = HAVE_rotrti3;
  ena[1060] = HAVE_rotrv16qi3;
  ena[1061] = HAVE_rotrv8hi3;
  ena[1062] = HAVE_rotrv4si3;
  ena[1063] = HAVE_rotrv2di3;
  ena[1064] = HAVE_rotrv1ti3;
  ena[1065] = HAVE_vashlv8qi3;
  ena[1066] = HAVE_vashlv16qi3;
  ena[1067] = HAVE_vashlv8hi3;
  ena[1068] = HAVE_vashlv4si3;
  ena[1069] = HAVE_vashlv2di3;
  ena[1070] = HAVE_vashlv32qi3;
  ena[1071] = HAVE_vashlv16hi3;
  ena[1072] = HAVE_vashlv8si3;
  ena[1073] = HAVE_vashlv4di3;
  ena[1074] = HAVE_vashlv64qi3;
  ena[1075] = HAVE_vashlv32hi3;
  ena[1076] = HAVE_vashlv16si3;
  ena[1077] = HAVE_vashlv8di3;
  ena[1078] = HAVE_vashrv8qi3;
  ena[1079] = HAVE_vashrv16qi3;
  ena[1080] = HAVE_vashrv8hi3;
  ena[1081] = HAVE_vashrv4si3;
  ena[1082] = HAVE_vashrv2di3;
  ena[1083] = HAVE_vashrv32qi3;
  ena[1084] = HAVE_vashrv16hi3;
  ena[1085] = HAVE_vashrv8si3;
  ena[1086] = HAVE_vashrv4di3;
  ena[1087] = HAVE_vashrv64qi3;
  ena[1088] = HAVE_vashrv32hi3;
  ena[1089] = HAVE_vashrv16si3;
  ena[1090] = HAVE_vashrv8di3;
  ena[1091] = HAVE_vlshrv8qi3;
  ena[1092] = HAVE_vlshrv16qi3;
  ena[1093] = HAVE_vlshrv8hi3;
  ena[1094] = HAVE_vlshrv4si3;
  ena[1095] = HAVE_vlshrv2di3;
  ena[1096] = HAVE_vlshrv32qi3;
  ena[1097] = HAVE_vlshrv16hi3;
  ena[1098] = HAVE_vlshrv8si3;
  ena[1099] = HAVE_vlshrv4di3;
  ena[1100] = HAVE_vlshrv64qi3;
  ena[1101] = HAVE_vlshrv32hi3;
  ena[1102] = HAVE_vlshrv16si3;
  ena[1103] = HAVE_vlshrv8di3;
  ena[1104] = HAVE_vrotlv16qi3;
  ena[1105] = HAVE_vrotlv8hi3;
  ena[1106] = HAVE_vrotlv4si3;
  ena[1107] = HAVE_vrotlv2di3;
  ena[1108] = HAVE_vrotrv16qi3;
  ena[1109] = HAVE_vrotrv8hi3;
  ena[1110] = HAVE_vrotrv4si3;
  ena[1111] = HAVE_vrotrv2di3;
  ena[1112] = HAVE_sminqi3;
  ena[1113] = HAVE_sminhi3;
  ena[1114] = HAVE_sminsi3;
  ena[1115] = HAVE_smindi3;
  ena[1116] = HAVE_sminti3;
  ena[1117] = HAVE_sminhf3;
  ena[1118] = HAVE_sminsf3;
  ena[1119] = HAVE_smindf3;
  ena[1120] = HAVE_sminv2qi3;
  ena[1121] = HAVE_sminv4qi3;
  ena[1122] = HAVE_sminv2hi3;
  ena[1123] = HAVE_sminv8qi3;
  ena[1124] = HAVE_sminv4hi3;
  ena[1125] = HAVE_sminv2si3;
  ena[1126] = HAVE_sminv16qi3;
  ena[1127] = HAVE_sminv8hi3;
  ena[1128] = HAVE_sminv4si3;
  ena[1129] = HAVE_sminv2di3;
  ena[1130] = HAVE_sminv32qi3;
  ena[1131] = HAVE_sminv16hi3;
  ena[1132] = HAVE_sminv8si3;
  ena[1133] = HAVE_sminv4di3;
  ena[1134] = HAVE_sminv64qi3;
  ena[1135] = HAVE_sminv32hi3;
  ena[1136] = HAVE_sminv16si3;
  ena[1137] = HAVE_sminv8di3;
  ena[1138] = HAVE_sminv2sf3;
  ena[1139] = HAVE_sminv8hf3;
  ena[1140] = HAVE_sminv4sf3;
  ena[1141] = HAVE_sminv2df3;
  ena[1142] = HAVE_sminv16hf3;
  ena[1143] = HAVE_sminv8sf3;
  ena[1144] = HAVE_sminv4df3;
  ena[1145] = HAVE_sminv32hf3;
  ena[1146] = HAVE_sminv16sf3;
  ena[1147] = HAVE_sminv8df3;
  ena[1148] = HAVE_smaxqi3;
  ena[1149] = HAVE_smaxhi3;
  ena[1150] = HAVE_smaxsi3;
  ena[1151] = HAVE_smaxdi3;
  ena[1152] = HAVE_smaxti3;
  ena[1153] = HAVE_smaxhf3;
  ena[1154] = HAVE_smaxsf3;
  ena[1155] = HAVE_smaxdf3;
  ena[1156] = HAVE_smaxv2qi3;
  ena[1157] = HAVE_smaxv4qi3;
  ena[1158] = HAVE_smaxv2hi3;
  ena[1159] = HAVE_smaxv8qi3;
  ena[1160] = HAVE_smaxv4hi3;
  ena[1161] = HAVE_smaxv2si3;
  ena[1162] = HAVE_smaxv16qi3;
  ena[1163] = HAVE_smaxv8hi3;
  ena[1164] = HAVE_smaxv4si3;
  ena[1165] = HAVE_smaxv2di3;
  ena[1166] = HAVE_smaxv32qi3;
  ena[1167] = HAVE_smaxv16hi3;
  ena[1168] = HAVE_smaxv8si3;
  ena[1169] = HAVE_smaxv4di3;
  ena[1170] = HAVE_smaxv64qi3;
  ena[1171] = HAVE_smaxv32hi3;
  ena[1172] = HAVE_smaxv16si3;
  ena[1173] = HAVE_smaxv8di3;
  ena[1174] = HAVE_smaxv2sf3;
  ena[1175] = HAVE_smaxv8hf3;
  ena[1176] = HAVE_smaxv4sf3;
  ena[1177] = HAVE_smaxv2df3;
  ena[1178] = HAVE_smaxv16hf3;
  ena[1179] = HAVE_smaxv8sf3;
  ena[1180] = HAVE_smaxv4df3;
  ena[1181] = HAVE_smaxv32hf3;
  ena[1182] = HAVE_smaxv16sf3;
  ena[1183] = HAVE_smaxv8df3;
  ena[1184] = HAVE_uminqi3;
  ena[1185] = HAVE_uminhi3;
  ena[1186] = HAVE_uminsi3;
  ena[1187] = HAVE_umindi3;
  ena[1188] = HAVE_uminti3;
  ena[1189] = HAVE_uminv2qi3;
  ena[1190] = HAVE_uminv4qi3;
  ena[1191] = HAVE_uminv2hi3;
  ena[1192] = HAVE_uminv8qi3;
  ena[1193] = HAVE_uminv4hi3;
  ena[1194] = HAVE_uminv2si3;
  ena[1195] = HAVE_uminv16qi3;
  ena[1196] = HAVE_uminv8hi3;
  ena[1197] = HAVE_uminv4si3;
  ena[1198] = HAVE_uminv2di3;
  ena[1199] = HAVE_uminv32qi3;
  ena[1200] = HAVE_uminv16hi3;
  ena[1201] = HAVE_uminv8si3;
  ena[1202] = HAVE_uminv4di3;
  ena[1203] = HAVE_uminv64qi3;
  ena[1204] = HAVE_uminv32hi3;
  ena[1205] = HAVE_uminv16si3;
  ena[1206] = HAVE_uminv8di3;
  ena[1207] = HAVE_umaxqi3;
  ena[1208] = HAVE_umaxhi3;
  ena[1209] = HAVE_umaxsi3;
  ena[1210] = HAVE_umaxdi3;
  ena[1211] = HAVE_umaxti3;
  ena[1212] = HAVE_umaxv2qi3;
  ena[1213] = HAVE_umaxv4qi3;
  ena[1214] = HAVE_umaxv2hi3;
  ena[1215] = HAVE_umaxv8qi3;
  ena[1216] = HAVE_umaxv4hi3;
  ena[1217] = HAVE_umaxv2si3;
  ena[1218] = HAVE_umaxv16qi3;
  ena[1219] = HAVE_umaxv8hi3;
  ena[1220] = HAVE_umaxv4si3;
  ena[1221] = HAVE_umaxv2di3;
  ena[1222] = HAVE_umaxv32qi3;
  ena[1223] = HAVE_umaxv16hi3;
  ena[1224] = HAVE_umaxv8si3;
  ena[1225] = HAVE_umaxv4di3;
  ena[1226] = HAVE_umaxv64qi3;
  ena[1227] = HAVE_umaxv32hi3;
  ena[1228] = HAVE_umaxv16si3;
  ena[1229] = HAVE_umaxv8di3;
  ena[1230] = HAVE_negqi2;
  ena[1231] = HAVE_neghi2;
  ena[1232] = HAVE_negsi2;
  ena[1233] = HAVE_negdi2;
  ena[1234] = HAVE_negti2;
  ena[1235] = HAVE_neghf2;
  ena[1236] = HAVE_negsf2;
  ena[1237] = HAVE_negdf2;
  ena[1238] = HAVE_negxf2;
  ena[1239] = HAVE_negtf2;
  ena[1240] = HAVE_negv2qi2;
  ena[1241] = HAVE_negv4qi2;
  ena[1242] = HAVE_negv2hi2;
  ena[1243] = HAVE_negv8qi2;
  ena[1244] = HAVE_negv4hi2;
  ena[1245] = HAVE_negv2si2;
  ena[1246] = HAVE_negv16qi2;
  ena[1247] = HAVE_negv8hi2;
  ena[1248] = HAVE_negv4si2;
  ena[1249] = HAVE_negv2di2;
  ena[1250] = HAVE_negv32qi2;
  ena[1251] = HAVE_negv16hi2;
  ena[1252] = HAVE_negv8si2;
  ena[1253] = HAVE_negv4di2;
  ena[1254] = HAVE_negv64qi2;
  ena[1255] = HAVE_negv32hi2;
  ena[1256] = HAVE_negv16si2;
  ena[1257] = HAVE_negv8di2;
  ena[1258] = HAVE_negv2sf2;
  ena[1259] = HAVE_negv8hf2;
  ena[1260] = HAVE_negv4sf2;
  ena[1261] = HAVE_negv2df2;
  ena[1262] = HAVE_negv16hf2;
  ena[1263] = HAVE_negv8sf2;
  ena[1264] = HAVE_negv4df2;
  ena[1265] = HAVE_negv32hf2;
  ena[1266] = HAVE_negv16sf2;
  ena[1267] = HAVE_negv8df2;
  ena[1268] = HAVE_absqi2;
  ena[1269] = HAVE_abshi2;
  ena[1270] = HAVE_abssi2;
  ena[1271] = HAVE_absdi2;
  ena[1272] = HAVE_absti2;
  ena[1273] = HAVE_abshf2;
  ena[1274] = HAVE_abssf2;
  ena[1275] = HAVE_absdf2;
  ena[1276] = HAVE_absxf2;
  ena[1277] = HAVE_abstf2;
  ena[1278] = HAVE_absv2qi2;
  ena[1279] = HAVE_absv4qi2;
  ena[1280] = HAVE_absv2hi2;
  ena[1281] = HAVE_absv8qi2;
  ena[1282] = HAVE_absv4hi2;
  ena[1283] = HAVE_absv2si2;
  ena[1284] = HAVE_absv16qi2;
  ena[1285] = HAVE_absv8hi2;
  ena[1286] = HAVE_absv4si2;
  ena[1287] = HAVE_absv2di2;
  ena[1288] = HAVE_absv32qi2;
  ena[1289] = HAVE_absv16hi2;
  ena[1290] = HAVE_absv8si2;
  ena[1291] = HAVE_absv4di2;
  ena[1292] = HAVE_absv64qi2;
  ena[1293] = HAVE_absv32hi2;
  ena[1294] = HAVE_absv16si2;
  ena[1295] = HAVE_absv8di2;
  ena[1296] = HAVE_absv2sf2;
  ena[1297] = HAVE_absv8hf2;
  ena[1298] = HAVE_absv4sf2;
  ena[1299] = HAVE_absv2df2;
  ena[1300] = HAVE_absv16hf2;
  ena[1301] = HAVE_absv8sf2;
  ena[1302] = HAVE_absv4df2;
  ena[1303] = HAVE_absv32hf2;
  ena[1304] = HAVE_absv16sf2;
  ena[1305] = HAVE_absv8df2;
  ena[1306] = HAVE_one_cmplqi2;
  ena[1307] = HAVE_one_cmplhi2;
  ena[1308] = HAVE_one_cmplsi2;
  ena[1309] = HAVE_one_cmpldi2;
  ena[1310] = HAVE_one_cmplv2qi2;
  ena[1311] = HAVE_one_cmplv4qi2;
  ena[1312] = HAVE_one_cmplv2hi2;
  ena[1313] = HAVE_one_cmplv8qi2;
  ena[1314] = HAVE_one_cmplv4hi2;
  ena[1315] = HAVE_one_cmplv2si2;
  ena[1316] = HAVE_one_cmplv16qi2;
  ena[1317] = HAVE_one_cmplv8hi2;
  ena[1318] = HAVE_one_cmplv4si2;
  ena[1319] = HAVE_one_cmplv2di2;
  ena[1320] = HAVE_one_cmplv1ti2;
  ena[1321] = HAVE_one_cmplv32qi2;
  ena[1322] = HAVE_one_cmplv16hi2;
  ena[1323] = HAVE_one_cmplv8si2;
  ena[1324] = HAVE_one_cmplv4di2;
  ena[1325] = HAVE_one_cmplv64qi2;
  ena[1326] = HAVE_one_cmplv32hi2;
  ena[1327] = HAVE_one_cmplv16si2;
  ena[1328] = HAVE_one_cmplv8di2;
  ena[1329] = HAVE_bswaphi2;
  ena[1330] = HAVE_bswapsi2;
  ena[1331] = HAVE_bswapdi2;
  ena[1332] = HAVE_ffssi2;
  ena[1333] = HAVE_ffsdi2;
  ena[1334] = HAVE_clzsi2;
  ena[1335] = HAVE_clzdi2;
  ena[1336] = HAVE_clzv4si2;
  ena[1337] = HAVE_clzv2di2;
  ena[1338] = HAVE_clzv8si2;
  ena[1339] = HAVE_clzv4di2;
  ena[1340] = HAVE_clzv16si2;
  ena[1341] = HAVE_clzv8di2;
  ena[1342] = HAVE_ctzsi2;
  ena[1343] = HAVE_ctzdi2;
  ena[1344] = HAVE_popcounthi2;
  ena[1345] = HAVE_popcountsi2;
  ena[1346] = HAVE_popcountdi2;
  ena[1347] = HAVE_popcountv16qi2;
  ena[1348] = HAVE_popcountv8hi2;
  ena[1349] = HAVE_popcountv4si2;
  ena[1350] = HAVE_popcountv2di2;
  ena[1351] = HAVE_popcountv32qi2;
  ena[1352] = HAVE_popcountv16hi2;
  ena[1353] = HAVE_popcountv8si2;
  ena[1354] = HAVE_popcountv4di2;
  ena[1355] = HAVE_popcountv64qi2;
  ena[1356] = HAVE_popcountv32hi2;
  ena[1357] = HAVE_popcountv16si2;
  ena[1358] = HAVE_popcountv8di2;
  ena[1359] = HAVE_parityqi2;
  ena[1360] = HAVE_parityhi2;
  ena[1361] = HAVE_paritysi2;
  ena[1362] = HAVE_paritydi2;
  ena[1363] = HAVE_sqrthf2;
  ena[1364] = HAVE_sqrtsf2;
  ena[1365] = HAVE_sqrtdf2;
  ena[1366] = HAVE_sqrtxf2;
  ena[1367] = HAVE_sqrtv2sf2;
  ena[1368] = HAVE_sqrtv8hf2;
  ena[1369] = HAVE_sqrtv4sf2;
  ena[1370] = HAVE_sqrtv2df2;
  ena[1371] = HAVE_sqrtv16hf2;
  ena[1372] = HAVE_sqrtv8sf2;
  ena[1373] = HAVE_sqrtv4df2;
  ena[1374] = HAVE_sqrtv32hf2;
  ena[1375] = HAVE_sqrtv16sf2;
  ena[1376] = HAVE_sqrtv8df2;
  ena[1377] = HAVE_movqi;
  ena[1378] = HAVE_movhi;
  ena[1379] = HAVE_movsi;
  ena[1380] = HAVE_movdi;
  ena[1381] = HAVE_movti;
  ena[1382] = HAVE_movoi;
  ena[1383] = HAVE_movxi;
  ena[1384] = HAVE_movp2qi;
  ena[1385] = HAVE_movp2hi;
  ena[1386] = HAVE_movhf;
  ena[1387] = HAVE_movsf;
  ena[1388] = HAVE_movdf;
  ena[1389] = HAVE_movxf;
  ena[1390] = HAVE_movtf;
  ena[1391] = HAVE_movcdi;
  ena[1392] = HAVE_movv2qi;
  ena[1393] = HAVE_movv4qi;
  ena[1394] = HAVE_movv2hi;
  ena[1395] = HAVE_movv1si;
  ena[1396] = HAVE_movv8qi;
  ena[1397] = HAVE_movv4hi;
  ena[1398] = HAVE_movv2si;
  ena[1399] = HAVE_movv1di;
  ena[1400] = HAVE_movv16qi;
  ena[1401] = HAVE_movv8hi;
  ena[1402] = HAVE_movv4si;
  ena[1403] = HAVE_movv2di;
  ena[1404] = HAVE_movv1ti;
  ena[1405] = HAVE_movv32qi;
  ena[1406] = HAVE_movv16hi;
  ena[1407] = HAVE_movv8si;
  ena[1408] = HAVE_movv4di;
  ena[1409] = HAVE_movv2ti;
  ena[1410] = HAVE_movv64qi;
  ena[1411] = HAVE_movv32hi;
  ena[1412] = HAVE_movv16si;
  ena[1413] = HAVE_movv8di;
  ena[1414] = HAVE_movv4ti;
  ena[1415] = HAVE_movv64si;
  ena[1416] = HAVE_movv2hf;
  ena[1417] = HAVE_movv4hf;
  ena[1418] = HAVE_movv2sf;
  ena[1419] = HAVE_movv8hf;
  ena[1420] = HAVE_movv4sf;
  ena[1421] = HAVE_movv2df;
  ena[1422] = HAVE_movv16hf;
  ena[1423] = HAVE_movv8sf;
  ena[1424] = HAVE_movv4df;
  ena[1425] = HAVE_movv32hf;
  ena[1426] = HAVE_movv16sf;
  ena[1427] = HAVE_movv8df;
  ena[1428] = HAVE_movv64sf;
  ena[1429] = HAVE_movstrictqi;
  ena[1430] = HAVE_movstricthi;
  ena[1431] = HAVE_movmisalignv2qi;
  ena[1432] = HAVE_movmisalignv4qi;
  ena[1433] = HAVE_movmisalignv2hi;
  ena[1434] = HAVE_movmisalignv1si;
  ena[1435] = HAVE_movmisalignv8qi;
  ena[1436] = HAVE_movmisalignv4hi;
  ena[1437] = HAVE_movmisalignv2si;
  ena[1438] = HAVE_movmisalignv1di;
  ena[1439] = HAVE_movmisalignv16qi;
  ena[1440] = HAVE_movmisalignv8hi;
  ena[1441] = HAVE_movmisalignv4si;
  ena[1442] = HAVE_movmisalignv2di;
  ena[1443] = HAVE_movmisalignv1ti;
  ena[1444] = HAVE_movmisalignv32qi;
  ena[1445] = HAVE_movmisalignv16hi;
  ena[1446] = HAVE_movmisalignv8si;
  ena[1447] = HAVE_movmisalignv4di;
  ena[1448] = HAVE_movmisalignv2ti;
  ena[1449] = HAVE_movmisalignv64qi;
  ena[1450] = HAVE_movmisalignv32hi;
  ena[1451] = HAVE_movmisalignv16si;
  ena[1452] = HAVE_movmisalignv8di;
  ena[1453] = HAVE_movmisalignv4ti;
  ena[1454] = HAVE_movmisalignv2hf;
  ena[1455] = HAVE_movmisalignv4hf;
  ena[1456] = HAVE_movmisalignv2sf;
  ena[1457] = HAVE_movmisalignv8hf;
  ena[1458] = HAVE_movmisalignv4sf;
  ena[1459] = HAVE_movmisalignv2df;
  ena[1460] = HAVE_movmisalignv16hf;
  ena[1461] = HAVE_movmisalignv8sf;
  ena[1462] = HAVE_movmisalignv4df;
  ena[1463] = HAVE_movmisalignv32hf;
  ena[1464] = HAVE_movmisalignv16sf;
  ena[1465] = HAVE_movmisalignv8df;
  ena[1466] = HAVE_storentsi;
  ena[1467] = HAVE_storentdi;
  ena[1468] = HAVE_storentsf;
  ena[1469] = HAVE_storentdf;
  ena[1470] = HAVE_storentv2di;
  ena[1471] = HAVE_storentv4di;
  ena[1472] = HAVE_storentv8di;
  ena[1473] = HAVE_storentv4sf;
  ena[1474] = HAVE_storentv2df;
  ena[1475] = HAVE_storentv8sf;
  ena[1476] = HAVE_storentv4df;
  ena[1477] = HAVE_storentv16sf;
  ena[1478] = HAVE_storentv8df;
  ena[1479] = HAVE_insvhi;
  ena[1480] = HAVE_insvsi;
  ena[1481] = HAVE_insvdi;
  ena[1482] = HAVE_extvhi;
  ena[1483] = HAVE_extvsi;
  ena[1484] = HAVE_extzvhi;
  ena[1485] = HAVE_extzvsi;
  ena[1486] = HAVE_extzvdi;
  ena[1487] = HAVE_cbranchcc4;
  ena[1488] = HAVE_cbranchqi4;
  ena[1489] = HAVE_cbranchhi4;
  ena[1490] = HAVE_cbranchsi4;
  ena[1491] = HAVE_cbranchdi4;
  ena[1492] = HAVE_cbranchti4;
  ena[1493] = HAVE_cbranchoi4;
  ena[1494] = HAVE_cbranchhf4;
  ena[1495] = HAVE_cbranchsf4;
  ena[1496] = HAVE_cbranchdf4;
  ena[1497] = HAVE_cbranchxf4;
  ena[1498] = HAVE_cbranchv4si4;
  ena[1499] = HAVE_cbranchv2di4;
  ena[1500] = HAVE_cbranchv8si4;
  ena[1501] = HAVE_cbranchv4di4;
  ena[1502] = HAVE_addqicc;
  ena[1503] = HAVE_addhicc;
  ena[1504] = HAVE_addsicc;
  ena[1505] = HAVE_adddicc;
  ena[1506] = HAVE_movqicc;
  ena[1507] = HAVE_movhicc;
  ena[1508] = HAVE_movsicc;
  ena[1509] = HAVE_movdicc;
  ena[1510] = HAVE_movhfcc;
  ena[1511] = HAVE_movsfcc;
  ena[1512] = HAVE_movdfcc;
  ena[1513] = HAVE_movxfcc;
  ena[1514] = HAVE_cond_addv16qi;
  ena[1515] = HAVE_cond_addv8hi;
  ena[1516] = HAVE_cond_addv4si;
  ena[1517] = HAVE_cond_addv2di;
  ena[1518] = HAVE_cond_addv32qi;
  ena[1519] = HAVE_cond_addv16hi;
  ena[1520] = HAVE_cond_addv8si;
  ena[1521] = HAVE_cond_addv4di;
  ena[1522] = HAVE_cond_addv64qi;
  ena[1523] = HAVE_cond_addv32hi;
  ena[1524] = HAVE_cond_addv16si;
  ena[1525] = HAVE_cond_addv8di;
  ena[1526] = HAVE_cond_addv8hf;
  ena[1527] = HAVE_cond_addv4sf;
  ena[1528] = HAVE_cond_addv2df;
  ena[1529] = HAVE_cond_addv16hf;
  ena[1530] = HAVE_cond_addv8sf;
  ena[1531] = HAVE_cond_addv4df;
  ena[1532] = HAVE_cond_addv32hf;
  ena[1533] = HAVE_cond_addv16sf;
  ena[1534] = HAVE_cond_addv8df;
  ena[1535] = HAVE_cond_subv16qi;
  ena[1536] = HAVE_cond_subv8hi;
  ena[1537] = HAVE_cond_subv4si;
  ena[1538] = HAVE_cond_subv2di;
  ena[1539] = HAVE_cond_subv32qi;
  ena[1540] = HAVE_cond_subv16hi;
  ena[1541] = HAVE_cond_subv8si;
  ena[1542] = HAVE_cond_subv4di;
  ena[1543] = HAVE_cond_subv64qi;
  ena[1544] = HAVE_cond_subv32hi;
  ena[1545] = HAVE_cond_subv16si;
  ena[1546] = HAVE_cond_subv8di;
  ena[1547] = HAVE_cond_subv8hf;
  ena[1548] = HAVE_cond_subv4sf;
  ena[1549] = HAVE_cond_subv2df;
  ena[1550] = HAVE_cond_subv16hf;
  ena[1551] = HAVE_cond_subv8sf;
  ena[1552] = HAVE_cond_subv4df;
  ena[1553] = HAVE_cond_subv32hf;
  ena[1554] = HAVE_cond_subv16sf;
  ena[1555] = HAVE_cond_subv8df;
  ena[1556] = HAVE_cond_mulv8hi;
  ena[1557] = HAVE_cond_mulv4si;
  ena[1558] = HAVE_cond_mulv2di;
  ena[1559] = HAVE_cond_mulv16hi;
  ena[1560] = HAVE_cond_mulv8si;
  ena[1561] = HAVE_cond_mulv4di;
  ena[1562] = HAVE_cond_mulv32hi;
  ena[1563] = HAVE_cond_mulv16si;
  ena[1564] = HAVE_cond_mulv8di;
  ena[1565] = HAVE_cond_mulv8hf;
  ena[1566] = HAVE_cond_mulv4sf;
  ena[1567] = HAVE_cond_mulv2df;
  ena[1568] = HAVE_cond_mulv16hf;
  ena[1569] = HAVE_cond_mulv8sf;
  ena[1570] = HAVE_cond_mulv4df;
  ena[1571] = HAVE_cond_mulv32hf;
  ena[1572] = HAVE_cond_mulv16sf;
  ena[1573] = HAVE_cond_mulv8df;
  ena[1574] = HAVE_cond_divv8hf;
  ena[1575] = HAVE_cond_divv4sf;
  ena[1576] = HAVE_cond_divv2df;
  ena[1577] = HAVE_cond_divv16hf;
  ena[1578] = HAVE_cond_divv8sf;
  ena[1579] = HAVE_cond_divv4df;
  ena[1580] = HAVE_cond_divv32hf;
  ena[1581] = HAVE_cond_divv16sf;
  ena[1582] = HAVE_cond_divv8df;
  ena[1583] = HAVE_cond_andv4si;
  ena[1584] = HAVE_cond_andv2di;
  ena[1585] = HAVE_cond_andv8si;
  ena[1586] = HAVE_cond_andv4di;
  ena[1587] = HAVE_cond_andv16si;
  ena[1588] = HAVE_cond_andv8di;
  ena[1589] = HAVE_cond_iorv4si;
  ena[1590] = HAVE_cond_iorv2di;
  ena[1591] = HAVE_cond_iorv8si;
  ena[1592] = HAVE_cond_iorv4di;
  ena[1593] = HAVE_cond_iorv16si;
  ena[1594] = HAVE_cond_iorv8di;
  ena[1595] = HAVE_cond_xorv4si;
  ena[1596] = HAVE_cond_xorv2di;
  ena[1597] = HAVE_cond_xorv8si;
  ena[1598] = HAVE_cond_xorv4di;
  ena[1599] = HAVE_cond_xorv16si;
  ena[1600] = HAVE_cond_xorv8di;
  ena[1601] = HAVE_cond_ashlv8hi;
  ena[1602] = HAVE_cond_ashlv4si;
  ena[1603] = HAVE_cond_ashlv2di;
  ena[1604] = HAVE_cond_ashlv16hi;
  ena[1605] = HAVE_cond_ashlv8si;
  ena[1606] = HAVE_cond_ashlv4di;
  ena[1607] = HAVE_cond_ashlv32hi;
  ena[1608] = HAVE_cond_ashlv16si;
  ena[1609] = HAVE_cond_ashlv8di;
  ena[1610] = HAVE_cond_ashrv8hi;
  ena[1611] = HAVE_cond_ashrv4si;
  ena[1612] = HAVE_cond_ashrv2di;
  ena[1613] = HAVE_cond_ashrv16hi;
  ena[1614] = HAVE_cond_ashrv8si;
  ena[1615] = HAVE_cond_ashrv4di;
  ena[1616] = HAVE_cond_ashrv32hi;
  ena[1617] = HAVE_cond_ashrv16si;
  ena[1618] = HAVE_cond_ashrv8di;
  ena[1619] = HAVE_cond_lshrv8hi;
  ena[1620] = HAVE_cond_lshrv4si;
  ena[1621] = HAVE_cond_lshrv2di;
  ena[1622] = HAVE_cond_lshrv16hi;
  ena[1623] = HAVE_cond_lshrv8si;
  ena[1624] = HAVE_cond_lshrv4di;
  ena[1625] = HAVE_cond_lshrv32hi;
  ena[1626] = HAVE_cond_lshrv16si;
  ena[1627] = HAVE_cond_lshrv8di;
  ena[1628] = HAVE_cond_sminv16qi;
  ena[1629] = HAVE_cond_sminv8hi;
  ena[1630] = HAVE_cond_sminv4si;
  ena[1631] = HAVE_cond_sminv2di;
  ena[1632] = HAVE_cond_sminv32qi;
  ena[1633] = HAVE_cond_sminv16hi;
  ena[1634] = HAVE_cond_sminv8si;
  ena[1635] = HAVE_cond_sminv4di;
  ena[1636] = HAVE_cond_sminv64qi;
  ena[1637] = HAVE_cond_sminv32hi;
  ena[1638] = HAVE_cond_sminv16si;
  ena[1639] = HAVE_cond_sminv8di;
  ena[1640] = HAVE_cond_sminv8hf;
  ena[1641] = HAVE_cond_sminv4sf;
  ena[1642] = HAVE_cond_sminv2df;
  ena[1643] = HAVE_cond_sminv16hf;
  ena[1644] = HAVE_cond_sminv8sf;
  ena[1645] = HAVE_cond_sminv4df;
  ena[1646] = HAVE_cond_sminv32hf;
  ena[1647] = HAVE_cond_sminv16sf;
  ena[1648] = HAVE_cond_sminv8df;
  ena[1649] = HAVE_cond_smaxv16qi;
  ena[1650] = HAVE_cond_smaxv8hi;
  ena[1651] = HAVE_cond_smaxv4si;
  ena[1652] = HAVE_cond_smaxv2di;
  ena[1653] = HAVE_cond_smaxv32qi;
  ena[1654] = HAVE_cond_smaxv16hi;
  ena[1655] = HAVE_cond_smaxv8si;
  ena[1656] = HAVE_cond_smaxv4di;
  ena[1657] = HAVE_cond_smaxv64qi;
  ena[1658] = HAVE_cond_smaxv32hi;
  ena[1659] = HAVE_cond_smaxv16si;
  ena[1660] = HAVE_cond_smaxv8di;
  ena[1661] = HAVE_cond_smaxv8hf;
  ena[1662] = HAVE_cond_smaxv4sf;
  ena[1663] = HAVE_cond_smaxv2df;
  ena[1664] = HAVE_cond_smaxv16hf;
  ena[1665] = HAVE_cond_smaxv8sf;
  ena[1666] = HAVE_cond_smaxv4df;
  ena[1667] = HAVE_cond_smaxv32hf;
  ena[1668] = HAVE_cond_smaxv16sf;
  ena[1669] = HAVE_cond_smaxv8df;
  ena[1670] = HAVE_cond_uminv16qi;
  ena[1671] = HAVE_cond_uminv8hi;
  ena[1672] = HAVE_cond_uminv4si;
  ena[1673] = HAVE_cond_uminv2di;
  ena[1674] = HAVE_cond_uminv32qi;
  ena[1675] = HAVE_cond_uminv16hi;
  ena[1676] = HAVE_cond_uminv8si;
  ena[1677] = HAVE_cond_uminv4di;
  ena[1678] = HAVE_cond_uminv64qi;
  ena[1679] = HAVE_cond_uminv32hi;
  ena[1680] = HAVE_cond_uminv16si;
  ena[1681] = HAVE_cond_uminv8di;
  ena[1682] = HAVE_cond_umaxv16qi;
  ena[1683] = HAVE_cond_umaxv8hi;
  ena[1684] = HAVE_cond_umaxv4si;
  ena[1685] = HAVE_cond_umaxv2di;
  ena[1686] = HAVE_cond_umaxv32qi;
  ena[1687] = HAVE_cond_umaxv16hi;
  ena[1688] = HAVE_cond_umaxv8si;
  ena[1689] = HAVE_cond_umaxv4di;
  ena[1690] = HAVE_cond_umaxv64qi;
  ena[1691] = HAVE_cond_umaxv32hi;
  ena[1692] = HAVE_cond_umaxv16si;
  ena[1693] = HAVE_cond_umaxv8di;
  ena[1694] = HAVE_cond_fmav8hf;
  ena[1695] = HAVE_cond_fmav4sf;
  ena[1696] = HAVE_cond_fmav2df;
  ena[1697] = HAVE_cond_fmav16hf;
  ena[1698] = HAVE_cond_fmav8sf;
  ena[1699] = HAVE_cond_fmav4df;
  ena[1700] = HAVE_cond_fmav32hf;
  ena[1701] = HAVE_cond_fmav16sf;
  ena[1702] = HAVE_cond_fmav8df;
  ena[1703] = HAVE_cond_fmsv8hf;
  ena[1704] = HAVE_cond_fmsv4sf;
  ena[1705] = HAVE_cond_fmsv2df;
  ena[1706] = HAVE_cond_fmsv16hf;
  ena[1707] = HAVE_cond_fmsv8sf;
  ena[1708] = HAVE_cond_fmsv4df;
  ena[1709] = HAVE_cond_fmsv32hf;
  ena[1710] = HAVE_cond_fmsv16sf;
  ena[1711] = HAVE_cond_fmsv8df;
  ena[1712] = HAVE_cond_fnmav8hf;
  ena[1713] = HAVE_cond_fnmav4sf;
  ena[1714] = HAVE_cond_fnmav2df;
  ena[1715] = HAVE_cond_fnmav16hf;
  ena[1716] = HAVE_cond_fnmav8sf;
  ena[1717] = HAVE_cond_fnmav4df;
  ena[1718] = HAVE_cond_fnmav32hf;
  ena[1719] = HAVE_cond_fnmav16sf;
  ena[1720] = HAVE_cond_fnmav8df;
  ena[1721] = HAVE_cond_fnmsv8hf;
  ena[1722] = HAVE_cond_fnmsv4sf;
  ena[1723] = HAVE_cond_fnmsv2df;
  ena[1724] = HAVE_cond_fnmsv16hf;
  ena[1725] = HAVE_cond_fnmsv8sf;
  ena[1726] = HAVE_cond_fnmsv4df;
  ena[1727] = HAVE_cond_fnmsv32hf;
  ena[1728] = HAVE_cond_fnmsv16sf;
  ena[1729] = HAVE_cond_fnmsv8df;
  ena[1730] = HAVE_cstorecc4;
  ena[1731] = HAVE_cstoreqi4;
  ena[1732] = HAVE_cstorehi4;
  ena[1733] = HAVE_cstoresi4;
  ena[1734] = HAVE_cstoredi4;
  ena[1735] = HAVE_cstoreti4;
  ena[1736] = HAVE_cstorehf4;
  ena[1737] = HAVE_cstoresf4;
  ena[1738] = HAVE_cstoredf4;
  ena[1739] = HAVE_cstorexf4;
  ena[1740] = HAVE_addvqi4;
  ena[1741] = HAVE_addvhi4;
  ena[1742] = HAVE_addvsi4;
  ena[1743] = HAVE_addvdi4;
  ena[1744] = HAVE_addvti4;
  ena[1745] = HAVE_subvqi4;
  ena[1746] = HAVE_subvhi4;
  ena[1747] = HAVE_subvsi4;
  ena[1748] = HAVE_subvdi4;
  ena[1749] = HAVE_subvti4;
  ena[1750] = HAVE_mulvqi4;
  ena[1751] = HAVE_mulvhi4;
  ena[1752] = HAVE_mulvsi4;
  ena[1753] = HAVE_mulvdi4;
  ena[1754] = HAVE_uaddvqi4;
  ena[1755] = HAVE_uaddvhi4;
  ena[1756] = HAVE_uaddvsi4;
  ena[1757] = HAVE_uaddvdi4;
  ena[1758] = HAVE_uaddvti4;
  ena[1759] = HAVE_usubvqi4;
  ena[1760] = HAVE_usubvhi4;
  ena[1761] = HAVE_usubvsi4;
  ena[1762] = HAVE_usubvdi4;
  ena[1763] = HAVE_umulvqi4;
  ena[1764] = HAVE_umulvhi4;
  ena[1765] = HAVE_umulvsi4;
  ena[1766] = HAVE_umulvdi4;
  ena[1767] = HAVE_negvqi3;
  ena[1768] = HAVE_negvhi3;
  ena[1769] = HAVE_negvsi3;
  ena[1770] = HAVE_negvdi3;
  ena[1771] = HAVE_spaceshipsf3;
  ena[1772] = HAVE_spaceshipdf3;
  ena[1773] = HAVE_spaceshipxf3;
  ena[1774] = HAVE_smulsi3_highpart;
  ena[1775] = HAVE_smuldi3_highpart;
  ena[1776] = HAVE_smulv2hi3_highpart;
  ena[1777] = HAVE_smulv4hi3_highpart;
  ena[1778] = HAVE_smulv8hi3_highpart;
  ena[1779] = HAVE_smulv16hi3_highpart;
  ena[1780] = HAVE_smulv32hi3_highpart;
  ena[1781] = HAVE_umulsi3_highpart;
  ena[1782] = HAVE_umuldi3_highpart;
  ena[1783] = HAVE_umulv2hi3_highpart;
  ena[1784] = HAVE_umulv4hi3_highpart;
  ena[1785] = HAVE_umulv8hi3_highpart;
  ena[1786] = HAVE_umulv16hi3_highpart;
  ena[1787] = HAVE_umulv32hi3_highpart;
  ena[1788] = HAVE_cmpmemsi;
  ena[1789] = HAVE_cmpstrnsi;
  ena[1790] = HAVE_cpymemsi;
  ena[1791] = HAVE_cpymemdi;
  ena[1792] = HAVE_setmemsi;
  ena[1793] = HAVE_setmemdi;
  ena[1794] = HAVE_strlensi;
  ena[1795] = HAVE_strlendi;
  ena[1796] = HAVE_fmahf4;
  ena[1797] = HAVE_fmasf4;
  ena[1798] = HAVE_fmadf4;
  ena[1799] = HAVE_fmav2sf4;
  ena[1800] = HAVE_fmav8hf4;
  ena[1801] = HAVE_fmav4sf4;
  ena[1802] = HAVE_fmav2df4;
  ena[1803] = HAVE_fmav16hf4;
  ena[1804] = HAVE_fmav8sf4;
  ena[1805] = HAVE_fmav4df4;
  ena[1806] = HAVE_fmav32hf4;
  ena[1807] = HAVE_fmav16sf4;
  ena[1808] = HAVE_fmav8df4;
  ena[1809] = HAVE_fmshf4;
  ena[1810] = HAVE_fmssf4;
  ena[1811] = HAVE_fmsdf4;
  ena[1812] = HAVE_fmsv2sf4;
  ena[1813] = HAVE_fmsv8hf4;
  ena[1814] = HAVE_fmsv4sf4;
  ena[1815] = HAVE_fmsv2df4;
  ena[1816] = HAVE_fmsv16hf4;
  ena[1817] = HAVE_fmsv8sf4;
  ena[1818] = HAVE_fmsv4df4;
  ena[1819] = HAVE_fmsv32hf4;
  ena[1820] = HAVE_fmsv16sf4;
  ena[1821] = HAVE_fmsv8df4;
  ena[1822] = HAVE_fnmahf4;
  ena[1823] = HAVE_fnmasf4;
  ena[1824] = HAVE_fnmadf4;
  ena[1825] = HAVE_fnmav2sf4;
  ena[1826] = HAVE_fnmav8hf4;
  ena[1827] = HAVE_fnmav4sf4;
  ena[1828] = HAVE_fnmav2df4;
  ena[1829] = HAVE_fnmav16hf4;
  ena[1830] = HAVE_fnmav8sf4;
  ena[1831] = HAVE_fnmav4df4;
  ena[1832] = HAVE_fnmav32hf4;
  ena[1833] = HAVE_fnmav16sf4;
  ena[1834] = HAVE_fnmav8df4;
  ena[1835] = HAVE_fnmshf4;
  ena[1836] = HAVE_fnmssf4;
  ena[1837] = HAVE_fnmsdf4;
  ena[1838] = HAVE_fnmsv2sf4;
  ena[1839] = HAVE_fnmsv8hf4;
  ena[1840] = HAVE_fnmsv4sf4;
  ena[1841] = HAVE_fnmsv2df4;
  ena[1842] = HAVE_fnmsv16hf4;
  ena[1843] = HAVE_fnmsv8sf4;
  ena[1844] = HAVE_fnmsv4df4;
  ena[1845] = HAVE_fnmsv32hf4;
  ena[1846] = HAVE_fnmsv16sf4;
  ena[1847] = HAVE_fnmsv8df4;
  ena[1848] = HAVE_rinthf2;
  ena[1849] = HAVE_rintsf2;
  ena[1850] = HAVE_rintdf2;
  ena[1851] = HAVE_rintxf2;
  ena[1852] = HAVE_rintv8hf2;
  ena[1853] = HAVE_rintv4sf2;
  ena[1854] = HAVE_rintv2df2;
  ena[1855] = HAVE_rintv16hf2;
  ena[1856] = HAVE_rintv8sf2;
  ena[1857] = HAVE_rintv4df2;
  ena[1858] = HAVE_rintv32hf2;
  ena[1859] = HAVE_rintv16sf2;
  ena[1860] = HAVE_rintv8df2;
  ena[1861] = HAVE_roundsf2;
  ena[1862] = HAVE_rounddf2;
  ena[1863] = HAVE_roundxf2;
  ena[1864] = HAVE_roundv4sf2;
  ena[1865] = HAVE_roundv2df2;
  ena[1866] = HAVE_roundv8sf2;
  ena[1867] = HAVE_roundv4df2;
  ena[1868] = HAVE_roundv16sf2;
  ena[1869] = HAVE_roundv8df2;
  ena[1870] = HAVE_roundevenhf2;
  ena[1871] = HAVE_roundevensf2;
  ena[1872] = HAVE_roundevendf2;
  ena[1873] = HAVE_roundevenxf2;
  ena[1874] = HAVE_floorhf2;
  ena[1875] = HAVE_floorsf2;
  ena[1876] = HAVE_floordf2;
  ena[1877] = HAVE_floorxf2;
  ena[1878] = HAVE_ceilhf2;
  ena[1879] = HAVE_ceilsf2;
  ena[1880] = HAVE_ceildf2;
  ena[1881] = HAVE_ceilxf2;
  ena[1882] = HAVE_btrunchf2;
  ena[1883] = HAVE_btruncsf2;
  ena[1884] = HAVE_btruncdf2;
  ena[1885] = HAVE_btruncxf2;
  ena[1886] = HAVE_nearbyinthf2;
  ena[1887] = HAVE_nearbyintsf2;
  ena[1888] = HAVE_nearbyintdf2;
  ena[1889] = HAVE_nearbyintxf2;
  ena[1890] = HAVE_nearbyintv8hf2;
  ena[1891] = HAVE_nearbyintv4sf2;
  ena[1892] = HAVE_nearbyintv2df2;
  ena[1893] = HAVE_nearbyintv16hf2;
  ena[1894] = HAVE_nearbyintv8sf2;
  ena[1895] = HAVE_nearbyintv4df2;
  ena[1896] = HAVE_nearbyintv32hf2;
  ena[1897] = HAVE_nearbyintv16sf2;
  ena[1898] = HAVE_nearbyintv8df2;
  ena[1899] = HAVE_acossf2;
  ena[1900] = HAVE_acosdf2;
  ena[1901] = HAVE_acosxf2;
  ena[1902] = HAVE_acoshsf2;
  ena[1903] = HAVE_acoshdf2;
  ena[1904] = HAVE_acoshxf2;
  ena[1905] = HAVE_asinsf2;
  ena[1906] = HAVE_asindf2;
  ena[1907] = HAVE_asinxf2;
  ena[1908] = HAVE_asinhsf2;
  ena[1909] = HAVE_asinhdf2;
  ena[1910] = HAVE_asinhxf2;
  ena[1911] = HAVE_atan2sf3;
  ena[1912] = HAVE_atan2df3;
  ena[1913] = HAVE_atan2xf3;
  ena[1914] = HAVE_atansf2;
  ena[1915] = HAVE_atandf2;
  ena[1916] = HAVE_atanxf2;
  ena[1917] = HAVE_atanhsf2;
  ena[1918] = HAVE_atanhdf2;
  ena[1919] = HAVE_atanhxf2;
  ena[1920] = HAVE_copysignhf3;
  ena[1921] = HAVE_copysignsf3;
  ena[1922] = HAVE_copysigndf3;
  ena[1923] = HAVE_copysigntf3;
  ena[1924] = HAVE_copysignv2sf3;
  ena[1925] = HAVE_copysignv8hf3;
  ena[1926] = HAVE_copysignv4sf3;
  ena[1927] = HAVE_copysignv2df3;
  ena[1928] = HAVE_copysignv16hf3;
  ena[1929] = HAVE_copysignv8sf3;
  ena[1930] = HAVE_copysignv4df3;
  ena[1931] = HAVE_copysignv32hf3;
  ena[1932] = HAVE_copysignv16sf3;
  ena[1933] = HAVE_copysignv8df3;
  ena[1934] = HAVE_xorsignhf3;
  ena[1935] = HAVE_xorsignsf3;
  ena[1936] = HAVE_xorsigndf3;
  ena[1937] = HAVE_xorsignv2sf3;
  ena[1938] = HAVE_xorsignv8hf3;
  ena[1939] = HAVE_xorsignv4sf3;
  ena[1940] = HAVE_xorsignv2df3;
  ena[1941] = HAVE_xorsignv16hf3;
  ena[1942] = HAVE_xorsignv8sf3;
  ena[1943] = HAVE_xorsignv4df3;
  ena[1944] = HAVE_xorsignv32hf3;
  ena[1945] = HAVE_xorsignv16sf3;
  ena[1946] = HAVE_xorsignv8df3;
  ena[1947] = HAVE_cmulv8hf3;
  ena[1948] = HAVE_cmulv16hf3;
  ena[1949] = HAVE_cmulv32hf3;
  ena[1950] = HAVE_cmul_conjv8hf3;
  ena[1951] = HAVE_cmul_conjv16hf3;
  ena[1952] = HAVE_cmul_conjv32hf3;
  ena[1953] = HAVE_cmlav8hf4;
  ena[1954] = HAVE_cmlav16hf4;
  ena[1955] = HAVE_cmlav32hf4;
  ena[1956] = HAVE_cmla_conjv8hf4;
  ena[1957] = HAVE_cmla_conjv16hf4;
  ena[1958] = HAVE_cmla_conjv32hf4;
  ena[1959] = HAVE_cossf2;
  ena[1960] = HAVE_cosdf2;
  ena[1961] = HAVE_cosxf2;
  ena[1962] = HAVE_coshsf2;
  ena[1963] = HAVE_coshdf2;
  ena[1964] = HAVE_coshxf2;
  ena[1965] = HAVE_exp10sf2;
  ena[1966] = HAVE_exp10df2;
  ena[1967] = HAVE_exp10xf2;
  ena[1968] = HAVE_exp2sf2;
  ena[1969] = HAVE_exp2df2;
  ena[1970] = HAVE_exp2xf2;
  ena[1971] = HAVE_expsf2;
  ena[1972] = HAVE_expdf2;
  ena[1973] = HAVE_expxf2;
  ena[1974] = HAVE_expm1sf2;
  ena[1975] = HAVE_expm1df2;
  ena[1976] = HAVE_expm1xf2;
  ena[1977] = HAVE_fmodsf3;
  ena[1978] = HAVE_fmoddf3;
  ena[1979] = HAVE_fmodxf3;
  ena[1980] = HAVE_hypotsf3;
  ena[1981] = HAVE_hypotdf3;
  ena[1982] = HAVE_ilogbsf2;
  ena[1983] = HAVE_ilogbdf2;
  ena[1984] = HAVE_ilogbxf2;
  ena[1985] = HAVE_ldexpsf3;
  ena[1986] = HAVE_ldexpdf3;
  ena[1987] = HAVE_ldexpxf3;
  ena[1988] = HAVE_log10sf2;
  ena[1989] = HAVE_log10df2;
  ena[1990] = HAVE_log10xf2;
  ena[1991] = HAVE_log1psf2;
  ena[1992] = HAVE_log1pdf2;
  ena[1993] = HAVE_log1pxf2;
  ena[1994] = HAVE_log2sf2;
  ena[1995] = HAVE_log2df2;
  ena[1996] = HAVE_log2xf2;
  ena[1997] = HAVE_logsf2;
  ena[1998] = HAVE_logdf2;
  ena[1999] = HAVE_logxf2;
  ena[2000] = HAVE_logbsf2;
  ena[2001] = HAVE_logbdf2;
  ena[2002] = HAVE_logbxf2;
  ena[2003] = HAVE_remaindersf3;
  ena[2004] = HAVE_remainderdf3;
  ena[2005] = HAVE_remainderxf3;
  ena[2006] = HAVE_rsqrthf2;
  ena[2007] = HAVE_rsqrtsf2;
  ena[2008] = HAVE_rsqrtv8hf2;
  ena[2009] = HAVE_rsqrtv4sf2;
  ena[2010] = HAVE_rsqrtv16hf2;
  ena[2011] = HAVE_rsqrtv8sf2;
  ena[2012] = HAVE_rsqrtv32hf2;
  ena[2013] = HAVE_rsqrtv16sf2;
  ena[2014] = HAVE_scalbsf3;
  ena[2015] = HAVE_scalbdf3;
  ena[2016] = HAVE_scalbxf3;
  ena[2017] = HAVE_signbitsf2;
  ena[2018] = HAVE_signbitdf2;
  ena[2019] = HAVE_signbitxf2;
  ena[2020] = HAVE_signbittf2;
  ena[2021] = HAVE_signbitv2sf2;
  ena[2022] = HAVE_signbitv4sf2;
  ena[2023] = HAVE_signbitv8sf2;
  ena[2024] = HAVE_signbitv16sf2;
  ena[2025] = HAVE_significandsf2;
  ena[2026] = HAVE_significanddf2;
  ena[2027] = HAVE_significandxf2;
  ena[2028] = HAVE_sinsf2;
  ena[2029] = HAVE_sindf2;
  ena[2030] = HAVE_sinxf2;
  ena[2031] = HAVE_sincossf3;
  ena[2032] = HAVE_sincosdf3;
  ena[2033] = HAVE_sincosxf3;
  ena[2034] = HAVE_sinhsf2;
  ena[2035] = HAVE_sinhdf2;
  ena[2036] = HAVE_sinhxf2;
  ena[2037] = HAVE_tansf2;
  ena[2038] = HAVE_tandf2;
  ena[2039] = HAVE_tanxf2;
  ena[2040] = HAVE_tanhsf2;
  ena[2041] = HAVE_tanhdf2;
  ena[2042] = HAVE_tanhxf2;
  ena[2043] = HAVE_reduc_smax_scal_v4qi;
  ena[2044] = HAVE_reduc_smax_scal_v4hi;
  ena[2045] = HAVE_reduc_smax_scal_v16qi;
  ena[2046] = HAVE_reduc_smax_scal_v8hi;
  ena[2047] = HAVE_reduc_smax_scal_v4si;
  ena[2048] = HAVE_reduc_smax_scal_v2di;
  ena[2049] = HAVE_reduc_smax_scal_v32qi;
  ena[2050] = HAVE_reduc_smax_scal_v16hi;
  ena[2051] = HAVE_reduc_smax_scal_v8si;
  ena[2052] = HAVE_reduc_smax_scal_v4di;
  ena[2053] = HAVE_reduc_smax_scal_v64qi;
  ena[2054] = HAVE_reduc_smax_scal_v32hi;
  ena[2055] = HAVE_reduc_smax_scal_v16si;
  ena[2056] = HAVE_reduc_smax_scal_v8di;
  ena[2057] = HAVE_reduc_smax_scal_v8hf;
  ena[2058] = HAVE_reduc_smax_scal_v4sf;
  ena[2059] = HAVE_reduc_smax_scal_v2df;
  ena[2060] = HAVE_reduc_smax_scal_v16hf;
  ena[2061] = HAVE_reduc_smax_scal_v8sf;
  ena[2062] = HAVE_reduc_smax_scal_v4df;
  ena[2063] = HAVE_reduc_smax_scal_v32hf;
  ena[2064] = HAVE_reduc_smax_scal_v16sf;
  ena[2065] = HAVE_reduc_smax_scal_v8df;
  ena[2066] = HAVE_reduc_smin_scal_v4qi;
  ena[2067] = HAVE_reduc_smin_scal_v4hi;
  ena[2068] = HAVE_reduc_smin_scal_v16qi;
  ena[2069] = HAVE_reduc_smin_scal_v8hi;
  ena[2070] = HAVE_reduc_smin_scal_v4si;
  ena[2071] = HAVE_reduc_smin_scal_v2di;
  ena[2072] = HAVE_reduc_smin_scal_v32qi;
  ena[2073] = HAVE_reduc_smin_scal_v16hi;
  ena[2074] = HAVE_reduc_smin_scal_v8si;
  ena[2075] = HAVE_reduc_smin_scal_v4di;
  ena[2076] = HAVE_reduc_smin_scal_v64qi;
  ena[2077] = HAVE_reduc_smin_scal_v32hi;
  ena[2078] = HAVE_reduc_smin_scal_v16si;
  ena[2079] = HAVE_reduc_smin_scal_v8di;
  ena[2080] = HAVE_reduc_smin_scal_v8hf;
  ena[2081] = HAVE_reduc_smin_scal_v4sf;
  ena[2082] = HAVE_reduc_smin_scal_v2df;
  ena[2083] = HAVE_reduc_smin_scal_v16hf;
  ena[2084] = HAVE_reduc_smin_scal_v8sf;
  ena[2085] = HAVE_reduc_smin_scal_v4df;
  ena[2086] = HAVE_reduc_smin_scal_v32hf;
  ena[2087] = HAVE_reduc_smin_scal_v16sf;
  ena[2088] = HAVE_reduc_smin_scal_v8df;
  ena[2089] = HAVE_reduc_plus_scal_v4qi;
  ena[2090] = HAVE_reduc_plus_scal_v8qi;
  ena[2091] = HAVE_reduc_plus_scal_v4hi;
  ena[2092] = HAVE_reduc_plus_scal_v16qi;
  ena[2093] = HAVE_reduc_plus_scal_v32qi;
  ena[2094] = HAVE_reduc_plus_scal_v64qi;
  ena[2095] = HAVE_reduc_plus_scal_v8hf;
  ena[2096] = HAVE_reduc_plus_scal_v4sf;
  ena[2097] = HAVE_reduc_plus_scal_v2df;
  ena[2098] = HAVE_reduc_plus_scal_v16hf;
  ena[2099] = HAVE_reduc_plus_scal_v8sf;
  ena[2100] = HAVE_reduc_plus_scal_v4df;
  ena[2101] = HAVE_reduc_plus_scal_v32hf;
  ena[2102] = HAVE_reduc_plus_scal_v16sf;
  ena[2103] = HAVE_reduc_plus_scal_v8df;
  ena[2104] = HAVE_reduc_umax_scal_v4qi;
  ena[2105] = HAVE_reduc_umax_scal_v4hi;
  ena[2106] = HAVE_reduc_umax_scal_v32qi;
  ena[2107] = HAVE_reduc_umax_scal_v16hi;
  ena[2108] = HAVE_reduc_umax_scal_v8si;
  ena[2109] = HAVE_reduc_umax_scal_v4di;
  ena[2110] = HAVE_reduc_umax_scal_v64qi;
  ena[2111] = HAVE_reduc_umax_scal_v32hi;
  ena[2112] = HAVE_reduc_umax_scal_v16si;
  ena[2113] = HAVE_reduc_umax_scal_v8di;
  ena[2114] = HAVE_reduc_umin_scal_v4qi;
  ena[2115] = HAVE_reduc_umin_scal_v4hi;
  ena[2116] = HAVE_reduc_umin_scal_v8hi;
  ena[2117] = HAVE_reduc_umin_scal_v32qi;
  ena[2118] = HAVE_reduc_umin_scal_v16hi;
  ena[2119] = HAVE_reduc_umin_scal_v8si;
  ena[2120] = HAVE_reduc_umin_scal_v4di;
  ena[2121] = HAVE_reduc_umin_scal_v64qi;
  ena[2122] = HAVE_reduc_umin_scal_v32hi;
  ena[2123] = HAVE_reduc_umin_scal_v16si;
  ena[2124] = HAVE_reduc_umin_scal_v8di;
  ena[2125] = HAVE_uavgv2qi3_ceil;
  ena[2126] = HAVE_uavgv4qi3_ceil;
  ena[2127] = HAVE_uavgv2hi3_ceil;
  ena[2128] = HAVE_uavgv8qi3_ceil;
  ena[2129] = HAVE_uavgv4hi3_ceil;
  ena[2130] = HAVE_uavgv16qi3_ceil;
  ena[2131] = HAVE_uavgv8hi3_ceil;
  ena[2132] = HAVE_uavgv32qi3_ceil;
  ena[2133] = HAVE_uavgv16hi3_ceil;
  ena[2134] = HAVE_uavgv64qi3_ceil;
  ena[2135] = HAVE_uavgv32hi3_ceil;
  ena[2136] = HAVE_sdot_prodv8hi;
  ena[2137] = HAVE_sdot_prodv4si;
  ena[2138] = HAVE_sdot_prodv16hi;
  ena[2139] = HAVE_sdot_prodv32hi;
  ena[2140] = HAVE_usdot_prodv16qi;
  ena[2141] = HAVE_usdot_prodv32qi;
  ena[2142] = HAVE_usdot_prodv64qi;
  ena[2143] = HAVE_usadv8qi;
  ena[2144] = HAVE_usadv16qi;
  ena[2145] = HAVE_usadv32qi;
  ena[2146] = HAVE_usadv64qi;
  ena[2147] = HAVE_smulhrsv2hi3;
  ena[2148] = HAVE_smulhrsv4hi3;
  ena[2149] = HAVE_smulhrsv8hi3;
  ena[2150] = HAVE_smulhrsv16hi3;
  ena[2151] = HAVE_smulhrsv32hi3;
  ena[2152] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[2153] = HAVE_vec_pack_sfix_trunc_v4df;
  ena[2154] = HAVE_vec_pack_sfix_trunc_v8df;
  ena[2155] = HAVE_vec_pack_trunc_qi;
  ena[2156] = HAVE_vec_pack_trunc_hi;
  ena[2157] = HAVE_vec_pack_trunc_si;
  ena[2158] = HAVE_vec_pack_trunc_v2hi;
  ena[2159] = HAVE_vec_pack_trunc_v4hi;
  ena[2160] = HAVE_vec_pack_trunc_v2si;
  ena[2161] = HAVE_vec_pack_trunc_v8hi;
  ena[2162] = HAVE_vec_pack_trunc_v4si;
  ena[2163] = HAVE_vec_pack_trunc_v2di;
  ena[2164] = HAVE_vec_pack_trunc_v16hi;
  ena[2165] = HAVE_vec_pack_trunc_v8si;
  ena[2166] = HAVE_vec_pack_trunc_v4di;
  ena[2167] = HAVE_vec_pack_trunc_v32hi;
  ena[2168] = HAVE_vec_pack_trunc_v16si;
  ena[2169] = HAVE_vec_pack_trunc_v8di;
  ena[2170] = HAVE_vec_pack_trunc_v2df;
  ena[2171] = HAVE_vec_pack_trunc_v4df;
  ena[2172] = HAVE_vec_pack_trunc_v8df;
  ena[2173] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[2174] = HAVE_vec_pack_ufix_trunc_v4df;
  ena[2175] = HAVE_vec_pack_ufix_trunc_v8df;
  ena[2176] = HAVE_vec_pack_sbool_trunc_qi;
  ena[2177] = HAVE_vec_packs_float_v2di;
  ena[2178] = HAVE_vec_packs_float_v4di;
  ena[2179] = HAVE_vec_packs_float_v8di;
  ena[2180] = HAVE_vec_packu_float_v2di;
  ena[2181] = HAVE_vec_packu_float_v4di;
  ena[2182] = HAVE_vec_packu_float_v8di;
  ena[2183] = HAVE_vec_permv16qi;
  ena[2184] = HAVE_vec_permv8hi;
  ena[2185] = HAVE_vec_permv4si;
  ena[2186] = HAVE_vec_permv2di;
  ena[2187] = HAVE_vec_permv32qi;
  ena[2188] = HAVE_vec_permv16hi;
  ena[2189] = HAVE_vec_permv8si;
  ena[2190] = HAVE_vec_permv4di;
  ena[2191] = HAVE_vec_permv64qi;
  ena[2192] = HAVE_vec_permv32hi;
  ena[2193] = HAVE_vec_permv16si;
  ena[2194] = HAVE_vec_permv8di;
  ena[2195] = HAVE_vec_permv8hf;
  ena[2196] = HAVE_vec_permv4sf;
  ena[2197] = HAVE_vec_permv2df;
  ena[2198] = HAVE_vec_permv16hf;
  ena[2199] = HAVE_vec_permv8sf;
  ena[2200] = HAVE_vec_permv4df;
  ena[2201] = HAVE_vec_permv32hf;
  ena[2202] = HAVE_vec_permv16sf;
  ena[2203] = HAVE_vec_permv8df;
  ena[2204] = HAVE_vec_setv4qi;
  ena[2205] = HAVE_vec_setv2hi;
  ena[2206] = HAVE_vec_setv8qi;
  ena[2207] = HAVE_vec_setv4hi;
  ena[2208] = HAVE_vec_setv2si;
  ena[2209] = HAVE_vec_setv16qi;
  ena[2210] = HAVE_vec_setv8hi;
  ena[2211] = HAVE_vec_setv4si;
  ena[2212] = HAVE_vec_setv2di;
  ena[2213] = HAVE_vec_setv32qi;
  ena[2214] = HAVE_vec_setv16hi;
  ena[2215] = HAVE_vec_setv8si;
  ena[2216] = HAVE_vec_setv4di;
  ena[2217] = HAVE_vec_setv64qi;
  ena[2218] = HAVE_vec_setv32hi;
  ena[2219] = HAVE_vec_setv16si;
  ena[2220] = HAVE_vec_setv8di;
  ena[2221] = HAVE_vec_setv2sf;
  ena[2222] = HAVE_vec_setv8hf;
  ena[2223] = HAVE_vec_setv4sf;
  ena[2224] = HAVE_vec_setv2df;
  ena[2225] = HAVE_vec_setv16hf;
  ena[2226] = HAVE_vec_setv8sf;
  ena[2227] = HAVE_vec_setv4df;
  ena[2228] = HAVE_vec_setv32hf;
  ena[2229] = HAVE_vec_setv16sf;
  ena[2230] = HAVE_vec_setv8df;
  ena[2231] = HAVE_vec_shl_v16qi;
  ena[2232] = HAVE_vec_shl_v8hi;
  ena[2233] = HAVE_vec_shl_v4si;
  ena[2234] = HAVE_vec_shl_v2di;
  ena[2235] = HAVE_vec_shl_v4sf;
  ena[2236] = HAVE_vec_shl_v2df;
  ena[2237] = HAVE_vec_shr_v16qi;
  ena[2238] = HAVE_vec_shr_v8hi;
  ena[2239] = HAVE_vec_shr_v4si;
  ena[2240] = HAVE_vec_shr_v2di;
  ena[2241] = HAVE_vec_shr_v4sf;
  ena[2242] = HAVE_vec_shr_v2df;
  ena[2243] = HAVE_vec_unpack_sfix_trunc_hi_v4sf;
  ena[2244] = HAVE_vec_unpack_sfix_trunc_hi_v8sf;
  ena[2245] = HAVE_vec_unpack_sfix_trunc_hi_v16sf;
  ena[2246] = HAVE_vec_unpack_sfix_trunc_lo_v4sf;
  ena[2247] = HAVE_vec_unpack_sfix_trunc_lo_v8sf;
  ena[2248] = HAVE_vec_unpack_sfix_trunc_lo_v16sf;
  ena[2249] = HAVE_vec_unpack_ufix_trunc_hi_v4sf;
  ena[2250] = HAVE_vec_unpack_ufix_trunc_hi_v8sf;
  ena[2251] = HAVE_vec_unpack_ufix_trunc_hi_v16sf;
  ena[2252] = HAVE_vec_unpack_ufix_trunc_lo_v4sf;
  ena[2253] = HAVE_vec_unpack_ufix_trunc_lo_v8sf;
  ena[2254] = HAVE_vec_unpack_ufix_trunc_lo_v16sf;
  ena[2255] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[2256] = HAVE_vec_unpacks_float_hi_v4si;
  ena[2257] = HAVE_vec_unpacks_float_hi_v16hi;
  ena[2258] = HAVE_vec_unpacks_float_hi_v8si;
  ena[2259] = HAVE_vec_unpacks_float_hi_v32hi;
  ena[2260] = HAVE_vec_unpacks_float_hi_v16si;
  ena[2261] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[2262] = HAVE_vec_unpacks_float_lo_v4si;
  ena[2263] = HAVE_vec_unpacks_float_lo_v16hi;
  ena[2264] = HAVE_vec_unpacks_float_lo_v8si;
  ena[2265] = HAVE_vec_unpacks_float_lo_v32hi;
  ena[2266] = HAVE_vec_unpacks_float_lo_v16si;
  ena[2267] = HAVE_vec_unpacks_hi_hi;
  ena[2268] = HAVE_vec_unpacks_hi_si;
  ena[2269] = HAVE_vec_unpacks_hi_di;
  ena[2270] = HAVE_vec_unpacks_hi_v4qi;
  ena[2271] = HAVE_vec_unpacks_hi_v8qi;
  ena[2272] = HAVE_vec_unpacks_hi_v4hi;
  ena[2273] = HAVE_vec_unpacks_hi_v16qi;
  ena[2274] = HAVE_vec_unpacks_hi_v8hi;
  ena[2275] = HAVE_vec_unpacks_hi_v4si;
  ena[2276] = HAVE_vec_unpacks_hi_v32qi;
  ena[2277] = HAVE_vec_unpacks_hi_v16hi;
  ena[2278] = HAVE_vec_unpacks_hi_v8si;
  ena[2279] = HAVE_vec_unpacks_hi_v64qi;
  ena[2280] = HAVE_vec_unpacks_hi_v32hi;
  ena[2281] = HAVE_vec_unpacks_hi_v16si;
  ena[2282] = HAVE_vec_unpacks_hi_v4sf;
  ena[2283] = HAVE_vec_unpacks_hi_v8sf;
  ena[2284] = HAVE_vec_unpacks_hi_v16sf;
  ena[2285] = HAVE_vec_unpacks_lo_hi;
  ena[2286] = HAVE_vec_unpacks_lo_si;
  ena[2287] = HAVE_vec_unpacks_lo_di;
  ena[2288] = HAVE_vec_unpacks_lo_v4qi;
  ena[2289] = HAVE_vec_unpacks_lo_v8qi;
  ena[2290] = HAVE_vec_unpacks_lo_v4hi;
  ena[2291] = HAVE_vec_unpacks_lo_v16qi;
  ena[2292] = HAVE_vec_unpacks_lo_v8hi;
  ena[2293] = HAVE_vec_unpacks_lo_v4si;
  ena[2294] = HAVE_vec_unpacks_lo_v32qi;
  ena[2295] = HAVE_vec_unpacks_lo_v16hi;
  ena[2296] = HAVE_vec_unpacks_lo_v8si;
  ena[2297] = HAVE_vec_unpacks_lo_v64qi;
  ena[2298] = HAVE_vec_unpacks_lo_v32hi;
  ena[2299] = HAVE_vec_unpacks_lo_v16si;
  ena[2300] = HAVE_vec_unpacks_lo_v4sf;
  ena[2301] = HAVE_vec_unpacks_lo_v8sf;
  ena[2302] = HAVE_vec_unpacks_lo_v16sf;
  ena[2303] = HAVE_vec_unpacks_sbool_hi_qi;
  ena[2304] = HAVE_vec_unpacks_sbool_lo_qi;
  ena[2305] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[2306] = HAVE_vec_unpacku_float_hi_v4si;
  ena[2307] = HAVE_vec_unpacku_float_hi_v16hi;
  ena[2308] = HAVE_vec_unpacku_float_hi_v8si;
  ena[2309] = HAVE_vec_unpacku_float_hi_v32hi;
  ena[2310] = HAVE_vec_unpacku_float_hi_v16si;
  ena[2311] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[2312] = HAVE_vec_unpacku_float_lo_v4si;
  ena[2313] = HAVE_vec_unpacku_float_lo_v16hi;
  ena[2314] = HAVE_vec_unpacku_float_lo_v8si;
  ena[2315] = HAVE_vec_unpacku_float_lo_v32hi;
  ena[2316] = HAVE_vec_unpacku_float_lo_v16si;
  ena[2317] = HAVE_vec_unpacku_hi_v4qi;
  ena[2318] = HAVE_vec_unpacku_hi_v8qi;
  ena[2319] = HAVE_vec_unpacku_hi_v4hi;
  ena[2320] = HAVE_vec_unpacku_hi_v16qi;
  ena[2321] = HAVE_vec_unpacku_hi_v8hi;
  ena[2322] = HAVE_vec_unpacku_hi_v4si;
  ena[2323] = HAVE_vec_unpacku_hi_v32qi;
  ena[2324] = HAVE_vec_unpacku_hi_v16hi;
  ena[2325] = HAVE_vec_unpacku_hi_v8si;
  ena[2326] = HAVE_vec_unpacku_hi_v64qi;
  ena[2327] = HAVE_vec_unpacku_hi_v32hi;
  ena[2328] = HAVE_vec_unpacku_hi_v16si;
  ena[2329] = HAVE_vec_unpacku_lo_v4qi;
  ena[2330] = HAVE_vec_unpacku_lo_v8qi;
  ena[2331] = HAVE_vec_unpacku_lo_v4hi;
  ena[2332] = HAVE_vec_unpacku_lo_v16qi;
  ena[2333] = HAVE_vec_unpacku_lo_v8hi;
  ena[2334] = HAVE_vec_unpacku_lo_v4si;
  ena[2335] = HAVE_vec_unpacku_lo_v32qi;
  ena[2336] = HAVE_vec_unpacku_lo_v16hi;
  ena[2337] = HAVE_vec_unpacku_lo_v8si;
  ena[2338] = HAVE_vec_unpacku_lo_v64qi;
  ena[2339] = HAVE_vec_unpacku_lo_v32hi;
  ena[2340] = HAVE_vec_unpacku_lo_v16si;
  ena[2341] = HAVE_vec_widen_smult_even_v4si;
  ena[2342] = HAVE_vec_widen_smult_even_v8si;
  ena[2343] = HAVE_vec_widen_smult_even_v16si;
  ena[2344] = HAVE_vec_widen_smult_hi_v16qi;
  ena[2345] = HAVE_vec_widen_smult_hi_v8hi;
  ena[2346] = HAVE_vec_widen_smult_hi_v4si;
  ena[2347] = HAVE_vec_widen_smult_hi_v32qi;
  ena[2348] = HAVE_vec_widen_smult_hi_v16hi;
  ena[2349] = HAVE_vec_widen_smult_hi_v8si;
  ena[2350] = HAVE_vec_widen_smult_lo_v16qi;
  ena[2351] = HAVE_vec_widen_smult_lo_v8hi;
  ena[2352] = HAVE_vec_widen_smult_lo_v4si;
  ena[2353] = HAVE_vec_widen_smult_lo_v32qi;
  ena[2354] = HAVE_vec_widen_smult_lo_v16hi;
  ena[2355] = HAVE_vec_widen_smult_lo_v8si;
  ena[2356] = HAVE_vec_widen_smult_odd_v4si;
  ena[2357] = HAVE_vec_widen_smult_odd_v8si;
  ena[2358] = HAVE_vec_widen_smult_odd_v16si;
  ena[2359] = HAVE_vec_widen_umult_even_v4si;
  ena[2360] = HAVE_vec_widen_umult_even_v8si;
  ena[2361] = HAVE_vec_widen_umult_even_v16si;
  ena[2362] = HAVE_vec_widen_umult_hi_v16qi;
  ena[2363] = HAVE_vec_widen_umult_hi_v8hi;
  ena[2364] = HAVE_vec_widen_umult_hi_v4si;
  ena[2365] = HAVE_vec_widen_umult_hi_v32qi;
  ena[2366] = HAVE_vec_widen_umult_hi_v16hi;
  ena[2367] = HAVE_vec_widen_umult_hi_v8si;
  ena[2368] = HAVE_vec_widen_umult_lo_v16qi;
  ena[2369] = HAVE_vec_widen_umult_lo_v8hi;
  ena[2370] = HAVE_vec_widen_umult_lo_v4si;
  ena[2371] = HAVE_vec_widen_umult_lo_v32qi;
  ena[2372] = HAVE_vec_widen_umult_lo_v16hi;
  ena[2373] = HAVE_vec_widen_umult_lo_v8si;
  ena[2374] = HAVE_vec_widen_umult_odd_v4si;
  ena[2375] = HAVE_vec_widen_umult_odd_v8si;
  ena[2376] = HAVE_vec_widen_umult_odd_v16si;
  ena[2377] = HAVE_vec_addsubv2sf3;
  ena[2378] = HAVE_vec_addsubv4sf3;
  ena[2379] = HAVE_vec_addsubv2df3;
  ena[2380] = HAVE_vec_addsubv8sf3;
  ena[2381] = HAVE_vec_addsubv4df3;
  ena[2382] = HAVE_vec_fmaddsubv4sf4;
  ena[2383] = HAVE_vec_fmaddsubv2df4;
  ena[2384] = HAVE_vec_fmaddsubv8sf4;
  ena[2385] = HAVE_vec_fmaddsubv4df4;
  ena[2386] = HAVE_vec_fmaddsubv16sf4;
  ena[2387] = HAVE_vec_fmaddsubv8df4;
  ena[2388] = HAVE_vec_fmsubaddv4sf4;
  ena[2389] = HAVE_vec_fmsubaddv2df4;
  ena[2390] = HAVE_vec_fmsubaddv8sf4;
  ena[2391] = HAVE_vec_fmsubaddv4df4;
  ena[2392] = HAVE_vec_fmsubaddv16sf4;
  ena[2393] = HAVE_vec_fmsubaddv8df4;
  ena[2394] = HAVE_atomic_addqi;
  ena[2395] = HAVE_atomic_addhi;
  ena[2396] = HAVE_atomic_addsi;
  ena[2397] = HAVE_atomic_adddi;
  ena[2398] = HAVE_atomic_and_fetchqi;
  ena[2399] = HAVE_atomic_and_fetchhi;
  ena[2400] = HAVE_atomic_and_fetchsi;
  ena[2401] = HAVE_atomic_and_fetchdi;
  ena[2402] = HAVE_atomic_and_fetchti;
  ena[2403] = HAVE_atomic_andqi;
  ena[2404] = HAVE_atomic_andhi;
  ena[2405] = HAVE_atomic_andsi;
  ena[2406] = HAVE_atomic_anddi;
  ena[2407] = HAVE_atomic_bit_test_and_sethi;
  ena[2408] = HAVE_atomic_bit_test_and_setsi;
  ena[2409] = HAVE_atomic_bit_test_and_setdi;
  ena[2410] = HAVE_atomic_bit_test_and_complementhi;
  ena[2411] = HAVE_atomic_bit_test_and_complementsi;
  ena[2412] = HAVE_atomic_bit_test_and_complementdi;
  ena[2413] = HAVE_atomic_bit_test_and_resethi;
  ena[2414] = HAVE_atomic_bit_test_and_resetsi;
  ena[2415] = HAVE_atomic_bit_test_and_resetdi;
  ena[2416] = HAVE_atomic_compare_and_swapqi;
  ena[2417] = HAVE_atomic_compare_and_swaphi;
  ena[2418] = HAVE_atomic_compare_and_swapsi;
  ena[2419] = HAVE_atomic_compare_and_swapdi;
  ena[2420] = HAVE_atomic_compare_and_swapti;
  ena[2421] = HAVE_atomic_exchangeqi;
  ena[2422] = HAVE_atomic_exchangehi;
  ena[2423] = HAVE_atomic_exchangesi;
  ena[2424] = HAVE_atomic_exchangedi;
  ena[2425] = HAVE_atomic_fetch_addqi;
  ena[2426] = HAVE_atomic_fetch_addhi;
  ena[2427] = HAVE_atomic_fetch_addsi;
  ena[2428] = HAVE_atomic_fetch_adddi;
  ena[2429] = HAVE_atomic_fetch_andqi;
  ena[2430] = HAVE_atomic_fetch_andhi;
  ena[2431] = HAVE_atomic_fetch_andsi;
  ena[2432] = HAVE_atomic_fetch_anddi;
  ena[2433] = HAVE_atomic_fetch_andti;
  ena[2434] = HAVE_atomic_fetch_nandqi;
  ena[2435] = HAVE_atomic_fetch_nandhi;
  ena[2436] = HAVE_atomic_fetch_nandsi;
  ena[2437] = HAVE_atomic_fetch_nanddi;
  ena[2438] = HAVE_atomic_fetch_nandti;
  ena[2439] = HAVE_atomic_fetch_orqi;
  ena[2440] = HAVE_atomic_fetch_orhi;
  ena[2441] = HAVE_atomic_fetch_orsi;
  ena[2442] = HAVE_atomic_fetch_ordi;
  ena[2443] = HAVE_atomic_fetch_orti;
  ena[2444] = HAVE_atomic_fetch_xorqi;
  ena[2445] = HAVE_atomic_fetch_xorhi;
  ena[2446] = HAVE_atomic_fetch_xorsi;
  ena[2447] = HAVE_atomic_fetch_xordi;
  ena[2448] = HAVE_atomic_fetch_xorti;
  ena[2449] = HAVE_atomic_loadqi;
  ena[2450] = HAVE_atomic_loadhi;
  ena[2451] = HAVE_atomic_loadsi;
  ena[2452] = HAVE_atomic_loaddi;
  ena[2453] = HAVE_atomic_nand_fetchqi;
  ena[2454] = HAVE_atomic_nand_fetchhi;
  ena[2455] = HAVE_atomic_nand_fetchsi;
  ena[2456] = HAVE_atomic_nand_fetchdi;
  ena[2457] = HAVE_atomic_nand_fetchti;
  ena[2458] = HAVE_atomic_or_fetchqi;
  ena[2459] = HAVE_atomic_or_fetchhi;
  ena[2460] = HAVE_atomic_or_fetchsi;
  ena[2461] = HAVE_atomic_or_fetchdi;
  ena[2462] = HAVE_atomic_or_fetchti;
  ena[2463] = HAVE_atomic_orqi;
  ena[2464] = HAVE_atomic_orhi;
  ena[2465] = HAVE_atomic_orsi;
  ena[2466] = HAVE_atomic_ordi;
  ena[2467] = HAVE_atomic_storeqi;
  ena[2468] = HAVE_atomic_storehi;
  ena[2469] = HAVE_atomic_storesi;
  ena[2470] = HAVE_atomic_storedi;
  ena[2471] = HAVE_atomic_subqi;
  ena[2472] = HAVE_atomic_subhi;
  ena[2473] = HAVE_atomic_subsi;
  ena[2474] = HAVE_atomic_subdi;
  ena[2475] = HAVE_atomic_xor_fetchqi;
  ena[2476] = HAVE_atomic_xor_fetchhi;
  ena[2477] = HAVE_atomic_xor_fetchsi;
  ena[2478] = HAVE_atomic_xor_fetchdi;
  ena[2479] = HAVE_atomic_xor_fetchti;
  ena[2480] = HAVE_atomic_xorqi;
  ena[2481] = HAVE_atomic_xorhi;
  ena[2482] = HAVE_atomic_xorsi;
  ena[2483] = HAVE_atomic_xordi;
  ena[2484] = HAVE_atomic_add_fetch_cmp_0qi;
  ena[2485] = HAVE_atomic_add_fetch_cmp_0hi;
  ena[2486] = HAVE_atomic_add_fetch_cmp_0si;
  ena[2487] = HAVE_atomic_add_fetch_cmp_0di;
  ena[2488] = HAVE_atomic_sub_fetch_cmp_0qi;
  ena[2489] = HAVE_atomic_sub_fetch_cmp_0hi;
  ena[2490] = HAVE_atomic_sub_fetch_cmp_0si;
  ena[2491] = HAVE_atomic_sub_fetch_cmp_0di;
  ena[2492] = HAVE_atomic_and_fetch_cmp_0qi;
  ena[2493] = HAVE_atomic_and_fetch_cmp_0hi;
  ena[2494] = HAVE_atomic_and_fetch_cmp_0si;
  ena[2495] = HAVE_atomic_and_fetch_cmp_0di;
  ena[2496] = HAVE_atomic_or_fetch_cmp_0qi;
  ena[2497] = HAVE_atomic_or_fetch_cmp_0hi;
  ena[2498] = HAVE_atomic_or_fetch_cmp_0si;
  ena[2499] = HAVE_atomic_or_fetch_cmp_0di;
  ena[2500] = HAVE_atomic_xor_fetch_cmp_0qi;
  ena[2501] = HAVE_atomic_xor_fetch_cmp_0hi;
  ena[2502] = HAVE_atomic_xor_fetch_cmp_0si;
  ena[2503] = HAVE_atomic_xor_fetch_cmp_0di;
  ena[2504] = HAVE_get_thread_pointersi;
  ena[2505] = HAVE_get_thread_pointerdi;
  ena[2506] = HAVE_vec_duplicatev16qi;
  ena[2507] = HAVE_vec_duplicatev8hi;
  ena[2508] = HAVE_vec_duplicatev4si;
  ena[2509] = HAVE_vec_duplicatev2di;
  ena[2510] = HAVE_vec_duplicatev32qi;
  ena[2511] = HAVE_vec_duplicatev16hi;
  ena[2512] = HAVE_vec_duplicatev8si;
  ena[2513] = HAVE_vec_duplicatev4di;
  ena[2514] = HAVE_vec_duplicatev64qi;
  ena[2515] = HAVE_vec_duplicatev32hi;
  ena[2516] = HAVE_vec_duplicatev16si;
  ena[2517] = HAVE_vec_duplicatev8di;
}

/* Returns TRUE if the target supports any of the partial vector
   optabs: while_ult_optab, len_load_optab or len_store_optab,
   for any mode.  */
bool
partial_vectors_supported_p (void)
{
	return false;
}
static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  unknown_optab,
  unknown_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

