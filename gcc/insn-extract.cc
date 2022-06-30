/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 8895:  /* atomic_xor_fetch_cmp_0di_1 */
    case 8894:  /* atomic_or_fetch_cmp_0di_1 */
    case 8893:  /* atomic_and_fetch_cmp_0di_1 */
    case 8892:  /* atomic_xor_fetch_cmp_0si_1 */
    case 8891:  /* atomic_or_fetch_cmp_0si_1 */
    case 8890:  /* atomic_and_fetch_cmp_0si_1 */
    case 8889:  /* atomic_xor_fetch_cmp_0hi_1 */
    case 8888:  /* atomic_or_fetch_cmp_0hi_1 */
    case 8887:  /* atomic_and_fetch_cmp_0hi_1 */
    case 8886:  /* atomic_xor_fetch_cmp_0qi_1 */
    case 8885:  /* atomic_or_fetch_cmp_0qi_1 */
    case 8884:  /* atomic_and_fetch_cmp_0qi_1 */
    case 8883:  /* atomic_sub_fetch_cmp_0di_1 */
    case 8882:  /* atomic_sub_fetch_cmp_0si_1 */
    case 8881:  /* atomic_sub_fetch_cmp_0hi_1 */
    case 8880:  /* atomic_sub_fetch_cmp_0qi_1 */
    case 8879:  /* atomic_add_fetch_cmp_0di_1 */
    case 8878:  /* atomic_add_fetch_cmp_0si_1 */
    case 8877:  /* atomic_add_fetch_cmp_0hi_1 */
    case 8876:  /* atomic_add_fetch_cmp_0qi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 8872:  /* atomic_bit_test_and_complementdi_1 */
    case 8871:  /* atomic_bit_test_and_complementsi_1 */
    case 8870:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 8875:  /* atomic_bit_test_and_resetdi_1 */
    case 8874:  /* atomic_bit_test_and_resetsi_1 */
    case 8873:  /* atomic_bit_test_and_resethi_1 */
    case 8869:  /* atomic_bit_test_and_setdi_1 */
    case 8868:  /* atomic_bit_test_and_setsi_1 */
    case 8867:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8866:  /* atomic_xordi */
    case 8865:  /* atomic_ordi */
    case 8864:  /* atomic_anddi */
    case 8863:  /* atomic_xorsi */
    case 8862:  /* atomic_orsi */
    case 8861:  /* atomic_andsi */
    case 8860:  /* atomic_xorhi */
    case 8859:  /* atomic_orhi */
    case 8858:  /* atomic_andhi */
    case 8857:  /* atomic_xorqi */
    case 8856:  /* atomic_orqi */
    case 8855:  /* atomic_andqi */
    case 8854:  /* atomic_subdi */
    case 8853:  /* atomic_subsi */
    case 8852:  /* atomic_subhi */
    case 8851:  /* atomic_subqi */
    case 8850:  /* atomic_adddi */
    case 8849:  /* atomic_addsi */
    case 8848:  /* atomic_addhi */
    case 8847:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8846:  /* atomic_exchangedi */
    case 8845:  /* atomic_exchangesi */
    case 8844:  /* atomic_exchangehi */
    case 8843:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8842:  /* *atomic_fetch_add_cmpdi */
    case 8841:  /* *atomic_fetch_add_cmpsi */
    case 8840:  /* *atomic_fetch_add_cmphi */
    case 8839:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 8838:  /* atomic_fetch_adddi */
    case 8837:  /* atomic_fetch_addsi */
    case 8836:  /* atomic_fetch_addhi */
    case 8835:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 8834:  /* atomic_compare_and_swapdi_1 */
    case 8833:  /* atomic_compare_and_swapsi_1 */
    case 8832:  /* atomic_compare_and_swaphi_1 */
    case 8831:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8830:  /* atomic_compare_and_swapti_doubleword */
    case 8829:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8818:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8814:  /* *aesencwide256klu8 */
    case 8813:  /* *aesencwide128klu8 */
    case 8812:  /* *aesdecwide256klu8 */
    case 8811:  /* *aesdecwide128klu8 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 8810:  /* aesenc256klu8 */
    case 8809:  /* aesenc128klu8 */
    case 8808:  /* aesdec256klu8 */
    case 8807:  /* aesdec128klu8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 8806:  /* *encodekey256u32 */
    case 8805:  /* *encodekey128u32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 8804:  /* loadiwkey */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      break;

    case 8597:  /* *restore_multiple_leave_returndi */
    case 8596:  /* *restore_multiple_leave_returnsi */
    case 8595:  /* *restore_multiple_and_returndi */
    case 8594:  /* *restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8593:  /* *restore_multipledi */
    case 8592:  /* *restore_multiplesi */
    case 8591:  /* *save_multipledi */
    case 8590:  /* *save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 8442:  /* avx512dq_vmfpclassv2df_mask */
    case 8440:  /* avx512dq_vmfpclassv4sf_mask */
    case 8438:  /* avx512dq_vmfpclassv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8358:  /* compressstorev8hi_mask */
    case 8357:  /* compressstorev16hi_mask */
    case 8356:  /* compressstorev32hi_mask */
    case 8355:  /* compressstorev32qi_mask */
    case 8354:  /* compressstorev16qi_mask */
    case 8353:  /* compressstorev64qi_mask */
    case 8352:  /* avx512vl_compressstorev2df_mask */
    case 8351:  /* avx512vl_compressstorev2di_mask */
    case 8350:  /* avx512vl_compressstorev4sf_mask */
    case 8349:  /* avx512vl_compressstorev4si_mask */
    case 8348:  /* avx512vl_compressstorev4df_mask */
    case 8347:  /* avx512vl_compressstorev4di_mask */
    case 8346:  /* avx512vl_compressstorev8sf_mask */
    case 8345:  /* avx512vl_compressstorev8si_mask */
    case 8344:  /* avx512f_compressstorev8df_mask */
    case 8343:  /* avx512f_compressstorev8di_mask */
    case 8342:  /* avx512f_compressstorev16sf_mask */
    case 8341:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8322:  /* *avx512f_scatterdiv2df */
    case 8321:  /* *avx512f_scatterdiv2df */
    case 8320:  /* *avx512f_scatterdiv2di */
    case 8319:  /* *avx512f_scatterdiv2di */
    case 8318:  /* *avx512f_scatterdiv4sf */
    case 8317:  /* *avx512f_scatterdiv4sf */
    case 8316:  /* *avx512f_scatterdiv4si */
    case 8315:  /* *avx512f_scatterdiv4si */
    case 8314:  /* *avx512f_scatterdiv4df */
    case 8313:  /* *avx512f_scatterdiv4df */
    case 8312:  /* *avx512f_scatterdiv4di */
    case 8311:  /* *avx512f_scatterdiv4di */
    case 8310:  /* *avx512f_scatterdiv8sf */
    case 8309:  /* *avx512f_scatterdiv8sf */
    case 8308:  /* *avx512f_scatterdiv8si */
    case 8307:  /* *avx512f_scatterdiv8si */
    case 8306:  /* *avx512f_scatterdiv8df */
    case 8305:  /* *avx512f_scatterdiv8df */
    case 8304:  /* *avx512f_scatterdiv8di */
    case 8303:  /* *avx512f_scatterdiv8di */
    case 8302:  /* *avx512f_scatterdiv16sf */
    case 8301:  /* *avx512f_scatterdiv16sf */
    case 8300:  /* *avx512f_scatterdiv16si */
    case 8299:  /* *avx512f_scatterdiv16si */
    case 8298:  /* *avx512f_scattersiv2df */
    case 8297:  /* *avx512f_scattersiv2df */
    case 8296:  /* *avx512f_scattersiv2di */
    case 8295:  /* *avx512f_scattersiv2di */
    case 8294:  /* *avx512f_scattersiv4sf */
    case 8293:  /* *avx512f_scattersiv4sf */
    case 8292:  /* *avx512f_scattersiv4si */
    case 8291:  /* *avx512f_scattersiv4si */
    case 8290:  /* *avx512f_scattersiv4df */
    case 8289:  /* *avx512f_scattersiv4df */
    case 8288:  /* *avx512f_scattersiv4di */
    case 8287:  /* *avx512f_scattersiv4di */
    case 8286:  /* *avx512f_scattersiv8sf */
    case 8285:  /* *avx512f_scattersiv8sf */
    case 8284:  /* *avx512f_scattersiv8si */
    case 8283:  /* *avx512f_scattersiv8si */
    case 8282:  /* *avx512f_scattersiv8df */
    case 8281:  /* *avx512f_scattersiv8df */
    case 8280:  /* *avx512f_scattersiv8di */
    case 8279:  /* *avx512f_scattersiv8di */
    case 8278:  /* *avx512f_scattersiv16sf */
    case 8277:  /* *avx512f_scattersiv16sf */
    case 8276:  /* *avx512f_scattersiv16si */
    case 8275:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 8274:  /* *avx512f_gatherdiv2df_2 */
    case 8273:  /* *avx512f_gatherdiv2df_2 */
    case 8272:  /* *avx512f_gatherdiv2di_2 */
    case 8271:  /* *avx512f_gatherdiv2di_2 */
    case 8270:  /* *avx512f_gatherdiv4sf_2 */
    case 8269:  /* *avx512f_gatherdiv4sf_2 */
    case 8268:  /* *avx512f_gatherdiv4si_2 */
    case 8267:  /* *avx512f_gatherdiv4si_2 */
    case 8266:  /* *avx512f_gatherdiv4df_2 */
    case 8265:  /* *avx512f_gatherdiv4df_2 */
    case 8264:  /* *avx512f_gatherdiv4di_2 */
    case 8263:  /* *avx512f_gatherdiv4di_2 */
    case 8262:  /* *avx512f_gatherdiv8sf_2 */
    case 8261:  /* *avx512f_gatherdiv8sf_2 */
    case 8260:  /* *avx512f_gatherdiv8si_2 */
    case 8259:  /* *avx512f_gatherdiv8si_2 */
    case 8258:  /* *avx512f_gatherdiv8df_2 */
    case 8257:  /* *avx512f_gatherdiv8df_2 */
    case 8256:  /* *avx512f_gatherdiv8di_2 */
    case 8255:  /* *avx512f_gatherdiv8di_2 */
    case 8254:  /* *avx512f_gatherdiv16sf_2 */
    case 8253:  /* *avx512f_gatherdiv16sf_2 */
    case 8252:  /* *avx512f_gatherdiv16si_2 */
    case 8251:  /* *avx512f_gatherdiv16si_2 */
    case 8226:  /* *avx512f_gathersiv2df_2 */
    case 8225:  /* *avx512f_gathersiv2df_2 */
    case 8224:  /* *avx512f_gathersiv2di_2 */
    case 8223:  /* *avx512f_gathersiv2di_2 */
    case 8222:  /* *avx512f_gathersiv4sf_2 */
    case 8221:  /* *avx512f_gathersiv4sf_2 */
    case 8220:  /* *avx512f_gathersiv4si_2 */
    case 8219:  /* *avx512f_gathersiv4si_2 */
    case 8218:  /* *avx512f_gathersiv4df_2 */
    case 8217:  /* *avx512f_gathersiv4df_2 */
    case 8216:  /* *avx512f_gathersiv4di_2 */
    case 8215:  /* *avx512f_gathersiv4di_2 */
    case 8214:  /* *avx512f_gathersiv8sf_2 */
    case 8213:  /* *avx512f_gathersiv8sf_2 */
    case 8212:  /* *avx512f_gathersiv8si_2 */
    case 8211:  /* *avx512f_gathersiv8si_2 */
    case 8210:  /* *avx512f_gathersiv8df_2 */
    case 8209:  /* *avx512f_gathersiv8df_2 */
    case 8208:  /* *avx512f_gathersiv8di_2 */
    case 8207:  /* *avx512f_gathersiv8di_2 */
    case 8206:  /* *avx512f_gathersiv16sf_2 */
    case 8205:  /* *avx512f_gathersiv16sf_2 */
    case 8204:  /* *avx512f_gathersiv16si_2 */
    case 8203:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8250:  /* *avx512f_gatherdiv2df */
    case 8249:  /* *avx512f_gatherdiv2df */
    case 8248:  /* *avx512f_gatherdiv2di */
    case 8247:  /* *avx512f_gatherdiv2di */
    case 8246:  /* *avx512f_gatherdiv4sf */
    case 8245:  /* *avx512f_gatherdiv4sf */
    case 8244:  /* *avx512f_gatherdiv4si */
    case 8243:  /* *avx512f_gatherdiv4si */
    case 8242:  /* *avx512f_gatherdiv4df */
    case 8241:  /* *avx512f_gatherdiv4df */
    case 8240:  /* *avx512f_gatherdiv4di */
    case 8239:  /* *avx512f_gatherdiv4di */
    case 8238:  /* *avx512f_gatherdiv8sf */
    case 8237:  /* *avx512f_gatherdiv8sf */
    case 8236:  /* *avx512f_gatherdiv8si */
    case 8235:  /* *avx512f_gatherdiv8si */
    case 8234:  /* *avx512f_gatherdiv8df */
    case 8233:  /* *avx512f_gatherdiv8df */
    case 8232:  /* *avx512f_gatherdiv8di */
    case 8231:  /* *avx512f_gatherdiv8di */
    case 8230:  /* *avx512f_gatherdiv16sf */
    case 8229:  /* *avx512f_gatherdiv16sf */
    case 8228:  /* *avx512f_gatherdiv16si */
    case 8227:  /* *avx512f_gatherdiv16si */
    case 8202:  /* *avx512f_gathersiv2df */
    case 8201:  /* *avx512f_gathersiv2df */
    case 8200:  /* *avx512f_gathersiv2di */
    case 8199:  /* *avx512f_gathersiv2di */
    case 8198:  /* *avx512f_gathersiv4sf */
    case 8197:  /* *avx512f_gathersiv4sf */
    case 8196:  /* *avx512f_gathersiv4si */
    case 8195:  /* *avx512f_gathersiv4si */
    case 8194:  /* *avx512f_gathersiv4df */
    case 8193:  /* *avx512f_gathersiv4df */
    case 8192:  /* *avx512f_gathersiv4di */
    case 8191:  /* *avx512f_gathersiv4di */
    case 8190:  /* *avx512f_gathersiv8sf */
    case 8189:  /* *avx512f_gathersiv8sf */
    case 8188:  /* *avx512f_gathersiv8si */
    case 8187:  /* *avx512f_gathersiv8si */
    case 8186:  /* *avx512f_gathersiv8df */
    case 8185:  /* *avx512f_gathersiv8df */
    case 8184:  /* *avx512f_gathersiv8di */
    case 8183:  /* *avx512f_gathersiv8di */
    case 8182:  /* *avx512f_gathersiv16sf */
    case 8181:  /* *avx512f_gathersiv16sf */
    case 8180:  /* *avx512f_gathersiv16si */
    case 8179:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8178:  /* *avx2_gatherdiv8sf_4 */
    case 8177:  /* *avx2_gatherdiv8sf_4 */
    case 8176:  /* *avx2_gatherdiv8si_4 */
    case 8175:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8174:  /* *avx2_gatherdiv8sf_3 */
    case 8173:  /* *avx2_gatherdiv8sf_3 */
    case 8172:  /* *avx2_gatherdiv8si_3 */
    case 8171:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8170:  /* *avx2_gatherdiv8sf_2 */
    case 8169:  /* *avx2_gatherdiv8si_2 */
    case 8168:  /* *avx2_gatherdiv4sf_2 */
    case 8167:  /* *avx2_gatherdiv4si_2 */
    case 8166:  /* *avx2_gatherdiv4df_2 */
    case 8165:  /* *avx2_gatherdiv4di_2 */
    case 8164:  /* *avx2_gatherdiv2df_2 */
    case 8163:  /* *avx2_gatherdiv2di_2 */
    case 8162:  /* *avx2_gatherdiv8sf_2 */
    case 8161:  /* *avx2_gatherdiv8si_2 */
    case 8160:  /* *avx2_gatherdiv4sf_2 */
    case 8159:  /* *avx2_gatherdiv4si_2 */
    case 8158:  /* *avx2_gatherdiv4df_2 */
    case 8157:  /* *avx2_gatherdiv4di_2 */
    case 8156:  /* *avx2_gatherdiv2df_2 */
    case 8155:  /* *avx2_gatherdiv2di_2 */
    case 8138:  /* *avx2_gathersiv8sf_2 */
    case 8137:  /* *avx2_gathersiv8si_2 */
    case 8136:  /* *avx2_gathersiv4sf_2 */
    case 8135:  /* *avx2_gathersiv4si_2 */
    case 8134:  /* *avx2_gathersiv4df_2 */
    case 8133:  /* *avx2_gathersiv4di_2 */
    case 8132:  /* *avx2_gathersiv2df_2 */
    case 8131:  /* *avx2_gathersiv2di_2 */
    case 8130:  /* *avx2_gathersiv8sf_2 */
    case 8129:  /* *avx2_gathersiv8si_2 */
    case 8128:  /* *avx2_gathersiv4sf_2 */
    case 8127:  /* *avx2_gathersiv4si_2 */
    case 8126:  /* *avx2_gathersiv4df_2 */
    case 8125:  /* *avx2_gathersiv4di_2 */
    case 8124:  /* *avx2_gathersiv2df_2 */
    case 8123:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8154:  /* *avx2_gatherdiv8sf */
    case 8153:  /* *avx2_gatherdiv8si */
    case 8152:  /* *avx2_gatherdiv4sf */
    case 8151:  /* *avx2_gatherdiv4si */
    case 8150:  /* *avx2_gatherdiv4df */
    case 8149:  /* *avx2_gatherdiv4di */
    case 8148:  /* *avx2_gatherdiv2df */
    case 8147:  /* *avx2_gatherdiv2di */
    case 8146:  /* *avx2_gatherdiv8sf */
    case 8145:  /* *avx2_gatherdiv8si */
    case 8144:  /* *avx2_gatherdiv4sf */
    case 8143:  /* *avx2_gatherdiv4si */
    case 8142:  /* *avx2_gatherdiv4df */
    case 8141:  /* *avx2_gatherdiv4di */
    case 8140:  /* *avx2_gatherdiv2df */
    case 8139:  /* *avx2_gatherdiv2di */
    case 8122:  /* *avx2_gathersiv8sf */
    case 8121:  /* *avx2_gathersiv8si */
    case 8120:  /* *avx2_gathersiv4sf */
    case 8119:  /* *avx2_gathersiv4si */
    case 8118:  /* *avx2_gathersiv4df */
    case 8117:  /* *avx2_gathersiv4di */
    case 8116:  /* *avx2_gathersiv2df */
    case 8115:  /* *avx2_gathersiv2di */
    case 8114:  /* *avx2_gathersiv8sf */
    case 8113:  /* *avx2_gathersiv8si */
    case 8112:  /* *avx2_gathersiv4sf */
    case 8111:  /* *avx2_gathersiv4si */
    case 8110:  /* *avx2_gathersiv4df */
    case 8109:  /* *avx2_gathersiv4di */
    case 8108:  /* *avx2_gathersiv2df */
    case 8107:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8106:  /* *avx512f_vcvtps2ph512_merge_mask */
    case 8102:  /* *vcvtps2ph256_merge_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8097:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8087:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7993:  /* avx2_maskstoreq256 */
    case 7992:  /* avx2_maskstored256 */
    case 7991:  /* avx2_maskstoreq */
    case 7990:  /* avx2_maskstored */
    case 7989:  /* avx_maskstorepd256 */
    case 7988:  /* avx_maskstoreps256 */
    case 7987:  /* avx_maskstorepd */
    case 7986:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 7985:  /* avx2_maskloadq256 */
    case 7984:  /* avx2_maskloadd256 */
    case 7983:  /* avx2_maskloadq */
    case 7982:  /* avx2_maskloadd */
    case 7981:  /* avx_maskloadpd256 */
    case 7980:  /* avx_maskloadps256 */
    case 7979:  /* avx_maskloadpd */
    case 7978:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 7943:  /* avx512vl_vpermt2varv16qi3_mask */
    case 7942:  /* avx512vl_vpermt2varv32qi3_mask */
    case 7941:  /* avx512bw_vpermt2varv64qi3_mask */
    case 7940:  /* avx512vl_vpermt2varv8hi3_mask */
    case 7939:  /* avx512vl_vpermt2varv16hi3_mask */
    case 7938:  /* avx512bw_vpermt2varv32hi3_mask */
    case 7937:  /* avx512vl_vpermt2varv2df3_mask */
    case 7936:  /* avx512vl_vpermt2varv2di3_mask */
    case 7935:  /* avx512vl_vpermt2varv4sf3_mask */
    case 7934:  /* avx512vl_vpermt2varv4si3_mask */
    case 7933:  /* avx512vl_vpermt2varv4df3_mask */
    case 7932:  /* avx512vl_vpermt2varv4di3_mask */
    case 7931:  /* avx512vl_vpermt2varv8sf3_mask */
    case 7930:  /* avx512vl_vpermt2varv8si3_mask */
    case 7929:  /* avx512f_vpermt2varv8df3_mask */
    case 7928:  /* avx512f_vpermt2varv8di3_mask */
    case 7927:  /* avx512f_vpermt2varv16sf3_mask */
    case 7926:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7889:  /* *avx512vl_vpermi2varv2df3_mask */
    case 7888:  /* *avx512vl_vpermi2varv4df3_mask */
    case 7887:  /* *avx512f_vpermi2varv8df3_mask */
    case 7886:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 7885:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 7884:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 7883:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 7882:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 7881:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 7880:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 7879:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 7878:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 7877:  /* *avx512vl_vpermi2varv2di3_mask */
    case 7876:  /* *avx512vl_vpermi2varv4di3_mask */
    case 7875:  /* *avx512vl_vpermi2varv4si3_mask */
    case 7874:  /* *avx512vl_vpermi2varv8si3_mask */
    case 7873:  /* *avx512f_vpermi2varv8di3_mask */
    case 7872:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7827:  /* avx_vbroadcastf128_v16hf */
    case 7826:  /* avx_vbroadcastf128_v4df */
    case 7825:  /* avx_vbroadcastf128_v8sf */
    case 7824:  /* avx_vbroadcastf128_v4di */
    case 7823:  /* avx_vbroadcastf128_v8si */
    case 7822:  /* avx_vbroadcastf128_v16hi */
    case 7821:  /* avx_vbroadcastf128_v32qi */
    case 7808:  /* avx2_vbroadcasti128_v4di */
    case 7807:  /* avx2_vbroadcasti128_v8si */
    case 7806:  /* avx2_vbroadcasti128_v16hi */
    case 7805:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7694:  /* *avx_vpermilpv2df_mask */
    case 7692:  /* *avx_vpermilpv4df_mask */
    case 7690:  /* *avx512f_vpermilpv8df_mask */
    case 7688:  /* *avx_vpermilpv4sf_mask */
    case 7686:  /* *avx_vpermilpv8sf_mask */
    case 7684:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7955:  /* *ssse3_palignrv2df_perm */
    case 7954:  /* *ssse3_palignrv4sf_perm */
    case 7953:  /* *ssse3_palignrv2di_perm */
    case 7952:  /* *ssse3_palignrv4si_perm */
    case 7951:  /* *ssse3_palignrv8hi_perm */
    case 7950:  /* *ssse3_palignrv16qi_perm */
    case 7693:  /* *avx_vpermilpv2df */
    case 7691:  /* *avx_vpermilpv4df */
    case 7689:  /* *avx512f_vpermilpv8df */
    case 7687:  /* *avx_vpermilpv4sf */
    case 7685:  /* *avx_vpermilpv8sf */
    case 7683:  /* *avx512f_vpermilpv16sf */
    case 7682:  /* *avx_vperm_broadcast_v4df */
    case 7681:  /* *avx_vperm_broadcast_v8sf */
    case 7680:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7630:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 7614:  /* xop_maskcmp_uns2v2di3 */
    case 7613:  /* xop_maskcmp_uns2v4si3 */
    case 7612:  /* xop_maskcmp_uns2v8hi3 */
    case 7611:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 7594:  /* xop_shlv2di3 */
    case 7593:  /* xop_shlv4si3 */
    case 7592:  /* xop_shlv8hi3 */
    case 7591:  /* xop_shlv16qi3 */
    case 7590:  /* xop_shav2di3 */
    case 7589:  /* xop_shav4si3 */
    case 7588:  /* xop_shav8hi3 */
    case 7587:  /* xop_shav16qi3 */
    case 7586:  /* xop_vrotlv2di3 */
    case 7585:  /* xop_vrotlv4si3 */
    case 7584:  /* xop_vrotlv8hi3 */
    case 7583:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 7574:  /* xop_pperm_pack_v8hi_v16qi */
    case 7573:  /* xop_pperm_pack_v4si_v8hi */
    case 7572:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7561:  /* xop_phaddubq */
    case 7560:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 7565:  /* xop_phadduwq */
    case 7564:  /* xop_phaddwq */
    case 7559:  /* xop_phaddubd */
    case 7558:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7570:  /* xop_phsubdq */
    case 7569:  /* xop_phsubwd */
    case 7568:  /* xop_phsubbw */
    case 7567:  /* xop_phaddudq */
    case 7566:  /* xop_phadddq */
    case 7563:  /* xop_phadduwd */
    case 7562:  /* xop_phaddwd */
    case 7557:  /* xop_phaddubw */
    case 7556:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7539:  /* xop_pmadcsswd */
    case 7538:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7537:  /* xop_pmacsswd */
    case 7536:  /* xop_pmacswd */
    case 7535:  /* xop_pmacssdqh */
    case 7534:  /* xop_pmacsdqh */
    case 7533:  /* xop_pmacssdql */
    case 7532:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7527:  /* avx512er_vmrsqrt28v2df_mask_round */
    case 7523:  /* avx512er_vmrsqrt28v4sf_mask_round */
    case 7511:  /* avx512er_vmrcp28v2df_mask_round */
    case 7507:  /* avx512er_vmrcp28v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7526:  /* avx512er_vmrsqrt28v2df_mask */
    case 7522:  /* avx512er_vmrsqrt28v4sf_mask */
    case 7510:  /* avx512er_vmrcp28v2df_mask */
    case 7506:  /* avx512er_vmrcp28v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7525:  /* avx512er_vmrsqrt28v2df_round */
    case 7521:  /* avx512er_vmrsqrt28v4sf_round */
    case 7509:  /* avx512er_vmrcp28v2df_round */
    case 7505:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7487:  /* *avx512pf_scatterpfv8didf_mask */
    case 7486:  /* *avx512pf_scatterpfv8didf_mask */
    case 7485:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7484:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7483:  /* *avx512pf_scatterpfv8disf_mask */
    case 7482:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7481:  /* *avx512pf_scatterpfv8disf_mask */
    case 7480:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7479:  /* *avx512pf_gatherpfv8didf_mask */
    case 7478:  /* *avx512pf_gatherpfv8didf_mask */
    case 7477:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7476:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7475:  /* *avx512pf_gatherpfv8disf_mask */
    case 7474:  /* *avx512pf_gatherpfv16sisf_mask */
    case 7473:  /* *avx512pf_gatherpfv8disf_mask */
    case 7472:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 7471:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7470:  /* sse4_2_pcmpistrm */
    case 7469:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7468:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 7467:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 7466:  /* sse4_2_pcmpestrm */
    case 7465:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 7464:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 7435:  /* *sse4_1_zero_extendv2siv2di2_4 */
    case 7421:  /* *avx2_zero_extendv4siv4di2_2 */
    case 7415:  /* *avx512f_zero_extendv8siv8di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7381:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7380:  /* *sse4_1_zero_extendv2qiv2di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7409:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 7407:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 7371:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 7369:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 7315:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 7313:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7408:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 7406:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 7370:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 7368:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 7314:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 7312:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 7433:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 7431:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 7397:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 7395:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 7359:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 7357:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 7343:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 7341:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 7303:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 7301:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 7283:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 7281:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7432:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 7430:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 7396:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 7394:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 7358:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 7356:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 7342:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 7340:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 7302:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 7300:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 7282:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 7280:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 7347:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7346:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7345:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7331:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7330:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7329:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7323:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7322:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7321:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7287:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7286:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7285:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7271:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7270:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7269:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7263:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7262:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7261:  /* *avx2_zero_extendv16qiv16hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8085:  /* *vec_concatv2df_0_1 */
    case 8084:  /* *vec_concatv4df_0_1 */
    case 8083:  /* *vec_concatv8df_0_1 */
    case 8082:  /* *vec_concatv4sf_0_1 */
    case 8081:  /* *vec_concatv8sf_0_1 */
    case 8080:  /* *vec_concatv16sf_0_1 */
    case 8079:  /* *vec_concatv8hf_0_1 */
    case 8078:  /* *vec_concatv16hf_0_1 */
    case 8077:  /* *vec_concatv32hf_0_1 */
    case 8076:  /* *vec_concatv2di_0_1 */
    case 8075:  /* *vec_concatv4di_0_1 */
    case 8074:  /* *vec_concatv8di_0_1 */
    case 8073:  /* *vec_concatv4si_0_1 */
    case 8072:  /* *vec_concatv8si_0_1 */
    case 8071:  /* *vec_concatv16si_0_1 */
    case 8070:  /* *vec_concatv8hi_0_1 */
    case 8069:  /* *vec_concatv16hi_0_1 */
    case 8068:  /* *vec_concatv32hi_0_1 */
    case 8067:  /* *vec_concatv16qi_0_1 */
    case 8066:  /* *vec_concatv32qi_0_1 */
    case 8065:  /* *vec_concatv64qi_0_1 */
    case 7949:  /* *avx_vperm2f128v4df_nozero */
    case 7948:  /* *avx_vperm2f128v8sf_nozero */
    case 7947:  /* *avx_vperm2f128v8si_nozero */
    case 7434:  /* *sse4_1_zero_extendv2siv2di2_3 */
    case 7420:  /* *avx2_zero_extendv4siv4di2_1 */
    case 7414:  /* *avx512f_zero_extendv8siv8di2_1 */
    case 7344:  /* *sse4_1_zero_extendv4hiv4si2_3 */
    case 7328:  /* avx2_zero_extendv8hiv8si2_1 */
    case 7320:  /* avx512f_zero_extendv16hiv16si2_1 */
    case 7284:  /* *sse4_1_zero_extendv8qiv8hi2_3 */
    case 7268:  /* *avx512bw_zero_extendv32qiv32hi2_1 */
    case 7260:  /* *avx2_zero_extendv16qiv16hi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7248:  /* *sse4_1_pblendvb_lt_subreg_not */
    case 7247:  /* *avx2_pblendvb_lt_subreg_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7227:  /* *avx_blendvpd256_not_ltint */
    case 7226:  /* *avx_blendvps256_not_ltint */
    case 7225:  /* *sse4_1_blendvpd_not_ltint */
    case 7224:  /* *sse4_1_blendvps_not_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7223:  /* *avx_blendvpd256_ltint */
    case 7222:  /* *avx_blendvps256_ltint */
    case 7221:  /* *sse4_1_blendvpd_ltint */
    case 7220:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7246:  /* *sse4_1_pblendvb_lt */
    case 7245:  /* *avx2_pblendvb_lt */
    case 7219:  /* *sse4_1_blendvpd_lt */
    case 7218:  /* *avx_blendvpd256_lt */
    case 7217:  /* *sse4_1_blendvps_lt */
    case 7216:  /* *avx_blendvps256_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7157:  /* *ssse3_pshufbv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7148:  /* *ssse3_pmulhrswv8hi3_mask */
    case 7146:  /* *avx2_pmulhrswv16hi3_mask */
    case 7144:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7150:  /* *smulhrsv2hi3 */
    case 7149:  /* *ssse3_pmulhrswv4hi3 */
    case 7147:  /* *ssse3_pmulhrswv8hi3 */
    case 7145:  /* *avx2_pmulhrswv16hi3 */
    case 7143:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7140:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7139:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 7131:  /* ssse3_phsubdv2si3 */
    case 7130:  /* ssse3_phadddv2si3 */
    case 7129:  /* ssse3_phsubdv4si3 */
    case 7128:  /* ssse3_phadddv4si3 */
    case 7127:  /* avx2_phsubdv8si3 */
    case 7126:  /* avx2_phadddv8si3 */
    case 7125:  /* ssse3_phsubswv4hi3 */
    case 7124:  /* ssse3_phsubwv4hi3 */
    case 7123:  /* ssse3_phaddswv4hi3 */
    case 7122:  /* ssse3_phaddwv4hi3 */
    case 7121:  /* ssse3_phsubswv8hi3 */
    case 7120:  /* ssse3_phsubwv8hi3 */
    case 7119:  /* ssse3_phaddswv8hi3 */
    case 7118:  /* ssse3_phaddwv8hi3 */
    case 7117:  /* avx2_phsubswv16hi3 */
    case 7116:  /* avx2_phsubwv16hi3 */
    case 7115:  /* avx2_phaddswv16hi3 */
    case 7114:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 7100:  /* *sse2_pmovskb_zexthisi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 7094:  /* *sse2_movmskpd_uext_shift */
    case 7093:  /* *sse2_movmskpd_ext_shift */
    case 7092:  /* *avx_movmskpd256_uext_shift */
    case 7091:  /* *avx_movmskpd256_ext_shift */
    case 7090:  /* *sse_movmskps_uext_shift */
    case 7089:  /* *sse_movmskps_ext_shift */
    case 7088:  /* *avx_movmskps256_uext_shift */
    case 7087:  /* *avx_movmskps256_ext_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 7086:  /* *sse2_movmskpd_shift */
    case 7085:  /* *avx_movmskpd256_shift */
    case 7084:  /* *sse_movmskps_shift */
    case 7083:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 7105:  /* *sse2_pmovmskb_ext_lt */
    case 7104:  /* *sse2_pmovmskb_zext_lt */
    case 7103:  /* *avx2_pmovmskb_zext_lt */
    case 7082:  /* *sse2_movmskpd_uext_lt */
    case 7081:  /* *sse2_movmskpd_ext_lt */
    case 7080:  /* *avx_movmskpd256_uext_lt */
    case 7079:  /* *avx_movmskpd256_ext_lt */
    case 7078:  /* *sse_movmskps_uext_lt */
    case 7077:  /* *sse_movmskps_ext_lt */
    case 7076:  /* *avx_movmskps256_uext_lt */
    case 7075:  /* *avx_movmskps256_ext_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 7055:  /* *sse2_uavgv8hi3_mask */
    case 7053:  /* *avx2_uavgv16hi3_mask */
    case 7051:  /* *avx512bw_uavgv32hi3_mask */
    case 7049:  /* *sse2_uavgv16qi3_mask */
    case 7047:  /* *avx2_uavgv32qi3_mask */
    case 7045:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7054:  /* *sse2_uavgv8hi3 */
    case 7052:  /* *avx2_uavgv16hi3 */
    case 7050:  /* *avx512bw_uavgv32hi3 */
    case 7048:  /* *sse2_uavgv16qi3 */
    case 7046:  /* *avx2_uavgv32qi3 */
    case 7044:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7036:  /* *vec_concatv8hi_permt2 */
    case 7035:  /* *vec_concatv16qi_permt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7005:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7004:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 7003:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7002:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 6997:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6996:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 6989:  /* avx512f_pshufd_1_mask */
    case 6987:  /* *avx512f_shuf_i32x4_1_mask_1 */
    case 6985:  /* *avx512f_shuf_f32x4_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6988:  /* avx512f_pshufd_1 */
    case 6986:  /* *avx512f_shuf_i32x4_1_1 */
    case 6984:  /* *avx512f_shuf_f32x4_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 7702:  /* avx512f_permv8di_1_mask */
    case 7700:  /* avx512f_permv8df_1_mask */
    case 6991:  /* avx2_pshufd_1_mask */
    case 6975:  /* *avx512f_shuf_i64x2_1_mask_1 */
    case 6973:  /* *avx512f_shuf_f64x2_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7701:  /* avx512f_permv8di_1 */
    case 7699:  /* avx512f_permv8df_1 */
    case 6990:  /* avx2_pshufd_1 */
    case 6974:  /* *avx512f_shuf_i64x2_1_1 */
    case 6972:  /* *avx512f_shuf_f64x2_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 7967:  /* vec_set_lo_v8sf_mask */
    case 7965:  /* vec_set_lo_v8si_mask */
    case 7959:  /* vec_set_lo_v4df_mask */
    case 7957:  /* vec_set_lo_v4di_mask */
    case 6959:  /* vec_set_lo_v8di_mask */
    case 6957:  /* vec_set_lo_v8df_mask */
    case 6951:  /* vec_set_lo_v16si_mask */
    case 6949:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6947:  /* avx512f_vinserti32x4_1_mask */
    case 6945:  /* avx512f_vinsertf32x4_1_mask */
    case 6943:  /* avx512dq_vinserti64x2_1_mask */
    case 6941:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6946:  /* *avx512f_vinserti32x4_1 */
    case 6944:  /* *avx512f_vinsertf32x4_1 */
    case 6942:  /* *avx512dq_vinserti64x2_1 */
    case 6940:  /* *avx512dq_vinsertf64x2_1 */
    case 6939:  /* *avx512f_vinserti32x4_0 */
    case 6938:  /* *avx512f_vinsertf32x4_0 */
    case 6937:  /* *avx512dq_vinserti64x2_0 */
    case 6936:  /* *avx512dq_vinsertf64x2_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7242:  /* sse4_1_packusdw_mask */
    case 7240:  /* avx2_packusdw_mask */
    case 7238:  /* avx512bw_packusdw_mask */
    case 6882:  /* sse2_packuswb_mask */
    case 6880:  /* avx2_packuswb_mask */
    case 6878:  /* avx512bw_packuswb_mask */
    case 6876:  /* sse2_packssdw_mask */
    case 6874:  /* avx2_packssdw_mask */
    case 6872:  /* avx512bw_packssdw_mask */
    case 6870:  /* sse2_packsswb_mask */
    case 6868:  /* avx2_packsswb_mask */
    case 6866:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6864:  /* *avx512vl_testnmv2di3_zext_mask */
    case 6863:  /* *avx512vl_testnmv2di3_zext_mask */
    case 6862:  /* *avx512vl_testnmv2di3_zext_mask */
    case 6861:  /* *avx512vl_testnmv4di3_zext_mask */
    case 6860:  /* *avx512vl_testnmv4di3_zext_mask */
    case 6859:  /* *avx512vl_testnmv4di3_zext_mask */
    case 6858:  /* *avx512f_testnmv8di3_zext_mask */
    case 6857:  /* *avx512f_testnmv8di3_zext_mask */
    case 6856:  /* *avx512f_testnmv8di3_zext_mask */
    case 6855:  /* *avx512vl_testnmv4si3_zext_mask */
    case 6854:  /* *avx512vl_testnmv4si3_zext_mask */
    case 6853:  /* *avx512vl_testnmv4si3_zext_mask */
    case 6852:  /* *avx512vl_testnmv8si3_zext_mask */
    case 6851:  /* *avx512vl_testnmv8si3_zext_mask */
    case 6850:  /* *avx512vl_testnmv8si3_zext_mask */
    case 6849:  /* *avx512f_testnmv16si3_zext_mask */
    case 6848:  /* *avx512f_testnmv16si3_zext_mask */
    case 6847:  /* *avx512f_testnmv16si3_zext_mask */
    case 6846:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 6845:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 6844:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 6843:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 6842:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 6841:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 6840:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 6839:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 6838:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 6837:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 6836:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 6835:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 6834:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 6833:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 6832:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 6831:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6830:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6829:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6792:  /* *avx512vl_testmv2di3_zext_mask */
    case 6791:  /* *avx512vl_testmv2di3_zext_mask */
    case 6790:  /* *avx512vl_testmv2di3_zext_mask */
    case 6789:  /* *avx512vl_testmv4di3_zext_mask */
    case 6788:  /* *avx512vl_testmv4di3_zext_mask */
    case 6787:  /* *avx512vl_testmv4di3_zext_mask */
    case 6786:  /* *avx512f_testmv8di3_zext_mask */
    case 6785:  /* *avx512f_testmv8di3_zext_mask */
    case 6784:  /* *avx512f_testmv8di3_zext_mask */
    case 6783:  /* *avx512vl_testmv4si3_zext_mask */
    case 6782:  /* *avx512vl_testmv4si3_zext_mask */
    case 6781:  /* *avx512vl_testmv4si3_zext_mask */
    case 6780:  /* *avx512vl_testmv8si3_zext_mask */
    case 6779:  /* *avx512vl_testmv8si3_zext_mask */
    case 6778:  /* *avx512vl_testmv8si3_zext_mask */
    case 6777:  /* *avx512f_testmv16si3_zext_mask */
    case 6776:  /* *avx512f_testmv16si3_zext_mask */
    case 6775:  /* *avx512f_testmv16si3_zext_mask */
    case 6774:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6773:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6772:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6771:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6770:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6769:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6768:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6767:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6766:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6765:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6764:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6763:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6762:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6761:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6760:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6759:  /* *avx512bw_testmv64qi3_zext_mask */
    case 6758:  /* *avx512bw_testmv64qi3_zext_mask */
    case 6757:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 6567:  /* *avx2_pcmpv16qi3_5 */
    case 6566:  /* *avx2_pcmpv32qi3_5 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6265:  /* *sse4_1_mulv2siv2di3_mask */
    case 6263:  /* *vec_widen_smult_even_v8si_mask */
    case 6261:  /* *vec_widen_smult_even_v16si_mask */
    case 6259:  /* *vec_widen_umult_even_v4si_mask */
    case 6257:  /* *vec_widen_umult_even_v8si_mask */
    case 6255:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6253:  /* *umulv8hi3_highpart_mask */
    case 6251:  /* *smulv8hi3_highpart_mask */
    case 6249:  /* *umulv16hi3_highpart_mask */
    case 6247:  /* *smulv16hi3_highpart_mask */
    case 6245:  /* *umulv32hi3_highpart_mask */
    case 6243:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6139:  /* avx512f_us_truncatev8div16qi2_mask_store_2 */
    case 6138:  /* avx512f_truncatev8div16qi2_mask_store_2 */
    case 6137:  /* avx512f_ss_truncatev8div16qi2_mask_store_2 */
    case 6118:  /* avx512vl_us_truncatev2div2si2_mask_store_2 */
    case 6117:  /* avx512vl_truncatev2div2si2_mask_store_2 */
    case 6116:  /* avx512vl_ss_truncatev2div2si2_mask_store_2 */
    case 6096:  /* avx512vl_us_truncatev2div2hi2_mask_store_2 */
    case 6095:  /* avx512vl_truncatev2div2hi2_mask_store_2 */
    case 6094:  /* avx512vl_ss_truncatev2div2hi2_mask_store_2 */
    case 6078:  /* avx512vl_us_truncatev4div4hi2_mask_store_2 */
    case 6077:  /* avx512vl_truncatev4div4hi2_mask_store_2 */
    case 6076:  /* avx512vl_ss_truncatev4div4hi2_mask_store_2 */
    case 6075:  /* avx512vl_us_truncatev4siv4hi2_mask_store_2 */
    case 6074:  /* avx512vl_truncatev4siv4hi2_mask_store_2 */
    case 6073:  /* avx512vl_ss_truncatev4siv4hi2_mask_store_2 */
    case 6032:  /* avx512vl_us_truncatev8siv8qi2_mask_store_2 */
    case 6031:  /* avx512vl_truncatev8siv8qi2_mask_store_2 */
    case 6030:  /* avx512vl_ss_truncatev8siv8qi2_mask_store_2 */
    case 6029:  /* avx512vl_us_truncatev8hiv8qi2_mask_store_2 */
    case 6028:  /* avx512vl_truncatev8hiv8qi2_mask_store_2 */
    case 6027:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store_2 */
    case 5996:  /* avx512vl_us_truncatev4div4qi2_mask_store_2 */
    case 5995:  /* avx512vl_truncatev4div4qi2_mask_store_2 */
    case 5994:  /* avx512vl_ss_truncatev4div4qi2_mask_store_2 */
    case 5993:  /* avx512vl_us_truncatev4siv4qi2_mask_store_2 */
    case 5992:  /* avx512vl_truncatev4siv4qi2_mask_store_2 */
    case 5991:  /* avx512vl_ss_truncatev4siv4qi2_mask_store_2 */
    case 5960:  /* avx512vl_us_truncatev2div2qi2_mask_store_2 */
    case 5959:  /* avx512vl_truncatev2div2qi2_mask_store_2 */
    case 5958:  /* avx512vl_ss_truncatev2div2qi2_mask_store_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6136:  /* *avx512f_us_truncatev8div16qi2_mask_store_1 */
    case 6135:  /* *avx512f_truncatev8div16qi2_mask_store_1 */
    case 6134:  /* *avx512f_ss_truncatev8div16qi2_mask_store_1 */
    case 6115:  /* *avx512vl_us_truncatev2div2si2_mask_store_1 */
    case 6114:  /* *avx512vl_truncatev2div2si2_mask_store_1 */
    case 6113:  /* *avx512vl_ss_truncatev2div2si2_mask_store_1 */
    case 6093:  /* *avx512vl_us_truncatev2div2hi2_mask_store_1 */
    case 6092:  /* *avx512vl_truncatev2div2hi2_mask_store_1 */
    case 6091:  /* *avx512vl_ss_truncatev2div2hi2_mask_store_1 */
    case 6072:  /* *avx512vl_us_truncatev4div4hi2_mask_store_1 */
    case 6071:  /* *avx512vl_truncatev4div4hi2_mask_store_1 */
    case 6070:  /* *avx512vl_ss_truncatev4div4hi2_mask_store_1 */
    case 6069:  /* *avx512vl_us_truncatev4siv4hi2_mask_store_1 */
    case 6068:  /* *avx512vl_truncatev4siv4hi2_mask_store_1 */
    case 6067:  /* *avx512vl_ss_truncatev4siv4hi2_mask_store_1 */
    case 6026:  /* *avx512vl_us_truncatev8siv8qi2_mask_store_1 */
    case 6025:  /* *avx512vl_truncatev8siv8qi2_mask_store_1 */
    case 6024:  /* *avx512vl_ss_truncatev8siv8qi2_mask_store_1 */
    case 6023:  /* *avx512vl_us_truncatev8hiv8qi2_mask_store_1 */
    case 6022:  /* *avx512vl_truncatev8hiv8qi2_mask_store_1 */
    case 6021:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */
    case 5990:  /* *avx512vl_us_truncatev4div4qi2_mask_store_1 */
    case 5989:  /* *avx512vl_truncatev4div4qi2_mask_store_1 */
    case 5988:  /* *avx512vl_ss_truncatev4div4qi2_mask_store_1 */
    case 5987:  /* *avx512vl_us_truncatev4siv4qi2_mask_store_1 */
    case 5986:  /* *avx512vl_truncatev4siv4qi2_mask_store_1 */
    case 5985:  /* *avx512vl_ss_truncatev4siv4qi2_mask_store_1 */
    case 5957:  /* *avx512vl_us_truncatev2div2qi2_mask_store_1 */
    case 5956:  /* *avx512vl_truncatev2div2qi2_mask_store_1 */
    case 5955:  /* *avx512vl_ss_truncatev2div2qi2_mask_store_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 6042:  /* *avx512f_pshufb_truncv4siv4hi_1 */
    case 5942:  /* *avx512f_pshufb_truncv8hiv8qi_1 */
    case 5886:  /* *avx512f_permvar_truncv8siv8hi_1_hf */
    case 5884:  /* *avx512bw_permvar_truncv16siv16hi_1_hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 8441:  /* avx512dq_vmfpclassv2df */
    case 8439:  /* avx512dq_vmfpclassv4sf */
    case 8437:  /* avx512dq_vmfpclassv8hf */
    case 6828:  /* *avx512vl_testnmv2di3_zext */
    case 6827:  /* *avx512vl_testnmv2di3_zext */
    case 6826:  /* *avx512vl_testnmv2di3_zext */
    case 6825:  /* *avx512vl_testnmv4di3_zext */
    case 6824:  /* *avx512vl_testnmv4di3_zext */
    case 6823:  /* *avx512vl_testnmv4di3_zext */
    case 6822:  /* *avx512f_testnmv8di3_zext */
    case 6821:  /* *avx512f_testnmv8di3_zext */
    case 6820:  /* *avx512f_testnmv8di3_zext */
    case 6819:  /* *avx512vl_testnmv4si3_zext */
    case 6818:  /* *avx512vl_testnmv4si3_zext */
    case 6817:  /* *avx512vl_testnmv4si3_zext */
    case 6816:  /* *avx512vl_testnmv8si3_zext */
    case 6815:  /* *avx512vl_testnmv8si3_zext */
    case 6814:  /* *avx512vl_testnmv8si3_zext */
    case 6813:  /* *avx512f_testnmv16si3_zext */
    case 6812:  /* *avx512f_testnmv16si3_zext */
    case 6811:  /* *avx512f_testnmv16si3_zext */
    case 6810:  /* *avx512vl_testnmv8hi3_zext */
    case 6809:  /* *avx512vl_testnmv8hi3_zext */
    case 6808:  /* *avx512vl_testnmv8hi3_zext */
    case 6807:  /* *avx512vl_testnmv16hi3_zext */
    case 6806:  /* *avx512vl_testnmv16hi3_zext */
    case 6805:  /* *avx512vl_testnmv16hi3_zext */
    case 6804:  /* *avx512bw_testnmv32hi3_zext */
    case 6803:  /* *avx512bw_testnmv32hi3_zext */
    case 6802:  /* *avx512bw_testnmv32hi3_zext */
    case 6801:  /* *avx512vl_testnmv16qi3_zext */
    case 6800:  /* *avx512vl_testnmv16qi3_zext */
    case 6799:  /* *avx512vl_testnmv16qi3_zext */
    case 6798:  /* *avx512vl_testnmv32qi3_zext */
    case 6797:  /* *avx512vl_testnmv32qi3_zext */
    case 6796:  /* *avx512vl_testnmv32qi3_zext */
    case 6795:  /* *avx512bw_testnmv64qi3_zext */
    case 6794:  /* *avx512bw_testnmv64qi3_zext */
    case 6793:  /* *avx512bw_testnmv64qi3_zext */
    case 6756:  /* *avx512vl_testmv2di3_zext */
    case 6755:  /* *avx512vl_testmv2di3_zext */
    case 6754:  /* *avx512vl_testmv2di3_zext */
    case 6753:  /* *avx512vl_testmv4di3_zext */
    case 6752:  /* *avx512vl_testmv4di3_zext */
    case 6751:  /* *avx512vl_testmv4di3_zext */
    case 6750:  /* *avx512f_testmv8di3_zext */
    case 6749:  /* *avx512f_testmv8di3_zext */
    case 6748:  /* *avx512f_testmv8di3_zext */
    case 6747:  /* *avx512vl_testmv4si3_zext */
    case 6746:  /* *avx512vl_testmv4si3_zext */
    case 6745:  /* *avx512vl_testmv4si3_zext */
    case 6744:  /* *avx512vl_testmv8si3_zext */
    case 6743:  /* *avx512vl_testmv8si3_zext */
    case 6742:  /* *avx512vl_testmv8si3_zext */
    case 6741:  /* *avx512f_testmv16si3_zext */
    case 6740:  /* *avx512f_testmv16si3_zext */
    case 6739:  /* *avx512f_testmv16si3_zext */
    case 6738:  /* *avx512vl_testmv8hi3_zext */
    case 6737:  /* *avx512vl_testmv8hi3_zext */
    case 6736:  /* *avx512vl_testmv8hi3_zext */
    case 6735:  /* *avx512vl_testmv16hi3_zext */
    case 6734:  /* *avx512vl_testmv16hi3_zext */
    case 6733:  /* *avx512vl_testmv16hi3_zext */
    case 6732:  /* *avx512bw_testmv32hi3_zext */
    case 6731:  /* *avx512bw_testmv32hi3_zext */
    case 6730:  /* *avx512bw_testmv32hi3_zext */
    case 6729:  /* *avx512vl_testmv16qi3_zext */
    case 6728:  /* *avx512vl_testmv16qi3_zext */
    case 6727:  /* *avx512vl_testmv16qi3_zext */
    case 6726:  /* *avx512vl_testmv32qi3_zext */
    case 6725:  /* *avx512vl_testmv32qi3_zext */
    case 6724:  /* *avx512vl_testmv32qi3_zext */
    case 6723:  /* *avx512bw_testmv64qi3_zext */
    case 6722:  /* *avx512bw_testmv64qi3_zext */
    case 6721:  /* *avx512bw_testmv64qi3_zext */
    case 5917:  /* *avx512f_permvar_truncv4div4si_1 */
    case 5916:  /* *avx512f_permvar_truncv16hiv16qi_1 */
    case 5903:  /* *avx512f_permvar_truncv32hiv32qi_1 */
    case 5887:  /* *avx512f_vpermvar_truncv8div8si_1 */
    case 5885:  /* *avx512f_permvar_truncv8siv8hi_1 */
    case 5883:  /* *avx512bw_permvar_truncv16siv16hi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5844:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6983:  /* avx512f_shuf_i32x4_1_mask */
    case 6981:  /* avx512f_shuf_f32x4_1_mask */
    case 5839:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6982:  /* avx512f_shuf_i32x4_1 */
    case 6980:  /* avx512f_shuf_f32x4_1 */
    case 5838:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 5837:  /* *avx512f_rndscalev2df_round */
    case 5835:  /* *avx512f_rndscalev4sf_round */
    case 5833:  /* *avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7463:  /* *sse4_1_roundsd */
    case 7462:  /* *sse4_1_roundss */
    case 7461:  /* *sse4_1_roundsh */
    case 5836:  /* *avx512f_rndscalev2df */
    case 5834:  /* *avx512f_rndscalev4sf */
    case 5832:  /* *avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 5831:  /* avx512f_rndscalev2df_mask_round */
    case 5827:  /* avx512f_rndscalev4sf_mask_round */
    case 5823:  /* avx512f_rndscalev8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5830:  /* avx512f_rndscalev2df_round */
    case 5826:  /* avx512f_rndscalev4sf_round */
    case 5822:  /* avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5829:  /* avx512f_rndscalev2df_mask */
    case 5825:  /* avx512f_rndscalev4sf_mask */
    case 5821:  /* avx512f_rndscalev8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 7460:  /* sse4_1_roundsd */
    case 7459:  /* sse4_1_roundss */
    case 5828:  /* avx512f_rndscalev2df */
    case 5824:  /* avx512f_rndscalev4sf */
    case 5820:  /* avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5783:  /* avx512f_sfixupimmv2df_mask_round */
    case 5781:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 5782:  /* avx512f_sfixupimmv2df_mask */
    case 5780:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 5779:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 5775:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5778:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 5774:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5777:  /* avx512f_sfixupimmv2df_round */
    case 5773:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5776:  /* avx512f_sfixupimmv2df */
    case 5772:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5771:  /* avx512vl_fixupimmv2df_mask_round */
    case 5769:  /* avx512vl_fixupimmv4df_mask_round */
    case 5767:  /* avx512f_fixupimmv8df_mask_round */
    case 5765:  /* avx512vl_fixupimmv4sf_mask_round */
    case 5763:  /* avx512vl_fixupimmv8sf_mask_round */
    case 5761:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5759:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 5755:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 5751:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 5747:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 5743:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 5739:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5757:  /* avx512vl_fixupimmv2df_round */
    case 5753:  /* avx512vl_fixupimmv4df_round */
    case 5749:  /* avx512f_fixupimmv8df_round */
    case 5745:  /* avx512vl_fixupimmv4sf_round */
    case 5741:  /* avx512vl_fixupimmv8sf_round */
    case 5737:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5770:  /* avx512vl_fixupimmv2df_mask */
    case 5768:  /* avx512vl_fixupimmv4df_mask */
    case 5766:  /* avx512f_fixupimmv8df_mask */
    case 5764:  /* avx512vl_fixupimmv4sf_mask */
    case 5762:  /* avx512vl_fixupimmv8sf_mask */
    case 5760:  /* avx512f_fixupimmv16sf_mask */
    case 5667:  /* avx512vl_vternlogv2di_mask */
    case 5666:  /* avx512vl_vternlogv4di_mask */
    case 5665:  /* avx512f_vternlogv8di_mask */
    case 5664:  /* avx512vl_vternlogv4si_mask */
    case 5663:  /* avx512vl_vternlogv8si_mask */
    case 5662:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4905:  /* *avx512vl_vpternlogv2df_1 */
    case 4904:  /* *avx512vl_vpternlogv2df_1 */
    case 4903:  /* *avx512vl_vpternlogv2df_1 */
    case 4902:  /* *avx512vl_vpternlogv2df_1 */
    case 4901:  /* *avx512vl_vpternlogv2df_1 */
    case 4900:  /* *avx512vl_vpternlogv2df_1 */
    case 4899:  /* *avx512vl_vpternlogv2df_1 */
    case 4898:  /* *avx512vl_vpternlogv2df_1 */
    case 4897:  /* *avx512vl_vpternlogv2df_1 */
    case 4896:  /* *avx512vl_vpternlogv2df_1 */
    case 4895:  /* *avx512vl_vpternlogv2df_1 */
    case 4894:  /* *avx512vl_vpternlogv2df_1 */
    case 4893:  /* *avx512vl_vpternlogv2df_1 */
    case 4892:  /* *avx512vl_vpternlogv2df_1 */
    case 4891:  /* *avx512vl_vpternlogv2df_1 */
    case 4890:  /* *avx512vl_vpternlogv2df_1 */
    case 4889:  /* *avx512vl_vpternlogv2df_1 */
    case 4888:  /* *avx512vl_vpternlogv2df_1 */
    case 4887:  /* *avx512vl_vpternlogv2df_1 */
    case 4886:  /* *avx512vl_vpternlogv2df_1 */
    case 4885:  /* *avx512vl_vpternlogv2df_1 */
    case 4884:  /* *avx512vl_vpternlogv2df_1 */
    case 4883:  /* *avx512vl_vpternlogv2df_1 */
    case 4882:  /* *avx512vl_vpternlogv2df_1 */
    case 4881:  /* *avx512vl_vpternlogv2df_1 */
    case 4880:  /* *avx512vl_vpternlogv2df_1 */
    case 4879:  /* *avx512vl_vpternlogv2df_1 */
    case 4878:  /* *avx512vl_vpternlogv4df_1 */
    case 4877:  /* *avx512vl_vpternlogv4df_1 */
    case 4876:  /* *avx512vl_vpternlogv4df_1 */
    case 4875:  /* *avx512vl_vpternlogv4df_1 */
    case 4874:  /* *avx512vl_vpternlogv4df_1 */
    case 4873:  /* *avx512vl_vpternlogv4df_1 */
    case 4872:  /* *avx512vl_vpternlogv4df_1 */
    case 4871:  /* *avx512vl_vpternlogv4df_1 */
    case 4870:  /* *avx512vl_vpternlogv4df_1 */
    case 4869:  /* *avx512vl_vpternlogv4df_1 */
    case 4868:  /* *avx512vl_vpternlogv4df_1 */
    case 4867:  /* *avx512vl_vpternlogv4df_1 */
    case 4866:  /* *avx512vl_vpternlogv4df_1 */
    case 4865:  /* *avx512vl_vpternlogv4df_1 */
    case 4864:  /* *avx512vl_vpternlogv4df_1 */
    case 4863:  /* *avx512vl_vpternlogv4df_1 */
    case 4862:  /* *avx512vl_vpternlogv4df_1 */
    case 4861:  /* *avx512vl_vpternlogv4df_1 */
    case 4860:  /* *avx512vl_vpternlogv4df_1 */
    case 4859:  /* *avx512vl_vpternlogv4df_1 */
    case 4858:  /* *avx512vl_vpternlogv4df_1 */
    case 4857:  /* *avx512vl_vpternlogv4df_1 */
    case 4856:  /* *avx512vl_vpternlogv4df_1 */
    case 4855:  /* *avx512vl_vpternlogv4df_1 */
    case 4854:  /* *avx512vl_vpternlogv4df_1 */
    case 4853:  /* *avx512vl_vpternlogv4df_1 */
    case 4852:  /* *avx512vl_vpternlogv4df_1 */
    case 4851:  /* *avx512f_vpternlogv8df_1 */
    case 4850:  /* *avx512f_vpternlogv8df_1 */
    case 4849:  /* *avx512f_vpternlogv8df_1 */
    case 4848:  /* *avx512f_vpternlogv8df_1 */
    case 4847:  /* *avx512f_vpternlogv8df_1 */
    case 4846:  /* *avx512f_vpternlogv8df_1 */
    case 4845:  /* *avx512f_vpternlogv8df_1 */
    case 4844:  /* *avx512f_vpternlogv8df_1 */
    case 4843:  /* *avx512f_vpternlogv8df_1 */
    case 4842:  /* *avx512f_vpternlogv8df_1 */
    case 4841:  /* *avx512f_vpternlogv8df_1 */
    case 4840:  /* *avx512f_vpternlogv8df_1 */
    case 4839:  /* *avx512f_vpternlogv8df_1 */
    case 4838:  /* *avx512f_vpternlogv8df_1 */
    case 4837:  /* *avx512f_vpternlogv8df_1 */
    case 4836:  /* *avx512f_vpternlogv8df_1 */
    case 4835:  /* *avx512f_vpternlogv8df_1 */
    case 4834:  /* *avx512f_vpternlogv8df_1 */
    case 4833:  /* *avx512f_vpternlogv8df_1 */
    case 4832:  /* *avx512f_vpternlogv8df_1 */
    case 4831:  /* *avx512f_vpternlogv8df_1 */
    case 4830:  /* *avx512f_vpternlogv8df_1 */
    case 4829:  /* *avx512f_vpternlogv8df_1 */
    case 4828:  /* *avx512f_vpternlogv8df_1 */
    case 4827:  /* *avx512f_vpternlogv8df_1 */
    case 4826:  /* *avx512f_vpternlogv8df_1 */
    case 4825:  /* *avx512f_vpternlogv8df_1 */
    case 4824:  /* *avx512vl_vpternlogv4sf_1 */
    case 4823:  /* *avx512vl_vpternlogv4sf_1 */
    case 4822:  /* *avx512vl_vpternlogv4sf_1 */
    case 4821:  /* *avx512vl_vpternlogv4sf_1 */
    case 4820:  /* *avx512vl_vpternlogv4sf_1 */
    case 4819:  /* *avx512vl_vpternlogv4sf_1 */
    case 4818:  /* *avx512vl_vpternlogv4sf_1 */
    case 4817:  /* *avx512vl_vpternlogv4sf_1 */
    case 4816:  /* *avx512vl_vpternlogv4sf_1 */
    case 4815:  /* *avx512vl_vpternlogv4sf_1 */
    case 4814:  /* *avx512vl_vpternlogv4sf_1 */
    case 4813:  /* *avx512vl_vpternlogv4sf_1 */
    case 4812:  /* *avx512vl_vpternlogv4sf_1 */
    case 4811:  /* *avx512vl_vpternlogv4sf_1 */
    case 4810:  /* *avx512vl_vpternlogv4sf_1 */
    case 4809:  /* *avx512vl_vpternlogv4sf_1 */
    case 4808:  /* *avx512vl_vpternlogv4sf_1 */
    case 4807:  /* *avx512vl_vpternlogv4sf_1 */
    case 4806:  /* *avx512vl_vpternlogv4sf_1 */
    case 4805:  /* *avx512vl_vpternlogv4sf_1 */
    case 4804:  /* *avx512vl_vpternlogv4sf_1 */
    case 4803:  /* *avx512vl_vpternlogv4sf_1 */
    case 4802:  /* *avx512vl_vpternlogv4sf_1 */
    case 4801:  /* *avx512vl_vpternlogv4sf_1 */
    case 4800:  /* *avx512vl_vpternlogv4sf_1 */
    case 4799:  /* *avx512vl_vpternlogv4sf_1 */
    case 4798:  /* *avx512vl_vpternlogv4sf_1 */
    case 4797:  /* *avx512vl_vpternlogv8sf_1 */
    case 4796:  /* *avx512vl_vpternlogv8sf_1 */
    case 4795:  /* *avx512vl_vpternlogv8sf_1 */
    case 4794:  /* *avx512vl_vpternlogv8sf_1 */
    case 4793:  /* *avx512vl_vpternlogv8sf_1 */
    case 4792:  /* *avx512vl_vpternlogv8sf_1 */
    case 4791:  /* *avx512vl_vpternlogv8sf_1 */
    case 4790:  /* *avx512vl_vpternlogv8sf_1 */
    case 4789:  /* *avx512vl_vpternlogv8sf_1 */
    case 4788:  /* *avx512vl_vpternlogv8sf_1 */
    case 4787:  /* *avx512vl_vpternlogv8sf_1 */
    case 4786:  /* *avx512vl_vpternlogv8sf_1 */
    case 4785:  /* *avx512vl_vpternlogv8sf_1 */
    case 4784:  /* *avx512vl_vpternlogv8sf_1 */
    case 4783:  /* *avx512vl_vpternlogv8sf_1 */
    case 4782:  /* *avx512vl_vpternlogv8sf_1 */
    case 4781:  /* *avx512vl_vpternlogv8sf_1 */
    case 4780:  /* *avx512vl_vpternlogv8sf_1 */
    case 4779:  /* *avx512vl_vpternlogv8sf_1 */
    case 4778:  /* *avx512vl_vpternlogv8sf_1 */
    case 4777:  /* *avx512vl_vpternlogv8sf_1 */
    case 4776:  /* *avx512vl_vpternlogv8sf_1 */
    case 4775:  /* *avx512vl_vpternlogv8sf_1 */
    case 4774:  /* *avx512vl_vpternlogv8sf_1 */
    case 4773:  /* *avx512vl_vpternlogv8sf_1 */
    case 4772:  /* *avx512vl_vpternlogv8sf_1 */
    case 4771:  /* *avx512vl_vpternlogv8sf_1 */
    case 4770:  /* *avx512f_vpternlogv16sf_1 */
    case 4769:  /* *avx512f_vpternlogv16sf_1 */
    case 4768:  /* *avx512f_vpternlogv16sf_1 */
    case 4767:  /* *avx512f_vpternlogv16sf_1 */
    case 4766:  /* *avx512f_vpternlogv16sf_1 */
    case 4765:  /* *avx512f_vpternlogv16sf_1 */
    case 4764:  /* *avx512f_vpternlogv16sf_1 */
    case 4763:  /* *avx512f_vpternlogv16sf_1 */
    case 4762:  /* *avx512f_vpternlogv16sf_1 */
    case 4761:  /* *avx512f_vpternlogv16sf_1 */
    case 4760:  /* *avx512f_vpternlogv16sf_1 */
    case 4759:  /* *avx512f_vpternlogv16sf_1 */
    case 4758:  /* *avx512f_vpternlogv16sf_1 */
    case 4757:  /* *avx512f_vpternlogv16sf_1 */
    case 4756:  /* *avx512f_vpternlogv16sf_1 */
    case 4755:  /* *avx512f_vpternlogv16sf_1 */
    case 4754:  /* *avx512f_vpternlogv16sf_1 */
    case 4753:  /* *avx512f_vpternlogv16sf_1 */
    case 4752:  /* *avx512f_vpternlogv16sf_1 */
    case 4751:  /* *avx512f_vpternlogv16sf_1 */
    case 4750:  /* *avx512f_vpternlogv16sf_1 */
    case 4749:  /* *avx512f_vpternlogv16sf_1 */
    case 4748:  /* *avx512f_vpternlogv16sf_1 */
    case 4747:  /* *avx512f_vpternlogv16sf_1 */
    case 4746:  /* *avx512f_vpternlogv16sf_1 */
    case 4745:  /* *avx512f_vpternlogv16sf_1 */
    case 4744:  /* *avx512f_vpternlogv16sf_1 */
    case 4743:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4742:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4741:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4740:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4739:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4738:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4737:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4736:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4735:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4734:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4733:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4732:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4731:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4730:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4729:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4728:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4727:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4726:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4725:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4724:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4723:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4722:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4721:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4720:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4719:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4718:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4717:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4716:  /* *avx512vl_vpternlogv16hf_1 */
    case 4715:  /* *avx512vl_vpternlogv16hf_1 */
    case 4714:  /* *avx512vl_vpternlogv16hf_1 */
    case 4713:  /* *avx512vl_vpternlogv16hf_1 */
    case 4712:  /* *avx512vl_vpternlogv16hf_1 */
    case 4711:  /* *avx512vl_vpternlogv16hf_1 */
    case 4710:  /* *avx512vl_vpternlogv16hf_1 */
    case 4709:  /* *avx512vl_vpternlogv16hf_1 */
    case 4708:  /* *avx512vl_vpternlogv16hf_1 */
    case 4707:  /* *avx512vl_vpternlogv16hf_1 */
    case 4706:  /* *avx512vl_vpternlogv16hf_1 */
    case 4705:  /* *avx512vl_vpternlogv16hf_1 */
    case 4704:  /* *avx512vl_vpternlogv16hf_1 */
    case 4703:  /* *avx512vl_vpternlogv16hf_1 */
    case 4702:  /* *avx512vl_vpternlogv16hf_1 */
    case 4701:  /* *avx512vl_vpternlogv16hf_1 */
    case 4700:  /* *avx512vl_vpternlogv16hf_1 */
    case 4699:  /* *avx512vl_vpternlogv16hf_1 */
    case 4698:  /* *avx512vl_vpternlogv16hf_1 */
    case 4697:  /* *avx512vl_vpternlogv16hf_1 */
    case 4696:  /* *avx512vl_vpternlogv16hf_1 */
    case 4695:  /* *avx512vl_vpternlogv16hf_1 */
    case 4694:  /* *avx512vl_vpternlogv16hf_1 */
    case 4693:  /* *avx512vl_vpternlogv16hf_1 */
    case 4692:  /* *avx512vl_vpternlogv16hf_1 */
    case 4691:  /* *avx512vl_vpternlogv16hf_1 */
    case 4690:  /* *avx512vl_vpternlogv16hf_1 */
    case 4689:  /* *avx512bw_vpternlogv32hf_1 */
    case 4688:  /* *avx512bw_vpternlogv32hf_1 */
    case 4687:  /* *avx512bw_vpternlogv32hf_1 */
    case 4686:  /* *avx512bw_vpternlogv32hf_1 */
    case 4685:  /* *avx512bw_vpternlogv32hf_1 */
    case 4684:  /* *avx512bw_vpternlogv32hf_1 */
    case 4683:  /* *avx512bw_vpternlogv32hf_1 */
    case 4682:  /* *avx512bw_vpternlogv32hf_1 */
    case 4681:  /* *avx512bw_vpternlogv32hf_1 */
    case 4680:  /* *avx512bw_vpternlogv32hf_1 */
    case 4679:  /* *avx512bw_vpternlogv32hf_1 */
    case 4678:  /* *avx512bw_vpternlogv32hf_1 */
    case 4677:  /* *avx512bw_vpternlogv32hf_1 */
    case 4676:  /* *avx512bw_vpternlogv32hf_1 */
    case 4675:  /* *avx512bw_vpternlogv32hf_1 */
    case 4674:  /* *avx512bw_vpternlogv32hf_1 */
    case 4673:  /* *avx512bw_vpternlogv32hf_1 */
    case 4672:  /* *avx512bw_vpternlogv32hf_1 */
    case 4671:  /* *avx512bw_vpternlogv32hf_1 */
    case 4670:  /* *avx512bw_vpternlogv32hf_1 */
    case 4669:  /* *avx512bw_vpternlogv32hf_1 */
    case 4668:  /* *avx512bw_vpternlogv32hf_1 */
    case 4667:  /* *avx512bw_vpternlogv32hf_1 */
    case 4666:  /* *avx512bw_vpternlogv32hf_1 */
    case 4665:  /* *avx512bw_vpternlogv32hf_1 */
    case 4664:  /* *avx512bw_vpternlogv32hf_1 */
    case 4663:  /* *avx512bw_vpternlogv32hf_1 */
    case 4662:  /* *avx512vl_vpternlogv2di_1 */
    case 4661:  /* *avx512vl_vpternlogv2di_1 */
    case 4660:  /* *avx512vl_vpternlogv2di_1 */
    case 4659:  /* *avx512vl_vpternlogv2di_1 */
    case 4658:  /* *avx512vl_vpternlogv2di_1 */
    case 4657:  /* *avx512vl_vpternlogv2di_1 */
    case 4656:  /* *avx512vl_vpternlogv2di_1 */
    case 4655:  /* *avx512vl_vpternlogv2di_1 */
    case 4654:  /* *avx512vl_vpternlogv2di_1 */
    case 4653:  /* *avx512vl_vpternlogv2di_1 */
    case 4652:  /* *avx512vl_vpternlogv2di_1 */
    case 4651:  /* *avx512vl_vpternlogv2di_1 */
    case 4650:  /* *avx512vl_vpternlogv2di_1 */
    case 4649:  /* *avx512vl_vpternlogv2di_1 */
    case 4648:  /* *avx512vl_vpternlogv2di_1 */
    case 4647:  /* *avx512vl_vpternlogv2di_1 */
    case 4646:  /* *avx512vl_vpternlogv2di_1 */
    case 4645:  /* *avx512vl_vpternlogv2di_1 */
    case 4644:  /* *avx512vl_vpternlogv2di_1 */
    case 4643:  /* *avx512vl_vpternlogv2di_1 */
    case 4642:  /* *avx512vl_vpternlogv2di_1 */
    case 4641:  /* *avx512vl_vpternlogv2di_1 */
    case 4640:  /* *avx512vl_vpternlogv2di_1 */
    case 4639:  /* *avx512vl_vpternlogv2di_1 */
    case 4638:  /* *avx512vl_vpternlogv2di_1 */
    case 4637:  /* *avx512vl_vpternlogv2di_1 */
    case 4636:  /* *avx512vl_vpternlogv2di_1 */
    case 4635:  /* *avx512vl_vpternlogv4di_1 */
    case 4634:  /* *avx512vl_vpternlogv4di_1 */
    case 4633:  /* *avx512vl_vpternlogv4di_1 */
    case 4632:  /* *avx512vl_vpternlogv4di_1 */
    case 4631:  /* *avx512vl_vpternlogv4di_1 */
    case 4630:  /* *avx512vl_vpternlogv4di_1 */
    case 4629:  /* *avx512vl_vpternlogv4di_1 */
    case 4628:  /* *avx512vl_vpternlogv4di_1 */
    case 4627:  /* *avx512vl_vpternlogv4di_1 */
    case 4626:  /* *avx512vl_vpternlogv4di_1 */
    case 4625:  /* *avx512vl_vpternlogv4di_1 */
    case 4624:  /* *avx512vl_vpternlogv4di_1 */
    case 4623:  /* *avx512vl_vpternlogv4di_1 */
    case 4622:  /* *avx512vl_vpternlogv4di_1 */
    case 4621:  /* *avx512vl_vpternlogv4di_1 */
    case 4620:  /* *avx512vl_vpternlogv4di_1 */
    case 4619:  /* *avx512vl_vpternlogv4di_1 */
    case 4618:  /* *avx512vl_vpternlogv4di_1 */
    case 4617:  /* *avx512vl_vpternlogv4di_1 */
    case 4616:  /* *avx512vl_vpternlogv4di_1 */
    case 4615:  /* *avx512vl_vpternlogv4di_1 */
    case 4614:  /* *avx512vl_vpternlogv4di_1 */
    case 4613:  /* *avx512vl_vpternlogv4di_1 */
    case 4612:  /* *avx512vl_vpternlogv4di_1 */
    case 4611:  /* *avx512vl_vpternlogv4di_1 */
    case 4610:  /* *avx512vl_vpternlogv4di_1 */
    case 4609:  /* *avx512vl_vpternlogv4di_1 */
    case 4608:  /* *avx512f_vpternlogv8di_1 */
    case 4607:  /* *avx512f_vpternlogv8di_1 */
    case 4606:  /* *avx512f_vpternlogv8di_1 */
    case 4605:  /* *avx512f_vpternlogv8di_1 */
    case 4604:  /* *avx512f_vpternlogv8di_1 */
    case 4603:  /* *avx512f_vpternlogv8di_1 */
    case 4602:  /* *avx512f_vpternlogv8di_1 */
    case 4601:  /* *avx512f_vpternlogv8di_1 */
    case 4600:  /* *avx512f_vpternlogv8di_1 */
    case 4599:  /* *avx512f_vpternlogv8di_1 */
    case 4598:  /* *avx512f_vpternlogv8di_1 */
    case 4597:  /* *avx512f_vpternlogv8di_1 */
    case 4596:  /* *avx512f_vpternlogv8di_1 */
    case 4595:  /* *avx512f_vpternlogv8di_1 */
    case 4594:  /* *avx512f_vpternlogv8di_1 */
    case 4593:  /* *avx512f_vpternlogv8di_1 */
    case 4592:  /* *avx512f_vpternlogv8di_1 */
    case 4591:  /* *avx512f_vpternlogv8di_1 */
    case 4590:  /* *avx512f_vpternlogv8di_1 */
    case 4589:  /* *avx512f_vpternlogv8di_1 */
    case 4588:  /* *avx512f_vpternlogv8di_1 */
    case 4587:  /* *avx512f_vpternlogv8di_1 */
    case 4586:  /* *avx512f_vpternlogv8di_1 */
    case 4585:  /* *avx512f_vpternlogv8di_1 */
    case 4584:  /* *avx512f_vpternlogv8di_1 */
    case 4583:  /* *avx512f_vpternlogv8di_1 */
    case 4582:  /* *avx512f_vpternlogv8di_1 */
    case 4581:  /* *avx512vl_vpternlogv4si_1 */
    case 4580:  /* *avx512vl_vpternlogv4si_1 */
    case 4579:  /* *avx512vl_vpternlogv4si_1 */
    case 4578:  /* *avx512vl_vpternlogv4si_1 */
    case 4577:  /* *avx512vl_vpternlogv4si_1 */
    case 4576:  /* *avx512vl_vpternlogv4si_1 */
    case 4575:  /* *avx512vl_vpternlogv4si_1 */
    case 4574:  /* *avx512vl_vpternlogv4si_1 */
    case 4573:  /* *avx512vl_vpternlogv4si_1 */
    case 4572:  /* *avx512vl_vpternlogv4si_1 */
    case 4571:  /* *avx512vl_vpternlogv4si_1 */
    case 4570:  /* *avx512vl_vpternlogv4si_1 */
    case 4569:  /* *avx512vl_vpternlogv4si_1 */
    case 4568:  /* *avx512vl_vpternlogv4si_1 */
    case 4567:  /* *avx512vl_vpternlogv4si_1 */
    case 4566:  /* *avx512vl_vpternlogv4si_1 */
    case 4565:  /* *avx512vl_vpternlogv4si_1 */
    case 4564:  /* *avx512vl_vpternlogv4si_1 */
    case 4563:  /* *avx512vl_vpternlogv4si_1 */
    case 4562:  /* *avx512vl_vpternlogv4si_1 */
    case 4561:  /* *avx512vl_vpternlogv4si_1 */
    case 4560:  /* *avx512vl_vpternlogv4si_1 */
    case 4559:  /* *avx512vl_vpternlogv4si_1 */
    case 4558:  /* *avx512vl_vpternlogv4si_1 */
    case 4557:  /* *avx512vl_vpternlogv4si_1 */
    case 4556:  /* *avx512vl_vpternlogv4si_1 */
    case 4555:  /* *avx512vl_vpternlogv4si_1 */
    case 4554:  /* *avx512vl_vpternlogv8si_1 */
    case 4553:  /* *avx512vl_vpternlogv8si_1 */
    case 4552:  /* *avx512vl_vpternlogv8si_1 */
    case 4551:  /* *avx512vl_vpternlogv8si_1 */
    case 4550:  /* *avx512vl_vpternlogv8si_1 */
    case 4549:  /* *avx512vl_vpternlogv8si_1 */
    case 4548:  /* *avx512vl_vpternlogv8si_1 */
    case 4547:  /* *avx512vl_vpternlogv8si_1 */
    case 4546:  /* *avx512vl_vpternlogv8si_1 */
    case 4545:  /* *avx512vl_vpternlogv8si_1 */
    case 4544:  /* *avx512vl_vpternlogv8si_1 */
    case 4543:  /* *avx512vl_vpternlogv8si_1 */
    case 4542:  /* *avx512vl_vpternlogv8si_1 */
    case 4541:  /* *avx512vl_vpternlogv8si_1 */
    case 4540:  /* *avx512vl_vpternlogv8si_1 */
    case 4539:  /* *avx512vl_vpternlogv8si_1 */
    case 4538:  /* *avx512vl_vpternlogv8si_1 */
    case 4537:  /* *avx512vl_vpternlogv8si_1 */
    case 4536:  /* *avx512vl_vpternlogv8si_1 */
    case 4535:  /* *avx512vl_vpternlogv8si_1 */
    case 4534:  /* *avx512vl_vpternlogv8si_1 */
    case 4533:  /* *avx512vl_vpternlogv8si_1 */
    case 4532:  /* *avx512vl_vpternlogv8si_1 */
    case 4531:  /* *avx512vl_vpternlogv8si_1 */
    case 4530:  /* *avx512vl_vpternlogv8si_1 */
    case 4529:  /* *avx512vl_vpternlogv8si_1 */
    case 4528:  /* *avx512vl_vpternlogv8si_1 */
    case 4527:  /* *avx512f_vpternlogv16si_1 */
    case 4526:  /* *avx512f_vpternlogv16si_1 */
    case 4525:  /* *avx512f_vpternlogv16si_1 */
    case 4524:  /* *avx512f_vpternlogv16si_1 */
    case 4523:  /* *avx512f_vpternlogv16si_1 */
    case 4522:  /* *avx512f_vpternlogv16si_1 */
    case 4521:  /* *avx512f_vpternlogv16si_1 */
    case 4520:  /* *avx512f_vpternlogv16si_1 */
    case 4519:  /* *avx512f_vpternlogv16si_1 */
    case 4518:  /* *avx512f_vpternlogv16si_1 */
    case 4517:  /* *avx512f_vpternlogv16si_1 */
    case 4516:  /* *avx512f_vpternlogv16si_1 */
    case 4515:  /* *avx512f_vpternlogv16si_1 */
    case 4514:  /* *avx512f_vpternlogv16si_1 */
    case 4513:  /* *avx512f_vpternlogv16si_1 */
    case 4512:  /* *avx512f_vpternlogv16si_1 */
    case 4511:  /* *avx512f_vpternlogv16si_1 */
    case 4510:  /* *avx512f_vpternlogv16si_1 */
    case 4509:  /* *avx512f_vpternlogv16si_1 */
    case 4508:  /* *avx512f_vpternlogv16si_1 */
    case 4507:  /* *avx512f_vpternlogv16si_1 */
    case 4506:  /* *avx512f_vpternlogv16si_1 */
    case 4505:  /* *avx512f_vpternlogv16si_1 */
    case 4504:  /* *avx512f_vpternlogv16si_1 */
    case 4503:  /* *avx512f_vpternlogv16si_1 */
    case 4502:  /* *avx512f_vpternlogv16si_1 */
    case 4501:  /* *avx512f_vpternlogv16si_1 */
    case 4500:  /* *avx512vl_vpternlogv8hi_1 */
    case 4499:  /* *avx512vl_vpternlogv8hi_1 */
    case 4498:  /* *avx512vl_vpternlogv8hi_1 */
    case 4497:  /* *avx512vl_vpternlogv8hi_1 */
    case 4496:  /* *avx512vl_vpternlogv8hi_1 */
    case 4495:  /* *avx512vl_vpternlogv8hi_1 */
    case 4494:  /* *avx512vl_vpternlogv8hi_1 */
    case 4493:  /* *avx512vl_vpternlogv8hi_1 */
    case 4492:  /* *avx512vl_vpternlogv8hi_1 */
    case 4491:  /* *avx512vl_vpternlogv8hi_1 */
    case 4490:  /* *avx512vl_vpternlogv8hi_1 */
    case 4489:  /* *avx512vl_vpternlogv8hi_1 */
    case 4488:  /* *avx512vl_vpternlogv8hi_1 */
    case 4487:  /* *avx512vl_vpternlogv8hi_1 */
    case 4486:  /* *avx512vl_vpternlogv8hi_1 */
    case 4485:  /* *avx512vl_vpternlogv8hi_1 */
    case 4484:  /* *avx512vl_vpternlogv8hi_1 */
    case 4483:  /* *avx512vl_vpternlogv8hi_1 */
    case 4482:  /* *avx512vl_vpternlogv8hi_1 */
    case 4481:  /* *avx512vl_vpternlogv8hi_1 */
    case 4480:  /* *avx512vl_vpternlogv8hi_1 */
    case 4479:  /* *avx512vl_vpternlogv8hi_1 */
    case 4478:  /* *avx512vl_vpternlogv8hi_1 */
    case 4477:  /* *avx512vl_vpternlogv8hi_1 */
    case 4476:  /* *avx512vl_vpternlogv8hi_1 */
    case 4475:  /* *avx512vl_vpternlogv8hi_1 */
    case 4474:  /* *avx512vl_vpternlogv8hi_1 */
    case 4473:  /* *avx512vl_vpternlogv16hi_1 */
    case 4472:  /* *avx512vl_vpternlogv16hi_1 */
    case 4471:  /* *avx512vl_vpternlogv16hi_1 */
    case 4470:  /* *avx512vl_vpternlogv16hi_1 */
    case 4469:  /* *avx512vl_vpternlogv16hi_1 */
    case 4468:  /* *avx512vl_vpternlogv16hi_1 */
    case 4467:  /* *avx512vl_vpternlogv16hi_1 */
    case 4466:  /* *avx512vl_vpternlogv16hi_1 */
    case 4465:  /* *avx512vl_vpternlogv16hi_1 */
    case 4464:  /* *avx512vl_vpternlogv16hi_1 */
    case 4463:  /* *avx512vl_vpternlogv16hi_1 */
    case 4462:  /* *avx512vl_vpternlogv16hi_1 */
    case 4461:  /* *avx512vl_vpternlogv16hi_1 */
    case 4460:  /* *avx512vl_vpternlogv16hi_1 */
    case 4459:  /* *avx512vl_vpternlogv16hi_1 */
    case 4458:  /* *avx512vl_vpternlogv16hi_1 */
    case 4457:  /* *avx512vl_vpternlogv16hi_1 */
    case 4456:  /* *avx512vl_vpternlogv16hi_1 */
    case 4455:  /* *avx512vl_vpternlogv16hi_1 */
    case 4454:  /* *avx512vl_vpternlogv16hi_1 */
    case 4453:  /* *avx512vl_vpternlogv16hi_1 */
    case 4452:  /* *avx512vl_vpternlogv16hi_1 */
    case 4451:  /* *avx512vl_vpternlogv16hi_1 */
    case 4450:  /* *avx512vl_vpternlogv16hi_1 */
    case 4449:  /* *avx512vl_vpternlogv16hi_1 */
    case 4448:  /* *avx512vl_vpternlogv16hi_1 */
    case 4447:  /* *avx512vl_vpternlogv16hi_1 */
    case 4446:  /* *avx512bw_vpternlogv32hi_1 */
    case 4445:  /* *avx512bw_vpternlogv32hi_1 */
    case 4444:  /* *avx512bw_vpternlogv32hi_1 */
    case 4443:  /* *avx512bw_vpternlogv32hi_1 */
    case 4442:  /* *avx512bw_vpternlogv32hi_1 */
    case 4441:  /* *avx512bw_vpternlogv32hi_1 */
    case 4440:  /* *avx512bw_vpternlogv32hi_1 */
    case 4439:  /* *avx512bw_vpternlogv32hi_1 */
    case 4438:  /* *avx512bw_vpternlogv32hi_1 */
    case 4437:  /* *avx512bw_vpternlogv32hi_1 */
    case 4436:  /* *avx512bw_vpternlogv32hi_1 */
    case 4435:  /* *avx512bw_vpternlogv32hi_1 */
    case 4434:  /* *avx512bw_vpternlogv32hi_1 */
    case 4433:  /* *avx512bw_vpternlogv32hi_1 */
    case 4432:  /* *avx512bw_vpternlogv32hi_1 */
    case 4431:  /* *avx512bw_vpternlogv32hi_1 */
    case 4430:  /* *avx512bw_vpternlogv32hi_1 */
    case 4429:  /* *avx512bw_vpternlogv32hi_1 */
    case 4428:  /* *avx512bw_vpternlogv32hi_1 */
    case 4427:  /* *avx512bw_vpternlogv32hi_1 */
    case 4426:  /* *avx512bw_vpternlogv32hi_1 */
    case 4425:  /* *avx512bw_vpternlogv32hi_1 */
    case 4424:  /* *avx512bw_vpternlogv32hi_1 */
    case 4423:  /* *avx512bw_vpternlogv32hi_1 */
    case 4422:  /* *avx512bw_vpternlogv32hi_1 */
    case 4421:  /* *avx512bw_vpternlogv32hi_1 */
    case 4420:  /* *avx512bw_vpternlogv32hi_1 */
    case 4419:  /* *avx512vl_vpternlogv16qi_1 */
    case 4418:  /* *avx512vl_vpternlogv16qi_1 */
    case 4417:  /* *avx512vl_vpternlogv16qi_1 */
    case 4416:  /* *avx512vl_vpternlogv16qi_1 */
    case 4415:  /* *avx512vl_vpternlogv16qi_1 */
    case 4414:  /* *avx512vl_vpternlogv16qi_1 */
    case 4413:  /* *avx512vl_vpternlogv16qi_1 */
    case 4412:  /* *avx512vl_vpternlogv16qi_1 */
    case 4411:  /* *avx512vl_vpternlogv16qi_1 */
    case 4410:  /* *avx512vl_vpternlogv16qi_1 */
    case 4409:  /* *avx512vl_vpternlogv16qi_1 */
    case 4408:  /* *avx512vl_vpternlogv16qi_1 */
    case 4407:  /* *avx512vl_vpternlogv16qi_1 */
    case 4406:  /* *avx512vl_vpternlogv16qi_1 */
    case 4405:  /* *avx512vl_vpternlogv16qi_1 */
    case 4404:  /* *avx512vl_vpternlogv16qi_1 */
    case 4403:  /* *avx512vl_vpternlogv16qi_1 */
    case 4402:  /* *avx512vl_vpternlogv16qi_1 */
    case 4401:  /* *avx512vl_vpternlogv16qi_1 */
    case 4400:  /* *avx512vl_vpternlogv16qi_1 */
    case 4399:  /* *avx512vl_vpternlogv16qi_1 */
    case 4398:  /* *avx512vl_vpternlogv16qi_1 */
    case 4397:  /* *avx512vl_vpternlogv16qi_1 */
    case 4396:  /* *avx512vl_vpternlogv16qi_1 */
    case 4395:  /* *avx512vl_vpternlogv16qi_1 */
    case 4394:  /* *avx512vl_vpternlogv16qi_1 */
    case 4393:  /* *avx512vl_vpternlogv16qi_1 */
    case 4392:  /* *avx512vl_vpternlogv32qi_1 */
    case 4391:  /* *avx512vl_vpternlogv32qi_1 */
    case 4390:  /* *avx512vl_vpternlogv32qi_1 */
    case 4389:  /* *avx512vl_vpternlogv32qi_1 */
    case 4388:  /* *avx512vl_vpternlogv32qi_1 */
    case 4387:  /* *avx512vl_vpternlogv32qi_1 */
    case 4386:  /* *avx512vl_vpternlogv32qi_1 */
    case 4385:  /* *avx512vl_vpternlogv32qi_1 */
    case 4384:  /* *avx512vl_vpternlogv32qi_1 */
    case 4383:  /* *avx512vl_vpternlogv32qi_1 */
    case 4382:  /* *avx512vl_vpternlogv32qi_1 */
    case 4381:  /* *avx512vl_vpternlogv32qi_1 */
    case 4380:  /* *avx512vl_vpternlogv32qi_1 */
    case 4379:  /* *avx512vl_vpternlogv32qi_1 */
    case 4378:  /* *avx512vl_vpternlogv32qi_1 */
    case 4377:  /* *avx512vl_vpternlogv32qi_1 */
    case 4376:  /* *avx512vl_vpternlogv32qi_1 */
    case 4375:  /* *avx512vl_vpternlogv32qi_1 */
    case 4374:  /* *avx512vl_vpternlogv32qi_1 */
    case 4373:  /* *avx512vl_vpternlogv32qi_1 */
    case 4372:  /* *avx512vl_vpternlogv32qi_1 */
    case 4371:  /* *avx512vl_vpternlogv32qi_1 */
    case 4370:  /* *avx512vl_vpternlogv32qi_1 */
    case 4369:  /* *avx512vl_vpternlogv32qi_1 */
    case 4368:  /* *avx512vl_vpternlogv32qi_1 */
    case 4367:  /* *avx512vl_vpternlogv32qi_1 */
    case 4366:  /* *avx512vl_vpternlogv32qi_1 */
    case 4365:  /* *avx512bw_vpternlogv64qi_1 */
    case 4364:  /* *avx512bw_vpternlogv64qi_1 */
    case 4363:  /* *avx512bw_vpternlogv64qi_1 */
    case 4362:  /* *avx512bw_vpternlogv64qi_1 */
    case 4361:  /* *avx512bw_vpternlogv64qi_1 */
    case 4360:  /* *avx512bw_vpternlogv64qi_1 */
    case 4359:  /* *avx512bw_vpternlogv64qi_1 */
    case 4358:  /* *avx512bw_vpternlogv64qi_1 */
    case 4357:  /* *avx512bw_vpternlogv64qi_1 */
    case 4356:  /* *avx512bw_vpternlogv64qi_1 */
    case 4355:  /* *avx512bw_vpternlogv64qi_1 */
    case 4354:  /* *avx512bw_vpternlogv64qi_1 */
    case 4353:  /* *avx512bw_vpternlogv64qi_1 */
    case 4352:  /* *avx512bw_vpternlogv64qi_1 */
    case 4351:  /* *avx512bw_vpternlogv64qi_1 */
    case 4350:  /* *avx512bw_vpternlogv64qi_1 */
    case 4349:  /* *avx512bw_vpternlogv64qi_1 */
    case 4348:  /* *avx512bw_vpternlogv64qi_1 */
    case 4347:  /* *avx512bw_vpternlogv64qi_1 */
    case 4346:  /* *avx512bw_vpternlogv64qi_1 */
    case 4345:  /* *avx512bw_vpternlogv64qi_1 */
    case 4344:  /* *avx512bw_vpternlogv64qi_1 */
    case 4343:  /* *avx512bw_vpternlogv64qi_1 */
    case 4342:  /* *avx512bw_vpternlogv64qi_1 */
    case 4341:  /* *avx512bw_vpternlogv64qi_1 */
    case 4340:  /* *avx512bw_vpternlogv64qi_1 */
    case 4339:  /* *avx512bw_vpternlogv64qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 5758:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 5754:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 5750:  /* avx512f_fixupimmv8df_maskz_1 */
    case 5746:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 5742:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 5738:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 4317:  /* avx512vl_vternlogv2di_maskz_1 */
    case 4315:  /* avx512vl_vternlogv4di_maskz_1 */
    case 4313:  /* avx512f_vternlogv8di_maskz_1 */
    case 4311:  /* avx512vl_vternlogv4si_maskz_1 */
    case 4309:  /* avx512vl_vternlogv8si_maskz_1 */
    case 4307:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7622:  /* xop_vpermil2v2df3 */
    case 7621:  /* xop_vpermil2v4df3 */
    case 7620:  /* xop_vpermil2v4sf3 */
    case 7619:  /* xop_vpermil2v8sf3 */
    case 7204:  /* sse4a_insertqi */
    case 5756:  /* avx512vl_fixupimmv2df */
    case 5752:  /* avx512vl_fixupimmv4df */
    case 5748:  /* avx512f_fixupimmv8df */
    case 5744:  /* avx512vl_fixupimmv4sf */
    case 5740:  /* avx512vl_fixupimmv8sf */
    case 5736:  /* avx512f_fixupimmv16sf */
    case 4338:  /* *avx512vl_vternlogv2df_all */
    case 4337:  /* *avx512vl_vternlogv4df_all */
    case 4336:  /* *avx512f_vternlogv8df_all */
    case 4335:  /* *avx512vl_vternlogv4sf_all */
    case 4334:  /* *avx512vl_vternlogv8sf_all */
    case 4333:  /* *avx512f_vternlogv16sf_all */
    case 4332:  /* *avx512fp16_vternlogv8hf_all */
    case 4331:  /* *avx512vl_vternlogv16hf_all */
    case 4330:  /* *avx512bw_vternlogv32hf_all */
    case 4329:  /* *avx512vl_vternlogv2di_all */
    case 4328:  /* *avx512vl_vternlogv4di_all */
    case 4327:  /* *avx512f_vternlogv8di_all */
    case 4326:  /* *avx512vl_vternlogv4si_all */
    case 4325:  /* *avx512vl_vternlogv8si_all */
    case 4324:  /* *avx512f_vternlogv16si_all */
    case 4323:  /* *avx512vl_vternlogv8hi_all */
    case 4322:  /* *avx512vl_vternlogv16hi_all */
    case 4321:  /* *avx512bw_vternlogv32hi_all */
    case 4320:  /* *avx512vl_vternlogv16qi_all */
    case 4319:  /* *avx512vl_vternlogv32qi_all */
    case 4318:  /* *avx512bw_vternlogv64qi_all */
    case 4316:  /* avx512vl_vternlogv2di */
    case 4314:  /* avx512vl_vternlogv4di */
    case 4312:  /* avx512f_vternlogv8di */
    case 4310:  /* avx512vl_vternlogv4si */
    case 4308:  /* avx512vl_vternlogv8si */
    case 4306:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 5715:  /* avx512f_sgetexpv2df_mask_round */
    case 5711:  /* avx512f_sgetexpv4sf_mask_round */
    case 5707:  /* avx512f_sgetexpv8hf_mask_round */
    case 4269:  /* avx512f_vmscalefv2df_mask_round */
    case 4265:  /* avx512f_vmscalefv4sf_mask_round */
    case 4261:  /* avx512f_vmscalefv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5713:  /* avx512f_sgetexpv2df_mask */
    case 5709:  /* avx512f_sgetexpv4sf_mask */
    case 5705:  /* avx512f_sgetexpv8hf_mask */
    case 4268:  /* avx512f_vmscalefv2df_mask */
    case 4264:  /* avx512f_vmscalefv4sf_mask */
    case 4260:  /* avx512f_vmscalefv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7698:  /* avx2_permv4df_1_mask */
    case 7696:  /* avx2_permv4di_1_mask */
    case 6999:  /* sse2_pshuflw_1_mask */
    case 6993:  /* sse2_pshufd_1_mask */
    case 4195:  /* avx512f_vextracti32x4_1_mask */
    case 4194:  /* avx512f_vextractf32x4_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4191:  /* avx512dq_vextracti64x2_1_mask */
    case 4190:  /* avx512dq_vextractf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4185:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7043:  /* vec_setv4di_0 */
    case 7042:  /* vec_setv8di_0 */
    case 7006:  /* sse2_loadld */
    case 5870:  /* vec_setv4df_0 */
    case 5869:  /* vec_setv8df_0 */
    case 4186:  /* vec_setv2df_0 */
    case 4180:  /* vec_setv16sf_0 */
    case 4179:  /* vec_setv16si_0 */
    case 4178:  /* vec_setv8sf_0 */
    case 4177:  /* vec_setv8si_0 */
    case 4167:  /* vec_setv32hf_0 */
    case 4166:  /* vec_setv16hf_0 */
    case 4165:  /* vec_setv32hi_0 */
    case 4164:  /* vec_setv16hi_0 */
    case 4163:  /* vec_setv8hf_0 */
    case 4162:  /* vec_setv8hi_0 */
    case 4161:  /* vec_setv4sf_0 */
    case 4160:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 7976:  /* vec_set_lo_v32qi */
    case 7973:  /* vec_set_lo_v16hf */
    case 7972:  /* vec_set_lo_v16hi */
    case 7966:  /* vec_set_lo_v8sf */
    case 7964:  /* vec_set_lo_v8si */
    case 7958:  /* vec_set_lo_v4df */
    case 7956:  /* vec_set_lo_v4di */
    case 6958:  /* vec_set_lo_v8di */
    case 6956:  /* vec_set_lo_v8df */
    case 6950:  /* vec_set_lo_v16si */
    case 6948:  /* vec_set_lo_v16sf */
    case 5864:  /* sse2_loadlpd */
    case 4149:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 6966:  /* *avx512dq_shuf_f64x2_1 */
    case 6964:  /* *avx512dq_shuf_i64x2_1 */
    case 5842:  /* avx_shufpd256_1 */
    case 4145:  /* sse_shufps_v4sf */
    case 4144:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 6967:  /* avx512dq_shuf_f64x2_1_mask */
    case 6965:  /* avx512dq_shuf_i64x2_1_mask */
    case 5843:  /* avx_shufpd256_1_mask */
    case 4143:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6979:  /* avx512vl_shuf_f32x4_1_mask */
    case 6977:  /* avx512vl_shuf_i32x4_1_mask */
    case 6971:  /* avx512f_shuf_i64x2_1_mask */
    case 6969:  /* avx512f_shuf_f64x2_1_mask */
    case 5841:  /* avx512f_shufpd512_1_mask */
    case 4142:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6978:  /* avx512vl_shuf_f32x4_1 */
    case 6976:  /* avx512vl_shuf_i32x4_1 */
    case 6970:  /* avx512f_shuf_i64x2_1 */
    case 6968:  /* avx512f_shuf_f64x2_1 */
    case 5840:  /* avx512f_shufpd512_1 */
    case 4141:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4140:  /* avx512f_movsldup512_mask */
    case 4138:  /* sse3_movsldup_mask */
    case 4136:  /* avx_movsldup256_mask */
    case 4134:  /* avx512f_movshdup512_mask */
    case 4132:  /* sse3_movshdup_mask */
    case 4130:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4139:  /* *avx512f_movsldup512 */
    case 4137:  /* sse3_movsldup */
    case 4135:  /* avx_movsldup256 */
    case 4133:  /* *avx512f_movshdup512 */
    case 4131:  /* sse3_movshdup */
    case 4129:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6930:  /* vec_interleave_lowv4si_mask */
    case 6928:  /* avx512f_interleave_lowv16si_mask */
    case 6926:  /* avx2_interleave_lowv8si_mask */
    case 6924:  /* vec_interleave_highv4si_mask */
    case 6922:  /* avx512f_interleave_highv16si_mask */
    case 6920:  /* avx2_interleave_highv8si_mask */
    case 6918:  /* vec_interleave_lowv8hf_mask */
    case 6916:  /* vec_interleave_lowv8hi_mask */
    case 6914:  /* avx2_interleave_lowv16hf_mask */
    case 6912:  /* avx2_interleave_lowv16hi_mask */
    case 6910:  /* avx512bw_interleave_lowv32hf_mask */
    case 6908:  /* avx512bw_interleave_lowv32hi_mask */
    case 6906:  /* vec_interleave_highv8hf_mask */
    case 6904:  /* vec_interleave_highv8hi_mask */
    case 6902:  /* avx2_interleave_highv16hf_mask */
    case 6900:  /* avx2_interleave_highv16hi_mask */
    case 6898:  /* avx512bw_interleave_highv32hf_mask */
    case 6896:  /* avx512bw_interleave_highv32hi_mask */
    case 6894:  /* vec_interleave_lowv16qi_mask */
    case 6892:  /* avx2_interleave_lowv32qi_mask */
    case 6890:  /* avx512bw_interleave_lowv64qi_mask */
    case 6888:  /* vec_interleave_highv16qi_mask */
    case 6886:  /* avx2_interleave_highv32qi_mask */
    case 6884:  /* avx512bw_interleave_highv64qi_mask */
    case 5856:  /* vec_interleave_lowv2di_mask */
    case 5854:  /* avx512f_interleave_lowv8di_mask */
    case 5852:  /* avx2_interleave_lowv4di_mask */
    case 5850:  /* vec_interleave_highv2di_mask */
    case 5848:  /* avx512f_interleave_highv8di_mask */
    case 5846:  /* avx2_interleave_highv4di_mask */
    case 4256:  /* avx512vl_unpcklpd128_mask */
    case 4255:  /* *avx_unpcklpd256_mask */
    case 4253:  /* *avx512f_unpcklpd512_mask */
    case 4250:  /* avx512vl_unpckhpd128_mask */
    case 4249:  /* avx_unpckhpd256_mask */
    case 4247:  /* avx512f_unpckhpd512_mask */
    case 4127:  /* unpcklps128_mask */
    case 4126:  /* avx_unpcklps256_mask */
    case 4124:  /* avx512f_unpcklps512_mask */
    case 4122:  /* vec_interleave_highv4sf_mask */
    case 4120:  /* avx_unpckhps256_mask */
    case 4118:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4111:  /* *avx512vl_cvtmask2qv2di */
    case 4110:  /* *avx512vl_cvtmask2qv4di */
    case 4109:  /* *avx512f_cvtmask2qv8di */
    case 4108:  /* *avx512vl_cvtmask2dv4si */
    case 4107:  /* *avx512vl_cvtmask2dv8si */
    case 4106:  /* *avx512f_cvtmask2dv16si */
    case 4105:  /* *avx512vl_cvtmask2wv8hi */
    case 4104:  /* *avx512vl_cvtmask2wv16hi */
    case 4103:  /* *avx512bw_cvtmask2wv32hi */
    case 4102:  /* *avx512vl_cvtmask2bv32qi */
    case 4101:  /* *avx512vl_cvtmask2bv16qi */
    case 4100:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4068:  /* sse2_cvtss2sd_mask_round */
    case 4063:  /* sse2_cvtsd2ss_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4067:  /* sse2_cvtss2sd_mask */
    case 4062:  /* sse2_cvtsd2ss_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6133:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 6132:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 6131:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 6112:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 6111:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 6110:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 6090:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 6089:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 6088:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 6066:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 6065:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 6064:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 6063:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 6062:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 6061:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 6020:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 6019:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 6018:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 6017:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 6016:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 6015:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 5984:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 5983:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 5982:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 5981:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 5980:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 5979:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 5954:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 5953:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 5952:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 4059:  /* *sse2_cvttpd2dq_mask_1 */
    case 4000:  /* *ufix_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 6130:  /* avx512f_us_truncatev8div16qi2_mask */
    case 6129:  /* avx512f_truncatev8div16qi2_mask */
    case 6128:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 6109:  /* avx512vl_us_truncatev2div2si2_mask */
    case 6108:  /* avx512vl_truncatev2div2si2_mask */
    case 6107:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 6087:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 6086:  /* avx512vl_truncatev2div2hi2_mask */
    case 6085:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 6060:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 6059:  /* avx512vl_truncatev4div4hi2_mask */
    case 6058:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 6057:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 6056:  /* avx512vl_truncatev4siv4hi2_mask */
    case 6055:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 6014:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 6013:  /* avx512vl_truncatev8siv8qi2_mask */
    case 6012:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 6011:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 6010:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 6009:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 5978:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 5977:  /* avx512vl_truncatev4div4qi2_mask */
    case 5976:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 5975:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 5974:  /* avx512vl_truncatev4siv4qi2_mask */
    case 5973:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 5951:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 5950:  /* avx512vl_truncatev2div2qi2_mask */
    case 5949:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 4058:  /* sse2_cvttpd2dq_mask */
    case 3999:  /* ufix_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3989:  /* *ufix_notruncv2dfv2si2_mask_1 */
    case 3978:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3988:  /* ufix_notruncv2dfv2si2_mask */
    case 3977:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3866:  /* avx512dq_cvtps2uqqv2di_mask */
    case 3858:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8086:  /* vcvtph2ps */
    case 7099:  /* *sse2_pmovmskb_ext */
    case 7098:  /* *sse2_pmovmskb_zext */
    case 7097:  /* *avx2_pmovmskb_zext */
    case 7070:  /* *sse2_movmskpd_uext */
    case 7069:  /* *sse2_movmskpd_ext */
    case 7068:  /* *avx_movmskpd256_uext */
    case 7067:  /* *avx_movmskpd256_ext */
    case 7066:  /* *sse_movmskps_uext */
    case 7065:  /* *sse_movmskps_ext */
    case 7064:  /* *avx_movmskps256_uext */
    case 7063:  /* *avx_movmskps256_ext */
    case 3987:  /* ufix_notruncv2dfv2si2 */
    case 3976:  /* sse2_cvtpd2dq */
    case 3788:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 3787:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3782:  /* avx512fp16_vcvtss2sh_mask_round */
    case 3778:  /* avx512fp16_vcvtsd2sh_mask_round */
    case 3770:  /* avx512fp16_vcvtsh2ss_mask_round */
    case 3766:  /* avx512fp16_vcvtsh2sd_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3780:  /* avx512fp16_vcvtss2sh_round */
    case 3776:  /* avx512fp16_vcvtsd2sh_round */
    case 3769:  /* avx512fp16_vcvtsh2ss_round */
    case 3765:  /* avx512fp16_vcvtsh2sd_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3781:  /* avx512fp16_vcvtss2sh_mask */
    case 3777:  /* avx512fp16_vcvtsd2sh_mask */
    case 3768:  /* avx512fp16_vcvtsh2ss_mask */
    case 3764:  /* avx512fp16_vcvtsh2sd_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3779:  /* avx512fp16_vcvtss2sh */
    case 3775:  /* avx512fp16_vcvtsd2sh */
    case 3767:  /* avx512fp16_vcvtsh2ss */
    case 3763:  /* avx512fp16_vcvtsh2sd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3912:  /* sse2_cvttsd2siq_round */
    case 3910:  /* sse2_cvttsd2si_round */
    case 3902:  /* avx512f_vcvttsd2usiq_round */
    case 3900:  /* avx512f_vcvttsd2usi_round */
    case 3894:  /* avx512f_vcvttss2usiq_round */
    case 3892:  /* avx512f_vcvttss2usi_round */
    case 3803:  /* sse_cvttss2siq_round */
    case 3801:  /* sse_cvttss2si_round */
    case 3713:  /* avx512fp16_fixuns_truncdi2_round */
    case 3711:  /* avx512fp16_fix_truncdi2_round */
    case 3709:  /* avx512fp16_fixuns_truncsi2_round */
    case 3707:  /* avx512fp16_fix_truncsi2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7837:  /* avx512dq_broadcastv8sf_mask */
    case 7835:  /* avx512dq_broadcastv16sf_mask */
    case 7833:  /* avx512dq_broadcastv4si_mask */
    case 7831:  /* avx512dq_broadcastv8si_mask */
    case 7829:  /* avx512dq_broadcastv16si_mask */
    case 7751:  /* avx512fp16_vec_dupv8hf_mask */
    case 7749:  /* avx512vl_vec_dupv16hf_mask */
    case 7747:  /* avx512bw_vec_dupv32hf_mask */
    case 7745:  /* avx512vl_vec_dupv8hi_mask */
    case 7743:  /* avx512vl_vec_dupv16hi_mask */
    case 7741:  /* avx512bw_vec_dupv32hi_mask */
    case 7739:  /* avx512vl_vec_dupv32qi_mask */
    case 7737:  /* avx512vl_vec_dupv16qi_mask */
    case 7735:  /* avx512bw_vec_dupv64qi_mask */
    case 7733:  /* avx512vl_vec_dupv2df_mask */
    case 7731:  /* avx512vl_vec_dupv4df_mask */
    case 7729:  /* avx512f_vec_dupv8df_mask */
    case 7727:  /* avx512vl_vec_dupv4sf_mask */
    case 7725:  /* avx512vl_vec_dupv8sf_mask */
    case 7723:  /* avx512f_vec_dupv16sf_mask */
    case 7721:  /* avx512vl_vec_dupv2di_mask */
    case 7719:  /* avx512vl_vec_dupv4di_mask */
    case 7717:  /* avx512f_vec_dupv8di_mask */
    case 7715:  /* avx512vl_vec_dupv4si_mask */
    case 7713:  /* avx512vl_vec_dupv8si_mask */
    case 7711:  /* avx512f_vec_dupv16si_mask */
    case 7425:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 7423:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 7401:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 7399:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 7389:  /* avx2_zero_extendv4hiv4di2_mask */
    case 7387:  /* avx2_sign_extendv4hiv4di2_mask */
    case 7375:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 7373:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 7363:  /* avx2_zero_extendv4qiv4di2_mask */
    case 7361:  /* avx2_sign_extendv4qiv4di2_mask */
    case 7351:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 7349:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 7335:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 7333:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 7307:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 7305:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 7295:  /* avx2_zero_extendv8qiv8si2_mask */
    case 7293:  /* avx2_sign_extendv8qiv8si2_mask */
    case 7275:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 7273:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 4113:  /* sse2_cvtps2pd_mask */
    case 4052:  /* avx512dq_fixuns_truncv2sfv2di2_mask */
    case 4050:  /* avx512dq_fix_truncv2sfv2di2_mask */
    case 3968:  /* sse2_cvtdq2pd_mask */
    case 3964:  /* ufloatv2siv2df2_mask */
    case 3739:  /* avx512fp16_float_extend_phv2df2_mask */
    case 3733:  /* avx512fp16_float_extend_phv4sf2_mask */
    case 3731:  /* avx512fp16_float_extend_phv4df2_mask */
    case 3701:  /* avx512fp16_fixuns_truncv2di2_mask */
    case 3699:  /* avx512fp16_fix_truncv2di2_mask */
    case 3689:  /* avx512fp16_fixuns_truncv4di2_mask */
    case 3687:  /* avx512fp16_fix_truncv4di2_mask */
    case 3685:  /* avx512fp16_fixuns_truncv4si2_mask */
    case 3683:  /* avx512fp16_fix_truncv4si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4066:  /* sse2_cvtss2sd_round */
    case 4061:  /* sse2_cvtsd2ss_round */
    case 3886:  /* sse2_cvtsi2sdq_round */
    case 3810:  /* cvtusi2sd64_round */
    case 3808:  /* cvtusi2ss64_round */
    case 3805:  /* cvtusi2ss32_round */
    case 3793:  /* sse_cvtsi2ssq_round */
    case 3791:  /* sse_cvtsi2ss_round */
    case 3633:  /* avx512fp16_vcvtusi2shq_round */
    case 3631:  /* avx512fp16_vcvtsi2shq_round */
    case 3629:  /* avx512fp16_vcvtusi2sh_round */
    case 3627:  /* avx512fp16_vcvtsi2sh_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4069:  /* *sse2_vd_cvtss2sd */
    case 4065:  /* sse2_cvtss2sd */
    case 4064:  /* *sse2_vd_cvtsd2ss */
    case 4060:  /* sse2_cvtsd2ss */
    case 3885:  /* sse2_cvtsi2sdq */
    case 3884:  /* sse2_cvtsi2sd */
    case 3809:  /* cvtusi2sd64 */
    case 3807:  /* cvtusi2ss64 */
    case 3806:  /* cvtusi2sd32 */
    case 3804:  /* cvtusi2ss32 */
    case 3792:  /* sse_cvtsi2ssq */
    case 3790:  /* sse_cvtsi2ss */
    case 3632:  /* avx512fp16_vcvtusi2shq */
    case 3630:  /* avx512fp16_vcvtsi2shq */
    case 3628:  /* avx512fp16_vcvtusi2sh */
    case 3626:  /* avx512fp16_vcvtsi2sh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 3906:  /* sse2_cvtsd2siq_round */
    case 3904:  /* sse2_cvtsd2si_round */
    case 3898:  /* avx512f_vcvtsd2usiq_round */
    case 3896:  /* avx512f_vcvtsd2usi_round */
    case 3890:  /* avx512f_vcvtss2usiq_round */
    case 3888:  /* avx512f_vcvtss2usi_round */
    case 3797:  /* sse_cvtss2siq_round */
    case 3795:  /* sse_cvtss2si_round */
    case 3621:  /* avx512fp16_vcvtsh2siq_round */
    case 3619:  /* avx512fp16_vcvtsh2usiq_round */
    case 3617:  /* avx512fp16_vcvtsh2si_round */
    case 3615:  /* avx512fp16_vcvtsh2usi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4079:  /* *sse2_cvtpd2ps_mask_1 */
    case 3958:  /* *floatunsv2div2sf2_mask_1 */
    case 3957:  /* *floatv2div2sf2_mask_1 */
    case 3762:  /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */
    case 3759:  /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */
    case 3758:  /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */
    case 3613:  /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */
    case 3612:  /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */
    case 3607:  /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */
    case 3606:  /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */
    case 3605:  /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */
    case 3604:  /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4078:  /* *sse2_cvtpd2ps_mask */
    case 3956:  /* *floatunsv2div2sf2_mask */
    case 3955:  /* *floatv2div2sf2_mask */
    case 3761:  /* *avx512fp16_vcvtpd2ph_v2df_mask */
    case 3757:  /* *avx512fp16_vcvtps2ph_v4sf_mask */
    case 3756:  /* *avx512fp16_vcvtpd2ph_v4df_mask */
    case 3611:  /* *avx512fp16_vcvtuqq2ph_v2di_mask */
    case 3610:  /* *avx512fp16_vcvtqq2ph_v2di_mask */
    case 3603:  /* *avx512fp16_vcvtuqq2ph_v4di_mask */
    case 3602:  /* *avx512fp16_vcvtqq2ph_v4di_mask */
    case 3601:  /* *avx512fp16_vcvtudq2ph_v4si_mask */
    case 3600:  /* *avx512fp16_vcvtdq2ph_v4si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8095:  /* avx512f_vcvtph2ps512_mask_round */
    case 7519:  /* avx512er_rsqrt28v8df_mask_round */
    case 7515:  /* avx512er_rsqrt28v16sf_mask_round */
    case 7503:  /* avx512er_rcp28v8df_mask_round */
    case 7499:  /* avx512er_rcp28v16sf_mask_round */
    case 7495:  /* avx512er_exp2v8df_mask_round */
    case 7491:  /* avx512er_exp2v16sf_mask_round */
    case 5703:  /* avx512vl_getexpv2df_mask_round */
    case 5699:  /* avx512vl_getexpv4df_mask_round */
    case 5695:  /* avx512f_getexpv8df_mask_round */
    case 5691:  /* avx512vl_getexpv4sf_mask_round */
    case 5687:  /* avx512vl_getexpv8sf_mask_round */
    case 5683:  /* avx512f_getexpv16sf_mask_round */
    case 5679:  /* avx512fp16_getexpv8hf_mask_round */
    case 5675:  /* avx512vl_getexpv16hf_mask_round */
    case 5671:  /* avx512bw_getexpv32hf_mask_round */
    case 4032:  /* ufix_notruncv8dfv8di2_mask_round */
    case 4024:  /* fix_notruncv8dfv8di2_mask_round */
    case 3986:  /* ufix_notruncv4dfv4si2_mask_round */
    case 3982:  /* ufix_notruncv8dfv8si2_mask_round */
    case 3972:  /* avx512f_cvtpd2dq512_mask_round */
    case 3862:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 3854:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 3850:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 3846:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 3842:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 3838:  /* avx512f_fix_notruncv16sfv16si_mask_round */
    case 3547:  /* avx512fp16_vcvtph2qq_v2di_mask_round */
    case 3543:  /* avx512fp16_vcvtph2uqq_v2di_mask_round */
    case 3539:  /* avx512fp16_vcvtph2dq_v4si_mask_round */
    case 3535:  /* avx512fp16_vcvtph2udq_v4si_mask_round */
    case 3531:  /* avx512fp16_vcvtph2w_v8hi_mask_round */
    case 3527:  /* avx512fp16_vcvtph2uw_v8hi_mask_round */
    case 3523:  /* avx512fp16_vcvtph2qq_v4di_mask_round */
    case 3519:  /* avx512fp16_vcvtph2uqq_v4di_mask_round */
    case 3515:  /* avx512fp16_vcvtph2dq_v8si_mask_round */
    case 3511:  /* avx512fp16_vcvtph2udq_v8si_mask_round */
    case 3507:  /* avx512fp16_vcvtph2w_v16hi_mask_round */
    case 3503:  /* avx512fp16_vcvtph2uw_v16hi_mask_round */
    case 3499:  /* avx512fp16_vcvtph2qq_v8di_mask_round */
    case 3495:  /* avx512fp16_vcvtph2uqq_v8di_mask_round */
    case 3491:  /* avx512fp16_vcvtph2dq_v16si_mask_round */
    case 3487:  /* avx512fp16_vcvtph2udq_v16si_mask_round */
    case 3483:  /* avx512fp16_vcvtph2w_v32hi_mask_round */
    case 3479:  /* avx512fp16_vcvtph2uw_v32hi_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8093:  /* *avx512f_vcvtph2ps512_round */
    case 7517:  /* *avx512er_rsqrt28v8df_round */
    case 7513:  /* *avx512er_rsqrt28v16sf_round */
    case 7501:  /* *avx512er_rcp28v8df_round */
    case 7497:  /* *avx512er_rcp28v16sf_round */
    case 7493:  /* avx512er_exp2v8df_round */
    case 7489:  /* avx512er_exp2v16sf_round */
    case 5701:  /* avx512vl_getexpv2df_round */
    case 5697:  /* avx512vl_getexpv4df_round */
    case 5693:  /* avx512f_getexpv8df_round */
    case 5689:  /* avx512vl_getexpv4sf_round */
    case 5685:  /* avx512vl_getexpv8sf_round */
    case 5681:  /* avx512f_getexpv16sf_round */
    case 5677:  /* avx512fp16_getexpv8hf_round */
    case 5673:  /* avx512vl_getexpv16hf_round */
    case 5669:  /* avx512bw_getexpv32hf_round */
    case 4030:  /* ufix_notruncv8dfv8di2_round */
    case 4022:  /* fix_notruncv8dfv8di2_round */
    case 3984:  /* ufix_notruncv4dfv4si2_round */
    case 3980:  /* ufix_notruncv8dfv8si2_round */
    case 3970:  /* avx512f_cvtpd2dq512_round */
    case 3860:  /* *avx512dq_cvtps2uqqv8di_round */
    case 3852:  /* *avx512dq_cvtps2qqv8di_round */
    case 3848:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 3844:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 3840:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 3836:  /* avx512f_fix_notruncv16sfv16si_round */
    case 3545:  /* avx512fp16_vcvtph2qq_v2di_round */
    case 3541:  /* avx512fp16_vcvtph2uqq_v2di_round */
    case 3537:  /* avx512fp16_vcvtph2dq_v4si_round */
    case 3533:  /* avx512fp16_vcvtph2udq_v4si_round */
    case 3529:  /* avx512fp16_vcvtph2w_v8hi_round */
    case 3525:  /* avx512fp16_vcvtph2uw_v8hi_round */
    case 3521:  /* avx512fp16_vcvtph2qq_v4di_round */
    case 3517:  /* avx512fp16_vcvtph2uqq_v4di_round */
    case 3513:  /* avx512fp16_vcvtph2dq_v8si_round */
    case 3509:  /* avx512fp16_vcvtph2udq_v8si_round */
    case 3505:  /* avx512fp16_vcvtph2w_v16hi_round */
    case 3501:  /* avx512fp16_vcvtph2uw_v16hi_round */
    case 3497:  /* avx512fp16_vcvtph2qq_v8di_round */
    case 3493:  /* avx512fp16_vcvtph2uqq_v8di_round */
    case 3489:  /* avx512fp16_vcvtph2dq_v16si_round */
    case 3485:  /* avx512fp16_vcvtph2udq_v16si_round */
    case 3481:  /* avx512fp16_vcvtph2w_v32hi_round */
    case 3477:  /* avx512fp16_vcvtph2uw_v32hi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3475:  /* avx512fp16_fcmulcsh_v8hf_mask_round */
    case 3471:  /* avx512fp16_fmulcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3474:  /* avx512fp16_fcmulcsh_v8hf_mask */
    case 3470:  /* avx512fp16_fmulcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5714:  /* avx512f_sgetexpv2df_round */
    case 5710:  /* avx512f_sgetexpv4sf_round */
    case 5706:  /* avx512f_sgetexpv8hf_round */
    case 4267:  /* avx512f_vmscalefv2df_round */
    case 4263:  /* avx512f_vmscalefv4sf_round */
    case 4259:  /* avx512f_vmscalefv8hf_round */
    case 3473:  /* avx512fp16_fcmulcsh_v8hf_round */
    case 3469:  /* avx512fp16_fmulcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5712:  /* avx512f_sgetexpv2df */
    case 5708:  /* avx512f_sgetexpv4sf */
    case 5704:  /* avx512f_sgetexpv8hf */
    case 4266:  /* avx512f_vmscalefv2df */
    case 4262:  /* avx512f_vmscalefv4sf */
    case 4258:  /* avx512f_vmscalefv8hf */
    case 3472:  /* avx512fp16_fcmulcsh_v8hf */
    case 3468:  /* avx512fp16_fmulcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3467:  /* avx512fp16_fcmaddcsh_v8hf_mask_round */
    case 3465:  /* avx512fp16_fmaddcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3466:  /* avx512fp16_fcmaddcsh_v8hf_mask */
    case 3464:  /* avx512fp16_fmaddcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3463:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */
    case 3459:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3462:  /* avx512fp16_fma_fcmaddcsh_v8hf_round */
    case 3458:  /* avx512fp16_fma_fmaddcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3461:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz */
    case 3457:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3460:  /* avx512fp16_fma_fcmaddcsh_v8hf */
    case 3456:  /* avx512fp16_fma_fmaddcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3447:  /* avx512bw_fcmulc_v32hf_mask_round */
    case 3443:  /* avx512bw_fmulc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3455:  /* avx512fp16_fcmulc_v8hf_mask */
    case 3453:  /* avx512fp16_fmulc_v8hf_mask */
    case 3451:  /* avx512vl_fcmulc_v16hf_mask */
    case 3449:  /* avx512vl_fmulc_v16hf_mask */
    case 3445:  /* avx512bw_fcmulc_v32hf_mask */
    case 3441:  /* avx512bw_fmulc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3435:  /* avx512bw_fcmaddc_v32hf_mask_round */
    case 3433:  /* avx512bw_fmaddc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3439:  /* avx512fp16_fcmaddc_v8hf_mask */
    case 3438:  /* avx512fp16_fmaddc_v8hf_mask */
    case 3437:  /* avx512vl_fcmaddc_v16hf_mask */
    case 3436:  /* avx512vl_fmaddc_v16hf_mask */
    case 3434:  /* avx512bw_fcmaddc_v32hf_mask */
    case 3432:  /* avx512bw_fmaddc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3431:  /* fma_v8hf_fcmaddc_bcst */
    case 3430:  /* fma_v16hf_fcmaddc_bcst */
    case 3429:  /* fma_v32hf_fcmaddc_bcst */
    case 3428:  /* fma_v8hf_fmaddc_bcst */
    case 3427:  /* fma_v16hf_fmaddc_bcst */
    case 3426:  /* fma_v32hf_fmaddc_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3399:  /* fma_fcmaddc_v32hf_maskz_1_round */
    case 3395:  /* fma_fmaddc_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3407:  /* fma_fcmaddc_v8hf_maskz_1 */
    case 3405:  /* fma_fmaddc_v8hf_maskz_1 */
    case 3403:  /* fma_fcmaddc_v16hf_maskz_1 */
    case 3401:  /* fma_fmaddc_v16hf_maskz_1 */
    case 3398:  /* fma_fcmaddc_v32hf_maskz_1 */
    case 3394:  /* fma_fmaddc_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3391:  /* *fma4i_vmfnmsub_v2df */
    case 3390:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3387:  /* *fma4i_vmfmsub_v2df */
    case 3386:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3385:  /* *fma4i_vmfmadd_v2df */
    case 3384:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3383:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 3381:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
    case 3379:  /* *avx512f_vmfnmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3382:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 3380:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
    case 3378:  /* *avx512f_vmfnmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3377:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 3375:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
    case 3373:  /* *avx512f_vmfnmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3376:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 3374:  /* *avx512f_vmfnmsub_v4sf_mask3 */
    case 3372:  /* *avx512f_vmfnmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3371:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 3369:  /* *avx512f_vmfnmsub_v4sf_mask_round */
    case 3367:  /* *avx512f_vmfnmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3370:  /* *avx512f_vmfnmsub_v2df_mask */
    case 3368:  /* *avx512f_vmfnmsub_v4sf_mask */
    case 3366:  /* *avx512f_vmfnmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3365:  /* avx512f_vmfnmadd_v2df_maskz_1_round */
    case 3363:  /* avx512f_vmfnmadd_v4sf_maskz_1_round */
    case 3361:  /* avx512f_vmfnmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3364:  /* avx512f_vmfnmadd_v2df_maskz_1 */
    case 3362:  /* avx512f_vmfnmadd_v4sf_maskz_1 */
    case 3360:  /* avx512f_vmfnmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3359:  /* avx512f_vmfnmadd_v2df_mask3_round */
    case 3357:  /* avx512f_vmfnmadd_v4sf_mask3_round */
    case 3355:  /* avx512f_vmfnmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3358:  /* avx512f_vmfnmadd_v2df_mask3 */
    case 3356:  /* avx512f_vmfnmadd_v4sf_mask3 */
    case 3354:  /* avx512f_vmfnmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3353:  /* avx512f_vmfnmadd_v2df_mask_round */
    case 3351:  /* avx512f_vmfnmadd_v4sf_mask_round */
    case 3349:  /* avx512f_vmfnmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3352:  /* avx512f_vmfnmadd_v2df_mask */
    case 3350:  /* avx512f_vmfnmadd_v4sf_mask */
    case 3348:  /* avx512f_vmfnmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3347:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 3345:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
    case 3343:  /* *avx512f_vmfmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3346:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 3344:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
    case 3342:  /* *avx512f_vmfmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3341:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 3339:  /* avx512f_vmfmsub_v4sf_mask3_round */
    case 3337:  /* avx512f_vmfmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3340:  /* avx512f_vmfmsub_v2df_mask3 */
    case 3338:  /* avx512f_vmfmsub_v4sf_mask3 */
    case 3336:  /* avx512f_vmfmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3335:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 3333:  /* *avx512f_vmfmsub_v4sf_mask_round */
    case 3331:  /* *avx512f_vmfmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3334:  /* *avx512f_vmfmsub_v2df_mask */
    case 3332:  /* *avx512f_vmfmsub_v4sf_mask */
    case 3330:  /* *avx512f_vmfmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3329:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 3327:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
    case 3325:  /* avx512f_vmfmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3328:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 3326:  /* avx512f_vmfmadd_v4sf_maskz_1 */
    case 3324:  /* avx512f_vmfmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3323:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 3321:  /* avx512f_vmfmadd_v4sf_mask3_round */
    case 3319:  /* avx512f_vmfmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3322:  /* avx512f_vmfmadd_v2df_mask3 */
    case 3320:  /* avx512f_vmfmadd_v4sf_mask3 */
    case 3318:  /* avx512f_vmfmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3317:  /* avx512f_vmfmadd_v2df_mask_round */
    case 3315:  /* avx512f_vmfmadd_v4sf_mask_round */
    case 3313:  /* avx512f_vmfmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3316:  /* avx512f_vmfmadd_v2df_mask */
    case 3314:  /* avx512f_vmfmadd_v4sf_mask */
    case 3312:  /* avx512f_vmfmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3311:  /* *fmai_fnmsub_v2df_round */
    case 3309:  /* *fmai_fnmsub_v4sf_round */
    case 3307:  /* *fmai_fnmsub_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3310:  /* *fmai_fnmsub_v2df */
    case 3308:  /* *fmai_fnmsub_v4sf */
    case 3306:  /* *fmai_fnmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3305:  /* *fmai_fnmadd_v2df_round */
    case 3303:  /* *fmai_fnmadd_v4sf_round */
    case 3301:  /* *fmai_fnmadd_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3304:  /* *fmai_fnmadd_v2df */
    case 3302:  /* *fmai_fnmadd_v4sf */
    case 3300:  /* *fmai_fnmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3299:  /* *fmai_fmsub_v2df */
    case 3297:  /* *fmai_fmsub_v4sf */
    case 3295:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3298:  /* *fmai_fmsub_v2df */
    case 3296:  /* *fmai_fmsub_v4sf */
    case 3294:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3293:  /* *fmai_fmadd_v2df */
    case 3291:  /* *fmai_fmadd_v4sf */
    case 3289:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3292:  /* *fmai_fmadd_v2df */
    case 3290:  /* *fmai_fmadd_v4sf */
    case 3288:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3287:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 3285:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 3283:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 3281:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 3279:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 3277:  /* avx512f_fmsubadd_v16sf_mask3_round */
    case 3275:  /* avx512fp16_fmsubadd_v8hf_mask3_round */
    case 3273:  /* avx512vl_fmsubadd_v16hf_mask3_round */
    case 3271:  /* avx512bw_fmsubadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3286:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 3284:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 3282:  /* avx512f_fmsubadd_v8df_mask3 */
    case 3280:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 3278:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 3276:  /* avx512f_fmsubadd_v16sf_mask3 */
    case 3274:  /* avx512fp16_fmsubadd_v8hf_mask3 */
    case 3272:  /* avx512vl_fmsubadd_v16hf_mask3 */
    case 3270:  /* avx512bw_fmsubadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3269:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 3267:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 3265:  /* avx512f_fmsubadd_v8df_mask_round */
    case 3263:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 3261:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 3259:  /* avx512f_fmsubadd_v16sf_mask_round */
    case 3257:  /* avx512fp16_fmsubadd_v8hf_mask_round */
    case 3255:  /* avx512vl_fmsubadd_v16hf_mask_round */
    case 3253:  /* avx512bw_fmsubadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3268:  /* avx512vl_fmsubadd_v2df_mask */
    case 3266:  /* avx512vl_fmsubadd_v4df_mask */
    case 3264:  /* avx512f_fmsubadd_v8df_mask */
    case 3262:  /* avx512vl_fmsubadd_v4sf_mask */
    case 3260:  /* avx512vl_fmsubadd_v8sf_mask */
    case 3258:  /* avx512f_fmsubadd_v16sf_mask */
    case 3256:  /* avx512fp16_fmsubadd_v8hf_mask */
    case 3254:  /* avx512vl_fmsubadd_v16hf_mask */
    case 3252:  /* avx512bw_fmsubadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3247:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 3238:  /* fma_fmsubadd_v16sf_maskz_1_round */
    case 3228:  /* fma_fmsubadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3246:  /* *fma_fmsubadd_v8df_round */
    case 3237:  /* *fma_fmsubadd_v16sf_round */
    case 3227:  /* *fma_fmsubadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3251:  /* fma_fmsubadd_v2df_maskz_1 */
    case 3249:  /* fma_fmsubadd_v4df_maskz_1 */
    case 3245:  /* fma_fmsubadd_v8df_maskz_1 */
    case 3242:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 3240:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 3236:  /* fma_fmsubadd_v16sf_maskz_1 */
    case 3232:  /* fma_fmsubadd_v8hf_maskz_1 */
    case 3230:  /* fma_fmsubadd_v16hf_maskz_1 */
    case 3226:  /* fma_fmsubadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3250:  /* *fma_fmsubadd_v2df */
    case 3248:  /* *fma_fmsubadd_v4df */
    case 3244:  /* *fma_fmsubadd_v8df */
    case 3243:  /* *fma_fmsubadd_df */
    case 3241:  /* *fma_fmsubadd_v4sf */
    case 3239:  /* *fma_fmsubadd_v8sf */
    case 3235:  /* *fma_fmsubadd_v16sf */
    case 3234:  /* *fma_fmsubadd_sf */
    case 3233:  /* *fma_fmsubadd_hf */
    case 3231:  /* *fma_fmsubadd_v8hf */
    case 3229:  /* *fma_fmsubadd_v16hf */
    case 3225:  /* *fma_fmsubadd_v32hf */
    case 3224:  /* *fma_fmsubadd_v2df */
    case 3223:  /* *fma_fmsubadd_v4df */
    case 3222:  /* *fma_fmsubadd_v4sf */
    case 3221:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 3220:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 3218:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 3216:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 3214:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 3212:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 3210:  /* avx512f_fmaddsub_v16sf_mask3_round */
    case 3208:  /* avx512fp16_fmaddsub_v8hf_mask3_round */
    case 3206:  /* avx512vl_fmaddsub_v16hf_mask3_round */
    case 3204:  /* avx512bw_fmaddsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3219:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 3217:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 3215:  /* avx512f_fmaddsub_v8df_mask3 */
    case 3213:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 3211:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 3209:  /* avx512f_fmaddsub_v16sf_mask3 */
    case 3207:  /* avx512fp16_fmaddsub_v8hf_mask3 */
    case 3205:  /* avx512vl_fmaddsub_v16hf_mask3 */
    case 3203:  /* avx512bw_fmaddsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3202:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 3200:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 3198:  /* avx512f_fmaddsub_v8df_mask_round */
    case 3196:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 3194:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 3192:  /* avx512f_fmaddsub_v16sf_mask_round */
    case 3190:  /* avx512fp16_fmaddsub_v8hf_mask_round */
    case 3188:  /* avx512vl_fmaddsub_v16hf_mask_round */
    case 3186:  /* avx512bw_fmaddsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8803:  /* avx512f_dpbf16ps_v4sf_mask */
    case 8802:  /* avx512f_dpbf16ps_v8sf_mask */
    case 8801:  /* avx512f_dpbf16ps_v16sf_mask */
    case 8750:  /* vpdpwssds_v4si_mask */
    case 8749:  /* vpdpwssds_v8si_mask */
    case 8748:  /* vpdpwssds_v16si_mask */
    case 8741:  /* vpdpwssd_v4si_mask */
    case 8740:  /* vpdpwssd_v8si_mask */
    case 8739:  /* vpdpwssd_v16si_mask */
    case 8732:  /* vpdpbusds_v4si_mask */
    case 8731:  /* vpdpbusds_v8si_mask */
    case 8730:  /* vpdpbusds_v16si_mask */
    case 8723:  /* vpdpbusd_v4si_mask */
    case 8722:  /* vpdpbusd_v8si_mask */
    case 8721:  /* vpdpbusd_v16si_mask */
    case 8708:  /* vpshldv_v2di_mask */
    case 8707:  /* vpshldv_v4si_mask */
    case 8706:  /* vpshldv_v8hi_mask */
    case 8705:  /* vpshldv_v4di_mask */
    case 8704:  /* vpshldv_v8si_mask */
    case 8703:  /* vpshldv_v16hi_mask */
    case 8702:  /* vpshldv_v8di_mask */
    case 8701:  /* vpshldv_v16si_mask */
    case 8700:  /* vpshldv_v32hi_mask */
    case 8681:  /* vpshrdv_v2di_mask */
    case 8680:  /* vpshrdv_v4si_mask */
    case 8679:  /* vpshrdv_v8hi_mask */
    case 8678:  /* vpshrdv_v4di_mask */
    case 8677:  /* vpshrdv_v8si_mask */
    case 8676:  /* vpshrdv_v16hi_mask */
    case 8675:  /* vpshrdv_v8di_mask */
    case 8674:  /* vpshrdv_v16si_mask */
    case 8673:  /* vpshrdv_v32hi_mask */
    case 8551:  /* vpamdd52huqv2di_mask */
    case 8550:  /* vpamdd52luqv2di_mask */
    case 8549:  /* vpamdd52huqv4di_mask */
    case 8548:  /* vpamdd52luqv4di_mask */
    case 8547:  /* vpamdd52huqv8di_mask */
    case 8546:  /* vpamdd52luqv8di_mask */
    case 3201:  /* avx512vl_fmaddsub_v2df_mask */
    case 3199:  /* avx512vl_fmaddsub_v4df_mask */
    case 3197:  /* avx512f_fmaddsub_v8df_mask */
    case 3195:  /* avx512vl_fmaddsub_v4sf_mask */
    case 3193:  /* avx512vl_fmaddsub_v8sf_mask */
    case 3191:  /* avx512f_fmaddsub_v16sf_mask */
    case 3189:  /* avx512fp16_fmaddsub_v8hf_mask */
    case 3187:  /* avx512vl_fmaddsub_v16hf_mask */
    case 3185:  /* avx512bw_fmaddsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8406:  /* avx512dq_rangepv8df_mask_round */
    case 8398:  /* avx512dq_rangepv16sf_mask_round */
    case 3180:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 3171:  /* fma_fmaddsub_v16sf_maskz_1_round */
    case 3161:  /* fma_fmaddsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8800:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 8798:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 8796:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 8753:  /* vpdpwssds_v4si_maskz_1 */
    case 8752:  /* vpdpwssds_v8si_maskz_1 */
    case 8751:  /* vpdpwssds_v16si_maskz_1 */
    case 8744:  /* vpdpwssd_v4si_maskz_1 */
    case 8743:  /* vpdpwssd_v8si_maskz_1 */
    case 8742:  /* vpdpwssd_v16si_maskz_1 */
    case 8735:  /* vpdpbusds_v4si_maskz_1 */
    case 8734:  /* vpdpbusds_v8si_maskz_1 */
    case 8733:  /* vpdpbusds_v16si_maskz_1 */
    case 8726:  /* vpdpbusd_v4si_maskz_1 */
    case 8725:  /* vpdpbusd_v8si_maskz_1 */
    case 8724:  /* vpdpbusd_v16si_maskz_1 */
    case 8717:  /* vpshldv_v2di_maskz_1 */
    case 8716:  /* vpshldv_v4si_maskz_1 */
    case 8715:  /* vpshldv_v8hi_maskz_1 */
    case 8714:  /* vpshldv_v4di_maskz_1 */
    case 8713:  /* vpshldv_v8si_maskz_1 */
    case 8712:  /* vpshldv_v16hi_maskz_1 */
    case 8711:  /* vpshldv_v8di_maskz_1 */
    case 8710:  /* vpshldv_v16si_maskz_1 */
    case 8709:  /* vpshldv_v32hi_maskz_1 */
    case 8690:  /* vpshrdv_v2di_maskz_1 */
    case 8689:  /* vpshrdv_v4si_maskz_1 */
    case 8688:  /* vpshrdv_v8hi_maskz_1 */
    case 8687:  /* vpshrdv_v4di_maskz_1 */
    case 8686:  /* vpshrdv_v8si_maskz_1 */
    case 8685:  /* vpshrdv_v16hi_maskz_1 */
    case 8684:  /* vpshrdv_v8di_maskz_1 */
    case 8683:  /* vpshrdv_v16si_maskz_1 */
    case 8682:  /* vpshrdv_v32hi_maskz_1 */
    case 8663:  /* vpshld_v2di_mask */
    case 8661:  /* vpshld_v4si_mask */
    case 8659:  /* vpshld_v8hi_mask */
    case 8657:  /* vpshld_v4di_mask */
    case 8655:  /* vpshld_v8si_mask */
    case 8653:  /* vpshld_v16hi_mask */
    case 8651:  /* vpshld_v8di_mask */
    case 8649:  /* vpshld_v16si_mask */
    case 8647:  /* vpshld_v32hi_mask */
    case 8645:  /* vpshrd_v2di_mask */
    case 8643:  /* vpshrd_v4si_mask */
    case 8641:  /* vpshrd_v8hi_mask */
    case 8639:  /* vpshrd_v4di_mask */
    case 8637:  /* vpshrd_v8si_mask */
    case 8635:  /* vpshrd_v16hi_mask */
    case 8633:  /* vpshrd_v8di_mask */
    case 8631:  /* vpshrd_v16si_mask */
    case 8629:  /* vpshrd_v32hi_mask */
    case 8621:  /* vgf2p8affineqb_v16qi_mask */
    case 8619:  /* vgf2p8affineqb_v32qi_mask */
    case 8617:  /* vgf2p8affineqb_v64qi_mask */
    case 8615:  /* vgf2p8affineinvqb_v16qi_mask */
    case 8613:  /* vgf2p8affineinvqb_v32qi_mask */
    case 8611:  /* vgf2p8affineinvqb_v64qi_mask */
    case 8577:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 8574:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 8571:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 8568:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 8565:  /* avx5124fmaddps_4fmaddss_maskz */
    case 8562:  /* avx5124fmaddps_4fmaddps_maskz */
    case 8545:  /* vpamdd52huqv2di_maskz_1 */
    case 8543:  /* vpamdd52luqv2di_maskz_1 */
    case 8541:  /* vpamdd52huqv4di_maskz_1 */
    case 8539:  /* vpamdd52luqv4di_maskz_1 */
    case 8537:  /* vpamdd52huqv8di_maskz_1 */
    case 8535:  /* vpamdd52luqv8di_maskz_1 */
    case 8496:  /* avx512bw_dbpsadbwv32hi_mask */
    case 8494:  /* avx512bw_dbpsadbwv16hi_mask */
    case 8492:  /* avx512bw_dbpsadbwv8hi_mask */
    case 8410:  /* avx512dq_rangepv2df_mask */
    case 8408:  /* avx512dq_rangepv4df_mask */
    case 8405:  /* avx512dq_rangepv8df_mask */
    case 8402:  /* avx512dq_rangepv4sf_mask */
    case 8400:  /* avx512dq_rangepv8sf_mask */
    case 8397:  /* avx512dq_rangepv16sf_mask */
    case 7925:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 7923:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 7921:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 7919:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 7917:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 7915:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 7913:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 7911:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 7909:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 7907:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 7905:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 7903:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 7901:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 7899:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 7897:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 7895:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 7893:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 7891:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 7169:  /* ssse3_palignrv16qi_mask */
    case 7168:  /* avx2_palignrv32qi_mask */
    case 7167:  /* avx512bw_palignrv64qi_mask */
    case 5727:  /* avx512vl_alignv2di_mask */
    case 5725:  /* avx512vl_alignv4di_mask */
    case 5723:  /* avx512f_alignv8di_mask */
    case 5721:  /* avx512vl_alignv4si_mask */
    case 5719:  /* avx512vl_alignv8si_mask */
    case 5717:  /* avx512f_alignv16si_mask */
    case 3184:  /* fma_fmaddsub_v2df_maskz_1 */
    case 3182:  /* fma_fmaddsub_v4df_maskz_1 */
    case 3178:  /* fma_fmaddsub_v8df_maskz_1 */
    case 3175:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 3173:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 3169:  /* fma_fmaddsub_v16sf_maskz_1 */
    case 3165:  /* fma_fmaddsub_v8hf_maskz_1 */
    case 3163:  /* fma_fmaddsub_v16hf_maskz_1 */
    case 3159:  /* fma_fmaddsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3153:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 3151:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 3149:  /* avx512f_fnmsub_v8df_mask3_round */
    case 3147:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 3145:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 3143:  /* avx512f_fnmsub_v16sf_mask3_round */
    case 3141:  /* avx512fp16_fnmsub_v8hf_mask3_round */
    case 3139:  /* avx512vl_fnmsub_v16hf_mask3_round */
    case 3137:  /* avx512bw_fnmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3152:  /* avx512vl_fnmsub_v2df_mask3 */
    case 3150:  /* avx512vl_fnmsub_v4df_mask3 */
    case 3148:  /* avx512f_fnmsub_v8df_mask3 */
    case 3146:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 3144:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 3142:  /* avx512f_fnmsub_v16sf_mask3 */
    case 3140:  /* avx512fp16_fnmsub_v8hf_mask3 */
    case 3138:  /* avx512vl_fnmsub_v16hf_mask3 */
    case 3136:  /* avx512bw_fnmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3133:  /* avx512f_fnmsub_v8df_mask_round */
    case 3129:  /* avx512f_fnmsub_v16sf_mask_round */
    case 3125:  /* avx512bw_fnmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3135:  /* avx512vl_fnmsub_v2df_mask */
    case 3134:  /* avx512vl_fnmsub_v4df_mask */
    case 3132:  /* avx512f_fnmsub_v8df_mask */
    case 3131:  /* avx512vl_fnmsub_v4sf_mask */
    case 3130:  /* avx512vl_fnmsub_v8sf_mask */
    case 3128:  /* avx512f_fnmsub_v16sf_mask */
    case 3127:  /* avx512fp16_fnmsub_v8hf_mask */
    case 3126:  /* avx512vl_fnmsub_v16hf_mask */
    case 3124:  /* avx512bw_fnmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3119:  /* fma_fnmsub_v8df_maskz_1_round */
    case 3110:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 3100:  /* fma_fnmsub_v32hf_maskz_1_round */
    case 3096:  /* *fma_fnmsub_v4df */
    case 3092:  /* *fma_fnmsub_v8sf */
    case 3088:  /* *fma_fnmsub_v2df */
    case 3084:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3123:  /* fma_fnmsub_v2df_maskz_1 */
    case 3121:  /* fma_fnmsub_v4df_maskz_1 */
    case 3117:  /* fma_fnmsub_v8df_maskz_1 */
    case 3114:  /* fma_fnmsub_v4sf_maskz_1 */
    case 3112:  /* fma_fnmsub_v8sf_maskz_1 */
    case 3108:  /* fma_fnmsub_v16sf_maskz_1 */
    case 3104:  /* fma_fnmsub_v8hf_maskz_1 */
    case 3102:  /* fma_fnmsub_v16hf_maskz_1 */
    case 3098:  /* fma_fnmsub_v32hf_maskz_1 */
    case 3094:  /* *fma_fnmsub_v4df */
    case 3090:  /* *fma_fnmsub_v8sf */
    case 3086:  /* *fma_fnmsub_v2df */
    case 3082:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3118:  /* *fma_fnmsub_v8df_round */
    case 3109:  /* *fma_fnmsub_v16sf_round */
    case 3099:  /* *fma_fnmsub_v32hf_round */
    case 3095:  /* *fma_fnmsub_v4df */
    case 3091:  /* *fma_fnmsub_v8sf */
    case 3087:  /* *fma_fnmsub_v2df */
    case 3083:  /* *fma_fnmsub_v4sf */
    case 3080:  /* *fma_fnmsub_df */
    case 3078:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3074:  /* avx512f_fnmadd_v8df_mask3_round */
    case 3070:  /* avx512f_fnmadd_v16sf_mask3_round */
    case 3066:  /* avx512bw_fnmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3076:  /* avx512vl_fnmadd_v2df_mask3 */
    case 3075:  /* avx512vl_fnmadd_v4df_mask3 */
    case 3073:  /* avx512f_fnmadd_v8df_mask3 */
    case 3072:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 3071:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 3069:  /* avx512f_fnmadd_v16sf_mask3 */
    case 3068:  /* avx512fp16_fnmadd_v8hf_mask3 */
    case 3067:  /* avx512vl_fnmadd_v16hf_mask3 */
    case 3065:  /* avx512bw_fnmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3062:  /* avx512f_fnmadd_v8df_mask_round */
    case 3058:  /* avx512f_fnmadd_v16sf_mask_round */
    case 3054:  /* avx512bw_fnmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3064:  /* avx512vl_fnmadd_v2df_mask */
    case 3063:  /* avx512vl_fnmadd_v4df_mask */
    case 3061:  /* avx512f_fnmadd_v8df_mask */
    case 3060:  /* avx512vl_fnmadd_v4sf_mask */
    case 3059:  /* avx512vl_fnmadd_v8sf_mask */
    case 3057:  /* avx512f_fnmadd_v16sf_mask */
    case 3056:  /* avx512fp16_fnmadd_v8hf_mask */
    case 3055:  /* avx512vl_fnmadd_v16hf_mask */
    case 3053:  /* avx512bw_fnmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3048:  /* fma_fnmadd_v8df_maskz_1_round */
    case 3039:  /* fma_fnmadd_v16sf_maskz_1_round */
    case 3029:  /* fma_fnmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3052:  /* fma_fnmadd_v2df_maskz_1 */
    case 3050:  /* fma_fnmadd_v4df_maskz_1 */
    case 3046:  /* fma_fnmadd_v8df_maskz_1 */
    case 3043:  /* fma_fnmadd_v4sf_maskz_1 */
    case 3041:  /* fma_fnmadd_v8sf_maskz_1 */
    case 3037:  /* fma_fnmadd_v16sf_maskz_1 */
    case 3033:  /* fma_fnmadd_v8hf_maskz_1 */
    case 3031:  /* fma_fnmadd_v16hf_maskz_1 */
    case 3027:  /* fma_fnmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3017:  /* avx512f_fmsub_v8df_mask3_round */
    case 3013:  /* avx512f_fmsub_v16sf_mask3_round */
    case 3009:  /* avx512bw_fmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3019:  /* avx512vl_fmsub_v2df_mask3 */
    case 3018:  /* avx512vl_fmsub_v4df_mask3 */
    case 3016:  /* avx512f_fmsub_v8df_mask3 */
    case 3015:  /* avx512vl_fmsub_v4sf_mask3 */
    case 3014:  /* avx512vl_fmsub_v8sf_mask3 */
    case 3012:  /* avx512f_fmsub_v16sf_mask3 */
    case 3011:  /* avx512fp16_fmsub_v8hf_mask3 */
    case 3010:  /* avx512vl_fmsub_v16hf_mask3 */
    case 3008:  /* avx512bw_fmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3007:  /* avx512vl_fmsub_v2df_mask_round */
    case 3005:  /* avx512vl_fmsub_v4df_mask_round */
    case 3003:  /* avx512f_fmsub_v8df_mask_round */
    case 3001:  /* avx512vl_fmsub_v4sf_mask_round */
    case 2999:  /* avx512vl_fmsub_v8sf_mask_round */
    case 2997:  /* avx512f_fmsub_v16sf_mask_round */
    case 2995:  /* avx512fp16_fmsub_v8hf_mask_round */
    case 2993:  /* avx512vl_fmsub_v16hf_mask_round */
    case 2991:  /* avx512bw_fmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3006:  /* avx512vl_fmsub_v2df_mask */
    case 3004:  /* avx512vl_fmsub_v4df_mask */
    case 3002:  /* avx512f_fmsub_v8df_mask */
    case 3000:  /* avx512vl_fmsub_v4sf_mask */
    case 2998:  /* avx512vl_fmsub_v8sf_mask */
    case 2996:  /* avx512f_fmsub_v16sf_mask */
    case 2994:  /* avx512fp16_fmsub_v8hf_mask */
    case 2992:  /* avx512vl_fmsub_v16hf_mask */
    case 2990:  /* avx512bw_fmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2985:  /* fma_fmsub_v8df_maskz_1_round */
    case 2976:  /* fma_fmsub_v16sf_maskz_1_round */
    case 2966:  /* fma_fmsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2984:  /* *fma_fmsub_v8df_round */
    case 2975:  /* *fma_fmsub_v16sf_round */
    case 2965:  /* *fma_fmsub_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2989:  /* fma_fmsub_v2df_maskz_1 */
    case 2987:  /* fma_fmsub_v4df_maskz_1 */
    case 2983:  /* fma_fmsub_v8df_maskz_1 */
    case 2980:  /* fma_fmsub_v4sf_maskz_1 */
    case 2978:  /* fma_fmsub_v8sf_maskz_1 */
    case 2974:  /* fma_fmsub_v16sf_maskz_1 */
    case 2970:  /* fma_fmsub_v8hf_maskz_1 */
    case 2968:  /* fma_fmsub_v16hf_maskz_1 */
    case 2964:  /* fma_fmsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2956:  /* avx512vl_fmadd_v2df_mask3_round */
    case 2954:  /* avx512vl_fmadd_v4df_mask3_round */
    case 2952:  /* avx512f_fmadd_v8df_mask3_round */
    case 2950:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 2948:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 2946:  /* avx512f_fmadd_v16sf_mask3_round */
    case 2944:  /* avx512fp16_fmadd_v8hf_mask3_round */
    case 2942:  /* avx512vl_fmadd_v16hf_mask3_round */
    case 2940:  /* avx512bw_fmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2955:  /* avx512vl_fmadd_v2df_mask3 */
    case 2953:  /* avx512vl_fmadd_v4df_mask3 */
    case 2951:  /* avx512f_fmadd_v8df_mask3 */
    case 2949:  /* avx512vl_fmadd_v4sf_mask3 */
    case 2947:  /* avx512vl_fmadd_v8sf_mask3 */
    case 2945:  /* avx512f_fmadd_v16sf_mask3 */
    case 2943:  /* avx512fp16_fmadd_v8hf_mask3 */
    case 2941:  /* avx512vl_fmadd_v16hf_mask3 */
    case 2939:  /* avx512bw_fmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2936:  /* avx512f_fmadd_v8df_mask_round */
    case 2932:  /* avx512f_fmadd_v16sf_mask_round */
    case 2928:  /* avx512bw_fmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2938:  /* avx512vl_fmadd_v2df_mask */
    case 2937:  /* avx512vl_fmadd_v4df_mask */
    case 2935:  /* avx512f_fmadd_v8df_mask */
    case 2934:  /* avx512vl_fmadd_v4sf_mask */
    case 2933:  /* avx512vl_fmadd_v8sf_mask */
    case 2931:  /* avx512f_fmadd_v16sf_mask */
    case 2930:  /* avx512fp16_fmadd_v8hf_mask */
    case 2929:  /* avx512vl_fmadd_v16hf_mask */
    case 2927:  /* avx512bw_fmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2922:  /* fma_fmadd_v8df_maskz_1_round */
    case 2913:  /* fma_fmadd_v16sf_maskz_1_round */
    case 2903:  /* fma_fmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2921:  /* *fma_fmadd_v8df_round */
    case 2912:  /* *fma_fmadd_v16sf_round */
    case 2902:  /* *fma_fmadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2926:  /* fma_fmadd_v2df_maskz_1 */
    case 2924:  /* fma_fmadd_v4df_maskz_1 */
    case 2920:  /* fma_fmadd_v8df_maskz_1 */
    case 2917:  /* fma_fmadd_v4sf_maskz_1 */
    case 2915:  /* fma_fmadd_v8sf_maskz_1 */
    case 2911:  /* fma_fmadd_v16sf_maskz_1 */
    case 2907:  /* fma_fmadd_v8hf_maskz_1 */
    case 2905:  /* fma_fmadd_v16hf_maskz_1 */
    case 2901:  /* fma_fmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7971:  /* vec_set_hi_v8sf_mask */
    case 7969:  /* vec_set_hi_v8si_mask */
    case 7963:  /* vec_set_hi_v4df_mask */
    case 7961:  /* vec_set_hi_v4di_mask */
    case 6963:  /* vec_set_hi_v8di_mask */
    case 6961:  /* vec_set_hi_v8df_mask */
    case 6955:  /* vec_set_hi_v16si_mask */
    case 6953:  /* vec_set_hi_v16sf_mask */
    case 6615:  /* *andnotv2di3_mask */
    case 6614:  /* *andnotv4di3_mask */
    case 6613:  /* *andnotv8di3_mask */
    case 6612:  /* *andnotv4si3_mask */
    case 6611:  /* *andnotv8si3_mask */
    case 6610:  /* *andnotv16si3_mask */
    case 2826:  /* avx512f_andnotv8df3_mask */
    case 2824:  /* avx512f_andnotv16sf3_mask */
    case 2821:  /* sse2_andnotv2df3_mask */
    case 2819:  /* avx_andnotv4df3_mask */
    case 2817:  /* sse_andnotv4sf3_mask */
    case 2815:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2811:  /* sse2_ucomi_round */
    case 2807:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2810:  /* sse2_ucomi */
    case 2806:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 2809:  /* sse2_comi_round */
    case 2805:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2808:  /* sse2_comi */
    case 2804:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2803:  /* avx512f_vmcmpv2df3_mask_round */
    case 2801:  /* avx512f_vmcmpv4sf3_mask_round */
    case 2799:  /* avx512f_vmcmpv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2802:  /* avx512f_vmcmpv2df3_mask */
    case 2800:  /* avx512f_vmcmpv4sf3_mask */
    case 2798:  /* avx512f_vmcmpv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2797:  /* avx512f_vmcmpv2df3_round */
    case 2795:  /* avx512f_vmcmpv4sf3_round */
    case 2793:  /* avx512f_vmcmpv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2791:  /* *avx512vl_ucmpv8hi3_1 */
    case 2790:  /* *avx512vl_ucmpv8hi3_1 */
    case 2789:  /* *avx512vl_ucmpv16hi3_1 */
    case 2788:  /* *avx512vl_ucmpv16hi3_1 */
    case 2787:  /* *avx512bw_ucmpv32hi3_1 */
    case 2786:  /* *avx512bw_ucmpv32hi3_1 */
    case 2785:  /* *avx512vl_ucmpv32qi3_1 */
    case 2784:  /* *avx512vl_ucmpv32qi3_1 */
    case 2783:  /* *avx512vl_ucmpv16qi3_1 */
    case 2782:  /* *avx512vl_ucmpv16qi3_1 */
    case 2781:  /* *avx512bw_ucmpv64qi3_1 */
    case 2780:  /* *avx512bw_ucmpv64qi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 8774:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 8772:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 8770:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 8436:  /* avx512dq_fpclassv2df_mask */
    case 8434:  /* avx512dq_fpclassv4df_mask */
    case 8432:  /* avx512dq_fpclassv8df_mask */
    case 8430:  /* avx512dq_fpclassv4sf_mask */
    case 8428:  /* avx512dq_fpclassv8sf_mask */
    case 8426:  /* avx512dq_fpclassv16sf_mask */
    case 8424:  /* avx512dq_fpclassv8hf_mask */
    case 8422:  /* avx512dq_fpclassv16hf_mask */
    case 8420:  /* avx512dq_fpclassv32hf_mask */
    case 8096:  /* *vcvtps2ph */
    case 6720:  /* avx512vl_testnmv2di3_mask */
    case 6718:  /* avx512vl_testnmv4di3_mask */
    case 6716:  /* avx512f_testnmv8di3_mask */
    case 6714:  /* avx512vl_testnmv4si3_mask */
    case 6712:  /* avx512vl_testnmv8si3_mask */
    case 6710:  /* avx512f_testnmv16si3_mask */
    case 6708:  /* avx512vl_testnmv8hi3_mask */
    case 6706:  /* avx512vl_testnmv16hi3_mask */
    case 6704:  /* avx512bw_testnmv32hi3_mask */
    case 6702:  /* avx512vl_testnmv16qi3_mask */
    case 6700:  /* avx512vl_testnmv32qi3_mask */
    case 6698:  /* avx512bw_testnmv64qi3_mask */
    case 6696:  /* avx512vl_testmv2di3_mask */
    case 6694:  /* avx512vl_testmv4di3_mask */
    case 6692:  /* avx512f_testmv8di3_mask */
    case 6690:  /* avx512vl_testmv4si3_mask */
    case 6688:  /* avx512vl_testmv8si3_mask */
    case 6686:  /* avx512f_testmv16si3_mask */
    case 6684:  /* avx512vl_testmv8hi3_mask */
    case 6682:  /* avx512vl_testmv16hi3_mask */
    case 6680:  /* avx512bw_testmv32hi3_mask */
    case 6678:  /* avx512vl_testmv16qi3_mask */
    case 6676:  /* avx512vl_testmv32qi3_mask */
    case 6674:  /* avx512bw_testmv64qi3_mask */
    case 3413:  /* fma_v8hf_fadd_fcmul */
    case 3412:  /* fma_v16hf_fadd_fcmul */
    case 3411:  /* fma_v32hf_fadd_fcmul */
    case 3410:  /* fma_v8hf_fadd_fmul */
    case 3409:  /* fma_v16hf_fadd_fmul */
    case 3408:  /* fma_v32hf_fadd_fmul */
    case 2725:  /* *avx512vl_eqv2di3_mask_1 */
    case 2723:  /* *avx512vl_eqv2di3_mask_1 */
    case 2721:  /* *avx512vl_eqv4di3_mask_1 */
    case 2719:  /* *avx512vl_eqv4di3_mask_1 */
    case 2717:  /* *avx512f_eqv8di3_mask_1 */
    case 2715:  /* *avx512f_eqv8di3_mask_1 */
    case 2713:  /* *avx512vl_eqv4si3_mask_1 */
    case 2711:  /* *avx512vl_eqv4si3_mask_1 */
    case 2709:  /* *avx512vl_eqv8si3_mask_1 */
    case 2707:  /* *avx512vl_eqv8si3_mask_1 */
    case 2705:  /* *avx512f_eqv16si3_mask_1 */
    case 2703:  /* *avx512f_eqv16si3_mask_1 */
    case 2653:  /* *avx512vl_eqv8hi3_mask_1 */
    case 2651:  /* *avx512vl_eqv8hi3_mask_1 */
    case 2649:  /* *avx512vl_eqv16hi3_mask_1 */
    case 2647:  /* *avx512vl_eqv16hi3_mask_1 */
    case 2645:  /* *avx512bw_eqv32hi3_mask_1 */
    case 2643:  /* *avx512bw_eqv32hi3_mask_1 */
    case 2641:  /* *avx512vl_eqv32qi3_mask_1 */
    case 2639:  /* *avx512vl_eqv32qi3_mask_1 */
    case 2637:  /* *avx512vl_eqv16qi3_mask_1 */
    case 2635:  /* *avx512vl_eqv16qi3_mask_1 */
    case 2633:  /* *avx512bw_eqv64qi3_mask_1 */
    case 2631:  /* *avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2773:  /* *avx512vl_ucmpv2di3_zero_extenddi_2 */
    case 2772:  /* *avx512vl_ucmpv2di3_zero_extendsi_2 */
    case 2771:  /* *avx512vl_ucmpv2di3_zero_extendhi_2 */
    case 2770:  /* *avx512vl_ucmpv4di3_zero_extenddi_2 */
    case 2769:  /* *avx512vl_ucmpv4di3_zero_extendsi_2 */
    case 2768:  /* *avx512vl_ucmpv4di3_zero_extendhi_2 */
    case 2767:  /* *avx512f_ucmpv8di3_zero_extenddi_2 */
    case 2766:  /* *avx512f_ucmpv8di3_zero_extendsi_2 */
    case 2765:  /* *avx512f_ucmpv8di3_zero_extendhi_2 */
    case 2764:  /* *avx512vl_ucmpv4si3_zero_extenddi_2 */
    case 2763:  /* *avx512vl_ucmpv4si3_zero_extendsi_2 */
    case 2762:  /* *avx512vl_ucmpv4si3_zero_extendhi_2 */
    case 2761:  /* *avx512vl_ucmpv8si3_zero_extenddi_2 */
    case 2760:  /* *avx512vl_ucmpv8si3_zero_extendsi_2 */
    case 2759:  /* *avx512vl_ucmpv8si3_zero_extendhi_2 */
    case 2758:  /* *avx512f_ucmpv16si3_zero_extenddi_2 */
    case 2757:  /* *avx512f_ucmpv16si3_zero_extendsi_2 */
    case 2756:  /* *avx512f_ucmpv16si3_zero_extendhi_2 */
    case 2701:  /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */
    case 2700:  /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */
    case 2699:  /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */
    case 2698:  /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */
    case 2697:  /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */
    case 2696:  /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */
    case 2695:  /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */
    case 2694:  /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */
    case 2693:  /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */
    case 2692:  /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */
    case 2691:  /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */
    case 2690:  /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */
    case 2689:  /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */
    case 2688:  /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */
    case 2687:  /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */
    case 2686:  /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */
    case 2685:  /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */
    case 2684:  /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */
    case 2617:  /* *avx512vl_cmpv8hi3_zero_extenddi_2 */
    case 2616:  /* *avx512vl_cmpv8hi3_zero_extendsi_2 */
    case 2615:  /* *avx512vl_cmpv8hi3_zero_extendhi_2 */
    case 2614:  /* *avx512vl_cmpv16hi3_zero_extenddi_2 */
    case 2613:  /* *avx512vl_cmpv16hi3_zero_extendsi_2 */
    case 2612:  /* *avx512vl_cmpv16hi3_zero_extendhi_2 */
    case 2611:  /* *avx512bw_cmpv32hi3_zero_extenddi_2 */
    case 2610:  /* *avx512bw_cmpv32hi3_zero_extendsi_2 */
    case 2609:  /* *avx512bw_cmpv32hi3_zero_extendhi_2 */
    case 2608:  /* *avx512vl_cmpv32qi3_zero_extenddi_2 */
    case 2607:  /* *avx512vl_cmpv32qi3_zero_extendsi_2 */
    case 2606:  /* *avx512vl_cmpv32qi3_zero_extendhi_2 */
    case 2605:  /* *avx512vl_cmpv16qi3_zero_extenddi_2 */
    case 2604:  /* *avx512vl_cmpv16qi3_zero_extendsi_2 */
    case 2603:  /* *avx512vl_cmpv16qi3_zero_extendhi_2 */
    case 2602:  /* *avx512bw_cmpv64qi3_zero_extenddi_2 */
    case 2601:  /* *avx512bw_cmpv64qi3_zero_extendsi_2 */
    case 2600:  /* *avx512bw_cmpv64qi3_zero_extendhi_2 */
    case 2557:  /* *avx512vl_cmpv2df3_zero_extenddi_2 */
    case 2556:  /* *avx512vl_cmpv2df3_zero_extendsi_2 */
    case 2555:  /* *avx512vl_cmpv2df3_zero_extendhi_2 */
    case 2554:  /* *avx512vl_cmpv4df3_zero_extenddi_2 */
    case 2553:  /* *avx512vl_cmpv4df3_zero_extendsi_2 */
    case 2552:  /* *avx512vl_cmpv4df3_zero_extendhi_2 */
    case 2551:  /* *avx512f_cmpv8df3_zero_extenddi_2 */
    case 2550:  /* *avx512f_cmpv8df3_zero_extendsi_2 */
    case 2549:  /* *avx512f_cmpv8df3_zero_extendhi_2 */
    case 2548:  /* *avx512vl_cmpv4sf3_zero_extenddi_2 */
    case 2547:  /* *avx512vl_cmpv4sf3_zero_extendsi_2 */
    case 2546:  /* *avx512vl_cmpv4sf3_zero_extendhi_2 */
    case 2545:  /* *avx512vl_cmpv8sf3_zero_extenddi_2 */
    case 2544:  /* *avx512vl_cmpv8sf3_zero_extendsi_2 */
    case 2543:  /* *avx512vl_cmpv8sf3_zero_extendhi_2 */
    case 2542:  /* *avx512f_cmpv16sf3_zero_extenddi_2 */
    case 2541:  /* *avx512f_cmpv16sf3_zero_extendsi_2 */
    case 2540:  /* *avx512f_cmpv16sf3_zero_extendhi_2 */
    case 2539:  /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */
    case 2538:  /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */
    case 2537:  /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */
    case 2536:  /* *avx512vl_cmpv16hf3_zero_extenddi_2 */
    case 2535:  /* *avx512vl_cmpv16hf3_zero_extendsi_2 */
    case 2534:  /* *avx512vl_cmpv16hf3_zero_extendhi_2 */
    case 2533:  /* *avx512bw_cmpv32hf3_zero_extenddi_2 */
    case 2532:  /* *avx512bw_cmpv32hf3_zero_extendsi_2 */
    case 2531:  /* *avx512bw_cmpv32hf3_zero_extendhi_2 */
    case 2530:  /* *avx512vl_cmpv2di3_zero_extenddi_2 */
    case 2529:  /* *avx512vl_cmpv2di3_zero_extendsi_2 */
    case 2528:  /* *avx512vl_cmpv2di3_zero_extendhi_2 */
    case 2527:  /* *avx512vl_cmpv4di3_zero_extenddi_2 */
    case 2526:  /* *avx512vl_cmpv4di3_zero_extendsi_2 */
    case 2525:  /* *avx512vl_cmpv4di3_zero_extendhi_2 */
    case 2524:  /* *avx512f_cmpv8di3_zero_extenddi_2 */
    case 2523:  /* *avx512f_cmpv8di3_zero_extendsi_2 */
    case 2522:  /* *avx512f_cmpv8di3_zero_extendhi_2 */
    case 2521:  /* *avx512vl_cmpv4si3_zero_extenddi_2 */
    case 2520:  /* *avx512vl_cmpv4si3_zero_extendsi_2 */
    case 2519:  /* *avx512vl_cmpv4si3_zero_extendhi_2 */
    case 2518:  /* *avx512vl_cmpv8si3_zero_extenddi_2 */
    case 2517:  /* *avx512vl_cmpv8si3_zero_extendsi_2 */
    case 2516:  /* *avx512vl_cmpv8si3_zero_extendhi_2 */
    case 2515:  /* *avx512f_cmpv16si3_zero_extenddi_2 */
    case 2514:  /* *avx512f_cmpv16si3_zero_extendsi_2 */
    case 2513:  /* *avx512f_cmpv16si3_zero_extendhi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2796:  /* avx512f_vmcmpv2df3 */
    case 2794:  /* avx512f_vmcmpv4sf3 */
    case 2792:  /* avx512f_vmcmpv8hf3 */
    case 2779:  /* *avx512vl_ucmpv2di3 */
    case 2778:  /* *avx512vl_ucmpv4di3 */
    case 2777:  /* *avx512f_ucmpv8di3 */
    case 2776:  /* *avx512vl_ucmpv4si3 */
    case 2775:  /* *avx512vl_ucmpv8si3 */
    case 2774:  /* *avx512f_ucmpv16si3 */
    case 2755:  /* *avx512vl_ucmpv2di3_zero_extenddi */
    case 2754:  /* *avx512vl_ucmpv2di3_zero_extendsi */
    case 2753:  /* *avx512vl_ucmpv2di3_zero_extendhi */
    case 2752:  /* *avx512vl_ucmpv4di3_zero_extenddi */
    case 2751:  /* *avx512vl_ucmpv4di3_zero_extendsi */
    case 2750:  /* *avx512vl_ucmpv4di3_zero_extendhi */
    case 2749:  /* *avx512f_ucmpv8di3_zero_extenddi */
    case 2748:  /* *avx512f_ucmpv8di3_zero_extendsi */
    case 2747:  /* *avx512f_ucmpv8di3_zero_extendhi */
    case 2746:  /* *avx512vl_ucmpv4si3_zero_extenddi */
    case 2745:  /* *avx512vl_ucmpv4si3_zero_extendsi */
    case 2744:  /* *avx512vl_ucmpv4si3_zero_extendhi */
    case 2743:  /* *avx512vl_ucmpv8si3_zero_extenddi */
    case 2742:  /* *avx512vl_ucmpv8si3_zero_extendsi */
    case 2741:  /* *avx512vl_ucmpv8si3_zero_extendhi */
    case 2740:  /* *avx512f_ucmpv16si3_zero_extenddi */
    case 2739:  /* *avx512f_ucmpv16si3_zero_extendsi */
    case 2738:  /* *avx512f_ucmpv16si3_zero_extendhi */
    case 2683:  /* *avx512vl_ucmpv8hi3_zero_extenddi */
    case 2682:  /* *avx512vl_ucmpv8hi3_zero_extendsi */
    case 2681:  /* *avx512vl_ucmpv8hi3_zero_extendhi */
    case 2680:  /* *avx512vl_ucmpv16hi3_zero_extenddi */
    case 2679:  /* *avx512vl_ucmpv16hi3_zero_extendsi */
    case 2678:  /* *avx512vl_ucmpv16hi3_zero_extendhi */
    case 2677:  /* *avx512bw_ucmpv32hi3_zero_extenddi */
    case 2676:  /* *avx512bw_ucmpv32hi3_zero_extendsi */
    case 2675:  /* *avx512bw_ucmpv32hi3_zero_extendhi */
    case 2674:  /* *avx512vl_ucmpv32qi3_zero_extenddi */
    case 2673:  /* *avx512vl_ucmpv32qi3_zero_extendsi */
    case 2672:  /* *avx512vl_ucmpv32qi3_zero_extendhi */
    case 2671:  /* *avx512vl_ucmpv16qi3_zero_extenddi */
    case 2670:  /* *avx512vl_ucmpv16qi3_zero_extendsi */
    case 2669:  /* *avx512vl_ucmpv16qi3_zero_extendhi */
    case 2668:  /* *avx512bw_ucmpv64qi3_zero_extenddi */
    case 2667:  /* *avx512bw_ucmpv64qi3_zero_extendsi */
    case 2666:  /* *avx512bw_ucmpv64qi3_zero_extendhi */
    case 2629:  /* *avx512vl_cmpv8hi3 */
    case 2628:  /* *avx512vl_cmpv8hi3 */
    case 2627:  /* *avx512vl_cmpv16hi3 */
    case 2626:  /* *avx512vl_cmpv16hi3 */
    case 2625:  /* *avx512bw_cmpv32hi3 */
    case 2624:  /* *avx512bw_cmpv32hi3 */
    case 2623:  /* *avx512vl_cmpv32qi3 */
    case 2622:  /* *avx512vl_cmpv32qi3 */
    case 2621:  /* *avx512vl_cmpv16qi3 */
    case 2620:  /* *avx512vl_cmpv16qi3 */
    case 2619:  /* *avx512bw_cmpv64qi3 */
    case 2618:  /* *avx512bw_cmpv64qi3 */
    case 2599:  /* *avx512vl_cmpv8hi3_zero_extenddi */
    case 2598:  /* *avx512vl_cmpv8hi3_zero_extendsi */
    case 2597:  /* *avx512vl_cmpv8hi3_zero_extendhi */
    case 2596:  /* *avx512vl_cmpv16hi3_zero_extenddi */
    case 2595:  /* *avx512vl_cmpv16hi3_zero_extendsi */
    case 2594:  /* *avx512vl_cmpv16hi3_zero_extendhi */
    case 2593:  /* *avx512bw_cmpv32hi3_zero_extenddi */
    case 2592:  /* *avx512bw_cmpv32hi3_zero_extendsi */
    case 2591:  /* *avx512bw_cmpv32hi3_zero_extendhi */
    case 2590:  /* *avx512vl_cmpv32qi3_zero_extenddi */
    case 2589:  /* *avx512vl_cmpv32qi3_zero_extendsi */
    case 2588:  /* *avx512vl_cmpv32qi3_zero_extendhi */
    case 2587:  /* *avx512vl_cmpv16qi3_zero_extenddi */
    case 2586:  /* *avx512vl_cmpv16qi3_zero_extendsi */
    case 2585:  /* *avx512vl_cmpv16qi3_zero_extendhi */
    case 2584:  /* *avx512bw_cmpv64qi3_zero_extenddi */
    case 2583:  /* *avx512bw_cmpv64qi3_zero_extendsi */
    case 2582:  /* *avx512bw_cmpv64qi3_zero_extendhi */
    case 2569:  /* *avx512vl_cmpv2df3 */
    case 2568:  /* *avx512vl_cmpv4df3 */
    case 2567:  /* *avx512f_cmpv8df3 */
    case 2566:  /* *avx512vl_cmpv4sf3 */
    case 2565:  /* *avx512vl_cmpv8sf3 */
    case 2564:  /* *avx512f_cmpv16sf3 */
    case 2563:  /* *avx512vl_cmpv2di3 */
    case 2562:  /* *avx512vl_cmpv4di3 */
    case 2561:  /* *avx512f_cmpv8di3 */
    case 2560:  /* *avx512vl_cmpv4si3 */
    case 2559:  /* *avx512vl_cmpv8si3 */
    case 2558:  /* *avx512f_cmpv16si3 */
    case 2512:  /* *avx512vl_cmpv2df3_zero_extenddi */
    case 2511:  /* *avx512vl_cmpv2df3_zero_extendsi */
    case 2510:  /* *avx512vl_cmpv2df3_zero_extendhi */
    case 2509:  /* *avx512vl_cmpv4df3_zero_extenddi */
    case 2508:  /* *avx512vl_cmpv4df3_zero_extendsi */
    case 2507:  /* *avx512vl_cmpv4df3_zero_extendhi */
    case 2506:  /* *avx512f_cmpv8df3_zero_extenddi */
    case 2505:  /* *avx512f_cmpv8df3_zero_extendsi */
    case 2504:  /* *avx512f_cmpv8df3_zero_extendhi */
    case 2503:  /* *avx512vl_cmpv4sf3_zero_extenddi */
    case 2502:  /* *avx512vl_cmpv4sf3_zero_extendsi */
    case 2501:  /* *avx512vl_cmpv4sf3_zero_extendhi */
    case 2500:  /* *avx512vl_cmpv8sf3_zero_extenddi */
    case 2499:  /* *avx512vl_cmpv8sf3_zero_extendsi */
    case 2498:  /* *avx512vl_cmpv8sf3_zero_extendhi */
    case 2497:  /* *avx512f_cmpv16sf3_zero_extenddi */
    case 2496:  /* *avx512f_cmpv16sf3_zero_extendsi */
    case 2495:  /* *avx512f_cmpv16sf3_zero_extendhi */
    case 2494:  /* *avx512fp16_cmpv8hf3_zero_extenddi */
    case 2493:  /* *avx512fp16_cmpv8hf3_zero_extendsi */
    case 2492:  /* *avx512fp16_cmpv8hf3_zero_extendhi */
    case 2491:  /* *avx512vl_cmpv16hf3_zero_extenddi */
    case 2490:  /* *avx512vl_cmpv16hf3_zero_extendsi */
    case 2489:  /* *avx512vl_cmpv16hf3_zero_extendhi */
    case 2488:  /* *avx512bw_cmpv32hf3_zero_extenddi */
    case 2487:  /* *avx512bw_cmpv32hf3_zero_extendsi */
    case 2486:  /* *avx512bw_cmpv32hf3_zero_extendhi */
    case 2485:  /* *avx512vl_cmpv2di3_zero_extenddi */
    case 2484:  /* *avx512vl_cmpv2di3_zero_extendsi */
    case 2483:  /* *avx512vl_cmpv2di3_zero_extendhi */
    case 2482:  /* *avx512vl_cmpv4di3_zero_extenddi */
    case 2481:  /* *avx512vl_cmpv4di3_zero_extendsi */
    case 2480:  /* *avx512vl_cmpv4di3_zero_extendhi */
    case 2479:  /* *avx512f_cmpv8di3_zero_extenddi */
    case 2478:  /* *avx512f_cmpv8di3_zero_extendsi */
    case 2477:  /* *avx512f_cmpv8di3_zero_extendhi */
    case 2476:  /* *avx512vl_cmpv4si3_zero_extenddi */
    case 2475:  /* *avx512vl_cmpv4si3_zero_extendsi */
    case 2474:  /* *avx512vl_cmpv4si3_zero_extendhi */
    case 2473:  /* *avx512vl_cmpv8si3_zero_extenddi */
    case 2472:  /* *avx512vl_cmpv8si3_zero_extendsi */
    case 2471:  /* *avx512vl_cmpv8si3_zero_extendhi */
    case 2470:  /* *avx512f_cmpv16si3_zero_extenddi */
    case 2469:  /* *avx512f_cmpv16si3_zero_extendsi */
    case 2468:  /* *avx512f_cmpv16si3_zero_extendhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 2463:  /* avx512f_cmpv8df3_mask_round */
    case 2455:  /* avx512f_cmpv16sf3_mask_round */
    case 2447:  /* avx512bw_cmpv32hf3_mask_round */
    case 2439:  /* avx512f_cmpv8di3_mask_round */
    case 2431:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3419:  /* fma_fcmaddc_v8hf_fma_zero */
    case 3418:  /* fma_fmaddc_v8hf_fma_zero */
    case 3417:  /* fma_fcmaddc_v16hf_fma_zero */
    case 3416:  /* fma_fmaddc_v16hf_fma_zero */
    case 3415:  /* fma_fcmaddc_v32hf_fma_zero */
    case 3414:  /* fma_fmaddc_v32hf_fma_zero */
    case 2737:  /* avx512vl_ucmpv2di3_mask */
    case 2735:  /* avx512vl_ucmpv4di3_mask */
    case 2733:  /* avx512f_ucmpv8di3_mask */
    case 2731:  /* avx512vl_ucmpv4si3_mask */
    case 2729:  /* avx512vl_ucmpv8si3_mask */
    case 2727:  /* avx512f_ucmpv16si3_mask */
    case 2665:  /* avx512vl_ucmpv8hi3_mask */
    case 2663:  /* avx512vl_ucmpv16hi3_mask */
    case 2661:  /* avx512bw_ucmpv32hi3_mask */
    case 2659:  /* avx512vl_ucmpv32qi3_mask */
    case 2657:  /* avx512vl_ucmpv16qi3_mask */
    case 2655:  /* avx512bw_ucmpv64qi3_mask */
    case 2581:  /* avx512vl_cmpv8hi3_mask */
    case 2579:  /* avx512vl_cmpv16hi3_mask */
    case 2577:  /* avx512bw_cmpv32hi3_mask */
    case 2575:  /* avx512vl_cmpv32qi3_mask */
    case 2573:  /* avx512vl_cmpv16qi3_mask */
    case 2571:  /* avx512bw_cmpv64qi3_mask */
    case 2467:  /* avx512vl_cmpv2df3_mask */
    case 2465:  /* avx512vl_cmpv4df3_mask */
    case 2462:  /* avx512f_cmpv8df3_mask */
    case 2459:  /* avx512vl_cmpv4sf3_mask */
    case 2457:  /* avx512vl_cmpv8sf3_mask */
    case 2454:  /* avx512f_cmpv16sf3_mask */
    case 2451:  /* avx512fp16_cmpv8hf3_mask */
    case 2449:  /* avx512vl_cmpv16hf3_mask */
    case 2446:  /* avx512bw_cmpv32hf3_mask */
    case 2443:  /* avx512vl_cmpv2di3_mask */
    case 2441:  /* avx512vl_cmpv4di3_mask */
    case 2438:  /* avx512f_cmpv8di3_mask */
    case 2435:  /* avx512vl_cmpv4si3_mask */
    case 2433:  /* avx512vl_cmpv8si3_mask */
    case 2430:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8404:  /* avx512dq_rangepv8df_round */
    case 8396:  /* avx512dq_rangepv16sf_round */
    case 3397:  /* fma_fcmaddc_v32hf_round */
    case 3393:  /* fma_fmaddc_v32hf_round */
    case 3179:  /* *fma_fmaddsub_v8df_round */
    case 3170:  /* *fma_fmaddsub_v16sf_round */
    case 3160:  /* *fma_fmaddsub_v32hf_round */
    case 2461:  /* avx512f_cmpv8df3_round */
    case 2453:  /* avx512f_cmpv16sf3_round */
    case 2445:  /* avx512bw_cmpv32hf3_round */
    case 2437:  /* avx512f_cmpv8di3_round */
    case 2429:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2427:  /* sse2_vmmaskcmpv2df3 */
    case 2426:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6565:  /* *avx2_pcmpv16qi3_4 */
    case 6564:  /* *avx2_pcmpv32qi3_4 */
    case 2415:  /* *avx_cmpv4di3_ltint_not */
    case 2414:  /* *avx_cmpv8si3_ltint_not */
    case 2413:  /* *avx_cmpv2di3_ltint_not */
    case 2412:  /* *avx_cmpv4si3_ltint_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6561:  /* *avx2_pcmpv4di3_2 */
    case 6560:  /* *avx2_pcmpv8si3_2 */
    case 6559:  /* *avx2_pcmpv16hi3_2 */
    case 6558:  /* *avx2_pcmpv32qi3_2 */
    case 6557:  /* *avx2_pcmpv2di3_2 */
    case 6556:  /* *avx2_pcmpv4si3_2 */
    case 6555:  /* *avx2_pcmpv8hi3_2 */
    case 6554:  /* *avx2_pcmpv16qi3_2 */
    case 2403:  /* *avx_cmpv2df3_4 */
    case 2402:  /* *avx_cmpv4df3_4 */
    case 2401:  /* *avx_cmpv4sf3_4 */
    case 2400:  /* *avx_cmpv8sf3_4 */
    case 2395:  /* *avx_cmpv2df3_2 */
    case 2394:  /* *avx_cmpv4df3_2 */
    case 2393:  /* *avx_cmpv4sf3_2 */
    case 2392:  /* *avx_cmpv8sf3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 2));
      break;

    case 6563:  /* *avx2_pcmpv16qi3_3 */
    case 6562:  /* *avx2_pcmpv32qi3_3 */
    case 6553:  /* *avx2_pcmpv4di3_1 */
    case 6552:  /* *avx2_pcmpv8si3_1 */
    case 6551:  /* *avx2_pcmpv16hi3_1 */
    case 6550:  /* *avx2_pcmpv32qi3_1 */
    case 6549:  /* *avx2_pcmpv2di3_1 */
    case 6548:  /* *avx2_pcmpv4si3_1 */
    case 6547:  /* *avx2_pcmpv8hi3_1 */
    case 6546:  /* *avx2_pcmpv16qi3_1 */
    case 2411:  /* *avx_cmpv4di3_ltint */
    case 2410:  /* *avx_cmpv8si3_ltint */
    case 2409:  /* *avx_cmpv2di3_ltint */
    case 2408:  /* *avx_cmpv4si3_ltint */
    case 2407:  /* *avx_cmpv2df3_lt */
    case 2406:  /* *avx_cmpv4df3_lt */
    case 2405:  /* *avx_cmpv4sf3_lt */
    case 2404:  /* *avx_cmpv8sf3_lt */
    case 2399:  /* *avx_cmpv2df3_3 */
    case 2398:  /* *avx_cmpv4df3_3 */
    case 2397:  /* *avx_cmpv4sf3_3 */
    case 2396:  /* *avx_cmpv8sf3_3 */
    case 2391:  /* *avx_cmpv2df3_1 */
    case 2390:  /* *avx_cmpv4df3_1 */
    case 2389:  /* *avx_cmpv4sf3_1 */
    case 2388:  /* *avx_cmpv8sf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 8490:  /* avx512f_vgetmantv2df_mask_round */
    case 8486:  /* avx512f_vgetmantv4sf_mask_round */
    case 8482:  /* avx512f_vgetmantv8hf_mask_round */
    case 8418:  /* avx512dq_rangesv2df_mask_round */
    case 8414:  /* avx512dq_rangesv4sf_mask_round */
    case 2383:  /* reducesv2df_mask_round */
    case 2379:  /* reducesv4sf_mask_round */
    case 2375:  /* reducesv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8489:  /* avx512f_vgetmantv2df_round */
    case 8485:  /* avx512f_vgetmantv4sf_round */
    case 8481:  /* avx512f_vgetmantv8hf_round */
    case 8417:  /* avx512dq_rangesv2df_round */
    case 8413:  /* avx512dq_rangesv4sf_round */
    case 2382:  /* reducesv2df_round */
    case 2378:  /* reducesv4sf_round */
    case 2374:  /* reducesv8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8488:  /* avx512f_vgetmantv2df_mask */
    case 8484:  /* avx512f_vgetmantv4sf_mask */
    case 8480:  /* avx512f_vgetmantv8hf_mask */
    case 8416:  /* avx512dq_rangesv2df_mask */
    case 8412:  /* avx512dq_rangesv4sf_mask */
    case 2381:  /* reducesv2df_mask */
    case 2377:  /* reducesv4sf_mask */
    case 2373:  /* reducesv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8487:  /* avx512f_vgetmantv2df */
    case 8483:  /* avx512f_vgetmantv4sf */
    case 8479:  /* avx512f_vgetmantv8hf */
    case 8415:  /* avx512dq_rangesv2df */
    case 8411:  /* avx512dq_rangesv4sf */
    case 2417:  /* avx_vmcmpv2df3 */
    case 2416:  /* avx_vmcmpv4sf3 */
    case 2380:  /* reducesv2df */
    case 2376:  /* reducesv4sf */
    case 2372:  /* reducesv8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2335:  /* sse3_hsubv4sf3 */
    case 2334:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2333:  /* avx_hsubv8sf3 */
    case 2332:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 2327:  /* avx_hsubv4df3 */
    case 2326:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2297:  /* *ieee_minv2df3 */
    case 2296:  /* *ieee_maxv2df3 */
    case 2295:  /* *ieee_minv4sf3 */
    case 2294:  /* *ieee_maxv4sf3 */
    case 2293:  /* *ieee_minv8hf3 */
    case 2292:  /* *ieee_maxv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8478:  /* avx512vl_getmantv2df_mask_round */
    case 8474:  /* avx512vl_getmantv4df_mask_round */
    case 8470:  /* avx512f_getmantv8df_mask_round */
    case 8466:  /* avx512vl_getmantv4sf_mask_round */
    case 8462:  /* avx512vl_getmantv8sf_mask_round */
    case 8458:  /* avx512f_getmantv16sf_mask_round */
    case 8454:  /* avx512fp16_getmantv8hf_mask_round */
    case 8450:  /* avx512vl_getmantv16hf_mask_round */
    case 8446:  /* avx512bw_getmantv32hf_mask_round */
    case 5819:  /* avx512vl_rndscalev2df_mask_round */
    case 5815:  /* avx512vl_rndscalev4df_mask_round */
    case 5811:  /* avx512f_rndscalev8df_mask_round */
    case 5807:  /* avx512vl_rndscalev4sf_mask_round */
    case 5803:  /* avx512vl_rndscalev8sf_mask_round */
    case 5799:  /* avx512f_rndscalev16sf_mask_round */
    case 5795:  /* avx512fp16_rndscalev8hf_mask_round */
    case 5791:  /* avx512vl_rndscalev16hf_mask_round */
    case 5787:  /* avx512bw_rndscalev32hf_mask_round */
    case 4305:  /* avx512vl_scalefv2df_mask_round */
    case 4301:  /* avx512vl_scalefv4df_mask_round */
    case 4297:  /* avx512f_scalefv8df_mask_round */
    case 4293:  /* avx512vl_scalefv4sf_mask_round */
    case 4289:  /* avx512vl_scalefv8sf_mask_round */
    case 4285:  /* avx512f_scalefv16sf_mask_round */
    case 4281:  /* avx512fp16_scalefv8hf_mask_round */
    case 4277:  /* avx512vl_scalefv16hf_mask_round */
    case 4273:  /* avx512bw_scalefv32hf_mask_round */
    case 2371:  /* reducepv2df_mask_round */
    case 2367:  /* reducepv4df_mask_round */
    case 2363:  /* reducepv8df_mask_round */
    case 2359:  /* reducepv4sf_mask_round */
    case 2355:  /* reducepv8sf_mask_round */
    case 2351:  /* reducepv16sf_mask_round */
    case 2347:  /* reducepv8hf_mask_round */
    case 2343:  /* reducepv16hf_mask_round */
    case 2339:  /* reducepv32hf_mask_round */
    case 2283:  /* ieee_minv8df3_mask_round */
    case 2279:  /* ieee_maxv8df3_mask_round */
    case 2267:  /* ieee_minv16sf3_mask_round */
    case 2263:  /* ieee_maxv16sf3_mask_round */
    case 2251:  /* ieee_minv32hf3_mask_round */
    case 2247:  /* ieee_maxv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8788:  /* avx512f_cvtne2ps2bf16_v8hi_mask */
    case 8786:  /* avx512f_cvtne2ps2bf16_v16hi_mask */
    case 8784:  /* avx512f_cvtne2ps2bf16_v32hi_mask */
    case 8627:  /* vgf2p8mulb_v16qi_mask */
    case 8625:  /* vgf2p8mulb_v32qi_mask */
    case 8623:  /* vgf2p8mulb_v64qi_mask */
    case 8576:  /* avx5124vnniw_vp4dpwssds_mask */
    case 8573:  /* avx5124vnniw_vp4dpwssd_mask */
    case 8570:  /* avx5124fmaddps_4fnmaddss_mask */
    case 8567:  /* avx5124fmaddps_4fnmaddps_mask */
    case 8564:  /* avx5124fmaddps_4fmaddss_mask */
    case 8561:  /* avx5124fmaddps_4fmaddps_mask */
    case 8557:  /* vpmultishiftqbv32qi_mask */
    case 8555:  /* vpmultishiftqbv16qi_mask */
    case 8553:  /* vpmultishiftqbv64qi_mask */
    case 8477:  /* avx512vl_getmantv2df_mask */
    case 8473:  /* avx512vl_getmantv4df_mask */
    case 8469:  /* avx512f_getmantv8df_mask */
    case 8465:  /* avx512vl_getmantv4sf_mask */
    case 8461:  /* avx512vl_getmantv8sf_mask */
    case 8457:  /* avx512f_getmantv16sf_mask */
    case 8453:  /* avx512fp16_getmantv8hf_mask */
    case 8449:  /* avx512vl_getmantv16hf_mask */
    case 8445:  /* avx512bw_getmantv32hf_mask */
    case 8104:  /* avx512f_vcvtps2ph512_mask */
    case 8100:  /* vcvtps2ph256_mask */
    case 7871:  /* avx_vpermilvarv2df3_mask */
    case 7869:  /* avx_vpermilvarv4df3_mask */
    case 7867:  /* avx512f_vpermilvarv8df3_mask */
    case 7865:  /* avx_vpermilvarv4sf3_mask */
    case 7863:  /* avx_vpermilvarv8sf3_mask */
    case 7861:  /* avx512f_vpermilvarv16sf3_mask */
    case 7679:  /* avx512bw_permvarv32hi_mask */
    case 7677:  /* avx512vl_permvarv16hi_mask */
    case 7675:  /* avx512vl_permvarv8hi_mask */
    case 7673:  /* avx512vl_permvarv32qi_mask */
    case 7671:  /* avx512vl_permvarv16qi_mask */
    case 7669:  /* avx512bw_permvarv64qi_mask */
    case 7667:  /* avx2_permvarv4df_mask */
    case 7665:  /* avx2_permvarv4di_mask */
    case 7663:  /* avx512f_permvarv8df_mask */
    case 7661:  /* avx512f_permvarv8di_mask */
    case 7659:  /* avx512f_permvarv16sf_mask */
    case 7657:  /* avx512f_permvarv16si_mask */
    case 7655:  /* avx2_permvarv8sf_mask */
    case 7653:  /* avx2_permvarv8si_mask */
    case 7156:  /* ssse3_pshufbv16qi3_mask */
    case 7154:  /* avx2_pshufbv32qi3_mask */
    case 7152:  /* avx512bw_pshufbv64qi3_mask */
    case 7138:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 7136:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 7134:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 7001:  /* avx512bw_pshufhwv32hi_mask */
    case 6995:  /* avx512bw_pshuflwv32hi_mask */
    case 6271:  /* avx512bw_pmaddwd512v8hi_mask */
    case 6269:  /* avx512bw_pmaddwd512v16hi_mask */
    case 6267:  /* avx512bw_pmaddwd512v32hi_mask */
    case 5818:  /* avx512vl_rndscalev2df_mask */
    case 5814:  /* avx512vl_rndscalev4df_mask */
    case 5810:  /* avx512f_rndscalev8df_mask */
    case 5806:  /* avx512vl_rndscalev4sf_mask */
    case 5802:  /* avx512vl_rndscalev8sf_mask */
    case 5798:  /* avx512f_rndscalev16sf_mask */
    case 5794:  /* avx512fp16_rndscalev8hf_mask */
    case 5790:  /* avx512vl_rndscalev16hf_mask */
    case 5786:  /* avx512bw_rndscalev32hf_mask */
    case 4304:  /* avx512vl_scalefv2df_mask */
    case 4300:  /* avx512vl_scalefv4df_mask */
    case 4296:  /* avx512f_scalefv8df_mask */
    case 4292:  /* avx512vl_scalefv4sf_mask */
    case 4288:  /* avx512vl_scalefv8sf_mask */
    case 4284:  /* avx512f_scalefv16sf_mask */
    case 4280:  /* avx512fp16_scalefv8hf_mask */
    case 4276:  /* avx512vl_scalefv16hf_mask */
    case 4272:  /* avx512bw_scalefv32hf_mask */
    case 2370:  /* reducepv2df_mask */
    case 2366:  /* reducepv4df_mask */
    case 2362:  /* reducepv8df_mask */
    case 2358:  /* reducepv4sf_mask */
    case 2354:  /* reducepv8sf_mask */
    case 2350:  /* reducepv16sf_mask */
    case 2346:  /* reducepv8hf_mask */
    case 2342:  /* reducepv16hf_mask */
    case 2338:  /* reducepv32hf_mask */
    case 2291:  /* ieee_minv2df3_mask */
    case 2289:  /* ieee_maxv2df3_mask */
    case 2287:  /* ieee_minv4df3_mask */
    case 2285:  /* ieee_maxv4df3_mask */
    case 2282:  /* ieee_minv8df3_mask */
    case 2278:  /* ieee_maxv8df3_mask */
    case 2275:  /* ieee_minv4sf3_mask */
    case 2273:  /* ieee_maxv4sf3_mask */
    case 2271:  /* ieee_minv8sf3_mask */
    case 2269:  /* ieee_maxv8sf3_mask */
    case 2266:  /* ieee_minv16sf3_mask */
    case 2262:  /* ieee_maxv16sf3_mask */
    case 2259:  /* ieee_minv8hf3_mask */
    case 2257:  /* ieee_maxv8hf3_mask */
    case 2255:  /* ieee_minv16hf3_mask */
    case 2253:  /* ieee_maxv16hf3_mask */
    case 2250:  /* ieee_minv32hf3_mask */
    case 2246:  /* ieee_maxv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8476:  /* avx512vl_getmantv2df_round */
    case 8472:  /* avx512vl_getmantv4df_round */
    case 8468:  /* avx512f_getmantv8df_round */
    case 8464:  /* avx512vl_getmantv4sf_round */
    case 8460:  /* avx512vl_getmantv8sf_round */
    case 8456:  /* avx512f_getmantv16sf_round */
    case 8452:  /* avx512fp16_getmantv8hf_round */
    case 8448:  /* avx512vl_getmantv16hf_round */
    case 8444:  /* avx512bw_getmantv32hf_round */
    case 5817:  /* avx512vl_rndscalev2df_round */
    case 5813:  /* avx512vl_rndscalev4df_round */
    case 5809:  /* avx512f_rndscalev8df_round */
    case 5805:  /* avx512vl_rndscalev4sf_round */
    case 5801:  /* avx512vl_rndscalev8sf_round */
    case 5797:  /* avx512f_rndscalev16sf_round */
    case 5793:  /* avx512fp16_rndscalev8hf_round */
    case 5789:  /* avx512vl_rndscalev16hf_round */
    case 5785:  /* avx512bw_rndscalev32hf_round */
    case 4303:  /* avx512vl_scalefv2df_round */
    case 4299:  /* avx512vl_scalefv4df_round */
    case 4295:  /* avx512f_scalefv8df_round */
    case 4291:  /* avx512vl_scalefv4sf_round */
    case 4287:  /* avx512vl_scalefv8sf_round */
    case 4283:  /* avx512f_scalefv16sf_round */
    case 4279:  /* avx512fp16_scalefv8hf_round */
    case 4275:  /* avx512vl_scalefv16hf_round */
    case 4271:  /* avx512bw_scalefv32hf_round */
    case 3446:  /* avx512bw_fcmulc_v32hf_round */
    case 3442:  /* avx512bw_fmulc_v32hf_round */
    case 2369:  /* *reducepv2df_round */
    case 2365:  /* *reducepv4df_round */
    case 2361:  /* *reducepv8df_round */
    case 2357:  /* *reducepv4sf_round */
    case 2353:  /* *reducepv8sf_round */
    case 2349:  /* *reducepv16sf_round */
    case 2345:  /* *reducepv8hf_round */
    case 2341:  /* *reducepv16hf_round */
    case 2337:  /* *reducepv32hf_round */
    case 2281:  /* ieee_minv8df3_round */
    case 2277:  /* ieee_maxv8df3_round */
    case 2265:  /* ieee_minv16sf3_round */
    case 2261:  /* ieee_maxv16sf3_round */
    case 2249:  /* ieee_minv32hf3_round */
    case 2245:  /* ieee_maxv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2195:  /* *avx512fp16_vmrsqrtv8hf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2165:  /* *sse2_vmsqrtv2df2_mask_round */
    case 2161:  /* *sse_vmsqrtv4sf2_mask_round */
    case 2157:  /* *avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3786:  /* avx512fp16_vcvtsd2sh_mask_mem */
    case 3784:  /* avx512fp16_vcvtss2sh_mask_mem */
    case 3774:  /* avx512fp16_vcvtsh2ss_mask_mem */
    case 3772:  /* avx512fp16_vcvtsh2sd_mask_mem */
    case 2164:  /* *sse2_vmsqrtv2df2_mask */
    case 2160:  /* *sse_vmsqrtv4sf2_mask */
    case 2156:  /* *avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2163:  /* *sse2_vmsqrtv2df2_round */
    case 2159:  /* *sse_vmsqrtv4sf2_round */
    case 2155:  /* *avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2153:  /* sse2_vmsqrtv2df2_mask_round */
    case 2149:  /* sse_vmsqrtv4sf2_mask_round */
    case 2145:  /* avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2152:  /* sse2_vmsqrtv2df2_mask */
    case 2148:  /* sse_vmsqrtv4sf2_mask */
    case 2144:  /* avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2151:  /* sse2_vmsqrtv2df2_round */
    case 2147:  /* sse_vmsqrtv4sf2_round */
    case 2143:  /* avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4083:  /* avx512f_cvtps2pd512_mask_round */
    case 4073:  /* avx512f_cvtpd2ps512_mask_round */
    case 4044:  /* fixuns_truncv8sfv8di2_mask_round */
    case 4040:  /* fix_truncv8sfv8di2_mask_round */
    case 4012:  /* fixuns_truncv8dfv8di2_mask_round */
    case 4008:  /* fix_truncv8dfv8di2_mask_round */
    case 3997:  /* fixuns_truncv8dfv8si2_mask_round */
    case 3993:  /* fix_truncv8dfv8si2_mask_round */
    case 3948:  /* floatunsv8div8sf2_mask_round */
    case 3944:  /* floatv8div8sf2_mask_round */
    case 3940:  /* floatunsv2div2df2_mask_round */
    case 3936:  /* floatv2div2df2_mask_round */
    case 3932:  /* floatunsv4div4df2_mask_round */
    case 3928:  /* floatv4div4df2_mask_round */
    case 3924:  /* floatunsv8div8df2_mask_round */
    case 3920:  /* floatv8div8df2_mask_round */
    case 3874:  /* ufix_truncv16sfv16si2_mask_round */
    case 3870:  /* fix_truncv16sfv16si2_mask_round */
    case 3830:  /* ufloatv4siv4sf2_mask_round */
    case 3826:  /* ufloatv8siv8sf2_mask_round */
    case 3822:  /* ufloatv16siv16sf2_mask_round */
    case 3814:  /* floatv16siv16sf2_mask_round */
    case 3753:  /* avx512fp16_vcvtps2ph_v8sf_mask_round */
    case 3749:  /* avx512fp16_vcvtps2ph_v16sf_mask_round */
    case 3745:  /* avx512fp16_vcvtpd2ph_v8df_mask_round */
    case 3729:  /* avx512fp16_float_extend_phv8sf2_mask_round */
    case 3725:  /* avx512fp16_float_extend_phv16sf2_mask_round */
    case 3721:  /* avx512fp16_float_extend_phv8df2_mask_round */
    case 3681:  /* avx512fp16_fixuns_truncv8di2_mask_round */
    case 3677:  /* avx512fp16_fix_truncv8di2_mask_round */
    case 3673:  /* avx512fp16_fixuns_truncv16si2_mask_round */
    case 3669:  /* avx512fp16_fix_truncv16si2_mask_round */
    case 3665:  /* avx512fp16_fixuns_truncv8si2_mask_round */
    case 3661:  /* avx512fp16_fix_truncv8si2_mask_round */
    case 3657:  /* avx512fp16_fixuns_truncv32hi2_mask_round */
    case 3653:  /* avx512fp16_fix_truncv32hi2_mask_round */
    case 3649:  /* avx512fp16_fixuns_truncv16hi2_mask_round */
    case 3645:  /* avx512fp16_fix_truncv16hi2_mask_round */
    case 3641:  /* avx512fp16_fixuns_truncv8hi2_mask_round */
    case 3637:  /* avx512fp16_fix_truncv8hi2_mask_round */
    case 3595:  /* avx512fp16_vcvtuqq2ph_v8di_mask_round */
    case 3591:  /* avx512fp16_vcvtqq2ph_v8di_mask_round */
    case 3587:  /* avx512fp16_vcvtudq2ph_v16si_mask_round */
    case 3583:  /* avx512fp16_vcvtdq2ph_v16si_mask_round */
    case 3579:  /* avx512fp16_vcvtudq2ph_v8si_mask_round */
    case 3575:  /* avx512fp16_vcvtdq2ph_v8si_mask_round */
    case 3571:  /* avx512fp16_vcvtuw2ph_v32hi_mask_round */
    case 3567:  /* avx512fp16_vcvtw2ph_v32hi_mask_round */
    case 3563:  /* avx512fp16_vcvtuw2ph_v16hi_mask_round */
    case 3559:  /* avx512fp16_vcvtw2ph_v16hi_mask_round */
    case 3555:  /* avx512fp16_vcvtuw2ph_v8hi_mask_round */
    case 3551:  /* avx512fp16_vcvtw2ph_v8hi_mask_round */
    case 3047:  /* *fma_fnmadd_v8df_round */
    case 3038:  /* *fma_fnmadd_v16sf_round */
    case 3028:  /* *fma_fnmadd_v32hf_round */
    case 2137:  /* avx512f_sqrtv8df2_mask_round */
    case 2129:  /* avx512f_sqrtv16sf2_mask_round */
    case 2121:  /* avx512fp16_sqrtv32hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4081:  /* avx512f_cvtps2pd512_round */
    case 4071:  /* *avx512f_cvtpd2ps512_round */
    case 4042:  /* fixuns_truncv8sfv8di2_round */
    case 4038:  /* fix_truncv8sfv8di2_round */
    case 4010:  /* fixuns_truncv8dfv8di2_round */
    case 4006:  /* fix_truncv8dfv8di2_round */
    case 3995:  /* fixuns_truncv8dfv8si2_round */
    case 3991:  /* fix_truncv8dfv8si2_round */
    case 3946:  /* floatunsv8div8sf2_round */
    case 3942:  /* floatv8div8sf2_round */
    case 3938:  /* floatunsv2div2df2_round */
    case 3934:  /* floatv2div2df2_round */
    case 3930:  /* floatunsv4div4df2_round */
    case 3926:  /* floatv4div4df2_round */
    case 3922:  /* floatunsv8div8df2_round */
    case 3918:  /* floatv8div8df2_round */
    case 3872:  /* ufix_truncv16sfv16si2_round */
    case 3868:  /* fix_truncv16sfv16si2_round */
    case 3828:  /* ufloatv4siv4sf2_round */
    case 3824:  /* ufloatv8siv8sf2_round */
    case 3820:  /* ufloatv16siv16sf2_round */
    case 3812:  /* floatv16siv16sf2_round */
    case 3751:  /* avx512fp16_vcvtps2ph_v8sf_round */
    case 3747:  /* avx512fp16_vcvtps2ph_v16sf_round */
    case 3743:  /* avx512fp16_vcvtpd2ph_v8df_round */
    case 3727:  /* avx512fp16_float_extend_phv8sf2_round */
    case 3723:  /* avx512fp16_float_extend_phv16sf2_round */
    case 3719:  /* avx512fp16_float_extend_phv8df2_round */
    case 3679:  /* avx512fp16_fixuns_truncv8di2_round */
    case 3675:  /* avx512fp16_fix_truncv8di2_round */
    case 3671:  /* avx512fp16_fixuns_truncv16si2_round */
    case 3667:  /* avx512fp16_fix_truncv16si2_round */
    case 3663:  /* avx512fp16_fixuns_truncv8si2_round */
    case 3659:  /* avx512fp16_fix_truncv8si2_round */
    case 3655:  /* avx512fp16_fixuns_truncv32hi2_round */
    case 3651:  /* avx512fp16_fix_truncv32hi2_round */
    case 3647:  /* avx512fp16_fixuns_truncv16hi2_round */
    case 3643:  /* avx512fp16_fix_truncv16hi2_round */
    case 3639:  /* avx512fp16_fixuns_truncv8hi2_round */
    case 3635:  /* avx512fp16_fix_truncv8hi2_round */
    case 3593:  /* avx512fp16_vcvtuqq2ph_v8di_round */
    case 3589:  /* avx512fp16_vcvtqq2ph_v8di_round */
    case 3585:  /* avx512fp16_vcvtudq2ph_v16si_round */
    case 3581:  /* avx512fp16_vcvtdq2ph_v16si_round */
    case 3577:  /* avx512fp16_vcvtudq2ph_v8si_round */
    case 3573:  /* avx512fp16_vcvtdq2ph_v8si_round */
    case 3569:  /* avx512fp16_vcvtuw2ph_v32hi_round */
    case 3565:  /* avx512fp16_vcvtw2ph_v32hi_round */
    case 3561:  /* avx512fp16_vcvtuw2ph_v16hi_round */
    case 3557:  /* avx512fp16_vcvtw2ph_v16hi_round */
    case 3553:  /* avx512fp16_vcvtuw2ph_v8hi_round */
    case 3549:  /* avx512fp16_vcvtw2ph_v8hi_round */
    case 2135:  /* avx512f_sqrtv8df2_round */
    case 2127:  /* avx512f_sqrtv16sf2_round */
    case 2119:  /* avx512fp16_sqrtv32hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2193:  /* avx512fp16_vmrsqrtv8hf2_mask */
    case 2189:  /* rsqrt14_v2df_mask */
    case 2188:  /* rsqrt14_v4sf_mask */
    case 2117:  /* srcp14v2df_mask */
    case 2116:  /* srcp14v4sf_mask */
    case 2100:  /* avx512fp16_vmrcpv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2194:  /* *avx512fp16_vmrsqrtv8hf2 */
    case 2191:  /* *sse_vmrsqrtv4sf2 */
    case 2101:  /* *avx512fp16_vmrcpv8hf2 */
    case 2092:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7602:  /* *xop_vmfrczv2df2 */
    case 7601:  /* *xop_vmfrczv4sf2 */
    case 7524:  /* avx512er_vmrsqrt28v2df */
    case 7520:  /* avx512er_vmrsqrt28v4sf */
    case 7508:  /* avx512er_vmrcp28v2df */
    case 7504:  /* avx512er_vmrcp28v4sf */
    case 3975:  /* *avx_cvtpd2dq256_2 */
    case 2192:  /* avx512fp16_vmrsqrtv8hf2 */
    case 2190:  /* sse_vmrsqrtv4sf2 */
    case 2187:  /* rsqrt14v2df */
    case 2186:  /* rsqrt14v4sf */
    case 2115:  /* srcp14v2df */
    case 2114:  /* srcp14v4sf */
    case 2099:  /* avx512fp16_vmrcpv8hf2 */
    case 2091:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2321:  /* sse2_vmsminv2df3_mask_round */
    case 2317:  /* sse2_vmsmaxv2df3_mask_round */
    case 2313:  /* sse_vmsminv4sf3_mask_round */
    case 2309:  /* sse_vmsmaxv4sf3_mask_round */
    case 2305:  /* avx512fp16_vmsminv8hf3_mask_round */
    case 2301:  /* avx512fp16_vmsmaxv8hf3_mask_round */
    case 2064:  /* sse2_vmdivv2df3_mask_round */
    case 2060:  /* sse2_vmmulv2df3_mask_round */
    case 2056:  /* sse_vmdivv4sf3_mask_round */
    case 2052:  /* sse_vmmulv4sf3_mask_round */
    case 2048:  /* avx512fp16_vmdivv8hf3_mask_round */
    case 2044:  /* avx512fp16_vmmulv8hf3_mask_round */
    case 1998:  /* sse2_vmsubv2df3_mask_round */
    case 1994:  /* sse2_vmaddv2df3_mask_round */
    case 1990:  /* sse_vmsubv4sf3_mask_round */
    case 1986:  /* sse_vmaddv4sf3_mask_round */
    case 1982:  /* avx512fp16_vmsubv8hf3_mask_round */
    case 1978:  /* avx512fp16_vmaddv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2319:  /* sse2_vmsminv2df3_mask */
    case 2315:  /* sse2_vmsmaxv2df3_mask */
    case 2311:  /* sse_vmsminv4sf3_mask */
    case 2307:  /* sse_vmsmaxv4sf3_mask */
    case 2303:  /* avx512fp16_vmsminv8hf3_mask */
    case 2299:  /* avx512fp16_vmsmaxv8hf3_mask */
    case 2063:  /* sse2_vmdivv2df3_mask */
    case 2059:  /* sse2_vmmulv2df3_mask */
    case 2055:  /* sse_vmdivv4sf3_mask */
    case 2051:  /* sse_vmmulv4sf3_mask */
    case 2047:  /* avx512fp16_vmdivv8hf3_mask */
    case 2043:  /* avx512fp16_vmmulv8hf3_mask */
    case 1997:  /* sse2_vmsubv2df3_mask */
    case 1993:  /* sse2_vmaddv2df3_mask */
    case 1989:  /* sse_vmsubv4sf3_mask */
    case 1985:  /* sse_vmaddv4sf3_mask */
    case 1981:  /* avx512fp16_vmsubv8hf3_mask */
    case 1977:  /* avx512fp16_vmaddv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2320:  /* sse2_vmsminv2df3_round */
    case 2316:  /* sse2_vmsmaxv2df3_round */
    case 2312:  /* sse_vmsminv4sf3_round */
    case 2308:  /* sse_vmsmaxv4sf3_round */
    case 2304:  /* avx512fp16_vmsminv8hf3_round */
    case 2300:  /* avx512fp16_vmsmaxv8hf3_round */
    case 2062:  /* sse2_vmdivv2df3_round */
    case 2058:  /* sse2_vmmulv2df3_round */
    case 2054:  /* sse_vmdivv4sf3_round */
    case 2050:  /* sse_vmmulv4sf3_round */
    case 2046:  /* avx512fp16_vmdivv8hf3_round */
    case 2042:  /* avx512fp16_vmmulv8hf3_round */
    case 1996:  /* sse2_vmsubv2df3_round */
    case 1992:  /* sse2_vmaddv2df3_round */
    case 1988:  /* sse_vmsubv4sf3_round */
    case 1984:  /* sse_vmaddv4sf3_round */
    case 1980:  /* avx512fp16_vmsubv8hf3_round */
    case 1976:  /* avx512fp16_vmaddv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2318:  /* sse2_vmsminv2df3 */
    case 2314:  /* sse2_vmsmaxv2df3 */
    case 2310:  /* sse_vmsminv4sf3 */
    case 2306:  /* sse_vmsmaxv4sf3 */
    case 2302:  /* avx512fp16_vmsminv8hf3 */
    case 2298:  /* avx512fp16_vmsmaxv8hf3 */
    case 2061:  /* sse2_vmdivv2df3 */
    case 2057:  /* sse2_vmmulv2df3 */
    case 2053:  /* sse_vmdivv4sf3 */
    case 2049:  /* sse_vmmulv4sf3 */
    case 2045:  /* avx512fp16_vmdivv8hf3 */
    case 2041:  /* avx512fp16_vmmulv8hf3 */
    case 1995:  /* sse2_vmsubv2df3 */
    case 1991:  /* sse2_vmaddv2df3 */
    case 1987:  /* sse_vmsubv4sf3 */
    case 1983:  /* sse_vmaddv4sf3 */
    case 1979:  /* avx512fp16_vmsubv8hf3 */
    case 1975:  /* avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2040:  /* *sse2_vmdivv2df3 */
    case 2039:  /* *sse2_vmmulv2df3 */
    case 2038:  /* *sse_vmdivv4sf3 */
    case 2037:  /* *sse_vmmulv4sf3 */
    case 2036:  /* *avx512fp16_vmdivv8hf3 */
    case 2035:  /* *avx512fp16_vmmulv8hf3 */
    case 1974:  /* *sse2_vmsubv2df3 */
    case 1973:  /* *sse2_vmaddv2df3 */
    case 1972:  /* *sse_vmsubv4sf3 */
    case 1971:  /* *sse_vmaddv4sf3 */
    case 1970:  /* *avx512fp16_vmsubv8hf3 */
    case 1969:  /* *avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2235:  /* *sminv8df3_mask_round */
    case 2231:  /* *smaxv8df3_mask_round */
    case 2219:  /* *sminv16sf3_mask_round */
    case 2215:  /* *smaxv16sf3_mask_round */
    case 2203:  /* *sminv32hf3_mask_round */
    case 2199:  /* *smaxv32hf3_mask_round */
    case 2084:  /* avx512f_divv8df3_mask_round */
    case 2076:  /* avx512f_divv16sf3_mask_round */
    case 2068:  /* avx512fp16_divv32hf3_mask_round */
    case 2034:  /* *mulv2df3_mask_round */
    case 2030:  /* *mulv4df3_mask_round */
    case 2026:  /* *mulv8df3_mask_round */
    case 2022:  /* *mulv4sf3_mask_round */
    case 2018:  /* *mulv8sf3_mask_round */
    case 2014:  /* *mulv16sf3_mask_round */
    case 2010:  /* *mulv8hf3_mask_round */
    case 2006:  /* *mulv16hf3_mask_round */
    case 2002:  /* *mulv32hf3_mask_round */
    case 1968:  /* *subv2df3_mask_round */
    case 1964:  /* *addv2df3_mask_round */
    case 1960:  /* *subv4df3_mask_round */
    case 1956:  /* *addv4df3_mask_round */
    case 1952:  /* *subv8df3_mask_round */
    case 1948:  /* *addv8df3_mask_round */
    case 1944:  /* *subv4sf3_mask_round */
    case 1940:  /* *addv4sf3_mask_round */
    case 1936:  /* *subv8sf3_mask_round */
    case 1932:  /* *addv8sf3_mask_round */
    case 1928:  /* *subv16sf3_mask_round */
    case 1924:  /* *addv16sf3_mask_round */
    case 1920:  /* *subv8hf3_mask_round */
    case 1916:  /* *addv8hf3_mask_round */
    case 1912:  /* *subv16hf3_mask_round */
    case 1908:  /* *addv16hf3_mask_round */
    case 1904:  /* *subv32hf3_mask_round */
    case 1900:  /* *addv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8050:  /* avx512bw_lshrvv32hi_mask */
    case 8048:  /* avx512bw_ashlvv32hi_mask */
    case 8046:  /* avx512vl_lshrvv16hi_mask */
    case 8044:  /* avx512vl_ashlvv16hi_mask */
    case 8042:  /* avx512vl_lshrvv8hi_mask */
    case 8040:  /* avx512vl_ashlvv8hi_mask */
    case 8038:  /* avx2_lshrvv2di_mask */
    case 8036:  /* avx2_ashlvv2di_mask */
    case 8034:  /* avx2_lshrvv4di_mask */
    case 8032:  /* avx2_ashlvv4di_mask */
    case 8030:  /* avx512f_lshrvv8di_mask */
    case 8028:  /* avx512f_ashlvv8di_mask */
    case 8026:  /* avx2_lshrvv4si_mask */
    case 8024:  /* avx2_ashlvv4si_mask */
    case 8022:  /* avx2_lshrvv8si_mask */
    case 8020:  /* avx2_ashlvv8si_mask */
    case 8018:  /* avx512f_lshrvv16si_mask */
    case 8016:  /* avx512f_ashlvv16si_mask */
    case 8014:  /* avx512bw_ashrvv32hi_mask */
    case 8012:  /* avx512vl_ashrvv16hi_mask */
    case 8010:  /* avx512vl_ashrvv8hi_mask */
    case 8008:  /* avx512f_ashrvv8di_mask */
    case 8006:  /* avx2_ashrvv4di_mask */
    case 8004:  /* avx2_ashrvv2di_mask */
    case 8002:  /* avx512f_ashrvv16si_mask */
    case 8000:  /* avx2_ashrvv8si_mask */
    case 7998:  /* avx2_ashrvv4si_mask */
    case 6651:  /* *xorv2di3_mask */
    case 6649:  /* *iorv2di3_mask */
    case 6647:  /* *andv2di3_mask */
    case 6645:  /* *xorv4di3_mask */
    case 6643:  /* *iorv4di3_mask */
    case 6641:  /* *andv4di3_mask */
    case 6639:  /* *xorv8di3_mask */
    case 6637:  /* *iorv8di3_mask */
    case 6635:  /* *andv8di3_mask */
    case 6633:  /* *xorv4si3_mask */
    case 6631:  /* *iorv4si3_mask */
    case 6629:  /* *andv4si3_mask */
    case 6627:  /* *xorv8si3_mask */
    case 6625:  /* *iorv8si3_mask */
    case 6623:  /* *andv8si3_mask */
    case 6621:  /* *xorv16si3_mask */
    case 6619:  /* *iorv16si3_mask */
    case 6617:  /* *andv16si3_mask */
    case 6597:  /* one_cmplv2di2_mask */
    case 6595:  /* one_cmplv4di2_mask */
    case 6593:  /* one_cmplv4si2_mask */
    case 6591:  /* one_cmplv8si2_mask */
    case 6583:  /* one_cmplv8di2_mask */
    case 6581:  /* one_cmplv16si2_mask */
    case 6539:  /* *sse4_1_uminv4si3_mask */
    case 6537:  /* *sse4_1_umaxv4si3_mask */
    case 6535:  /* *sse4_1_uminv8hi3_mask */
    case 6533:  /* *sse4_1_umaxv8hi3_mask */
    case 6529:  /* *sse4_1_sminv4si3_mask */
    case 6527:  /* *sse4_1_smaxv4si3_mask */
    case 6525:  /* *sse4_1_sminv16qi3_mask */
    case 6523:  /* *sse4_1_smaxv16qi3_mask */
    case 6521:  /* uminv8hi3_mask */
    case 6519:  /* umaxv8hi3_mask */
    case 6517:  /* sminv8hi3_mask */
    case 6515:  /* smaxv8hi3_mask */
    case 6513:  /* uminv16hi3_mask */
    case 6511:  /* umaxv16hi3_mask */
    case 6509:  /* sminv16hi3_mask */
    case 6507:  /* smaxv16hi3_mask */
    case 6505:  /* uminv32hi3_mask */
    case 6503:  /* umaxv32hi3_mask */
    case 6501:  /* sminv32hi3_mask */
    case 6499:  /* smaxv32hi3_mask */
    case 6497:  /* uminv32qi3_mask */
    case 6495:  /* umaxv32qi3_mask */
    case 6493:  /* sminv32qi3_mask */
    case 6491:  /* smaxv32qi3_mask */
    case 6489:  /* uminv16qi3_mask */
    case 6487:  /* umaxv16qi3_mask */
    case 6485:  /* sminv16qi3_mask */
    case 6483:  /* smaxv16qi3_mask */
    case 6481:  /* uminv64qi3_mask */
    case 6479:  /* umaxv64qi3_mask */
    case 6477:  /* sminv64qi3_mask */
    case 6475:  /* smaxv64qi3_mask */
    case 6473:  /* *avx512f_uminv2di3_mask */
    case 6471:  /* *avx512f_umaxv2di3_mask */
    case 6469:  /* *avx512f_sminv2di3_mask */
    case 6467:  /* *avx512f_smaxv2di3_mask */
    case 6465:  /* *avx512f_uminv4di3_mask */
    case 6463:  /* *avx512f_umaxv4di3_mask */
    case 6461:  /* *avx512f_sminv4di3_mask */
    case 6459:  /* *avx512f_smaxv4di3_mask */
    case 6457:  /* *avx512f_uminv8di3_mask */
    case 6455:  /* *avx512f_umaxv8di3_mask */
    case 6453:  /* *avx512f_sminv8di3_mask */
    case 6451:  /* *avx512f_smaxv8di3_mask */
    case 6449:  /* *avx512f_uminv4si3_mask */
    case 6447:  /* *avx512f_umaxv4si3_mask */
    case 6445:  /* *avx512f_sminv4si3_mask */
    case 6443:  /* *avx512f_smaxv4si3_mask */
    case 6441:  /* *avx512f_uminv8si3_mask */
    case 6439:  /* *avx512f_umaxv8si3_mask */
    case 6437:  /* *avx512f_sminv8si3_mask */
    case 6435:  /* *avx512f_smaxv8si3_mask */
    case 6433:  /* *avx512f_uminv16si3_mask */
    case 6431:  /* *avx512f_umaxv16si3_mask */
    case 6429:  /* *avx512f_sminv16si3_mask */
    case 6427:  /* *avx512f_smaxv16si3_mask */
    case 6413:  /* avx512vl_rorv2di_mask */
    case 6411:  /* avx512vl_rolv2di_mask */
    case 6409:  /* avx512vl_rorv4di_mask */
    case 6407:  /* avx512vl_rolv4di_mask */
    case 6405:  /* avx512f_rorv8di_mask */
    case 6403:  /* avx512f_rolv8di_mask */
    case 6401:  /* avx512vl_rorv4si_mask */
    case 6399:  /* avx512vl_rolv4si_mask */
    case 6397:  /* avx512vl_rorv8si_mask */
    case 6395:  /* avx512vl_rolv8si_mask */
    case 6393:  /* avx512f_rorv16si_mask */
    case 6391:  /* avx512f_rolv16si_mask */
    case 6389:  /* avx512vl_rorvv2di_mask */
    case 6387:  /* avx512vl_rolvv2di_mask */
    case 6385:  /* avx512vl_rorvv4di_mask */
    case 6383:  /* avx512vl_rolvv4di_mask */
    case 6381:  /* avx512f_rorvv8di_mask */
    case 6379:  /* avx512f_rolvv8di_mask */
    case 6377:  /* avx512vl_rorvv4si_mask */
    case 6375:  /* avx512vl_rolvv4si_mask */
    case 6373:  /* avx512vl_rorvv8si_mask */
    case 6371:  /* avx512vl_rolvv8si_mask */
    case 6369:  /* avx512f_rorvv16si_mask */
    case 6367:  /* avx512f_rolvv16si_mask */
    case 6355:  /* lshrv8di3_mask */
    case 6353:  /* ashlv8di3_mask */
    case 6351:  /* lshrv16si3_mask */
    case 6349:  /* ashlv16si3_mask */
    case 6347:  /* lshrv32hi3_mask */
    case 6345:  /* ashlv32hi3_mask */
    case 6331:  /* lshrv2di3_mask */
    case 6329:  /* ashlv2di3_mask */
    case 6327:  /* lshrv4di3_mask */
    case 6325:  /* ashlv4di3_mask */
    case 6323:  /* lshrv4si3_mask */
    case 6321:  /* ashlv4si3_mask */
    case 6319:  /* lshrv8si3_mask */
    case 6317:  /* ashlv8si3_mask */
    case 6315:  /* lshrv8hi3_mask */
    case 6313:  /* ashlv8hi3_mask */
    case 6311:  /* lshrv16hi3_mask */
    case 6309:  /* ashlv16hi3_mask */
    case 6307:  /* ashrv8di3_mask */
    case 6305:  /* ashrv16si3_mask */
    case 6303:  /* ashrv4di3_mask */
    case 6301:  /* ashrv32hi3_mask */
    case 6295:  /* ashrv2di3_mask */
    case 6293:  /* ashrv4si3_mask */
    case 6291:  /* ashrv8si3_mask */
    case 6289:  /* ashrv8hi3_mask */
    case 6287:  /* ashrv16hi3_mask */
    case 6285:  /* *sse4_1_mulv4si3_mask */
    case 6283:  /* *avx2_mulv8si3_mask */
    case 6281:  /* *avx512f_mulv16si3_mask */
    case 6279:  /* *avx512dq_mulv2di3_mask */
    case 6277:  /* *avx512dq_mulv4di3_mask */
    case 6275:  /* *avx512dq_mulv8di3_mask */
    case 6241:  /* *mulv8hi3_mask */
    case 6239:  /* *mulv16hi3_mask */
    case 6237:  /* *mulv32hi3_mask */
    case 6235:  /* *sse2_ussubv8hi3_mask */
    case 6233:  /* *sse2_sssubv8hi3_mask */
    case 6231:  /* *sse2_usaddv8hi3_mask */
    case 6229:  /* *sse2_ssaddv8hi3_mask */
    case 6227:  /* *avx2_ussubv16hi3_mask */
    case 6225:  /* *avx2_sssubv16hi3_mask */
    case 6223:  /* *avx2_usaddv16hi3_mask */
    case 6221:  /* *avx2_ssaddv16hi3_mask */
    case 6219:  /* *avx512bw_ussubv32hi3_mask */
    case 6217:  /* *avx512bw_sssubv32hi3_mask */
    case 6215:  /* *avx512bw_usaddv32hi3_mask */
    case 6213:  /* *avx512bw_ssaddv32hi3_mask */
    case 6211:  /* *sse2_ussubv16qi3_mask */
    case 6209:  /* *sse2_sssubv16qi3_mask */
    case 6207:  /* *sse2_usaddv16qi3_mask */
    case 6205:  /* *sse2_ssaddv16qi3_mask */
    case 6203:  /* *avx2_ussubv32qi3_mask */
    case 6201:  /* *avx2_sssubv32qi3_mask */
    case 6199:  /* *avx2_usaddv32qi3_mask */
    case 6197:  /* *avx2_ssaddv32qi3_mask */
    case 6195:  /* *avx512bw_ussubv64qi3_mask */
    case 6193:  /* *avx512bw_sssubv64qi3_mask */
    case 6191:  /* *avx512bw_usaddv64qi3_mask */
    case 6189:  /* *avx512bw_ssaddv64qi3_mask */
    case 6187:  /* *subv8hi3_mask */
    case 6186:  /* *addv8hi3_mask */
    case 6185:  /* *subv16hi3_mask */
    case 6184:  /* *addv16hi3_mask */
    case 6183:  /* *subv32hi3_mask */
    case 6182:  /* *addv32hi3_mask */
    case 6181:  /* *subv32qi3_mask */
    case 6180:  /* *addv32qi3_mask */
    case 6179:  /* *subv16qi3_mask */
    case 6178:  /* *addv16qi3_mask */
    case 6177:  /* *subv64qi3_mask */
    case 6176:  /* *addv64qi3_mask */
    case 6175:  /* *subv2di3_mask */
    case 6174:  /* *addv2di3_mask */
    case 6173:  /* *subv4di3_mask */
    case 6172:  /* *addv4di3_mask */
    case 6171:  /* *subv8di3_mask */
    case 6170:  /* *addv8di3_mask */
    case 6169:  /* *subv4si3_mask */
    case 6168:  /* *addv4si3_mask */
    case 6167:  /* *subv8si3_mask */
    case 6166:  /* *addv8si3_mask */
    case 6165:  /* *subv16si3_mask */
    case 6164:  /* *addv16si3_mask */
    case 2871:  /* *xorv8df3_mask */
    case 2869:  /* *iorv8df3_mask */
    case 2867:  /* *andv8df3_mask */
    case 2865:  /* *xorv16sf3_mask */
    case 2863:  /* *iorv16sf3_mask */
    case 2861:  /* *andv16sf3_mask */
    case 2856:  /* *xorv2df3_mask */
    case 2854:  /* *iorv2df3_mask */
    case 2852:  /* *andv2df3_mask */
    case 2850:  /* *xorv4df3_mask */
    case 2848:  /* *iorv4df3_mask */
    case 2846:  /* *andv4df3_mask */
    case 2844:  /* *xorv4sf3_mask */
    case 2842:  /* *iorv4sf3_mask */
    case 2840:  /* *andv4sf3_mask */
    case 2838:  /* *xorv8sf3_mask */
    case 2836:  /* *iorv8sf3_mask */
    case 2834:  /* *andv8sf3_mask */
    case 2243:  /* *sminv2df3_mask */
    case 2241:  /* *smaxv2df3_mask */
    case 2239:  /* *sminv4df3_mask */
    case 2237:  /* *smaxv4df3_mask */
    case 2234:  /* *sminv8df3_mask */
    case 2230:  /* *smaxv8df3_mask */
    case 2227:  /* *sminv4sf3_mask */
    case 2225:  /* *smaxv4sf3_mask */
    case 2223:  /* *sminv8sf3_mask */
    case 2221:  /* *smaxv8sf3_mask */
    case 2218:  /* *sminv16sf3_mask */
    case 2214:  /* *smaxv16sf3_mask */
    case 2211:  /* *sminv8hf3_mask */
    case 2209:  /* *smaxv8hf3_mask */
    case 2207:  /* *sminv16hf3_mask */
    case 2205:  /* *smaxv16hf3_mask */
    case 2202:  /* *sminv32hf3_mask */
    case 2198:  /* *smaxv32hf3_mask */
    case 2088:  /* sse2_divv2df3_mask */
    case 2086:  /* avx_divv4df3_mask */
    case 2083:  /* avx512f_divv8df3_mask */
    case 2080:  /* sse_divv4sf3_mask */
    case 2078:  /* avx_divv8sf3_mask */
    case 2075:  /* avx512f_divv16sf3_mask */
    case 2072:  /* avx512fp16_divv8hf3_mask */
    case 2070:  /* avx512fp16_divv16hf3_mask */
    case 2067:  /* avx512fp16_divv32hf3_mask */
    case 2033:  /* *mulv2df3_mask */
    case 2029:  /* *mulv4df3_mask */
    case 2025:  /* *mulv8df3_mask */
    case 2021:  /* *mulv4sf3_mask */
    case 2017:  /* *mulv8sf3_mask */
    case 2013:  /* *mulv16sf3_mask */
    case 2009:  /* *mulv8hf3_mask */
    case 2005:  /* *mulv16hf3_mask */
    case 2001:  /* *mulv32hf3_mask */
    case 1967:  /* *subv2df3_mask */
    case 1963:  /* *addv2df3_mask */
    case 1959:  /* *subv4df3_mask */
    case 1955:  /* *addv4df3_mask */
    case 1951:  /* *subv8df3_mask */
    case 1947:  /* *addv8df3_mask */
    case 1943:  /* *subv4sf3_mask */
    case 1939:  /* *addv4sf3_mask */
    case 1935:  /* *subv8sf3_mask */
    case 1931:  /* *addv8sf3_mask */
    case 1927:  /* *subv16sf3_mask */
    case 1923:  /* *addv16sf3_mask */
    case 1919:  /* *subv8hf3_mask */
    case 1915:  /* *addv8hf3_mask */
    case 1911:  /* *subv16hf3_mask */
    case 1907:  /* *addv16hf3_mask */
    case 1903:  /* *subv32hf3_mask */
    case 1899:  /* *addv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2233:  /* *sminv8df3_round */
    case 2229:  /* *smaxv8df3_round */
    case 2217:  /* *sminv16sf3_round */
    case 2213:  /* *smaxv16sf3_round */
    case 2201:  /* *sminv32hf3_round */
    case 2197:  /* *smaxv32hf3_round */
    case 2082:  /* avx512f_divv8df3_round */
    case 2074:  /* avx512f_divv16sf3_round */
    case 2066:  /* avx512fp16_divv32hf3_round */
    case 2032:  /* *mulv2df3_round */
    case 2028:  /* *mulv4df3_round */
    case 2024:  /* *mulv8df3_round */
    case 2020:  /* *mulv4sf3_round */
    case 2016:  /* *mulv8sf3_round */
    case 2012:  /* *mulv16sf3_round */
    case 2008:  /* *mulv8hf3_round */
    case 2004:  /* *mulv16hf3_round */
    case 2000:  /* *mulv32hf3_round */
    case 1966:  /* *subv2df3_round */
    case 1962:  /* *addv2df3_round */
    case 1958:  /* *subv4df3_round */
    case 1954:  /* *addv4df3_round */
    case 1950:  /* *subv8df3_round */
    case 1946:  /* *addv8df3_round */
    case 1942:  /* *subv4sf3_round */
    case 1938:  /* *addv4sf3_round */
    case 1934:  /* *subv8sf3_round */
    case 1930:  /* *addv8sf3_round */
    case 1926:  /* *subv16sf3_round */
    case 1922:  /* *addv16sf3_round */
    case 1918:  /* *subv8hf3_round */
    case 1914:  /* *addv8hf3_round */
    case 1910:  /* *subv16hf3_round */
    case 1906:  /* *addv16hf3_round */
    case 1902:  /* *subv32hf3_round */
    case 1898:  /* *addv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1872:  /* kunpckdi */
    case 1871:  /* kunpcksi */
    case 1870:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1808:  /* avx512fp16_storev8hf_mask */
    case 1807:  /* avx512vl_storev16hf_mask */
    case 1806:  /* avx512bw_storev32hf_mask */
    case 1805:  /* avx512vl_storev8hi_mask */
    case 1804:  /* avx512vl_storev16hi_mask */
    case 1803:  /* avx512bw_storev32hi_mask */
    case 1802:  /* avx512vl_storev32qi_mask */
    case 1801:  /* avx512vl_storev16qi_mask */
    case 1800:  /* avx512bw_storev64qi_mask */
    case 1799:  /* avx512vl_storev2df_mask */
    case 1798:  /* avx512vl_storev4df_mask */
    case 1797:  /* avx512f_storev8df_mask */
    case 1796:  /* avx512vl_storev4sf_mask */
    case 1795:  /* avx512vl_storev8sf_mask */
    case 1794:  /* avx512f_storev16sf_mask */
    case 1793:  /* avx512vl_storev2di_mask */
    case 1792:  /* avx512vl_storev4di_mask */
    case 1791:  /* avx512f_storev8di_mask */
    case 1790:  /* avx512vl_storev4si_mask */
    case 1789:  /* avx512vl_storev8si_mask */
    case 1788:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1766:  /* avx512f_storedf_mask */
    case 1765:  /* avx512f_storesf_mask */
    case 1764:  /* avx512f_storehf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 3389:  /* *fma4i_vmfnmadd_v2df */
    case 3388:  /* *fma4i_vmfnmadd_v4sf */
    case 1763:  /* *avx512f_loaddf_mask */
    case 1762:  /* *avx512f_loadsf_mask */
    case 1761:  /* *avx512f_loadhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1760:  /* avx512f_movdf_mask */
    case 1759:  /* avx512f_movsf_mask */
    case 1758:  /* avx512f_movhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 8794:  /* avx512f_cvtneps2bf16_v4sf_mask */
    case 8792:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 8790:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 8520:  /* conflictv2di_mask */
    case 8518:  /* conflictv4di_mask */
    case 8516:  /* conflictv8di_mask */
    case 8514:  /* conflictv4si_mask */
    case 8512:  /* conflictv8si_mask */
    case 8510:  /* conflictv16si_mask */
    case 8094:  /* avx512f_vcvtph2ps512_mask */
    case 8091:  /* vcvtph2ps256_mask */
    case 8089:  /* *vcvtph2ps_load_mask */
    case 7518:  /* avx512er_rsqrt28v8df_mask */
    case 7514:  /* avx512er_rsqrt28v16sf_mask */
    case 7502:  /* avx512er_rcp28v8df_mask */
    case 7498:  /* avx512er_rcp28v16sf_mask */
    case 7494:  /* avx512er_exp2v8df_mask */
    case 7490:  /* avx512er_exp2v16sf_mask */
    case 5702:  /* avx512vl_getexpv2df_mask */
    case 5698:  /* avx512vl_getexpv4df_mask */
    case 5694:  /* avx512f_getexpv8df_mask */
    case 5690:  /* avx512vl_getexpv4sf_mask */
    case 5686:  /* avx512vl_getexpv8sf_mask */
    case 5682:  /* avx512f_getexpv16sf_mask */
    case 5678:  /* avx512fp16_getexpv8hf_mask */
    case 5674:  /* avx512vl_getexpv16hf_mask */
    case 5670:  /* avx512bw_getexpv32hf_mask */
    case 4036:  /* ufix_notruncv2dfv2di2_mask */
    case 4034:  /* ufix_notruncv4dfv4di2_mask */
    case 4031:  /* ufix_notruncv8dfv8di2_mask */
    case 4028:  /* fix_notruncv2dfv2di2_mask */
    case 4026:  /* fix_notruncv4dfv4di2_mask */
    case 4023:  /* fix_notruncv8dfv8di2_mask */
    case 3985:  /* ufix_notruncv4dfv4si2_mask */
    case 3981:  /* ufix_notruncv8dfv8si2_mask */
    case 3974:  /* avx_cvtpd2dq256_mask */
    case 3971:  /* avx512f_cvtpd2dq512_mask */
    case 3864:  /* avx512dq_cvtps2uqqv4di_mask */
    case 3861:  /* avx512dq_cvtps2uqqv8di_mask */
    case 3856:  /* avx512dq_cvtps2qqv4di_mask */
    case 3853:  /* avx512dq_cvtps2qqv8di_mask */
    case 3849:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 3845:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 3841:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 3837:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 3834:  /* sse2_fix_notruncv4sfv4si_mask */
    case 3832:  /* avx_fix_notruncv8sfv8si_mask */
    case 3546:  /* avx512fp16_vcvtph2qq_v2di_mask */
    case 3542:  /* avx512fp16_vcvtph2uqq_v2di_mask */
    case 3538:  /* avx512fp16_vcvtph2dq_v4si_mask */
    case 3534:  /* avx512fp16_vcvtph2udq_v4si_mask */
    case 3530:  /* avx512fp16_vcvtph2w_v8hi_mask */
    case 3526:  /* avx512fp16_vcvtph2uw_v8hi_mask */
    case 3522:  /* avx512fp16_vcvtph2qq_v4di_mask */
    case 3518:  /* avx512fp16_vcvtph2uqq_v4di_mask */
    case 3514:  /* avx512fp16_vcvtph2dq_v8si_mask */
    case 3510:  /* avx512fp16_vcvtph2udq_v8si_mask */
    case 3506:  /* avx512fp16_vcvtph2w_v16hi_mask */
    case 3502:  /* avx512fp16_vcvtph2uw_v16hi_mask */
    case 3498:  /* avx512fp16_vcvtph2qq_v8di_mask */
    case 3494:  /* avx512fp16_vcvtph2uqq_v8di_mask */
    case 3490:  /* avx512fp16_vcvtph2dq_v16si_mask */
    case 3486:  /* avx512fp16_vcvtph2udq_v16si_mask */
    case 3482:  /* avx512fp16_vcvtph2w_v32hi_mask */
    case 3478:  /* avx512fp16_vcvtph2uw_v32hi_mask */
    case 2185:  /* rsqrt14v2df_mask */
    case 2183:  /* rsqrt14v4df_mask */
    case 2181:  /* rsqrt14v8df_mask */
    case 2179:  /* rsqrt14v4sf_mask */
    case 2177:  /* rsqrt14v8sf_mask */
    case 2175:  /* rsqrt14v16sf_mask */
    case 2173:  /* avx512fp16_rsqrtv8hf2_mask */
    case 2171:  /* avx512fp16_rsqrtv16hf2_mask */
    case 2169:  /* avx512fp16_rsqrtv32hf2_mask */
    case 2113:  /* rcp14v2df_mask */
    case 2111:  /* rcp14v4df_mask */
    case 2109:  /* rcp14v8df_mask */
    case 2107:  /* rcp14v4sf_mask */
    case 2105:  /* rcp14v8sf_mask */
    case 2103:  /* rcp14v16sf_mask */
    case 2098:  /* avx512fp16_rcpv8hf2_mask */
    case 2096:  /* avx512fp16_rcpv16hf2_mask */
    case 2094:  /* avx512fp16_rcpv32hf2_mask */
    case 1751:  /* *avx512vl_loadv8hi_mask */
    case 1750:  /* *avx512vl_loadv16hi_mask */
    case 1749:  /* *avx512bw_loadv32hi_mask */
    case 1748:  /* *avx512vl_loadv32qi_mask */
    case 1747:  /* *avx512vl_loadv16qi_mask */
    case 1746:  /* *avx512bw_loadv64qi_mask */
    case 1733:  /* *avx512vl_loadv2df_mask */
    case 1732:  /* *avx512vl_loadv4df_mask */
    case 1731:  /* *avx512f_loadv8df_mask */
    case 1730:  /* *avx512vl_loadv4sf_mask */
    case 1729:  /* *avx512vl_loadv8sf_mask */
    case 1728:  /* *avx512f_loadv16sf_mask */
    case 1727:  /* *avx512vl_loadv2di_mask */
    case 1726:  /* *avx512vl_loadv4di_mask */
    case 1725:  /* *avx512f_loadv8di_mask */
    case 1724:  /* *avx512vl_loadv4si_mask */
    case 1723:  /* *avx512vl_loadv8si_mask */
    case 1722:  /* *avx512f_loadv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7107:  /* *sse2_maskmovdqu */
    case 7106:  /* *sse2_maskmovdqu */
    case 1695:  /* *mmx_maskmovq */
    case 1694:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5858:  /* sse2_shufpd_v2df */
    case 5857:  /* sse2_shufpd_v2di */
    case 1684:  /* *punpckwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 7254:  /* avx2_pblenddv4si */
    case 7253:  /* avx2_pblenddv8si */
    case 7252:  /* *avx2_pblendph */
    case 7251:  /* *avx2_pblendw */
    case 7250:  /* sse4_1_pblendph */
    case 7249:  /* sse4_1_pblendw */
    case 7209:  /* sse4_1_blendpd */
    case 7208:  /* avx_blendpd256 */
    case 7207:  /* sse4_1_blendps */
    case 7206:  /* avx_blendps256 */
    case 1787:  /* avx512fp16_blendmv8hf */
    case 1786:  /* avx512vl_blendmv16hf */
    case 1785:  /* avx512bw_blendmv32hf */
    case 1784:  /* avx512vl_blendmv8hi */
    case 1783:  /* avx512vl_blendmv16hi */
    case 1782:  /* avx512bw_blendmv32hi */
    case 1781:  /* avx512vl_blendmv32qi */
    case 1780:  /* avx512vl_blendmv16qi */
    case 1779:  /* avx512bw_blendmv64qi */
    case 1778:  /* avx512vl_blendmv2df */
    case 1777:  /* avx512vl_blendmv4df */
    case 1776:  /* avx512f_blendmv8df */
    case 1775:  /* avx512vl_blendmv4sf */
    case 1774:  /* avx512vl_blendmv8sf */
    case 1773:  /* avx512f_blendmv16sf */
    case 1772:  /* avx512vl_blendmv2di */
    case 1771:  /* avx512vl_blendmv4di */
    case 1770:  /* avx512f_blendmv8di */
    case 1769:  /* avx512vl_blendmv4si */
    case 1768:  /* avx512vl_blendmv8si */
    case 1767:  /* avx512f_blendmv16si */
    case 1664:  /* *mmx_pblendw32 */
    case 1663:  /* *mmx_pblendw64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4193:  /* *avx512dq_vextracti64x2_1 */
    case 4192:  /* *avx512dq_vextractf64x2_1 */
    case 1685:  /* *pshufw_1 */
    case 1662:  /* *mmx_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 7697:  /* avx2_permv4df_1 */
    case 7695:  /* avx2_permv4di_1 */
    case 6998:  /* sse2_pshuflw_1 */
    case 6992:  /* sse2_pshufd_1 */
    case 4197:  /* *avx512f_vextracti32x4_1 */
    case 4196:  /* *avx512f_vextractf32x4_1 */
    case 1661:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 7026:  /* *vec_extractv4si_zext_mem */
    case 7024:  /* *vec_extractv4si_zext */
    case 7015:  /* *vec_extractv16qi_zext */
    case 7014:  /* *vec_extractv8hi_zext */
    case 7013:  /* *vec_extractv16qi_zext */
    case 7012:  /* *vec_extractv8hi_zext */
    case 7011:  /* *vec_extractv16qi_zext */
    case 1683:  /* *pextrb_zext */
    case 1682:  /* *pextrb_zext */
    case 1681:  /* *pextrb_zext */
    case 1679:  /* *pextrw_zext */
    case 1678:  /* *pextrw_zext */
    case 1674:  /* *vec_extractv2si_zext_mem */
    case 1658:  /* *mmx_pextrb_zext */
    case 1657:  /* *mmx_pextrb_zext */
    case 1656:  /* *mmx_pextrb_zext */
    case 1654:  /* *mmx_pextrw_zext */
    case 1653:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 7029:  /* *vec_extractv4ti */
    case 7028:  /* *vec_extractv2ti */
    case 7025:  /* *vec_extractv4si_mem */
    case 7023:  /* *vec_extractv4si */
    case 7017:  /* *vec_extractv8hi_mem */
    case 7016:  /* *vec_extractv16qi_mem */
    case 7010:  /* *vec_extractv8hi */
    case 7009:  /* *vec_extractv16qi */
    case 5735:  /* *vec_extractv4dfdf_valign */
    case 5734:  /* *vec_extractv8dfdf_valign */
    case 5733:  /* *vec_extractv8sfsf_valign */
    case 5732:  /* *vec_extractv16sfsf_valign */
    case 5731:  /* *vec_extractv4didi_valign */
    case 5730:  /* *vec_extractv8didi_valign */
    case 5729:  /* *vec_extractv8sisi_valign */
    case 5728:  /* *vec_extractv16sisi_valign */
    case 4245:  /* *vec_extracthf */
    case 4189:  /* *vec_extractv4sf_mem */
    case 4188:  /* *sse4_1_extractps */
    case 1680:  /* *pextrb */
    case 1677:  /* *pextrw */
    case 1655:  /* *mmx_pextrb */
    case 1652:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 6935:  /* sse4_1_pinsrq */
    case 6934:  /* sse4_1_pinsrd */
    case 6933:  /* sse2_pinsrph */
    case 6932:  /* sse2_pinsrw */
    case 6931:  /* sse4_1_pinsrb */
    case 4176:  /* *vec_setv4sf_sse4_1 */
    case 1676:  /* *pinsrb */
    case 1675:  /* *pinsrw */
    case 1651:  /* *mmx_pinsrb */
    case 1650:  /* *mmx_pinsrw */
    case 1649:  /* *mmx_pinsrd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7241:  /* sse4_1_packusdw */
    case 7239:  /* avx2_packusdw */
    case 7237:  /* avx512bw_packusdw */
    case 6881:  /* sse2_packuswb */
    case 6879:  /* avx2_packuswb */
    case 6877:  /* avx512bw_packuswb */
    case 6875:  /* sse2_packssdw */
    case 6873:  /* avx2_packssdw */
    case 6871:  /* avx512bw_packssdw */
    case 6869:  /* sse2_packsswb */
    case 6867:  /* avx2_packsswb */
    case 6865:  /* avx512bw_packsswb */
    case 1634:  /* mmx_packusdw */
    case 1633:  /* mmx_packssdw */
    case 1632:  /* mmx_packuswb */
    case 1631:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 7555:  /* xop_pcmov_v2df */
    case 7554:  /* xop_pcmov_v4df256 */
    case 7553:  /* xop_pcmov_v4sf */
    case 7552:  /* xop_pcmov_v8sf256 */
    case 7551:  /* xop_pcmov_v8hf */
    case 7550:  /* xop_pcmov_v16hf256 */
    case 7549:  /* xop_pcmov_v1ti */
    case 7548:  /* xop_pcmov_v2ti256 */
    case 7547:  /* xop_pcmov_v2di */
    case 7546:  /* xop_pcmov_v4di256 */
    case 7545:  /* xop_pcmov_v4si */
    case 7544:  /* xop_pcmov_v8si256 */
    case 7543:  /* xop_pcmov_v8hi */
    case 7542:  /* xop_pcmov_v16hi256 */
    case 7541:  /* xop_pcmov_v16qi */
    case 7540:  /* xop_pcmov_v32qi256 */
    case 1601:  /* *xop_pcmov_v2hi */
    case 1600:  /* *xop_pcmov_v2qi */
    case 1599:  /* *xop_pcmov_v4qi */
    case 1598:  /* *xop_pcmov_v2sf */
    case 1597:  /* *xop_pcmov_v2si */
    case 1596:  /* *xop_pcmov_v4hi */
    case 1595:  /* *xop_pcmov_v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7610:  /* xop_maskcmp_unsv2di3 */
    case 7609:  /* xop_maskcmp_unsv4si3 */
    case 7608:  /* xop_maskcmp_unsv8hi3 */
    case 7607:  /* xop_maskcmp_unsv16qi3 */
    case 7606:  /* xop_maskcmpv2di3 */
    case 7605:  /* xop_maskcmpv4si3 */
    case 7604:  /* xop_maskcmpv8hi3 */
    case 7603:  /* xop_maskcmpv16qi3 */
    case 1590:  /* *xop_maskcmp_unsv2hi3 */
    case 1589:  /* *xop_maskcmp_unsv2qi3 */
    case 1588:  /* *xop_maskcmp_unsv4qi3 */
    case 1587:  /* *xop_maskcmp_unsv2si3 */
    case 1586:  /* *xop_maskcmp_unsv4hi3 */
    case 1585:  /* *xop_maskcmp_unsv8qi3 */
    case 1584:  /* *xop_maskcmpv2hi3 */
    case 1583:  /* *xop_maskcmpv2qi3 */
    case 1582:  /* *xop_maskcmpv4qi3 */
    case 1581:  /* *xop_maskcmpv2si3 */
    case 1580:  /* *xop_maskcmpv4hi3 */
    case 1579:  /* *xop_maskcmpv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6264:  /* *sse4_1_mulv2siv2di3 */
    case 6262:  /* *vec_widen_smult_even_v8si */
    case 6260:  /* *vec_widen_smult_even_v16si */
    case 6258:  /* *vec_widen_umult_even_v4si */
    case 6256:  /* *vec_widen_umult_even_v8si */
    case 6254:  /* *vec_widen_umult_even_v16si */
    case 1520:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1691:  /* uavgv2hi3_ceil */
    case 1690:  /* uavgv2qi3_ceil */
    case 1689:  /* uavgv4qi3_ceil */
    case 1688:  /* *mmx_uavgv4hi3 */
    case 1687:  /* *mmx_uavgv8qi3 */
    case 1519:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 7142:  /* ssse3_pmaddubsw */
    case 7141:  /* ssse3_pmaddubsw128 */
    case 7132:  /* avx2_pmaddubsw256 */
    case 6273:  /* *sse2_pmaddwd */
    case 6272:  /* *avx2_pmaddwd */
    case 1518:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6252:  /* *umulv8hi3_highpart */
    case 6250:  /* *smulv8hi3_highpart */
    case 6248:  /* *umulv16hi3_highpart */
    case 6246:  /* *smulv16hi3_highpart */
    case 6244:  /* *umulv32hi3_highpart */
    case 6242:  /* *smulv32hi3_highpart */
    case 1517:  /* umulv2hi3_highpart */
    case 1516:  /* smulv2hi3_highpart */
    case 1515:  /* *mmx_umulv4hi3_highpart */
    case 1514:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 5865:  /* sse2_movsd */
    case 4175:  /* avx512fp16_movsh */
    case 4150:  /* sse_movss */
    case 1465:  /* *mmx_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 6100:  /* *avx512f_pshufd_truncv2div2si_1 */
    case 1458:  /* mmx_pi2fw */
    case 1457:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 3122:  /* *fma_fnmsub_v2df */
    case 3120:  /* *fma_fnmsub_v4df */
    case 3116:  /* *fma_fnmsub_v8df */
    case 3115:  /* *fma_fnmsub_df */
    case 3113:  /* *fma_fnmsub_v4sf */
    case 3111:  /* *fma_fnmsub_v8sf */
    case 3107:  /* *fma_fnmsub_v16sf */
    case 3106:  /* *fma_fnmsub_sf */
    case 3105:  /* *fma_fnmsub_hf */
    case 3103:  /* *fma_fnmsub_v8hf */
    case 3101:  /* *fma_fnmsub_v16hf */
    case 3097:  /* *fma_fnmsub_v32hf */
    case 3093:  /* *fma_fnmsub_v4df */
    case 3089:  /* *fma_fnmsub_v8sf */
    case 3085:  /* *fma_fnmsub_v2df */
    case 3081:  /* *fma_fnmsub_v4sf */
    case 3079:  /* *fma_fnmsub_df */
    case 3077:  /* *fma_fnmsub_sf */
    case 1452:  /* fnmsv2sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 8609:  /* vpopcountv8hi_mask */
    case 8607:  /* vpopcountv16hi_mask */
    case 8605:  /* vpopcountv32hi_mask */
    case 8603:  /* vpopcountv32qi_mask */
    case 8601:  /* vpopcountv16qi_mask */
    case 8599:  /* vpopcountv64qi_mask */
    case 8589:  /* vpopcountv2di_mask */
    case 8587:  /* vpopcountv4di_mask */
    case 8585:  /* vpopcountv8di_mask */
    case 8583:  /* vpopcountv4si_mask */
    case 8581:  /* vpopcountv8si_mask */
    case 8579:  /* vpopcountv16si_mask */
    case 8508:  /* clzv2di2_mask */
    case 8506:  /* clzv4di2_mask */
    case 8504:  /* clzv8di2_mask */
    case 8502:  /* clzv4si2_mask */
    case 8500:  /* clzv8si2_mask */
    case 8498:  /* clzv16si2_mask */
    case 7853:  /* avx512dq_broadcastv4df_mask_1 */
    case 7851:  /* avx512dq_broadcastv4di_mask_1 */
    case 7849:  /* avx512dq_broadcastv8df_mask_1 */
    case 7847:  /* avx512dq_broadcastv8di_mask_1 */
    case 7845:  /* avx512dq_broadcastv16si_mask_1 */
    case 7843:  /* avx512dq_broadcastv16sf_mask_1 */
    case 7841:  /* avx512vl_broadcastv8sf_mask_1 */
    case 7839:  /* avx512vl_broadcastv8si_mask_1 */
    case 7801:  /* avx512vl_vec_dup_gprv2df_mask */
    case 7799:  /* avx512vl_vec_dup_gprv4df_mask */
    case 7797:  /* avx512f_vec_dup_gprv8df_mask */
    case 7795:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 7793:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 7791:  /* avx512f_vec_dup_gprv16sf_mask */
    case 7789:  /* avx512vl_vec_dup_gprv2di_mask */
    case 7787:  /* avx512vl_vec_dup_gprv4di_mask */
    case 7785:  /* avx512f_vec_dup_gprv8di_mask */
    case 7783:  /* avx512vl_vec_dup_gprv4si_mask */
    case 7781:  /* avx512vl_vec_dup_gprv8si_mask */
    case 7779:  /* avx512f_vec_dup_gprv16si_mask */
    case 7777:  /* avx512fp16_vec_dup_gprv8hf_mask */
    case 7775:  /* avx512vl_vec_dup_gprv16hf_mask */
    case 7773:  /* avx512bw_vec_dup_gprv32hf_mask */
    case 7771:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 7769:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 7767:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 7765:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 7763:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 7761:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 7759:  /* avx512f_broadcastv8di_mask */
    case 7757:  /* avx512f_broadcastv8df_mask */
    case 7755:  /* avx512f_broadcastv16si_mask */
    case 7753:  /* avx512f_broadcastv16sf_mask */
    case 7429:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 7427:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 7419:  /* avx2_zero_extendv4siv4di2_mask */
    case 7417:  /* avx2_sign_extendv4siv4di2_mask */
    case 7413:  /* avx512f_zero_extendv8siv8di2_mask */
    case 7411:  /* avx512f_sign_extendv8siv8di2_mask */
    case 7405:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 7403:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 7393:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 7391:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 7385:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 7383:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 7379:  /* *sse4_1_zero_extendv2qiv2di2_mask_1 */
    case 7377:  /* *sse4_1_sign_extendv2qiv2di2_mask_1 */
    case 7367:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 7365:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 7355:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 7353:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 7339:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 7337:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 7327:  /* avx2_zero_extendv8hiv8si2_mask */
    case 7325:  /* avx2_sign_extendv8hiv8si2_mask */
    case 7319:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 7317:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 7311:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 7309:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 7299:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 7297:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 7291:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 7289:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 7279:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 7277:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 7267:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 7265:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 7259:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 7257:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 7197:  /* absv8hi2_mask */
    case 7196:  /* absv16hi2_mask */
    case 7195:  /* absv32hi2_mask */
    case 7194:  /* absv32qi2_mask */
    case 7193:  /* absv16qi2_mask */
    case 7192:  /* absv64qi2_mask */
    case 7191:  /* absv2di2_mask */
    case 7190:  /* absv4di2_mask */
    case 7189:  /* absv8di2_mask */
    case 7188:  /* absv4si2_mask */
    case 7187:  /* absv8si2_mask */
    case 7186:  /* absv16si2_mask */
    case 5926:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 5925:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 5924:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 5923:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 5922:  /* avx512vl_truncatev8siv8hi2_mask */
    case 5921:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 5920:  /* avx512vl_us_truncatev4div4si2_mask */
    case 5919:  /* avx512vl_truncatev4div4si2_mask */
    case 5918:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 5906:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 5905:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 5904:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 5899:  /* avx512f_us_truncatev8div8hi2_mask */
    case 5898:  /* avx512f_truncatev8div8hi2_mask */
    case 5897:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 5896:  /* avx512f_us_truncatev8div8si2_mask */
    case 5895:  /* avx512f_truncatev8div8si2_mask */
    case 5894:  /* avx512f_ss_truncatev8div8si2_mask */
    case 5893:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 5892:  /* avx512f_truncatev16siv16hi2_mask */
    case 5891:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 5890:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 5889:  /* avx512f_truncatev16siv16qi2_mask */
    case 5888:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 5867:  /* vec_dupv2df_mask */
    case 4227:  /* vec_extract_hi_v8sf_mask */
    case 4226:  /* vec_extract_hi_v8si_mask */
    case 4223:  /* vec_extract_lo_v8sf_mask */
    case 4222:  /* vec_extract_lo_v8si_mask */
    case 4219:  /* vec_extract_hi_v4df_mask */
    case 4218:  /* vec_extract_hi_v4di_mask */
    case 4215:  /* vec_extract_lo_v4df_mask */
    case 4214:  /* vec_extract_lo_v4di_mask */
    case 4211:  /* vec_extract_lo_v16si_mask */
    case 4210:  /* vec_extract_lo_v16sf_mask */
    case 4207:  /* vec_extract_hi_v16si_mask */
    case 4206:  /* vec_extract_hi_v16sf_mask */
    case 4203:  /* vec_extract_hi_v8di_mask */
    case 4202:  /* vec_extract_hi_v8df_mask */
    case 4199:  /* vec_extract_lo_v8di_mask */
    case 4198:  /* vec_extract_lo_v8df_mask */
    case 4085:  /* avx_cvtps2pd256_mask */
    case 4082:  /* avx512f_cvtps2pd512_mask */
    case 4075:  /* avx_cvtpd2ps256_mask */
    case 4072:  /* avx512f_cvtpd2ps512_mask */
    case 4056:  /* ufix_truncv4sfv4si2_mask */
    case 4054:  /* ufix_truncv8sfv8si2_mask */
    case 4048:  /* fixuns_truncv4sfv4di2_mask */
    case 4046:  /* fix_truncv4sfv4di2_mask */
    case 4043:  /* fixuns_truncv8sfv8di2_mask */
    case 4039:  /* fix_truncv8sfv8di2_mask */
    case 4020:  /* fixuns_truncv2dfv2di2_mask */
    case 4018:  /* fix_truncv2dfv2di2_mask */
    case 4016:  /* fixuns_truncv4dfv4di2_mask */
    case 4014:  /* fix_truncv4dfv4di2_mask */
    case 4011:  /* fixuns_truncv8dfv8di2_mask */
    case 4007:  /* fix_truncv8dfv8di2_mask */
    case 4004:  /* ufix_truncv4dfv4si2_mask */
    case 4002:  /* fix_truncv4dfv4si2_mask */
    case 3996:  /* fixuns_truncv8dfv8si2_mask */
    case 3992:  /* fix_truncv8dfv8si2_mask */
    case 3962:  /* ufloatv4siv4df2_mask */
    case 3960:  /* ufloatv8siv8df2_mask */
    case 3952:  /* floatunsv4div4sf2_mask */
    case 3950:  /* floatv4div4sf2_mask */
    case 3947:  /* floatunsv8div8sf2_mask */
    case 3943:  /* floatv8div8sf2_mask */
    case 3939:  /* floatunsv2div2df2_mask */
    case 3935:  /* floatv2div2df2_mask */
    case 3931:  /* floatunsv4div4df2_mask */
    case 3927:  /* floatv4div4df2_mask */
    case 3923:  /* floatunsv8div8df2_mask */
    case 3919:  /* floatv8div8df2_mask */
    case 3916:  /* floatv4siv4df2_mask */
    case 3914:  /* floatv8siv8df2_mask */
    case 3878:  /* fix_truncv4sfv4si2_mask */
    case 3876:  /* fix_truncv8sfv8si2_mask */
    case 3873:  /* ufix_truncv16sfv16si2_mask */
    case 3869:  /* fix_truncv16sfv16si2_mask */
    case 3829:  /* ufloatv4siv4sf2_mask */
    case 3825:  /* ufloatv8siv8sf2_mask */
    case 3821:  /* ufloatv16siv16sf2_mask */
    case 3818:  /* floatv4siv4sf2_mask */
    case 3816:  /* floatv8siv8sf2_mask */
    case 3813:  /* floatv16siv16sf2_mask */
    case 3752:  /* avx512fp16_vcvtps2ph_v8sf_mask */
    case 3748:  /* avx512fp16_vcvtps2ph_v16sf_mask */
    case 3744:  /* avx512fp16_vcvtpd2ph_v8df_mask */
    case 3741:  /* *avx512fp16_float_extend_phv2df2_load_mask */
    case 3737:  /* *avx512fp16_float_extend_phv4sf2_load_mask */
    case 3735:  /* *avx512fp16_float_extend_phv4df2_load_mask */
    case 3728:  /* avx512fp16_float_extend_phv8sf2_mask */
    case 3724:  /* avx512fp16_float_extend_phv16sf2_mask */
    case 3720:  /* avx512fp16_float_extend_phv8df2_mask */
    case 3705:  /* *avx512fp16_fixuns_truncv2di2_load_mask */
    case 3703:  /* *avx512fp16_fix_truncv2di2_load_mask */
    case 3697:  /* *avx512fp16_fixuns_truncv4di2_load_mask */
    case 3695:  /* *avx512fp16_fix_truncv4di2_load_mask */
    case 3693:  /* *avx512fp16_fixuns_truncv4si2_load_mask */
    case 3691:  /* *avx512fp16_fix_truncv4si2_load_mask */
    case 3680:  /* avx512fp16_fixuns_truncv8di2_mask */
    case 3676:  /* avx512fp16_fix_truncv8di2_mask */
    case 3672:  /* avx512fp16_fixuns_truncv16si2_mask */
    case 3668:  /* avx512fp16_fix_truncv16si2_mask */
    case 3664:  /* avx512fp16_fixuns_truncv8si2_mask */
    case 3660:  /* avx512fp16_fix_truncv8si2_mask */
    case 3656:  /* avx512fp16_fixuns_truncv32hi2_mask */
    case 3652:  /* avx512fp16_fix_truncv32hi2_mask */
    case 3648:  /* avx512fp16_fixuns_truncv16hi2_mask */
    case 3644:  /* avx512fp16_fix_truncv16hi2_mask */
    case 3640:  /* avx512fp16_fixuns_truncv8hi2_mask */
    case 3636:  /* avx512fp16_fix_truncv8hi2_mask */
    case 3594:  /* avx512fp16_vcvtuqq2ph_v8di_mask */
    case 3590:  /* avx512fp16_vcvtqq2ph_v8di_mask */
    case 3586:  /* avx512fp16_vcvtudq2ph_v16si_mask */
    case 3582:  /* avx512fp16_vcvtdq2ph_v16si_mask */
    case 3578:  /* avx512fp16_vcvtudq2ph_v8si_mask */
    case 3574:  /* avx512fp16_vcvtdq2ph_v8si_mask */
    case 3570:  /* avx512fp16_vcvtuw2ph_v32hi_mask */
    case 3566:  /* avx512fp16_vcvtw2ph_v32hi_mask */
    case 3562:  /* avx512fp16_vcvtuw2ph_v16hi_mask */
    case 3558:  /* avx512fp16_vcvtw2ph_v16hi_mask */
    case 3554:  /* avx512fp16_vcvtuw2ph_v8hi_mask */
    case 3550:  /* avx512fp16_vcvtw2ph_v8hi_mask */
    case 3051:  /* *fma_fnmadd_v2df */
    case 3049:  /* *fma_fnmadd_v4df */
    case 3045:  /* *fma_fnmadd_v8df */
    case 3044:  /* *fma_fnmadd_df */
    case 3042:  /* *fma_fnmadd_v4sf */
    case 3040:  /* *fma_fnmadd_v8sf */
    case 3036:  /* *fma_fnmadd_v16sf */
    case 3035:  /* *fma_fnmadd_sf */
    case 3034:  /* *fma_fnmadd_hf */
    case 3032:  /* *fma_fnmadd_v8hf */
    case 3030:  /* *fma_fnmadd_v16hf */
    case 3026:  /* *fma_fnmadd_v32hf */
    case 3025:  /* *fma_fnmadd_v4df */
    case 3024:  /* *fma_fnmadd_v8sf */
    case 3023:  /* *fma_fnmadd_v2df */
    case 3022:  /* *fma_fnmadd_v4sf */
    case 3021:  /* *fma_fnmadd_df */
    case 3020:  /* *fma_fnmadd_sf */
    case 2141:  /* sse2_sqrtv2df2_mask */
    case 2139:  /* avx_sqrtv4df2_mask */
    case 2136:  /* avx512f_sqrtv8df2_mask */
    case 2133:  /* sse_sqrtv4sf2_mask */
    case 2131:  /* avx_sqrtv8sf2_mask */
    case 2128:  /* avx512f_sqrtv16sf2_mask */
    case 2125:  /* avx512fp16_sqrtv8hf2_mask */
    case 2123:  /* avx512fp16_sqrtv16hf2_mask */
    case 2120:  /* avx512fp16_sqrtv32hf2_mask */
    case 1451:  /* fnmav2sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2988:  /* *fma_fmsub_v2df */
    case 2986:  /* *fma_fmsub_v4df */
    case 2982:  /* *fma_fmsub_v8df */
    case 2981:  /* *fma_fmsub_df */
    case 2979:  /* *fma_fmsub_v4sf */
    case 2977:  /* *fma_fmsub_v8sf */
    case 2973:  /* *fma_fmsub_v16sf */
    case 2972:  /* *fma_fmsub_sf */
    case 2971:  /* *fma_fmsub_hf */
    case 2969:  /* *fma_fmsub_v8hf */
    case 2967:  /* *fma_fmsub_v16hf */
    case 2963:  /* *fma_fmsub_v32hf */
    case 2962:  /* *fma_fmsub_v4df */
    case 2961:  /* *fma_fmsub_v8sf */
    case 2960:  /* *fma_fmsub_v2df */
    case 2959:  /* *fma_fmsub_v4sf */
    case 2958:  /* *fma_fmsub_df */
    case 2957:  /* *fma_fmsub_sf */
    case 1450:  /* fmsv2sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2325:  /* vec_addsubv2df3 */
    case 2324:  /* vec_addsubv4df3 */
    case 2323:  /* vec_addsubv4sf3 */
    case 2322:  /* vec_addsubv8sf3 */
    case 1438:  /* vec_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1437:  /* *mmx_haddsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2331:  /* *sse3_hsubv2df3_low */
    case 1436:  /* *mmx_hsubv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2329:  /* sse3_hsubv2df3 */
    case 1435:  /* mmx_hsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2330:  /* *sse3_haddv2df3_low */
    case 1434:  /* *mmx_haddv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2328:  /* *sse3_haddv2df3 */
    case 1433:  /* *mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7454:  /* ptesttf2 */
    case 7453:  /* avx_ptestv4df */
    case 7452:  /* avx_ptestv8sf */
    case 7451:  /* avx_ptestv2ti */
    case 7450:  /* avx_ptestv4di */
    case 7449:  /* avx_ptestv8si */
    case 7448:  /* avx_ptestv16hi */
    case 7447:  /* avx_ptestv32qi */
    case 7446:  /* sse4_1_ptestv2df */
    case 7445:  /* sse4_1_ptestv4sf */
    case 7444:  /* sse4_1_ptestv1ti */
    case 7443:  /* sse4_1_ptestv2di */
    case 7442:  /* sse4_1_ptestv4si */
    case 7441:  /* sse4_1_ptestv8hi */
    case 7440:  /* sse4_1_ptestv16qi */
    case 7439:  /* avx_vtestpd */
    case 7438:  /* avx_vtestpd256 */
    case 7437:  /* avx_vtestps */
    case 7436:  /* avx_vtestps256 */
    case 1869:  /* kortestdi */
    case 1868:  /* kortestsi */
    case 1867:  /* kortesthi */
    case 1866:  /* kortestqi */
    case 1865:  /* ktestdi */
    case 1864:  /* ktestsi */
    case 1863:  /* ktesthi */
    case 1862:  /* ktestqi */
    case 1393:  /* tpause */
    case 1389:  /* umwait */
    case 1384:  /* enqcmds_di */
    case 1383:  /* enqcmd_di */
    case 1382:  /* enqcmds_si */
    case 1381:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1378:  /* movdir64b_di */
    case 1377:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1369:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1358:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1394:  /* tpause_rex64 */
    case 1390:  /* umwait_rex64 */
    case 1327:  /* lwp_lwpinsdi */
    case 1326:  /* lwp_lwpinssi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1317:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 7113:  /* sse3_monitor_di */
    case 7112:  /* sse3_monitor_si */
    case 1370:  /* *wrpkru */
    case 1366:  /* monitorx_di */
    case 1365:  /* monitorx_si */
    case 1364:  /* mwaitx */
    case 1325:  /* lwp_lwpvaldi */
    case 1324:  /* lwp_lwpvalsi */
    case 1313:  /* xsetbv_rex64 */
    case 1311:  /* xrstors64 */
    case 1310:  /* xrstor64 */
    case 1309:  /* xrstors_rex64 */
    case 1308:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 7111:  /* sse3_mwait */
    case 1398:  /* patchable_area */
    case 1354:  /* wrussdi */
    case 1353:  /* wrusssi */
    case 1352:  /* wrssdi */
    case 1351:  /* wrsssi */
    case 1312:  /* xsetbv */
    case 1307:  /* xrstors */
    case 1306:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1289:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1288:  /* rdtscp */
    case 1287:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1277:  /* *stack_protect_set_3 */
    case 1276:  /* *stack_protect_set_2_di */
    case 1275:  /* *stack_protect_set_2_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1270:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1265:  /* adjust_stack_and_probe_di */
    case 1264:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1212:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2925:  /* *fma_fmadd_v2df */
    case 2923:  /* *fma_fmadd_v4df */
    case 2919:  /* *fma_fmadd_v8df */
    case 2918:  /* *fma_fmadd_df */
    case 2916:  /* *fma_fmadd_v4sf */
    case 2914:  /* *fma_fmadd_v8sf */
    case 2910:  /* *fma_fmadd_v16sf */
    case 2909:  /* *fma_fmadd_sf */
    case 2908:  /* *fma_fmadd_hf */
    case 2906:  /* *fma_fmadd_v8hf */
    case 2904:  /* *fma_fmadd_v16hf */
    case 2900:  /* *fma_fmadd_v32hf */
    case 2899:  /* *fma_fmadd_v4df */
    case 2898:  /* *fma_fmadd_v8sf */
    case 2897:  /* *fma_fmadd_v2df */
    case 2896:  /* *fma_fmadd_v4sf */
    case 2895:  /* *fma_fmadd_df */
    case 2894:  /* *fma_fmadd_sf */
    case 1449:  /* fmav2sf4 */
    case 1219:  /* *xop_pcmov_df */
    case 1218:  /* *xop_pcmov_sf */
    case 1217:  /* *movsfcc_1_387 */
    case 1216:  /* *movdfcc_1 */
    case 1215:  /* *movxfcc_1 */
    case 1213:  /* *movqicc_noc */
    case 1211:  /* *movdicc_noc */
    case 1210:  /* *movsicc_noc */
    case 1209:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1200:  /* *strlenqi_1 */
    case 1199:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1198:  /* *cmpstrnqi_1 */
    case 1197:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1196:  /* *cmpstrnqi_nz_1 */
    case 1195:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1194:  /* *rep_stosqi */
    case 1193:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1192:  /* *rep_stossi */
    case 1191:  /* *rep_stossi */
    case 1190:  /* *rep_stosdi_rex64 */
    case 1189:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1188:  /* *strsetqi_1 */
    case 1187:  /* *strsetqi_1 */
    case 1186:  /* *strsethi_1 */
    case 1185:  /* *strsethi_1 */
    case 1184:  /* *strsetsi_1 */
    case 1183:  /* *strsetsi_1 */
    case 1182:  /* *strsetdi_rex_1 */
    case 1181:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1180:  /* *rep_movqi */
    case 1179:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 1178:  /* *rep_movsi */
    case 1177:  /* *rep_movsi */
    case 1176:  /* *rep_movdi_rex64 */
    case 1175:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 1174:  /* *strmovqi_1 */
    case 1173:  /* *strmovqi_1 */
    case 1172:  /* *strmovhi_1 */
    case 1171:  /* *strmovhi_1 */
    case 1170:  /* *strmovsi_1 */
    case 1169:  /* *strmovsi_1 */
    case 1168:  /* *strmovdi_rex_1 */
    case 1167:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1157:  /* fistdi2_ceil */
    case 1156:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 8824:  /* atomic_storedi_fpu */
    case 8819:  /* atomic_loaddi_fpu */
    case 1161:  /* fistsi2_ceil */
    case 1160:  /* fistsi2_floor */
    case 1159:  /* fisthi2_ceil */
    case 1158:  /* fisthi2_floor */
    case 1149:  /* frndintxf2_trunc_i387 */
    case 1148:  /* frndintxf2_ceil_i387 */
    case 1147:  /* frndintxf2_floor_i387 */
    case 1146:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1811:  /* movdi_to_sse */
    case 1274:  /* stack_protect_set_1_di */
    case 1273:  /* stack_protect_set_1_si */
    case 1139:  /* lrintxfdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1132:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1279:  /* stack_protect_test_1_di */
    case 1278:  /* stack_protect_test_1_si */
    case 1129:  /* fyl2xp1xf3_i387 */
    case 1128:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1127:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1126:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1315:  /* xgetbv_rex64 */
    case 1285:  /* rdpmc_rex64 */
    case 1130:  /* fxtractxf3_i387 */
    case 1125:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1122:  /* fprem1xf4_i387 */
    case 1121:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 1111:  /* *fop_df_6_i387 */
    case 1110:  /* *fop_xf_6_i387 */
    case 1109:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1108:  /* *fop_df_5_i387 */
    case 1107:  /* *fop_xf_5_i387 */
    case 1106:  /* *fop_xf_5_i387 */
    case 1102:  /* *fop_xf_3_i387 */
    case 1101:  /* *fop_df_3_i387 */
    case 1100:  /* *fop_sf_3_i387 */
    case 1099:  /* *fop_xf_3_i387 */
    case 1098:  /* *fop_df_3_i387 */
    case 1097:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1105:  /* *fop_df_4_i387 */
    case 1104:  /* *fop_xf_4_i387 */
    case 1103:  /* *fop_xf_4_i387 */
    case 1096:  /* *fop_xf_2_i387 */
    case 1095:  /* *fop_df_2_i387 */
    case 1094:  /* *fop_sf_2_i387 */
    case 1093:  /* *fop_xf_2_i387 */
    case 1092:  /* *fop_df_2_i387 */
    case 1091:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1078:  /* *tls_dynamic_gnu2_combine_64_di */
    case 1077:  /* *tls_dynamic_gnu2_combine_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8828:  /* storedi_via_sse */
    case 8827:  /* loaddi_via_sse */
    case 8826:  /* storedi_via_fpu */
    case 8825:  /* loaddi_via_fpu */
    case 8793:  /* avx512f_cvtneps2bf16_v4sf */
    case 8791:  /* avx512f_cvtneps2bf16_v8sf */
    case 8789:  /* avx512f_cvtneps2bf16_v16sf */
    case 8519:  /* *conflictv2di */
    case 8517:  /* *conflictv4di */
    case 8515:  /* *conflictv8di */
    case 8513:  /* *conflictv4si */
    case 8511:  /* *conflictv8si */
    case 8509:  /* *conflictv16si */
    case 8092:  /* *avx512f_vcvtph2ps512 */
    case 8090:  /* vcvtph2ps256 */
    case 8088:  /* *vcvtph2ps_load */
    case 7627:  /* aesimc */
    case 7600:  /* xop_frczv4df2 */
    case 7599:  /* xop_frczv8sf2 */
    case 7598:  /* xop_frczv2df2 */
    case 7597:  /* xop_frczv4sf2 */
    case 7596:  /* xop_frczdf2 */
    case 7595:  /* xop_frczsf2 */
    case 7516:  /* *avx512er_rsqrt28v8df */
    case 7512:  /* *avx512er_rsqrt28v16sf */
    case 7500:  /* *avx512er_rcp28v8df */
    case 7496:  /* *avx512er_rcp28v16sf */
    case 7492:  /* avx512er_exp2v8df */
    case 7488:  /* avx512er_exp2v16sf */
    case 7255:  /* sse4_1_phminposuw */
    case 7234:  /* sse4_1_movntdqa */
    case 7233:  /* avx2_movntdqa */
    case 7232:  /* avx512f_movntdqa */
    case 7199:  /* sse4a_movntdf */
    case 7198:  /* sse4a_movntsf */
    case 7096:  /* sse2_pmovmskb */
    case 7095:  /* avx2_pmovmskb */
    case 7062:  /* sse2_movmskpd */
    case 7061:  /* avx_movmskpd256 */
    case 7060:  /* sse_movmskps */
    case 7059:  /* avx_movmskps256 */
    case 5700:  /* avx512vl_getexpv2df */
    case 5696:  /* avx512vl_getexpv4df */
    case 5692:  /* avx512f_getexpv8df */
    case 5688:  /* avx512vl_getexpv4sf */
    case 5684:  /* avx512vl_getexpv8sf */
    case 5680:  /* avx512f_getexpv16sf */
    case 5676:  /* avx512fp16_getexpv8hf */
    case 5672:  /* avx512vl_getexpv16hf */
    case 5668:  /* avx512bw_getexpv32hf */
    case 4099:  /* avx512vl_cvtq2maskv2di */
    case 4098:  /* avx512vl_cvtq2maskv4di */
    case 4097:  /* avx512f_cvtq2maskv8di */
    case 4096:  /* avx512vl_cvtd2maskv4si */
    case 4095:  /* avx512vl_cvtd2maskv8si */
    case 4094:  /* avx512f_cvtd2maskv16si */
    case 4093:  /* avx512vl_cvtw2maskv8hi */
    case 4092:  /* avx512vl_cvtw2maskv16hi */
    case 4091:  /* avx512bw_cvtw2maskv32hi */
    case 4090:  /* avx512vl_cvtb2maskv32qi */
    case 4089:  /* avx512vl_cvtb2maskv16qi */
    case 4088:  /* avx512bw_cvtb2maskv64qi */
    case 4035:  /* ufix_notruncv2dfv2di2 */
    case 4033:  /* ufix_notruncv4dfv4di2 */
    case 4029:  /* ufix_notruncv8dfv8di2 */
    case 4027:  /* fix_notruncv2dfv2di2 */
    case 4025:  /* fix_notruncv4dfv4di2 */
    case 4021:  /* fix_notruncv8dfv8di2 */
    case 3983:  /* ufix_notruncv4dfv4si2 */
    case 3979:  /* ufix_notruncv8dfv8si2 */
    case 3973:  /* avx_cvtpd2dq256 */
    case 3969:  /* avx512f_cvtpd2dq512 */
    case 3908:  /* sse2_cvtsd2siq_2 */
    case 3907:  /* sse2_cvtsd2si_2 */
    case 3881:  /* sse2_cvtpd2pi */
    case 3863:  /* *avx512dq_cvtps2uqqv4di */
    case 3859:  /* *avx512dq_cvtps2uqqv8di */
    case 3855:  /* *avx512dq_cvtps2qqv4di */
    case 3851:  /* *avx512dq_cvtps2qqv8di */
    case 3847:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 3843:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 3839:  /* *avx512f_ufix_notruncv16sfv16si */
    case 3835:  /* avx512f_fix_notruncv16sfv16si */
    case 3833:  /* sse2_fix_notruncv4sfv4si */
    case 3831:  /* avx_fix_notruncv8sfv8si */
    case 3799:  /* sse_cvtss2siq_2 */
    case 3798:  /* sse_cvtss2si_2 */
    case 3625:  /* avx512fp16_vcvtsh2siq_2 */
    case 3624:  /* avx512fp16_vcvtsh2usiq_2 */
    case 3623:  /* avx512fp16_vcvtsh2si_2 */
    case 3622:  /* avx512fp16_vcvtsh2usi_2 */
    case 3544:  /* avx512fp16_vcvtph2qq_v2di */
    case 3540:  /* avx512fp16_vcvtph2uqq_v2di */
    case 3536:  /* avx512fp16_vcvtph2dq_v4si */
    case 3532:  /* avx512fp16_vcvtph2udq_v4si */
    case 3528:  /* avx512fp16_vcvtph2w_v8hi */
    case 3524:  /* avx512fp16_vcvtph2uw_v8hi */
    case 3520:  /* avx512fp16_vcvtph2qq_v4di */
    case 3516:  /* avx512fp16_vcvtph2uqq_v4di */
    case 3512:  /* avx512fp16_vcvtph2dq_v8si */
    case 3508:  /* avx512fp16_vcvtph2udq_v8si */
    case 3504:  /* avx512fp16_vcvtph2w_v16hi */
    case 3500:  /* avx512fp16_vcvtph2uw_v16hi */
    case 3496:  /* avx512fp16_vcvtph2qq_v8di */
    case 3492:  /* avx512fp16_vcvtph2uqq_v8di */
    case 3488:  /* avx512fp16_vcvtph2dq_v16si */
    case 3484:  /* avx512fp16_vcvtph2udq_v16si */
    case 3480:  /* avx512fp16_vcvtph2w_v32hi */
    case 3476:  /* avx512fp16_vcvtph2uw_v32hi */
    case 2184:  /* *rsqrt14v2df */
    case 2182:  /* *rsqrt14v4df */
    case 2180:  /* *rsqrt14v8df */
    case 2178:  /* *rsqrt14v4sf */
    case 2176:  /* *rsqrt14v8sf */
    case 2174:  /* *rsqrt14v16sf */
    case 2172:  /* avx512fp16_rsqrtv8hf2 */
    case 2170:  /* avx512fp16_rsqrtv16hf2 */
    case 2168:  /* avx512fp16_rsqrtv32hf2 */
    case 2167:  /* sse_rsqrtv4sf2 */
    case 2166:  /* avx_rsqrtv8sf2 */
    case 2112:  /* *rcp14v2df */
    case 2110:  /* *rcp14v4df */
    case 2108:  /* *rcp14v8df */
    case 2106:  /* *rcp14v4sf */
    case 2104:  /* *rcp14v8sf */
    case 2102:  /* *rcp14v16sf */
    case 2097:  /* avx512fp16_rcpv8hf2 */
    case 2095:  /* avx512fp16_rcpv16hf2 */
    case 2093:  /* avx512fp16_rcpv32hf2 */
    case 2090:  /* sse_rcpv4sf2 */
    case 2089:  /* avx_rcpv8sf2 */
    case 1824:  /* sse2_movntv2di */
    case 1823:  /* avx_movntv4di */
    case 1822:  /* avx512f_movntv8di */
    case 1821:  /* sse2_movntv2df */
    case 1820:  /* avx_movntv4df */
    case 1819:  /* avx512f_movntv8df */
    case 1818:  /* sse_movntv4sf */
    case 1817:  /* avx_movntv8sf */
    case 1816:  /* avx512f_movntv16sf */
    case 1815:  /* sse2_movntidi */
    case 1814:  /* sse2_movntisi */
    case 1813:  /* sse3_lddqu */
    case 1812:  /* avx_lddqu256 */
    case 1757:  /* *avx512vl_loadv8hi */
    case 1756:  /* *avx512vl_loadv16hi */
    case 1755:  /* *avx512bw_loadv32hi */
    case 1754:  /* *avx512vl_loadv32qi */
    case 1753:  /* *avx512vl_loadv16qi */
    case 1752:  /* *avx512bw_loadv64qi */
    case 1745:  /* *avx512vl_loadv2df */
    case 1744:  /* *avx512vl_loadv4df */
    case 1743:  /* *avx512f_loadv8df */
    case 1742:  /* *avx512vl_loadv4sf */
    case 1741:  /* *avx512vl_loadv8sf */
    case 1740:  /* *avx512f_loadv16sf */
    case 1739:  /* *avx512vl_loadv2di */
    case 1738:  /* *avx512vl_loadv4di */
    case 1737:  /* *avx512f_loadv8di */
    case 1736:  /* *avx512vl_loadv4si */
    case 1735:  /* *avx512vl_loadv8si */
    case 1734:  /* *avx512f_loadv16si */
    case 1693:  /* mmx_pmovmskb */
    case 1431:  /* mmx_rsqrtv2sf2 */
    case 1427:  /* mmx_rcpv2sf2 */
    case 1416:  /* sse_movntq */
    case 1376:  /* movdiridi */
    case 1375:  /* movdirisi */
    case 1346:  /* rdsspdi */
    case 1345:  /* rdsspsi */
    case 1314:  /* xgetbv */
    case 1297:  /* xsaves */
    case 1296:  /* xsavec */
    case 1295:  /* xsaveopt */
    case 1294:  /* xsave */
    case 1284:  /* rdpmc */
    case 1165:  /* movmsk_df */
    case 1164:  /* fxamxf2_i387 */
    case 1163:  /* fxamdf2_i387 */
    case 1162:  /* fxamsf2_i387 */
    case 1141:  /* lrintxfsi2 */
    case 1140:  /* lrintxfhi2 */
    case 1138:  /* rintxf2 */
    case 1131:  /* *f2xm1xf2_i387 */
    case 1124:  /* cosxf2 */
    case 1123:  /* sinxf2 */
    case 1116:  /* rsqrthf2 */
    case 1115:  /* *rsqrtsf2_sse */
    case 1113:  /* truncxfdf2_i387_noop_unspec */
    case 1112:  /* truncxfsf2_i387_noop_unspec */
    case 1087:  /* rcphf2 */
    case 1086:  /* *rcpsf2_sse */
    case 1074:  /* *tls_dynamic_gnu2_lea_64_di */
    case 1073:  /* *tls_dynamic_gnu2_lea_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1072:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1071:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1070:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 1069:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1068:  /* *add_tp_di */
    case 1067:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1063:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1062:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1059:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1058:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1057:  /* *tls_global_dynamic_64_di */
    case 1056:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1055:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1053:  /* parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1052:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1038:  /* *tbm_tzmsk_di */
    case 1037:  /* *tbm_tzmsk_si */
    case 1036:  /* *tbm_t1mskc_di */
    case 1035:  /* *tbm_t1mskc_si */
    case 1034:  /* *tbm_blsic_di */
    case 1033:  /* *tbm_blsic_si */
    case 1026:  /* *tbm_blcic_di */
    case 1025:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1024:  /* *tbm_blci_di */
    case 1023:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1020:  /* tbm_bextri_di */
    case 1019:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 8823:  /* atomic_storedi_1 */
    case 8822:  /* atomic_storesi_1 */
    case 8821:  /* atomic_storehi_1 */
    case 8820:  /* atomic_storeqi_1 */
    case 8787:  /* avx512f_cvtne2ps2bf16_v8hi */
    case 8785:  /* avx512f_cvtne2ps2bf16_v16hi */
    case 8783:  /* avx512f_cvtne2ps2bf16_v32hi */
    case 8782:  /* avx512vp2intersect_2intersectv16si */
    case 8781:  /* avx512vp2intersect_2intersectv4si */
    case 8780:  /* avx512vp2intersect_2intersectv8si */
    case 8779:  /* avx512vp2intersect_2intersectv2di */
    case 8778:  /* avx512vp2intersect_2intersectv4di */
    case 8777:  /* avx512vp2intersect_2intersectv8di */
    case 8773:  /* avx512vl_vpshufbitqmbv16qi */
    case 8771:  /* avx512vl_vpshufbitqmbv32qi */
    case 8769:  /* avx512vl_vpshufbitqmbv64qi */
    case 8765:  /* vaesenclast_v64qi */
    case 8764:  /* vaesenclast_v16qi */
    case 8763:  /* vaesenclast_v32qi */
    case 8762:  /* vaesenc_v64qi */
    case 8761:  /* vaesenc_v16qi */
    case 8760:  /* vaesenc_v32qi */
    case 8759:  /* vaesdeclast_v64qi */
    case 8758:  /* vaesdeclast_v16qi */
    case 8757:  /* vaesdeclast_v32qi */
    case 8756:  /* vaesdec_v64qi */
    case 8755:  /* vaesdec_v16qi */
    case 8754:  /* vaesdec_v32qi */
    case 8626:  /* vgf2p8mulb_v16qi */
    case 8624:  /* vgf2p8mulb_v32qi */
    case 8622:  /* vgf2p8mulb_v64qi */
    case 8556:  /* vpmultishiftqbv32qi */
    case 8554:  /* vpmultishiftqbv16qi */
    case 8552:  /* vpmultishiftqbv64qi */
    case 8526:  /* sha256msg2 */
    case 8525:  /* sha256msg1 */
    case 8523:  /* sha1nexte */
    case 8522:  /* sha1msg2 */
    case 8521:  /* sha1msg1 */
    case 8475:  /* avx512vl_getmantv2df */
    case 8471:  /* avx512vl_getmantv4df */
    case 8467:  /* avx512f_getmantv8df */
    case 8463:  /* avx512vl_getmantv4sf */
    case 8459:  /* avx512vl_getmantv8sf */
    case 8455:  /* avx512f_getmantv16sf */
    case 8451:  /* avx512fp16_getmantv8hf */
    case 8447:  /* avx512vl_getmantv16hf */
    case 8443:  /* avx512bw_getmantv32hf */
    case 8435:  /* avx512dq_fpclassv2df */
    case 8433:  /* avx512dq_fpclassv4df */
    case 8431:  /* avx512dq_fpclassv8df */
    case 8429:  /* avx512dq_fpclassv4sf */
    case 8427:  /* avx512dq_fpclassv8sf */
    case 8425:  /* avx512dq_fpclassv16sf */
    case 8423:  /* avx512dq_fpclassv8hf */
    case 8421:  /* avx512dq_fpclassv16hf */
    case 8419:  /* avx512dq_fpclassv32hf */
    case 8105:  /* *avx512f_vcvtps2ph512 */
    case 8103:  /* *avx512f_vcvtps2ph512 */
    case 8101:  /* *vcvtps2ph256 */
    case 8099:  /* vcvtps2ph256 */
    case 8098:  /* *vcvtps2ph_store */
    case 7870:  /* avx_vpermilvarv2df3 */
    case 7868:  /* avx_vpermilvarv4df3 */
    case 7866:  /* avx512f_vpermilvarv8df3 */
    case 7864:  /* avx_vpermilvarv4sf3 */
    case 7862:  /* avx_vpermilvarv8sf3 */
    case 7860:  /* avx512f_vpermilvarv16sf3 */
    case 7678:  /* avx512bw_permvarv32hi */
    case 7676:  /* avx512vl_permvarv16hi */
    case 7674:  /* avx512vl_permvarv8hi */
    case 7672:  /* avx512vl_permvarv32qi */
    case 7670:  /* avx512vl_permvarv16qi */
    case 7668:  /* avx512bw_permvarv64qi */
    case 7666:  /* avx2_permvarv4df */
    case 7664:  /* avx2_permvarv4di */
    case 7662:  /* avx512f_permvarv8df */
    case 7660:  /* avx512f_permvarv8di */
    case 7658:  /* avx512f_permvarv16sf */
    case 7656:  /* avx512f_permvarv16si */
    case 7654:  /* avx2_permvarv8sf */
    case 7652:  /* avx2_permvarv8si */
    case 7628:  /* aeskeygenassist */
    case 7626:  /* aesdeclast */
    case 7625:  /* aesdec */
    case 7624:  /* aesenclast */
    case 7623:  /* aesenc */
    case 7458:  /* sse4_1_roundpd */
    case 7457:  /* avx_roundpd256 */
    case 7456:  /* sse4_1_roundps */
    case 7455:  /* avx_roundps256 */
    case 7205:  /* sse4a_insertq */
    case 7203:  /* sse4a_extrq */
    case 7166:  /* ssse3_psignv2si3 */
    case 7165:  /* ssse3_psignv4hi3 */
    case 7164:  /* ssse3_psignv8qi3 */
    case 7163:  /* ssse3_psignv4si3 */
    case 7162:  /* avx2_psignv8si3 */
    case 7161:  /* ssse3_psignv8hi3 */
    case 7160:  /* avx2_psignv16hi3 */
    case 7159:  /* ssse3_psignv16qi3 */
    case 7158:  /* avx2_psignv32qi3 */
    case 7155:  /* ssse3_pshufbv16qi3 */
    case 7153:  /* avx2_pshufbv32qi3 */
    case 7151:  /* avx512bw_pshufbv64qi3 */
    case 7137:  /* avx512bw_pmaddubsw512v32hi */
    case 7135:  /* avx512bw_pmaddubsw512v16hi */
    case 7133:  /* avx512bw_pmaddubsw512v8hi */
    case 7058:  /* *sse2_psadbw */
    case 7057:  /* *avx2_psadbw */
    case 7056:  /* *avx512f_psadbw */
    case 7000:  /* *avx512bw_pshufhwv32hi */
    case 6994:  /* *avx512bw_pshuflwv32hi */
    case 6719:  /* avx512vl_testnmv2di3 */
    case 6717:  /* avx512vl_testnmv4di3 */
    case 6715:  /* avx512f_testnmv8di3 */
    case 6713:  /* avx512vl_testnmv4si3 */
    case 6711:  /* avx512vl_testnmv8si3 */
    case 6709:  /* avx512f_testnmv16si3 */
    case 6707:  /* avx512vl_testnmv8hi3 */
    case 6705:  /* avx512vl_testnmv16hi3 */
    case 6703:  /* avx512bw_testnmv32hi3 */
    case 6701:  /* avx512vl_testnmv16qi3 */
    case 6699:  /* avx512vl_testnmv32qi3 */
    case 6697:  /* avx512bw_testnmv64qi3 */
    case 6695:  /* avx512vl_testmv2di3 */
    case 6693:  /* avx512vl_testmv4di3 */
    case 6691:  /* avx512f_testmv8di3 */
    case 6689:  /* avx512vl_testmv4si3 */
    case 6687:  /* avx512vl_testmv8si3 */
    case 6685:  /* avx512f_testmv16si3 */
    case 6683:  /* avx512vl_testmv8hi3 */
    case 6681:  /* avx512vl_testmv16hi3 */
    case 6679:  /* avx512bw_testmv32hi3 */
    case 6677:  /* avx512vl_testmv16qi3 */
    case 6675:  /* avx512vl_testmv32qi3 */
    case 6673:  /* avx512bw_testmv64qi3 */
    case 6270:  /* avx512bw_pmaddwd512v8hi */
    case 6268:  /* avx512bw_pmaddwd512v16hi */
    case 6266:  /* avx512bw_pmaddwd512v32hi */
    case 5816:  /* avx512vl_rndscalev2df */
    case 5812:  /* avx512vl_rndscalev4df */
    case 5808:  /* avx512f_rndscalev8df */
    case 5804:  /* avx512vl_rndscalev4sf */
    case 5800:  /* avx512vl_rndscalev8sf */
    case 5796:  /* avx512f_rndscalev16sf */
    case 5792:  /* avx512fp16_rndscalev8hf */
    case 5788:  /* avx512vl_rndscalev16hf */
    case 5784:  /* avx512bw_rndscalev32hf */
    case 4302:  /* avx512vl_scalefv2df */
    case 4298:  /* avx512vl_scalefv4df */
    case 4294:  /* avx512f_scalefv8df */
    case 4290:  /* avx512vl_scalefv4sf */
    case 4286:  /* avx512vl_scalefv8sf */
    case 4282:  /* avx512f_scalefv16sf */
    case 4278:  /* avx512fp16_scalefv8hf */
    case 4274:  /* avx512vl_scalefv16hf */
    case 4270:  /* avx512bw_scalefv32hf */
    case 3454:  /* avx512fp16_fcmulc_v8hf */
    case 3452:  /* avx512fp16_fmulc_v8hf */
    case 3450:  /* avx512vl_fcmulc_v16hf */
    case 3448:  /* avx512vl_fmulc_v16hf */
    case 3444:  /* avx512bw_fcmulc_v32hf */
    case 3440:  /* avx512bw_fmulc_v32hf */
    case 2724:  /* *avx512vl_eqv2di3_1 */
    case 2722:  /* *avx512vl_eqv2di3_1 */
    case 2720:  /* *avx512vl_eqv4di3_1 */
    case 2718:  /* *avx512vl_eqv4di3_1 */
    case 2716:  /* *avx512f_eqv8di3_1 */
    case 2714:  /* *avx512f_eqv8di3_1 */
    case 2712:  /* *avx512vl_eqv4si3_1 */
    case 2710:  /* *avx512vl_eqv4si3_1 */
    case 2708:  /* *avx512vl_eqv8si3_1 */
    case 2706:  /* *avx512vl_eqv8si3_1 */
    case 2704:  /* *avx512f_eqv16si3_1 */
    case 2702:  /* *avx512f_eqv16si3_1 */
    case 2652:  /* *avx512vl_eqv8hi3_1 */
    case 2650:  /* *avx512vl_eqv8hi3_1 */
    case 2648:  /* *avx512vl_eqv16hi3_1 */
    case 2646:  /* *avx512vl_eqv16hi3_1 */
    case 2644:  /* *avx512bw_eqv32hi3_1 */
    case 2642:  /* *avx512bw_eqv32hi3_1 */
    case 2640:  /* *avx512vl_eqv32qi3_1 */
    case 2638:  /* *avx512vl_eqv32qi3_1 */
    case 2636:  /* *avx512vl_eqv16qi3_1 */
    case 2634:  /* *avx512vl_eqv16qi3_1 */
    case 2632:  /* *avx512bw_eqv64qi3_1 */
    case 2630:  /* *avx512bw_eqv64qi3_1 */
    case 2368:  /* *reducepv2df */
    case 2364:  /* *reducepv4df */
    case 2360:  /* *reducepv8df */
    case 2356:  /* *reducepv4sf */
    case 2352:  /* *reducepv8sf */
    case 2348:  /* *reducepv16sf */
    case 2344:  /* *reducepv8hf */
    case 2340:  /* *reducepv16hf */
    case 2336:  /* *reducepv32hf */
    case 2290:  /* ieee_minv2df3 */
    case 2288:  /* ieee_maxv2df3 */
    case 2286:  /* ieee_minv4df3 */
    case 2284:  /* ieee_maxv4df3 */
    case 2280:  /* ieee_minv8df3 */
    case 2276:  /* ieee_maxv8df3 */
    case 2274:  /* ieee_minv4sf3 */
    case 2272:  /* ieee_maxv4sf3 */
    case 2270:  /* ieee_minv8sf3 */
    case 2268:  /* ieee_maxv8sf3 */
    case 2264:  /* ieee_minv16sf3 */
    case 2260:  /* ieee_maxv16sf3 */
    case 2258:  /* ieee_minv8hf3 */
    case 2256:  /* ieee_maxv8hf3 */
    case 2254:  /* ieee_minv16hf3 */
    case 2252:  /* ieee_maxv16hf3 */
    case 2248:  /* ieee_minv32hf3 */
    case 2244:  /* ieee_maxv32hf3 */
    case 1692:  /* *mmx_psadbw */
    case 1660:  /* mmx_pshufbv4qi3 */
    case 1659:  /* mmx_pshufbv8qi3 */
    case 1432:  /* mmx_rsqit1v2sf3 */
    case 1429:  /* mmx_rcpit2v2sf3 */
    case 1428:  /* mmx_rcpit1v2sf3 */
    case 1426:  /* mmx_ieee_minv2sf3 */
    case 1425:  /* mmx_ieee_maxv2sf3 */
    case 1305:  /* xsaves64 */
    case 1304:  /* xsavec64 */
    case 1303:  /* xsaveopt64 */
    case 1302:  /* xsave64 */
    case 1301:  /* xsaves_rex64 */
    case 1300:  /* xsavec_rex64 */
    case 1299:  /* xsaveopt_rex64 */
    case 1298:  /* xsave_rex64 */
    case 1283:  /* sse4_2_crc32di */
    case 1282:  /* sse4_2_crc32si */
    case 1281:  /* sse4_2_crc32hi */
    case 1280:  /* sse4_2_crc32qi */
    case 1231:  /* *ieee_smindf3 */
    case 1230:  /* *ieee_smaxdf3 */
    case 1229:  /* *ieee_sminsf3 */
    case 1228:  /* *ieee_smaxsf3 */
    case 1227:  /* *ieee_sminhf3 */
    case 1226:  /* *ieee_smaxhf3 */
    case 1137:  /* sse4_1_rounddf2 */
    case 1136:  /* sse4_1_roundsf2 */
    case 1135:  /* sse4_1_roundhf2 */
    case 1134:  /* avx512f_scalefdf2 */
    case 1133:  /* avx512f_scalefsf2 */
    case 1018:  /* bmi2_pext_di3 */
    case 1017:  /* bmi2_pext_si3 */
    case 1016:  /* bmi2_pdep_di3 */
    case 1015:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1014:  /* *bmi2_bzhi_zero_extendsidi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1009:  /* *bmi2_bzhi_di3_1_ccz */
    case 1008:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1007:  /* *bmi2_bzhi_di3_1 */
    case 1006:  /* *bmi2_bzhi_si3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1005:  /* *bmi2_bzhi_di3 */
    case 1004:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1003:  /* *bmi_blsr_di_ccz */
    case 1002:  /* *bmi_blsr_si_ccz */
    case 995:  /* *bmi_blsi_di_ccno */
    case 994:  /* *bmi_blsi_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1001:  /* *bmi_blsr_di_cmp */
    case 1000:  /* *bmi_blsr_si_cmp */
    case 993:  /* *bmi_blsi_di_cmp */
    case 992:  /* *bmi_blsi_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 1032:  /* *tbm_blsfill_di */
    case 1031:  /* *tbm_blsfill_si */
    case 1030:  /* *tbm_blcs_di */
    case 1029:  /* *tbm_blcs_si */
    case 1028:  /* *tbm_blcmsk_di */
    case 1027:  /* *tbm_blcmsk_si */
    case 1022:  /* *tbm_blcfill_di */
    case 1021:  /* *tbm_blcfill_si */
    case 999:  /* *bmi_blsr_di */
    case 998:  /* *bmi_blsr_si */
    case 997:  /* *bmi_blsmsk_di */
    case 996:  /* *bmi_blsmsk_si */
    case 991:  /* *bmi_blsi_di */
    case 990:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 989:  /* *bmi_bextr_di_ccz */
    case 988:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1267:  /* probe_stack_range_di */
    case 1266:  /* probe_stack_range_si */
    case 1076:  /* *tls_dynamic_gnu2_call_64_di */
    case 1075:  /* *tls_dynamic_gnu2_call_64_si */
    case 987:  /* bmi_bextr_di */
    case 986:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 983:  /* *lzcnt_di_falsedep */
    case 982:  /* *tzcnt_di_falsedep */
    case 981:  /* *lzcnt_si_falsedep */
    case 980:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1263:  /* probe_stack_1_di */
    case 1262:  /* probe_stack_1_si */
    case 1261:  /* allocate_stack_worker_probe_di */
    case 1260:  /* allocate_stack_worker_probe_si */
    case 1155:  /* *fistdi2_ceil_1 */
    case 1154:  /* *fistdi2_floor_1 */
    case 1153:  /* *fistsi2_ceil_1 */
    case 1152:  /* *fistsi2_floor_1 */
    case 1151:  /* *fisthi2_ceil_1 */
    case 1150:  /* *fisthi2_floor_1 */
    case 1145:  /* frndintxf2_trunc */
    case 1144:  /* frndintxf2_ceil */
    case 1143:  /* frndintxf2_floor */
    case 1142:  /* frndintxf2_roundeven */
    case 985:  /* lzcnt_hi */
    case 984:  /* tzcnt_hi */
    case 979:  /* lzcnt_di */
    case 978:  /* tzcnt_di */
    case 977:  /* lzcnt_si */
    case 976:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 968:  /* *bsr_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      break;

    case 967:  /* *bsr_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0), 0));
      break;

    case 966:  /* bsr_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 963:  /* bsr_rex64_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 965:  /* bsr_1 */
    case 962:  /* bsr_rex64_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 964:  /* bsr */
    case 961:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1044:  /* *popcountsi2_zext_falsedep */
    case 975:  /* *clzsi2_lzcnt_zext_falsedep */
    case 974:  /* *clzsi2_lzcnt_zext_falsedep */
    case 960:  /* *ctzsi2_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1043:  /* *popcountsi2_zext */
    case 973:  /* *clzsi2_lzcnt_zext */
    case 959:  /* *ctzsi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 1042:  /* *popcountdi2_falsedep */
    case 1041:  /* *popcountsi2_falsedep */
    case 972:  /* *clzdi2_lzcnt_falsedep */
    case 971:  /* *clzsi2_lzcnt_falsedep */
    case 958:  /* *ctzdi2_falsedep */
    case 957:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 952:  /* *tzcntdi_1_falsedep */
    case 951:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7201:  /* sse4a_vmmovntv2df */
    case 7200:  /* sse4a_vmmovntv4sf */
    case 3905:  /* sse2_cvtsd2siq */
    case 3903:  /* sse2_cvtsd2si */
    case 3897:  /* avx512f_vcvtsd2usiq */
    case 3895:  /* avx512f_vcvtsd2usi */
    case 3889:  /* avx512f_vcvtss2usiq */
    case 3887:  /* avx512f_vcvtss2usi */
    case 3865:  /* *avx512dq_cvtps2uqqv2di */
    case 3857:  /* *avx512dq_cvtps2qqv2di */
    case 3796:  /* sse_cvtss2siq */
    case 3794:  /* sse_cvtss2si */
    case 3620:  /* avx512fp16_vcvtsh2siq */
    case 3618:  /* avx512fp16_vcvtsh2usiq */
    case 3616:  /* avx512fp16_vcvtsh2si */
    case 3614:  /* avx512fp16_vcvtsh2usi */
    case 943:  /* set_got_offset_rex64 */
    case 942:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 940:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1343:  /* rdseeddi */
    case 1342:  /* rdseedsi */
    case 1341:  /* rdseedhi */
    case 1340:  /* rdranddi */
    case 1339:  /* rdrandsi */
    case 1338:  /* rdrandhi */
    case 1316:  /* fnstenv */
    case 939:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 935:  /* *simple_return_indirect_internaldi */
    case 934:  /* *simple_return_indirect_internalsi */
    case 933:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7110:  /* sse2_clflush */
    case 7108:  /* sse_ldmxcsr */
    case 1399:  /* hreset */
    case 1395:  /* cldemote */
    case 1392:  /* umonitor_di */
    case 1391:  /* umonitor_si */
    case 1388:  /* senduipi */
    case 1368:  /* clzero_di */
    case 1367:  /* clzero_si */
    case 1363:  /* clflushopt */
    case 1362:  /* clwb */
    case 1360:  /* xabort */
    case 1356:  /* clrssbsy */
    case 1350:  /* rstorssp */
    case 1348:  /* incsspdi */
    case 1347:  /* incsspsi */
    case 1337:  /* ptwritedi */
    case 1336:  /* ptwritesi */
    case 1335:  /* wrgsbasedi */
    case 1334:  /* wrfsbasedi */
    case 1333:  /* wrgsbasesi */
    case 1332:  /* wrfsbasesi */
    case 1321:  /* lwp_llwpcbdi */
    case 1320:  /* lwp_llwpcbsi */
    case 1293:  /* fxrstor64 */
    case 1292:  /* fxrstor */
    case 947:  /* split_stack_return */
    case 938:  /* pad */
    case 937:  /* nops */
    case 929:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 8817:  /* mfence_sse2 */
    case 8816:  /* *sse_sfence */
    case 8815:  /* *sse2_lfence */
    case 1344:  /* *pause */
    case 928:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 926:  /* *sibcall_value_pop_memory */
    case 925:  /* *sibcall_value_pop */
    case 924:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 919:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4183:  /* *vec_setv2di_0_zero_extendsi */
    case 4182:  /* *vec_setv4di_0_zero_extendsi */
    case 4181:  /* *vec_setv8di_0_zero_extendsi */
    case 4173:  /* *vec_setv2di_0_zero_extendhi */
    case 4172:  /* *vec_setv4di_0_zero_extendhi */
    case 4171:  /* *vec_setv8di_0_zero_extendhi */
    case 4170:  /* *vec_setv4si_0_zero_extendhi */
    case 4169:  /* *vec_setv8si_0_zero_extendhi */
    case 4168:  /* *vec_setv16si_0_zero_extendhi */
    case 3785:  /* avx512fp16_vcvtsd2sh_mem */
    case 3783:  /* avx512fp16_vcvtss2sh_mem */
    case 3773:  /* avx512fp16_vcvtsh2ss_mem */
    case 3771:  /* avx512fp16_vcvtsh2sd_mem */
    case 2162:  /* *sse2_vmsqrtv2df2 */
    case 2158:  /* *sse_vmsqrtv4sf2 */
    case 2154:  /* *avx512fp16_vmsqrtv8hf2 */
    case 918:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7977:  /* vec_set_hi_v32qi */
    case 7975:  /* vec_set_hi_v16hf */
    case 7974:  /* vec_set_hi_v16hi */
    case 7970:  /* vec_set_hi_v8sf */
    case 7968:  /* vec_set_hi_v8si */
    case 7962:  /* vec_set_hi_v4df */
    case 7960:  /* vec_set_hi_v4di */
    case 6962:  /* vec_set_hi_v8di */
    case 6960:  /* vec_set_hi_v8df */
    case 6954:  /* vec_set_hi_v16si */
    case 6952:  /* vec_set_hi_v16sf */
    case 6609:  /* *andnotv2di3 */
    case 6608:  /* *andnotv4di3 */
    case 6607:  /* *andnotv4si3 */
    case 6606:  /* *andnotv8si3 */
    case 6605:  /* *andnotv8hi3 */
    case 6604:  /* *andnotv16hi3 */
    case 6603:  /* *andnotv32hi3 */
    case 6602:  /* *andnotv16qi3 */
    case 6601:  /* *andnotv32qi3 */
    case 6600:  /* *andnotv64qi3 */
    case 6599:  /* *andnotv8di3 */
    case 6598:  /* *andnotv16si3 */
    case 6099:  /* avx512vl_us_truncatev2div2si2 */
    case 6098:  /* avx512vl_truncatev2div2si2 */
    case 6097:  /* avx512vl_ss_truncatev2div2si2 */
    case 6041:  /* avx512vl_us_truncatev4siv4hi2 */
    case 6040:  /* avx512vl_truncatev4siv4hi2 */
    case 6039:  /* avx512vl_ss_truncatev4siv4hi2 */
    case 6038:  /* avx512vl_us_truncatev2div2hi2 */
    case 6037:  /* avx512vl_truncatev2div2hi2 */
    case 6036:  /* avx512vl_ss_truncatev2div2hi2 */
    case 6035:  /* avx512vl_us_truncatev4div4hi2 */
    case 6034:  /* avx512vl_truncatev4div4hi2 */
    case 6033:  /* avx512vl_ss_truncatev4div4hi2 */
    case 5941:  /* avx512vl_us_truncatev8hiv8qi2 */
    case 5940:  /* avx512vl_truncatev8hiv8qi2 */
    case 5939:  /* avx512vl_ss_truncatev8hiv8qi2 */
    case 5938:  /* avx512vl_us_truncatev4siv4qi2 */
    case 5937:  /* avx512vl_truncatev4siv4qi2 */
    case 5936:  /* avx512vl_ss_truncatev4siv4qi2 */
    case 5935:  /* avx512vl_us_truncatev8siv8qi2 */
    case 5934:  /* avx512vl_truncatev8siv8qi2 */
    case 5933:  /* avx512vl_ss_truncatev8siv8qi2 */
    case 5932:  /* avx512vl_us_truncatev2div2qi2 */
    case 5931:  /* avx512vl_truncatev2div2qi2 */
    case 5930:  /* avx512vl_ss_truncatev2div2qi2 */
    case 5929:  /* avx512vl_us_truncatev4div4qi2 */
    case 5928:  /* avx512vl_truncatev4div4qi2 */
    case 5927:  /* avx512vl_ss_truncatev4div4qi2 */
    case 5863:  /* sse2_loadhpd */
    case 4147:  /* sse_loadhps */
    case 4076:  /* *sse2_cvtpd2ps */
    case 3954:  /* *avx512dq_floatunsv2div2sf2 */
    case 3953:  /* *avx512dq_floatv2div2sf2 */
    case 3760:  /* *avx512fp16_vcvtpd2ph_v2df */
    case 3755:  /* *avx512fp16_vcvtps2ph_v4sf */
    case 3754:  /* *avx512fp16_vcvtpd2ph_v4df */
    case 3609:  /* *avx512fp16_vcvtuqq2ph_v2di */
    case 3608:  /* *avx512fp16_vcvtqq2ph_v2di */
    case 3599:  /* *avx512fp16_vcvtuqq2ph_v4di */
    case 3598:  /* *avx512fp16_vcvtqq2ph_v4di */
    case 3597:  /* *avx512fp16_vcvtudq2ph_v4si */
    case 3596:  /* *avx512fp16_vcvtdq2ph_v4si */
    case 2884:  /* *andnotv1ti3 */
    case 2883:  /* *andnottf3 */
    case 2882:  /* *andnotdf3 */
    case 2881:  /* *andnotsf3 */
    case 2825:  /* avx512f_andnotv8df3 */
    case 2823:  /* avx512f_andnotv16sf3 */
    case 2822:  /* avx512fp16_andnotv32hf3 */
    case 2820:  /* sse2_andnotv2df3 */
    case 2818:  /* avx_andnotv4df3 */
    case 2816:  /* sse_andnotv4sf3 */
    case 2814:  /* avx_andnotv8sf3 */
    case 2813:  /* avx512fp16_andnotv8hf3 */
    case 2812:  /* avx512fp16_andnotv16hf3 */
    case 2150:  /* sse2_vmsqrtv2df2 */
    case 2146:  /* sse_vmsqrtv4sf2 */
    case 2142:  /* avx512fp16_vmsqrtv8hf2 */
    case 1810:  /* *sse2_movq128_v2df */
    case 1809:  /* *sse2_movq128_v2di */
    case 1609:  /* mmx_andnotv2si3 */
    case 1608:  /* mmx_andnotv4hi3 */
    case 1607:  /* mmx_andnotv8qi3 */
    case 1445:  /* *mmx_andnotv2sf3 */
    case 921:  /* *sibcall_value */
    case 920:  /* *sibcall_value */
    case 917:  /* *call_value */
    case 916:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 915:  /* *sibcall_pop_memory */
    case 914:  /* *sibcall_pop */
    case 913:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 908:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 907:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 904:  /* *tablejump_1 */
    case 903:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 902:  /* *indirect_jump */
    case 901:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 900:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 899:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 8799:  /* avx512f_dpbf16ps_v4sf */
    case 8797:  /* avx512f_dpbf16ps_v8sf */
    case 8795:  /* avx512f_dpbf16ps_v16sf */
    case 8768:  /* vpclmulqdq_v2di */
    case 8767:  /* vpclmulqdq_v4di */
    case 8766:  /* vpclmulqdq_v8di */
    case 8747:  /* vpdpwssds_v4si */
    case 8746:  /* vpdpwssds_v8si */
    case 8745:  /* vpdpwssds_v16si */
    case 8738:  /* vpdpwssd_v4si */
    case 8737:  /* vpdpwssd_v8si */
    case 8736:  /* vpdpwssd_v16si */
    case 8729:  /* vpdpbusds_v4si */
    case 8728:  /* vpdpbusds_v8si */
    case 8727:  /* vpdpbusds_v16si */
    case 8720:  /* vpdpbusd_v4si */
    case 8719:  /* vpdpbusd_v8si */
    case 8718:  /* vpdpbusd_v16si */
    case 8699:  /* vpshldv_v2di */
    case 8698:  /* vpshldv_v4si */
    case 8697:  /* vpshldv_v8hi */
    case 8696:  /* vpshldv_v4di */
    case 8695:  /* vpshldv_v8si */
    case 8694:  /* vpshldv_v16hi */
    case 8693:  /* vpshldv_v8di */
    case 8692:  /* vpshldv_v16si */
    case 8691:  /* vpshldv_v32hi */
    case 8672:  /* vpshrdv_v2di */
    case 8671:  /* vpshrdv_v4si */
    case 8670:  /* vpshrdv_v8hi */
    case 8669:  /* vpshrdv_v4di */
    case 8668:  /* vpshrdv_v8si */
    case 8667:  /* vpshrdv_v16hi */
    case 8666:  /* vpshrdv_v8di */
    case 8665:  /* vpshrdv_v16si */
    case 8664:  /* vpshrdv_v32hi */
    case 8662:  /* vpshld_v2di */
    case 8660:  /* vpshld_v4si */
    case 8658:  /* vpshld_v8hi */
    case 8656:  /* vpshld_v4di */
    case 8654:  /* vpshld_v8si */
    case 8652:  /* vpshld_v16hi */
    case 8650:  /* vpshld_v8di */
    case 8648:  /* vpshld_v16si */
    case 8646:  /* vpshld_v32hi */
    case 8644:  /* vpshrd_v2di */
    case 8642:  /* vpshrd_v4si */
    case 8640:  /* vpshrd_v8hi */
    case 8638:  /* vpshrd_v4di */
    case 8636:  /* vpshrd_v8si */
    case 8634:  /* vpshrd_v16hi */
    case 8632:  /* vpshrd_v8di */
    case 8630:  /* vpshrd_v16si */
    case 8628:  /* vpshrd_v32hi */
    case 8620:  /* vgf2p8affineqb_v16qi */
    case 8618:  /* vgf2p8affineqb_v32qi */
    case 8616:  /* vgf2p8affineqb_v64qi */
    case 8614:  /* vgf2p8affineinvqb_v16qi */
    case 8612:  /* vgf2p8affineinvqb_v32qi */
    case 8610:  /* vgf2p8affineinvqb_v64qi */
    case 8575:  /* avx5124vnniw_vp4dpwssds */
    case 8572:  /* avx5124vnniw_vp4dpwssd */
    case 8569:  /* avx5124fmaddps_4fnmaddss */
    case 8566:  /* avx5124fmaddps_4fnmaddps */
    case 8563:  /* avx5124fmaddps_4fmaddss */
    case 8560:  /* avx5124fmaddps_4fmaddps */
    case 8544:  /* vpamdd52huqv2di */
    case 8542:  /* vpamdd52luqv2di */
    case 8540:  /* vpamdd52huqv4di */
    case 8538:  /* vpamdd52luqv4di */
    case 8536:  /* vpamdd52huqv8di */
    case 8534:  /* vpamdd52luqv8di */
    case 8527:  /* sha256rnds2 */
    case 8524:  /* sha1rnds4 */
    case 8495:  /* *avx512bw_dbpsadbwv32hi */
    case 8493:  /* *avx512bw_dbpsadbwv16hi */
    case 8491:  /* *avx512bw_dbpsadbwv8hi */
    case 8409:  /* avx512dq_rangepv2df */
    case 8407:  /* avx512dq_rangepv4df */
    case 8403:  /* avx512dq_rangepv8df */
    case 8401:  /* avx512dq_rangepv4sf */
    case 8399:  /* avx512dq_rangepv8sf */
    case 8395:  /* avx512dq_rangepv16sf */
    case 8394:  /* *expandv8hi_mask */
    case 8393:  /* *expandv16hi_mask */
    case 8392:  /* *expandv32hi_mask */
    case 8391:  /* *expandv32qi_mask */
    case 8390:  /* *expandv16qi_mask */
    case 8389:  /* *expandv64qi_mask */
    case 8388:  /* *expandv2df_mask */
    case 8387:  /* *expandv2di_mask */
    case 8386:  /* *expandv4sf_mask */
    case 8385:  /* *expandv4si_mask */
    case 8384:  /* *expandv4df_mask */
    case 8383:  /* *expandv4di_mask */
    case 8382:  /* *expandv8sf_mask */
    case 8381:  /* *expandv8si_mask */
    case 8380:  /* *expandv8df_mask */
    case 8379:  /* *expandv8di_mask */
    case 8378:  /* *expandv16sf_mask */
    case 8377:  /* *expandv16si_mask */
    case 8376:  /* expandv8hi_mask */
    case 8375:  /* expandv16hi_mask */
    case 8374:  /* expandv32hi_mask */
    case 8373:  /* expandv32qi_mask */
    case 8372:  /* expandv16qi_mask */
    case 8371:  /* expandv64qi_mask */
    case 8370:  /* expandv2df_mask */
    case 8369:  /* expandv2di_mask */
    case 8368:  /* expandv4sf_mask */
    case 8367:  /* expandv4si_mask */
    case 8366:  /* expandv4df_mask */
    case 8365:  /* expandv4di_mask */
    case 8364:  /* expandv8sf_mask */
    case 8363:  /* expandv8si_mask */
    case 8362:  /* expandv8df_mask */
    case 8361:  /* expandv8di_mask */
    case 8360:  /* expandv16sf_mask */
    case 8359:  /* expandv16si_mask */
    case 8340:  /* compressv8hi_mask */
    case 8339:  /* compressv16hi_mask */
    case 8338:  /* compressv32hi_mask */
    case 8337:  /* compressv32qi_mask */
    case 8336:  /* compressv16qi_mask */
    case 8335:  /* compressv64qi_mask */
    case 8334:  /* avx512vl_compressv2df_mask */
    case 8333:  /* avx512vl_compressv2di_mask */
    case 8332:  /* avx512vl_compressv4sf_mask */
    case 8331:  /* avx512vl_compressv4si_mask */
    case 8330:  /* avx512vl_compressv4df_mask */
    case 8329:  /* avx512vl_compressv4di_mask */
    case 8328:  /* avx512vl_compressv8sf_mask */
    case 8327:  /* avx512vl_compressv8si_mask */
    case 8326:  /* avx512f_compressv8df_mask */
    case 8325:  /* avx512f_compressv8di_mask */
    case 8324:  /* avx512f_compressv16sf_mask */
    case 8323:  /* avx512f_compressv16si_mask */
    case 7946:  /* *avx_vperm2f128v4df_full */
    case 7945:  /* *avx_vperm2f128v8sf_full */
    case 7944:  /* *avx_vperm2f128v8si_full */
    case 7924:  /* avx512vl_vpermt2varv16qi3 */
    case 7922:  /* avx512vl_vpermt2varv32qi3 */
    case 7920:  /* avx512bw_vpermt2varv64qi3 */
    case 7918:  /* avx512vl_vpermt2varv8hi3 */
    case 7916:  /* avx512vl_vpermt2varv16hi3 */
    case 7914:  /* avx512bw_vpermt2varv32hi3 */
    case 7912:  /* avx512vl_vpermt2varv2df3 */
    case 7910:  /* avx512vl_vpermt2varv2di3 */
    case 7908:  /* avx512vl_vpermt2varv4sf3 */
    case 7906:  /* avx512vl_vpermt2varv4si3 */
    case 7904:  /* avx512vl_vpermt2varv4df3 */
    case 7902:  /* avx512vl_vpermt2varv4di3 */
    case 7900:  /* avx512vl_vpermt2varv8sf3 */
    case 7898:  /* avx512vl_vpermt2varv8si3 */
    case 7896:  /* avx512f_vpermt2varv8df3 */
    case 7894:  /* avx512f_vpermt2varv8di3 */
    case 7892:  /* avx512f_vpermt2varv16sf3 */
    case 7890:  /* avx512f_vpermt2varv16si3 */
    case 7703:  /* avx2_permv2ti */
    case 7629:  /* pclmulqdq */
    case 7618:  /* xop_pcom_tfv2di3 */
    case 7617:  /* xop_pcom_tfv4si3 */
    case 7616:  /* xop_pcom_tfv8hi3 */
    case 7615:  /* xop_pcom_tfv16qi3 */
    case 7571:  /* xop_pperm */
    case 7244:  /* sse4_1_pblendvb */
    case 7243:  /* avx2_pblendvb */
    case 7236:  /* sse4_1_mpsadbw */
    case 7235:  /* avx2_mpsadbw */
    case 7231:  /* sse4_1_dppd */
    case 7230:  /* avx_dppd256 */
    case 7229:  /* sse4_1_dpps */
    case 7228:  /* avx_dpps256 */
    case 7215:  /* sse4_1_blendvsd */
    case 7214:  /* sse4_1_blendvss */
    case 7213:  /* sse4_1_blendvpd */
    case 7212:  /* avx_blendvpd256 */
    case 7211:  /* sse4_1_blendvps */
    case 7210:  /* avx_blendvps256 */
    case 7202:  /* sse4a_extrqi */
    case 7173:  /* ssse3_palignrdi */
    case 7172:  /* ssse3_palignrti */
    case 7171:  /* avx2_palignrv2ti */
    case 7170:  /* avx512bw_palignrv4ti */
    case 5726:  /* *avx512vl_alignv2di */
    case 5724:  /* *avx512vl_alignv4di */
    case 5722:  /* *avx512f_alignv8di */
    case 5720:  /* *avx512vl_alignv4si */
    case 5718:  /* *avx512vl_alignv8si */
    case 5716:  /* *avx512f_alignv16si */
    case 3425:  /* fma_fcmaddc_v4sf_pair */
    case 3424:  /* fma_fmaddc_v4sf_pair */
    case 3423:  /* fma_fcmaddc_v8sf_pair */
    case 3422:  /* fma_fmaddc_v8sf_pair */
    case 3421:  /* fma_fcmaddc_v16sf_pair */
    case 3420:  /* fma_fmaddc_v16sf_pair */
    case 3406:  /* fma_fcmaddc_v8hf */
    case 3404:  /* fma_fmaddc_v8hf */
    case 3402:  /* fma_fcmaddc_v16hf */
    case 3400:  /* fma_fmaddc_v16hf */
    case 3396:  /* fma_fcmaddc_v32hf */
    case 3392:  /* fma_fmaddc_v32hf */
    case 3183:  /* *fma_fmaddsub_v2df */
    case 3181:  /* *fma_fmaddsub_v4df */
    case 3177:  /* *fma_fmaddsub_v8df */
    case 3176:  /* *fma_fmaddsub_df */
    case 3174:  /* *fma_fmaddsub_v4sf */
    case 3172:  /* *fma_fmaddsub_v8sf */
    case 3168:  /* *fma_fmaddsub_v16sf */
    case 3167:  /* *fma_fmaddsub_sf */
    case 3166:  /* *fma_fmaddsub_hf */
    case 3164:  /* *fma_fmaddsub_v8hf */
    case 3162:  /* *fma_fmaddsub_v16hf */
    case 3158:  /* *fma_fmaddsub_v32hf */
    case 3157:  /* *fma_fmaddsub_v2df */
    case 3156:  /* *fma_fmaddsub_v4df */
    case 3155:  /* *fma_fmaddsub_v4sf */
    case 3154:  /* *fma_fmaddsub_v8sf */
    case 2736:  /* avx512vl_ucmpv2di3 */
    case 2734:  /* avx512vl_ucmpv4di3 */
    case 2732:  /* avx512f_ucmpv8di3 */
    case 2730:  /* avx512vl_ucmpv4si3 */
    case 2728:  /* avx512vl_ucmpv8si3 */
    case 2726:  /* avx512f_ucmpv16si3 */
    case 2664:  /* avx512vl_ucmpv8hi3 */
    case 2662:  /* avx512vl_ucmpv16hi3 */
    case 2660:  /* avx512bw_ucmpv32hi3 */
    case 2658:  /* avx512vl_ucmpv32qi3 */
    case 2656:  /* avx512vl_ucmpv16qi3 */
    case 2654:  /* avx512bw_ucmpv64qi3 */
    case 2580:  /* avx512vl_cmpv8hi3 */
    case 2578:  /* avx512vl_cmpv16hi3 */
    case 2576:  /* avx512bw_cmpv32hi3 */
    case 2574:  /* avx512vl_cmpv32qi3 */
    case 2572:  /* avx512vl_cmpv16qi3 */
    case 2570:  /* avx512bw_cmpv64qi3 */
    case 2466:  /* avx512vl_cmpv2df3 */
    case 2464:  /* avx512vl_cmpv4df3 */
    case 2460:  /* avx512f_cmpv8df3 */
    case 2458:  /* avx512vl_cmpv4sf3 */
    case 2456:  /* avx512vl_cmpv8sf3 */
    case 2452:  /* avx512f_cmpv16sf3 */
    case 2450:  /* avx512fp16_cmpv8hf3 */
    case 2448:  /* avx512vl_cmpv16hf3 */
    case 2444:  /* avx512bw_cmpv32hf3 */
    case 2442:  /* avx512vl_cmpv2di3 */
    case 2440:  /* avx512vl_cmpv4di3 */
    case 2436:  /* avx512f_cmpv8di3 */
    case 2434:  /* avx512vl_cmpv4si3 */
    case 2432:  /* avx512vl_cmpv8si3 */
    case 2428:  /* avx512f_cmpv16si3 */
    case 2387:  /* avx_cmpv2df3 */
    case 2386:  /* avx_cmpv4df3 */
    case 2385:  /* avx_cmpv4sf3 */
    case 2384:  /* avx_cmpv8sf3 */
    case 1603:  /* mmx_ppermv32 */
    case 1602:  /* mmx_ppermv64 */
    case 1594:  /* mmx_pblendvb_v2hi */
    case 1593:  /* mmx_pblendvb_v2qi */
    case 1592:  /* mmx_pblendvb_v4qi */
    case 1591:  /* mmx_pblendvb_v8qi */
    case 1444:  /* mmx_blendvps */
    case 1214:  /* movhf_mask */
    case 898:  /* setcc_hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2425:  /* sse2_maskcmpv2df3 */
    case 2424:  /* avx_maskcmpv4df3 */
    case 2423:  /* sse_maskcmpv4sf3 */
    case 2422:  /* avx_maskcmpv8sf3 */
    case 2421:  /* *sse2_maskcmpv2df3_comm */
    case 2420:  /* *avx_maskcmpv4df3_comm */
    case 2419:  /* *sse_maskcmpv4sf3_comm */
    case 2418:  /* *avx_maskcmpv8sf3_comm */
    case 1443:  /* *mmx_maskcmpv2sf3 */
    case 1442:  /* *mmx_maskcmpv2sf3_comm */
    case 1090:  /* *fop_df_1 */
    case 1089:  /* *fop_sf_1 */
    case 1088:  /* *fop_xf_1_i387 */
    case 1081:  /* *fop_df_comm */
    case 1080:  /* *fop_sf_comm */
    case 1079:  /* *fop_xf_comm_i387 */
    case 897:  /* setcc_df_sse */
    case 896:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 888:  /* *btdi_setncdi */
    case 887:  /* *btsi_setncsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 886:  /* *btdi_setncqi */
    case 885:  /* *btsi_setncqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 884:  /* *btdi_setcqi */
    case 883:  /* *btsi_setcqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 882:  /* *jcc_btdi_mask_1 */
    case 881:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 880:  /* *jcc_btdi_mask */
    case 879:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 878:  /* *jcc_btdi_1 */
    case 877:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 876:  /* *jcc_btdi */
    case 875:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 874:  /* *btdi */
    case 873:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 872:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 871:  /* *btrq_imm */
    case 870:  /* *btsq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 869:  /* *btrhi_2 */
    case 868:  /* *btrqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2), 0));
      break;

    case 1013:  /* *bmi2_bzhi_di3_3 */
    case 1012:  /* *bmi2_bzhi_si3_3 */
    case 1011:  /* *bmi2_bzhi_di3_2 */
    case 1010:  /* *bmi2_bzhi_si3_2 */
    case 867:  /* *btrhi_1 */
    case 866:  /* *btrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 865:  /* *btrdi_mask_1 */
    case 864:  /* *btrsi_mask_1 */
    case 859:  /* *btcdi_mask_1 */
    case 858:  /* *btsdi_mask_1 */
    case 857:  /* *btcsi_mask_1 */
    case 856:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 863:  /* *btrdi_mask */
    case 862:  /* *btrsi_mask */
    case 855:  /* *btcdi_mask */
    case 854:  /* *btsdi_mask */
    case 853:  /* *btcsi_mask */
    case 852:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 861:  /* *btrdi */
    case 860:  /* *btrsi */
    case 851:  /* *btcdi */
    case 850:  /* *btsdi */
    case 849:  /* *btcsi */
    case 848:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 830:  /* ix86_rotrti3_doubleword */
    case 829:  /* ix86_rotrdi3_doubleword */
    case 828:  /* ix86_rotlti3_doubleword */
    case 827:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 6929:  /* vec_interleave_lowv4si */
    case 6927:  /* *avx512f_interleave_lowv16si */
    case 6925:  /* avx2_interleave_lowv8si */
    case 6923:  /* vec_interleave_highv4si */
    case 6921:  /* *avx512f_interleave_highv16si */
    case 6919:  /* avx2_interleave_highv8si */
    case 6917:  /* vec_interleave_lowv8hf */
    case 6915:  /* vec_interleave_lowv8hi */
    case 6913:  /* avx2_interleave_lowv16hf */
    case 6911:  /* avx2_interleave_lowv16hi */
    case 6909:  /* *avx512bw_interleave_lowv32hf */
    case 6907:  /* *avx512bw_interleave_lowv32hi */
    case 6905:  /* vec_interleave_highv8hf */
    case 6903:  /* vec_interleave_highv8hi */
    case 6901:  /* avx2_interleave_highv16hf */
    case 6899:  /* avx2_interleave_highv16hi */
    case 6897:  /* avx512bw_interleave_highv32hf */
    case 6895:  /* avx512bw_interleave_highv32hi */
    case 6893:  /* vec_interleave_lowv16qi */
    case 6891:  /* avx2_interleave_lowv32qi */
    case 6889:  /* avx512bw_interleave_lowv64qi */
    case 6887:  /* vec_interleave_highv16qi */
    case 6885:  /* avx2_interleave_highv32qi */
    case 6883:  /* avx512bw_interleave_highv64qi */
    case 5855:  /* vec_interleave_lowv2di */
    case 5853:  /* *avx512f_interleave_lowv8di */
    case 5851:  /* avx2_interleave_lowv4di */
    case 5849:  /* vec_interleave_highv2di */
    case 5847:  /* *avx512f_interleave_highv8di */
    case 5845:  /* avx2_interleave_highv4di */
    case 4257:  /* *vec_interleave_lowv2df */
    case 4254:  /* *avx_unpcklpd256 */
    case 4252:  /* *avx512f_unpcklpd512 */
    case 4251:  /* *vec_interleave_highv2df */
    case 4248:  /* avx_unpckhpd256 */
    case 4246:  /* *avx512f_unpckhpd512 */
    case 4128:  /* vec_interleave_lowv4sf */
    case 4125:  /* avx_unpcklps256 */
    case 4123:  /* *avx512f_unpcklps512 */
    case 4121:  /* vec_interleave_highv4sf */
    case 4119:  /* avx_unpckhps256 */
    case 4117:  /* *avx512f_unpckhps512 */
    case 4116:  /* sse_movlhps */
    case 4115:  /* sse_movhlps */
    case 1642:  /* mmx_punpckldq */
    case 1641:  /* mmx_punpckhdq */
    case 1640:  /* mmx_punpcklwd */
    case 1639:  /* mmx_punpckhwd */
    case 1638:  /* mmx_punpcklbw_low */
    case 1637:  /* mmx_punpcklbw */
    case 1636:  /* mmx_punpckhbw_low */
    case 1635:  /* mmx_punpckhbw */
    case 1463:  /* *vec_interleave_highv2sf */
    case 1462:  /* *vec_interleave_lowv2sf */
    case 837:  /* *bmi2_rorxsi3_1_zext */
    case 776:  /* *bmi2_ashrsi3_1_zext */
    case 775:  /* *bmi2_lshrsi3_1_zext */
    case 720:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 8064:  /* avx_vec_concatv8df */
    case 8063:  /* avx_vec_concatv16sf */
    case 8062:  /* avx_vec_concatv8di */
    case 8061:  /* avx_vec_concatv16si */
    case 8060:  /* avx_vec_concatv32hf */
    case 8059:  /* avx_vec_concatv32hi */
    case 8058:  /* avx_vec_concatv64qi */
    case 8057:  /* avx_vec_concatv4df */
    case 8056:  /* avx_vec_concatv8sf */
    case 8055:  /* avx_vec_concatv4di */
    case 8054:  /* avx_vec_concatv8si */
    case 8053:  /* avx_vec_concatv16hf */
    case 8052:  /* avx_vec_concatv16hi */
    case 8051:  /* avx_vec_concatv32qi */
    case 8049:  /* avx512bw_lshrvv32hi */
    case 8047:  /* avx512bw_ashlvv32hi */
    case 8045:  /* avx512vl_lshrvv16hi */
    case 8043:  /* avx512vl_ashlvv16hi */
    case 8041:  /* avx512vl_lshrvv8hi */
    case 8039:  /* avx512vl_ashlvv8hi */
    case 8037:  /* avx2_lshrvv2di */
    case 8035:  /* avx2_ashlvv2di */
    case 8033:  /* avx2_lshrvv4di */
    case 8031:  /* avx2_ashlvv4di */
    case 8029:  /* avx512f_lshrvv8di */
    case 8027:  /* avx512f_ashlvv8di */
    case 8025:  /* avx2_lshrvv4si */
    case 8023:  /* avx2_ashlvv4si */
    case 8021:  /* avx2_lshrvv8si */
    case 8019:  /* avx2_ashlvv8si */
    case 8017:  /* avx512f_lshrvv16si */
    case 8015:  /* avx512f_ashlvv16si */
    case 8013:  /* avx512bw_ashrvv32hi */
    case 8011:  /* avx512vl_ashrvv16hi */
    case 8009:  /* avx512vl_ashrvv8hi */
    case 8007:  /* avx512f_ashrvv8di */
    case 8005:  /* avx2_ashrvv4di */
    case 8003:  /* avx2_ashrvv2di */
    case 8001:  /* avx512f_ashrvv16si */
    case 7999:  /* avx2_ashrvv8si */
    case 7997:  /* avx2_ashrvv4si */
    case 7582:  /* xop_rotrv2di3 */
    case 7581:  /* xop_rotrv4si3 */
    case 7580:  /* xop_rotrv8hi3 */
    case 7579:  /* xop_rotrv16qi3 */
    case 7578:  /* xop_rotlv2di3 */
    case 7577:  /* xop_rotlv4si3 */
    case 7576:  /* xop_rotlv8hi3 */
    case 7575:  /* xop_rotlv16qi3 */
    case 7041:  /* *vec_concatv2di_0 */
    case 7040:  /* vec_concatv2di */
    case 7039:  /* *vec_concatv4si_0 */
    case 7038:  /* *vec_concatv8hi_0 */
    case 7037:  /* *vec_concatv16qi_0 */
    case 7034:  /* *vec_concatv4si */
    case 7033:  /* *vec_concatv8hi */
    case 7032:  /* *vec_concatv16qi */
    case 7031:  /* *vec_concatv2si */
    case 7030:  /* *vec_concatv2si_sse4_1 */
    case 6672:  /* xorv1ti3 */
    case 6671:  /* iorv1ti3 */
    case 6670:  /* andv1ti3 */
    case 6669:  /* *xorv8hi3 */
    case 6668:  /* *iorv8hi3 */
    case 6667:  /* *andv8hi3 */
    case 6666:  /* *xorv16hi3 */
    case 6665:  /* *iorv16hi3 */
    case 6664:  /* *andv16hi3 */
    case 6663:  /* *xorv32hi3 */
    case 6662:  /* *iorv32hi3 */
    case 6661:  /* *andv32hi3 */
    case 6660:  /* *xorv16qi3 */
    case 6659:  /* *iorv16qi3 */
    case 6658:  /* *andv16qi3 */
    case 6657:  /* *xorv32qi3 */
    case 6656:  /* *iorv32qi3 */
    case 6655:  /* *andv32qi3 */
    case 6654:  /* *xorv64qi3 */
    case 6653:  /* *iorv64qi3 */
    case 6652:  /* *andv64qi3 */
    case 6650:  /* *xorv2di3 */
    case 6648:  /* *iorv2di3 */
    case 6646:  /* *andv2di3 */
    case 6644:  /* *xorv4di3 */
    case 6642:  /* *iorv4di3 */
    case 6640:  /* *andv4di3 */
    case 6638:  /* *xorv8di3 */
    case 6636:  /* *iorv8di3 */
    case 6634:  /* *andv8di3 */
    case 6632:  /* *xorv4si3 */
    case 6630:  /* *iorv4si3 */
    case 6628:  /* *andv4si3 */
    case 6626:  /* *xorv8si3 */
    case 6624:  /* *iorv8si3 */
    case 6622:  /* *andv8si3 */
    case 6620:  /* *xorv16si3 */
    case 6618:  /* *iorv16si3 */
    case 6616:  /* *andv16si3 */
    case 6596:  /* *one_cmplv2di2 */
    case 6594:  /* *one_cmplv4di2 */
    case 6592:  /* *one_cmplv4si2 */
    case 6590:  /* *one_cmplv8si2 */
    case 6589:  /* *one_cmplv8hi2 */
    case 6588:  /* *one_cmplv16hi2 */
    case 6587:  /* *one_cmplv32hi2 */
    case 6586:  /* *one_cmplv16qi2 */
    case 6585:  /* *one_cmplv32qi2 */
    case 6584:  /* *one_cmplv64qi2 */
    case 6582:  /* *one_cmplv8di2 */
    case 6580:  /* *one_cmplv16si2 */
    case 6579:  /* *sse2_gtv4si3 */
    case 6578:  /* *sse2_gtv8hi3 */
    case 6577:  /* *sse2_gtv16qi3 */
    case 6576:  /* avx2_gtv4di3 */
    case 6575:  /* avx2_gtv8si3 */
    case 6574:  /* avx2_gtv16hi3 */
    case 6573:  /* avx2_gtv32qi3 */
    case 6572:  /* sse4_2_gtv2di3 */
    case 6571:  /* *sse2_eqv4si3 */
    case 6570:  /* *sse2_eqv8hi3 */
    case 6569:  /* *sse2_eqv16qi3 */
    case 6568:  /* *sse4_1_eqv2di3 */
    case 6545:  /* *avx2_eqv4di3 */
    case 6544:  /* *avx2_eqv8si3 */
    case 6543:  /* *avx2_eqv16hi3 */
    case 6542:  /* *avx2_eqv32qi3 */
    case 6541:  /* *uminv16qi3 */
    case 6540:  /* *umaxv16qi3 */
    case 6538:  /* *sse4_1_uminv4si3 */
    case 6536:  /* *sse4_1_umaxv4si3 */
    case 6534:  /* *sse4_1_uminv8hi3 */
    case 6532:  /* *sse4_1_umaxv8hi3 */
    case 6531:  /* *sminv8hi3 */
    case 6530:  /* *smaxv8hi3 */
    case 6528:  /* *sse4_1_sminv4si3 */
    case 6526:  /* *sse4_1_smaxv4si3 */
    case 6524:  /* *sse4_1_sminv16qi3 */
    case 6522:  /* *sse4_1_smaxv16qi3 */
    case 6520:  /* *uminv8hi3 */
    case 6518:  /* *umaxv8hi3 */
    case 6516:  /* *sminv8hi3 */
    case 6514:  /* *smaxv8hi3 */
    case 6512:  /* *uminv16hi3 */
    case 6510:  /* *umaxv16hi3 */
    case 6508:  /* *sminv16hi3 */
    case 6506:  /* *smaxv16hi3 */
    case 6504:  /* *uminv32hi3 */
    case 6502:  /* *umaxv32hi3 */
    case 6500:  /* *sminv32hi3 */
    case 6498:  /* *smaxv32hi3 */
    case 6496:  /* *uminv32qi3 */
    case 6494:  /* *umaxv32qi3 */
    case 6492:  /* *sminv32qi3 */
    case 6490:  /* *smaxv32qi3 */
    case 6488:  /* *uminv16qi3 */
    case 6486:  /* *umaxv16qi3 */
    case 6484:  /* *sminv16qi3 */
    case 6482:  /* *smaxv16qi3 */
    case 6480:  /* *uminv64qi3 */
    case 6478:  /* *umaxv64qi3 */
    case 6476:  /* *sminv64qi3 */
    case 6474:  /* *smaxv64qi3 */
    case 6472:  /* *avx512f_uminv2di3 */
    case 6470:  /* *avx512f_umaxv2di3 */
    case 6468:  /* *avx512f_sminv2di3 */
    case 6466:  /* *avx512f_smaxv2di3 */
    case 6464:  /* *avx512f_uminv4di3 */
    case 6462:  /* *avx512f_umaxv4di3 */
    case 6460:  /* *avx512f_sminv4di3 */
    case 6458:  /* *avx512f_smaxv4di3 */
    case 6456:  /* *avx512f_uminv8di3 */
    case 6454:  /* *avx512f_umaxv8di3 */
    case 6452:  /* *avx512f_sminv8di3 */
    case 6450:  /* *avx512f_smaxv8di3 */
    case 6448:  /* *avx512f_uminv4si3 */
    case 6446:  /* *avx512f_umaxv4si3 */
    case 6444:  /* *avx512f_sminv4si3 */
    case 6442:  /* *avx512f_smaxv4si3 */
    case 6440:  /* *avx512f_uminv8si3 */
    case 6438:  /* *avx512f_umaxv8si3 */
    case 6436:  /* *avx512f_sminv8si3 */
    case 6434:  /* *avx512f_smaxv8si3 */
    case 6432:  /* *avx512f_uminv16si3 */
    case 6430:  /* *avx512f_umaxv16si3 */
    case 6428:  /* *avx512f_sminv16si3 */
    case 6426:  /* *avx512f_smaxv16si3 */
    case 6425:  /* *avx2_uminv8si3 */
    case 6424:  /* *avx2_umaxv8si3 */
    case 6423:  /* *avx2_sminv8si3 */
    case 6422:  /* *avx2_smaxv8si3 */
    case 6421:  /* *avx2_uminv16hi3 */
    case 6420:  /* *avx2_umaxv16hi3 */
    case 6419:  /* *avx2_sminv16hi3 */
    case 6418:  /* *avx2_smaxv16hi3 */
    case 6417:  /* *avx2_uminv32qi3 */
    case 6416:  /* *avx2_umaxv32qi3 */
    case 6415:  /* *avx2_sminv32qi3 */
    case 6414:  /* *avx2_smaxv32qi3 */
    case 6412:  /* avx512vl_rorv2di */
    case 6410:  /* avx512vl_rolv2di */
    case 6408:  /* avx512vl_rorv4di */
    case 6406:  /* avx512vl_rolv4di */
    case 6404:  /* avx512f_rorv8di */
    case 6402:  /* avx512f_rolv8di */
    case 6400:  /* avx512vl_rorv4si */
    case 6398:  /* avx512vl_rolv4si */
    case 6396:  /* avx512vl_rorv8si */
    case 6394:  /* avx512vl_rolv8si */
    case 6392:  /* avx512f_rorv16si */
    case 6390:  /* avx512f_rolv16si */
    case 6388:  /* avx512vl_rorvv2di */
    case 6386:  /* avx512vl_rolvv2di */
    case 6384:  /* avx512vl_rorvv4di */
    case 6382:  /* avx512vl_rolvv4di */
    case 6380:  /* avx512f_rorvv8di */
    case 6378:  /* avx512f_rolvv8di */
    case 6376:  /* avx512vl_rorvv4si */
    case 6374:  /* avx512vl_rolvv4si */
    case 6372:  /* avx512vl_rorvv8si */
    case 6370:  /* avx512vl_rolvv8si */
    case 6368:  /* avx512f_rorvv16si */
    case 6366:  /* avx512f_rolvv16si */
    case 6365:  /* sse2_lshrv1ti3 */
    case 6364:  /* sse2_ashlv1ti3 */
    case 6363:  /* avx2_lshrv2ti3 */
    case 6362:  /* avx2_ashlv2ti3 */
    case 6361:  /* avx512bw_lshrv1ti3 */
    case 6360:  /* avx512bw_ashlv1ti3 */
    case 6359:  /* avx512bw_lshrv2ti3 */
    case 6358:  /* avx512bw_ashlv2ti3 */
    case 6357:  /* avx512bw_lshrv4ti3 */
    case 6356:  /* avx512bw_ashlv4ti3 */
    case 6354:  /* lshrv8di3 */
    case 6352:  /* ashlv8di3 */
    case 6350:  /* lshrv16si3 */
    case 6348:  /* ashlv16si3 */
    case 6346:  /* lshrv32hi3 */
    case 6344:  /* ashlv32hi3 */
    case 6343:  /* lshrv2di3 */
    case 6342:  /* ashlv2di3 */
    case 6341:  /* lshrv4di3 */
    case 6340:  /* ashlv4di3 */
    case 6339:  /* lshrv4si3 */
    case 6338:  /* ashlv4si3 */
    case 6337:  /* lshrv8si3 */
    case 6336:  /* ashlv8si3 */
    case 6335:  /* lshrv8hi3 */
    case 6334:  /* ashlv8hi3 */
    case 6333:  /* lshrv16hi3 */
    case 6332:  /* ashlv16hi3 */
    case 6330:  /* *lshrv2di3 */
    case 6328:  /* *ashlv2di3 */
    case 6326:  /* *lshrv4di3 */
    case 6324:  /* *ashlv4di3 */
    case 6322:  /* *lshrv4si3 */
    case 6320:  /* *ashlv4si3 */
    case 6318:  /* *lshrv8si3 */
    case 6316:  /* *ashlv8si3 */
    case 6314:  /* *lshrv8hi3 */
    case 6312:  /* *ashlv8hi3 */
    case 6310:  /* *lshrv16hi3 */
    case 6308:  /* *ashlv16hi3 */
    case 6306:  /* *ashrv8di3 */
    case 6304:  /* *ashrv16si3 */
    case 6302:  /* *ashrv4di3 */
    case 6300:  /* *ashrv32hi3 */
    case 6299:  /* ashrv4si3 */
    case 6298:  /* ashrv8si3 */
    case 6297:  /* ashrv8hi3 */
    case 6296:  /* ashrv16hi3 */
    case 6294:  /* *ashrv2di3 */
    case 6292:  /* *ashrv4si3 */
    case 6290:  /* *ashrv8si3 */
    case 6288:  /* *ashrv8hi3 */
    case 6286:  /* *ashrv16hi3 */
    case 6284:  /* *sse4_1_mulv4si3 */
    case 6282:  /* *avx2_mulv8si3 */
    case 6280:  /* *avx512f_mulv16si3 */
    case 6278:  /* *avx512dq_mulv2di3 */
    case 6276:  /* *avx512dq_mulv4di3 */
    case 6274:  /* *avx512dq_mulv8di3 */
    case 6240:  /* *mulv8hi3 */
    case 6238:  /* *mulv16hi3 */
    case 6236:  /* *mulv32hi3 */
    case 6234:  /* *sse2_ussubv8hi3 */
    case 6232:  /* *sse2_sssubv8hi3 */
    case 6230:  /* *sse2_usaddv8hi3 */
    case 6228:  /* *sse2_ssaddv8hi3 */
    case 6226:  /* *avx2_ussubv16hi3 */
    case 6224:  /* *avx2_sssubv16hi3 */
    case 6222:  /* *avx2_usaddv16hi3 */
    case 6220:  /* *avx2_ssaddv16hi3 */
    case 6218:  /* *avx512bw_ussubv32hi3 */
    case 6216:  /* *avx512bw_sssubv32hi3 */
    case 6214:  /* *avx512bw_usaddv32hi3 */
    case 6212:  /* *avx512bw_ssaddv32hi3 */
    case 6210:  /* *sse2_ussubv16qi3 */
    case 6208:  /* *sse2_sssubv16qi3 */
    case 6206:  /* *sse2_usaddv16qi3 */
    case 6204:  /* *sse2_ssaddv16qi3 */
    case 6202:  /* *avx2_ussubv32qi3 */
    case 6200:  /* *avx2_sssubv32qi3 */
    case 6198:  /* *avx2_usaddv32qi3 */
    case 6196:  /* *avx2_ssaddv32qi3 */
    case 6194:  /* *avx512bw_ussubv64qi3 */
    case 6192:  /* *avx512bw_sssubv64qi3 */
    case 6190:  /* *avx512bw_usaddv64qi3 */
    case 6188:  /* *avx512bw_ssaddv64qi3 */
    case 6163:  /* *subv2di3 */
    case 6162:  /* *addv2di3 */
    case 6161:  /* *subv4di3 */
    case 6160:  /* *addv4di3 */
    case 6159:  /* *subv8di3 */
    case 6158:  /* *addv8di3 */
    case 6157:  /* *subv4si3 */
    case 6156:  /* *addv4si3 */
    case 6155:  /* *subv8si3 */
    case 6154:  /* *addv8si3 */
    case 6153:  /* *subv16si3 */
    case 6152:  /* *addv16si3 */
    case 6151:  /* *subv8hi3 */
    case 6150:  /* *addv8hi3 */
    case 6149:  /* *subv16hi3 */
    case 6148:  /* *addv16hi3 */
    case 6147:  /* *subv32hi3 */
    case 6146:  /* *addv32hi3 */
    case 6145:  /* *subv16qi3 */
    case 6144:  /* *addv16qi3 */
    case 6143:  /* *subv32qi3 */
    case 6142:  /* *addv32qi3 */
    case 6141:  /* *subv64qi3 */
    case 6140:  /* *addv64qi3 */
    case 5868:  /* vec_concatv2df */
    case 4159:  /* *vec_concatv4sf_0 */
    case 4158:  /* *vec_concatv4sf */
    case 4157:  /* *vec_concatv2sf_sse */
    case 4156:  /* *vec_concatv2sf_sse4_1 */
    case 2893:  /* *xortf3 */
    case 2892:  /* *iortf3 */
    case 2891:  /* *andtf3 */
    case 2890:  /* xordf3 */
    case 2889:  /* iordf3 */
    case 2888:  /* anddf3 */
    case 2887:  /* xorsf3 */
    case 2886:  /* iorsf3 */
    case 2885:  /* andsf3 */
    case 2880:  /* *bit_and_float_vector_all_ones */
    case 2879:  /* *bit_and_float_vector_all_ones */
    case 2878:  /* *bit_and_float_vector_all_ones */
    case 2877:  /* *bit_and_float_vector_all_ones */
    case 2876:  /* *bit_and_float_vector_all_ones */
    case 2875:  /* *bit_and_float_vector_all_ones */
    case 2874:  /* *bit_and_float_vector_all_ones */
    case 2873:  /* *bit_and_float_vector_all_ones */
    case 2872:  /* *bit_and_float_vector_all_ones */
    case 2870:  /* *xorv8df3 */
    case 2868:  /* *iorv8df3 */
    case 2866:  /* *andv8df3 */
    case 2864:  /* *xorv16sf3 */
    case 2862:  /* *iorv16sf3 */
    case 2860:  /* *andv16sf3 */
    case 2859:  /* *xorv32hf3 */
    case 2858:  /* *iorv32hf3 */
    case 2857:  /* *andv32hf3 */
    case 2855:  /* *xorv2df3 */
    case 2853:  /* *iorv2df3 */
    case 2851:  /* *andv2df3 */
    case 2849:  /* *xorv4df3 */
    case 2847:  /* *iorv4df3 */
    case 2845:  /* *andv4df3 */
    case 2843:  /* *xorv4sf3 */
    case 2841:  /* *iorv4sf3 */
    case 2839:  /* *andv4sf3 */
    case 2837:  /* *xorv8sf3 */
    case 2835:  /* *iorv8sf3 */
    case 2833:  /* *andv8sf3 */
    case 2832:  /* *xorv8hf3 */
    case 2831:  /* *iorv8hf3 */
    case 2830:  /* *andv8hf3 */
    case 2829:  /* *xorv16hf3 */
    case 2828:  /* *iorv16hf3 */
    case 2827:  /* *andv16hf3 */
    case 2242:  /* *sminv2df3 */
    case 2240:  /* *smaxv2df3 */
    case 2238:  /* *sminv4df3 */
    case 2236:  /* *smaxv4df3 */
    case 2232:  /* *sminv8df3 */
    case 2228:  /* *smaxv8df3 */
    case 2226:  /* *sminv4sf3 */
    case 2224:  /* *smaxv4sf3 */
    case 2222:  /* *sminv8sf3 */
    case 2220:  /* *smaxv8sf3 */
    case 2216:  /* *sminv16sf3 */
    case 2212:  /* *smaxv16sf3 */
    case 2210:  /* *sminv8hf3 */
    case 2208:  /* *smaxv8hf3 */
    case 2206:  /* *sminv16hf3 */
    case 2204:  /* *smaxv16hf3 */
    case 2200:  /* *sminv32hf3 */
    case 2196:  /* *smaxv32hf3 */
    case 2087:  /* sse2_divv2df3 */
    case 2085:  /* avx_divv4df3 */
    case 2081:  /* avx512f_divv8df3 */
    case 2079:  /* sse_divv4sf3 */
    case 2077:  /* avx_divv8sf3 */
    case 2073:  /* avx512f_divv16sf3 */
    case 2071:  /* avx512fp16_divv8hf3 */
    case 2069:  /* avx512fp16_divv16hf3 */
    case 2065:  /* avx512fp16_divv32hf3 */
    case 2031:  /* *mulv2df3 */
    case 2027:  /* *mulv4df3 */
    case 2023:  /* *mulv8df3 */
    case 2019:  /* *mulv4sf3 */
    case 2015:  /* *mulv8sf3 */
    case 2011:  /* *mulv16sf3 */
    case 2007:  /* *mulv8hf3 */
    case 2003:  /* *mulv16hf3 */
    case 1999:  /* *mulv32hf3 */
    case 1965:  /* *subv2df3 */
    case 1961:  /* *addv2df3 */
    case 1957:  /* *subv4df3 */
    case 1953:  /* *addv4df3 */
    case 1949:  /* *subv8df3 */
    case 1945:  /* *addv8df3 */
    case 1941:  /* *subv4sf3 */
    case 1937:  /* *addv4sf3 */
    case 1933:  /* *subv8sf3 */
    case 1929:  /* *addv8sf3 */
    case 1925:  /* *subv16sf3 */
    case 1921:  /* *addv16sf3 */
    case 1917:  /* *subv8hf3 */
    case 1913:  /* *addv8hf3 */
    case 1909:  /* *subv16hf3 */
    case 1905:  /* *addv16hf3 */
    case 1901:  /* *subv32hf3 */
    case 1897:  /* *addv32hf3 */
    case 1668:  /* *mmx_concatv2si */
    case 1621:  /* *mmx_xorv2si3 */
    case 1620:  /* *mmx_iorv2si3 */
    case 1619:  /* *mmx_andv2si3 */
    case 1618:  /* *mmx_xorv4hi3 */
    case 1617:  /* *mmx_iorv4hi3 */
    case 1616:  /* *mmx_andv4hi3 */
    case 1615:  /* *mmx_xorv8qi3 */
    case 1614:  /* *mmx_iorv8qi3 */
    case 1613:  /* *mmx_andv8qi3 */
    case 1578:  /* *gtv2hi3 */
    case 1577:  /* *gtv2qi3 */
    case 1576:  /* *gtv4qi3 */
    case 1575:  /* mmx_gtv2si3 */
    case 1574:  /* mmx_gtv4hi3 */
    case 1573:  /* mmx_gtv8qi3 */
    case 1572:  /* *eqv2hi3 */
    case 1571:  /* *eqv2qi3 */
    case 1570:  /* *eqv4qi3 */
    case 1569:  /* *mmx_eqv2si3 */
    case 1568:  /* *mmx_eqv4hi3 */
    case 1567:  /* *mmx_eqv8qi3 */
    case 1563:  /* ashrv2hi3 */
    case 1562:  /* lshrv2hi3 */
    case 1561:  /* ashlv2hi3 */
    case 1560:  /* mmx_lshrv1si3 */
    case 1559:  /* mmx_ashlv1si3 */
    case 1558:  /* mmx_lshrv1di3 */
    case 1557:  /* mmx_ashlv1di3 */
    case 1556:  /* mmx_lshrv2si3 */
    case 1555:  /* mmx_ashlv2si3 */
    case 1554:  /* mmx_lshrv4hi3 */
    case 1553:  /* mmx_ashlv4hi3 */
    case 1552:  /* mmx_ashrv2si3 */
    case 1551:  /* mmx_ashrv4hi3 */
    case 1544:  /* uminv2hi3 */
    case 1543:  /* umaxv2hi3 */
    case 1542:  /* uminv2qi3 */
    case 1541:  /* umaxv2qi3 */
    case 1540:  /* uminv4qi3 */
    case 1539:  /* umaxv4qi3 */
    case 1538:  /* *mmx_uminv8qi3 */
    case 1537:  /* *mmx_umaxv8qi3 */
    case 1536:  /* uminv2si3 */
    case 1535:  /* umaxv2si3 */
    case 1534:  /* uminv4hi3 */
    case 1533:  /* umaxv4hi3 */
    case 1532:  /* sminv2hi3 */
    case 1531:  /* smaxv2hi3 */
    case 1530:  /* sminv2qi3 */
    case 1529:  /* smaxv2qi3 */
    case 1528:  /* sminv4qi3 */
    case 1527:  /* smaxv4qi3 */
    case 1526:  /* *mmx_sminv4hi3 */
    case 1525:  /* *mmx_smaxv4hi3 */
    case 1524:  /* sminv2si3 */
    case 1523:  /* smaxv2si3 */
    case 1522:  /* sminv8qi3 */
    case 1521:  /* smaxv8qi3 */
    case 1513:  /* mulv2hi3 */
    case 1512:  /* *mmx_mulv4hi3 */
    case 1511:  /* *ussubv2hi3 */
    case 1510:  /* *sssubv2hi3 */
    case 1509:  /* *usaddv2hi3 */
    case 1508:  /* *ssaddv2hi3 */
    case 1507:  /* *ussubv2qi3 */
    case 1506:  /* *sssubv2qi3 */
    case 1505:  /* *usaddv2qi3 */
    case 1504:  /* *ssaddv2qi3 */
    case 1503:  /* *ussubv4qi3 */
    case 1502:  /* *sssubv4qi3 */
    case 1501:  /* *usaddv4qi3 */
    case 1500:  /* *ssaddv4qi3 */
    case 1499:  /* *mmx_ussubv4hi3 */
    case 1498:  /* *mmx_sssubv4hi3 */
    case 1497:  /* *mmx_usaddv4hi3 */
    case 1496:  /* *mmx_ssaddv4hi3 */
    case 1495:  /* *mmx_ussubv8qi3 */
    case 1494:  /* *mmx_sssubv8qi3 */
    case 1493:  /* *mmx_usaddv8qi3 */
    case 1492:  /* *mmx_ssaddv8qi3 */
    case 1489:  /* subv2hi3 */
    case 1488:  /* addv2hi3 */
    case 1487:  /* subv4qi3 */
    case 1486:  /* addv4qi3 */
    case 1485:  /* *mmx_subv1di3 */
    case 1484:  /* *mmx_addv1di3 */
    case 1483:  /* *mmx_subv2si3 */
    case 1482:  /* *mmx_addv2si3 */
    case 1481:  /* *mmx_subv4hi3 */
    case 1480:  /* *mmx_addv4hi3 */
    case 1479:  /* *mmx_subv8qi3 */
    case 1478:  /* *mmx_addv8qi3 */
    case 1476:  /* divv2hf3 */
    case 1475:  /* mulv2hf3 */
    case 1474:  /* subv2hf3 */
    case 1473:  /* addv2hf3 */
    case 1472:  /* divv4hf3 */
    case 1471:  /* mulv4hf3 */
    case 1470:  /* subv4hf3 */
    case 1469:  /* addv4hf3 */
    case 1466:  /* *mmx_concatv2sf */
    case 1448:  /* xorv2sf3 */
    case 1447:  /* iorv2sf3 */
    case 1446:  /* andv2sf3 */
    case 1441:  /* mmx_gev2sf3 */
    case 1440:  /* mmx_gtv2sf3 */
    case 1439:  /* *mmx_eqv2sf3 */
    case 1424:  /* *mmx_sminv2sf3 */
    case 1423:  /* *mmx_smaxv2sf3 */
    case 1422:  /* *mmx_mulv2sf3 */
    case 1421:  /* *mmx_subv2sf3 */
    case 1420:  /* *mmx_addv2sf3 */
    case 1225:  /* sminhf3 */
    case 1224:  /* smaxhf3 */
    case 1223:  /* smindf3 */
    case 1222:  /* smaxdf3 */
    case 1221:  /* sminsf3 */
    case 1220:  /* smaxsf3 */
    case 1085:  /* *divhf */
    case 1084:  /* *mulhf */
    case 1083:  /* *subhf */
    case 1082:  /* *addhf */
    case 832:  /* *bmi2_rorxdi3_1 */
    case 831:  /* *bmi2_rorxsi3_1 */
    case 770:  /* *bmi2_ashrdi3_1 */
    case 769:  /* *bmi2_lshrdi3_1 */
    case 768:  /* *bmi2_ashrsi3_1 */
    case 767:  /* *bmi2_lshrsi3_1 */
    case 717:  /* *bmi2_ashldi3_1 */
    case 716:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 763:  /* *x86_shrd_2 */
    case 760:  /* *x86_64_shrd_2 */
    case 711:  /* *x86_shld_2 */
    case 708:  /* *x86_64_shld_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 762:  /* *x86_shrd_1 */
    case 759:  /* *x86_64_shrd_1 */
    case 710:  /* *x86_shld_1 */
    case 707:  /* *x86_64_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 761:  /* x86_shrd */
    case 758:  /* x86_64_shrd */
    case 709:  /* x86_shld */
    case 706:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 826:  /* *rotrdi3_mask_1 */
    case 825:  /* *rotldi3_mask_1 */
    case 824:  /* *rotrsi3_mask_1 */
    case 823:  /* *rotlsi3_mask_1 */
    case 822:  /* *rotrhi3_mask_1 */
    case 821:  /* *rotlhi3_mask_1 */
    case 820:  /* *rotrqi3_mask_1 */
    case 819:  /* *rotlqi3_mask_1 */
    case 753:  /* *ashrti3_doubleword_mask_1 */
    case 752:  /* *lshrti3_doubleword_mask_1 */
    case 751:  /* *ashrdi3_doubleword_mask_1 */
    case 750:  /* *lshrdi3_doubleword_mask_1 */
    case 745:  /* *ashrdi3_mask_1 */
    case 744:  /* *lshrdi3_mask_1 */
    case 743:  /* *ashrsi3_mask_1 */
    case 742:  /* *lshrsi3_mask_1 */
    case 715:  /* *ashldi3_mask_1 */
    case 714:  /* *ashlsi3_mask_1 */
    case 703:  /* *ashlti3_doubleword_mask_1 */
    case 702:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 818:  /* *rotrdi3_mask */
    case 817:  /* *rotldi3_mask */
    case 816:  /* *rotrsi3_mask */
    case 815:  /* *rotlsi3_mask */
    case 814:  /* *rotrhi3_mask */
    case 813:  /* *rotlhi3_mask */
    case 812:  /* *rotrqi3_mask */
    case 811:  /* *rotlqi3_mask */
    case 749:  /* *ashrti3_doubleword_mask */
    case 748:  /* *lshrti3_doubleword_mask */
    case 747:  /* *ashrdi3_doubleword_mask */
    case 746:  /* *lshrdi3_doubleword_mask */
    case 741:  /* *ashrdi3_mask */
    case 740:  /* *lshrdi3_mask */
    case 739:  /* *ashrsi3_mask */
    case 738:  /* *lshrsi3_mask */
    case 713:  /* *ashldi3_mask */
    case 712:  /* *ashlsi3_mask */
    case 701:  /* *ashlti3_doubleword_mask */
    case 700:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 1896:  /* *nabsv2df2 */
    case 1895:  /* *nabsv4df2 */
    case 1894:  /* *nabsv8df2 */
    case 1893:  /* *nabsv4sf2 */
    case 1892:  /* *nabsv8sf2 */
    case 1891:  /* *nabsv16sf2 */
    case 1419:  /* *mmx_nabsv2sf2 */
    case 680:  /* *nabsdf2_1 */
    case 679:  /* *nabssf2_1 */
    case 666:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 651:  /* *negvdi3 */
    case 650:  /* *negvsi3 */
    case 649:  /* *negvhi3 */
    case 648:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 647:  /* *negqi_extdi_2 */
    case 646:  /* *negqi_extsi_2 */
    case 645:  /* *negqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      break;

    case 644:  /* *negdi_ccc_2 */
    case 643:  /* *negsi_ccc_2 */
    case 642:  /* *neghi_ccc_2 */
    case 641:  /* *negqi_ccc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 954:  /* *bsfdi_1 */
    case 953:  /* *bsfsi_1 */
    case 950:  /* *tzcntdi_1 */
    case 949:  /* *tzcntsi_1 */
    case 640:  /* *negdi_ccc_1 */
    case 639:  /* *negsi_ccc_1 */
    case 638:  /* *neghi_ccc_1 */
    case 637:  /* *negqi_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 699:  /* *one_cmplsi2_2_zext */
    case 636:  /* *negsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 698:  /* *one_cmpldi2_2 */
    case 697:  /* *one_cmplsi2_2 */
    case 696:  /* *one_cmplhi2_2 */
    case 695:  /* *one_cmplqi2_2 */
    case 635:  /* *negdi_2 */
    case 634:  /* *negsi_2 */
    case 633:  /* *neghi_2 */
    case 632:  /* *negqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 631:  /* *neghi_1_slp */
    case 630:  /* *negqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 1849:  /* *knotsi_1_zext */
    case 1045:  /* *popcounthi2_1 */
    case 663:  /* *nabsdi2_1 */
    case 662:  /* *nabssi2_1 */
    case 661:  /* *nabshi2_1 */
    case 660:  /* *nabsqi2_1 */
    case 655:  /* *nabsti2_doubleword */
    case 654:  /* *nabsdi2_doubleword */
    case 629:  /* *negsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 599:  /* *xorsi_2_zext_imm */
    case 598:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 577:  /* *xor2andn */
    case 576:  /* *xor2andn */
    case 575:  /* *xor2andn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 564:  /* *andn_di_ccno */
    case 563:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1840:  /* kandndi */
    case 1839:  /* kandnsi */
    case 1838:  /* kandnhi */
    case 1837:  /* kandnqi */
    case 1612:  /* *andnotv2hi3 */
    case 1611:  /* *andnotv2qi3 */
    case 1610:  /* *andnotv4qi3 */
    case 1061:  /* *tls_local_dynamic_base_64_di */
    case 1060:  /* *tls_local_dynamic_base_64_si */
    case 923:  /* *sibcall_value_memory */
    case 922:  /* *sibcall_value_memory */
    case 581:  /* *xorsi_1_zext_imm */
    case 580:  /* *iorsi_1_zext_imm */
    case 562:  /* *andnhi_1 */
    case 561:  /* *andnqi_1 */
    case 560:  /* *andndi_1 */
    case 559:  /* *andnsi_1 */
    case 558:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 622:  /* *xorqi_extdi_1_cc */
    case 621:  /* *xorqi_extsi_1_cc */
    case 620:  /* *xorqi_exthi_1_cc */
    case 554:  /* *andqi_extdi_1_cc */
    case 553:  /* *andqi_extsi_1_cc */
    case 552:  /* *andqi_exthi_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 533:  /* *testdi_not */
    case 532:  /* *testsi_not */
    case 531:  /* *testhi_not */
    case 530:  /* *testqi_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 529:  /* *testqi_ext_3 */
    case 528:  /* *testqi_ext_3 */
    case 527:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 526:  /* *testqi_extdi_2 */
    case 525:  /* *testqi_extsi_2 */
    case 524:  /* *testqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 523:  /* *testqi_extdi_1 */
    case 522:  /* *testqi_extsi_1 */
    case 521:  /* *testqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 515:  /* udivmodhiqi3 */
    case 514:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 512:  /* *udivmodsi4_noext_zext_2 */
    case 511:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 510:  /* *udivmodsi4_noext_zext_1 */
    case 509:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 508:  /* *udivmoddi4_noext */
    case 507:  /* *divmoddi4_noext */
    case 506:  /* *udivmodsi4_noext */
    case 505:  /* *divmodsi4_noext */
    case 504:  /* *udivmodhi4_noext */
    case 503:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 502:  /* *udivmodsi4_pow2_zext_2 */
    case 501:  /* *udivmodsi4_zext_2 */
    case 500:  /* *divmodsi4_zext_2 */
    case 488:  /* udivmodsi4_zext_2 */
    case 487:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 499:  /* *udivmodsi4_pow2_zext_1 */
    case 498:  /* *udivmodsi4_zext_1 */
    case 497:  /* *divmodsi4_zext_1 */
    case 486:  /* udivmodsi4_zext_1 */
    case 485:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 513:  /* *divmodsi4_const */
    case 496:  /* *udivmoddi4_pow2 */
    case 495:  /* *udivmodsi4_pow2 */
    case 494:  /* *udivmoddi4 */
    case 493:  /* *udivmodsi4 */
    case 492:  /* *udivmodhi4 */
    case 491:  /* *divmoddi4 */
    case 490:  /* *divmodsi4 */
    case 489:  /* *divmodhi4 */
    case 484:  /* udivmoddi4_1 */
    case 483:  /* udivmodsi4_1 */
    case 482:  /* divmoddi4_1 */
    case 481:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 478:  /* *umulsi3_highpart_zext */
    case 477:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 480:  /* *umulsi3_highpart_1 */
    case 479:  /* *smulsi3_highpart_1 */
    case 476:  /* *umuldi3_highpart_1 */
    case 475:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 474:  /* *umulsi3_highpart_zext */
    case 473:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 472:  /* umuldi3_highpart */
    case 471:  /* smuldi3_highpart */
    case 470:  /* umulsi3_highpart */
    case 469:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 468:  /* *umulqihi3_1 */
    case 467:  /* *mulqihi3_1 */
    case 466:  /* *mulditi3_1 */
    case 465:  /* *mulsidi3_1 */
    case 464:  /* *umulditi3_1 */
    case 463:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 462:  /* *bmi2_umulditi3_1 */
    case 461:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 458:  /* *umulvdi4 */
    case 457:  /* *umulvsi4 */
    case 456:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 444:  /* *subdi3_ne_0 */
    case 443:  /* *subsi3_ne_0 */
    case 442:  /* *subhi3_ne_0 */
    case 441:  /* *subqi3_ne_0 */
    case 440:  /* *subdi3_eq_0 */
    case 439:  /* *subsi3_eq_0 */
    case 438:  /* *subhi3_eq_0 */
    case 437:  /* *subqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 436:  /* *subdi3_eq_1 */
    case 435:  /* *subsi3_eq_1 */
    case 434:  /* *subhi3_eq_1 */
    case 433:  /* *subqi3_eq_1 */
    case 432:  /* *subdi3_ne */
    case 431:  /* *subsi3_ne */
    case 430:  /* *subhi3_ne */
    case 429:  /* *subqi3_ne */
    case 428:  /* *subdi3_eq */
    case 427:  /* *subsi3_eq */
    case 426:  /* *subhi3_eq */
    case 425:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 424:  /* *adddi3_ne_0 */
    case 423:  /* *addsi3_ne_0 */
    case 422:  /* *addhi3_ne_0 */
    case 421:  /* *addqi3_ne_0 */
    case 420:  /* *adddi3_eq_0 */
    case 419:  /* *addsi3_eq_0 */
    case 418:  /* *addhi3_eq_0 */
    case 417:  /* *addqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 416:  /* *adddi3_ne */
    case 415:  /* *addsi3_ne */
    case 414:  /* *addhi3_ne */
    case 413:  /* *addqi3_ne */
    case 412:  /* *adddi3_eq */
    case 411:  /* *addsi3_eq */
    case 410:  /* *addhi3_eq */
    case 409:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 406:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 405:  /* *adddi3_cc_overflow_2 */
    case 404:  /* *addsi3_cc_overflow_2 */
    case 403:  /* *addhi3_cc_overflow_2 */
    case 402:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 401:  /* *adddi3_cconly_overflow_2 */
    case 400:  /* *addsi3_cconly_overflow_2 */
    case 399:  /* *addhi3_cconly_overflow_2 */
    case 398:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 397:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 408:  /* *addti3_doubleword_cc_overflow_1 */
    case 407:  /* *adddi3_doubleword_cc_overflow_1 */
    case 396:  /* *adddi3_cc_overflow_1 */
    case 395:  /* *addsi3_cc_overflow_1 */
    case 394:  /* *addhi3_cc_overflow_1 */
    case 393:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 392:  /* *adddi3_cconly_overflow_1 */
    case 391:  /* *addsi3_cconly_overflow_1 */
    case 390:  /* *addhi3_cconly_overflow_1 */
    case 389:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7631:  /* avx_vzeroupper_callee_abi */
    case 1697:  /* *mmx_femms */
    case 1696:  /* *mmx_emms */
    case 1397:  /* serialize */
    case 1396:  /* speculation_barrier */
    case 1387:  /* testui */
    case 1386:  /* stui */
    case 1385:  /* clui */
    case 1380:  /* xresldtrk */
    case 1379:  /* xsusldtrk */
    case 1374:  /* wbnoinvd */
    case 1373:  /* wbinvd */
    case 1361:  /* xtest_1 */
    case 1359:  /* xend */
    case 1357:  /* nop_endbr */
    case 1355:  /* setssbsy */
    case 1349:  /* saveprevssp */
    case 1319:  /* fnclex */
    case 1269:  /* ud2 */
    case 1268:  /* trap */
    case 1166:  /* cld */
    case 946:  /* *leave_rex64 */
    case 945:  /* *leave */
    case 944:  /* eh_return_internal */
    case 936:  /* nop */
    case 932:  /* simple_return_internal_long */
    case 931:  /* interrupt_return */
    case 930:  /* simple_return_internal */
    case 927:  /* blockage */
    case 388:  /* *setcc_qi_addqi3_cconly_overflow_1_ccc */
    case 387:  /* *setcc_qi_addqi3_cconly_overflow_1_cc */
      break;

    case 386:  /* subborrowdi */
    case 385:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 384:  /* subdi3_carry_ccgz */
    case 383:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 382:  /* *subdi3_carry_ccc_1 */
    case 381:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 380:  /* subdi3_carry_ccc */
    case 379:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 376:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 367:  /* subdi3_carry */
    case 366:  /* subsi3_carry */
    case 365:  /* subhi3_carry */
    case 364:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 363:  /* *addcarrydi_1 */
    case 362:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 361:  /* addcarrydi */
    case 360:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 359:  /* *addsi3_carry_zext_0r */
    case 358:  /* *addsi3_carry_zext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 357:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 356:  /* *adddi3_carry_0r */
    case 355:  /* *addsi3_carry_0r */
    case 354:  /* *addhi3_carry_0r */
    case 353:  /* *addqi3_carry_0r */
    case 352:  /* *adddi3_carry_0 */
    case 351:  /* *addsi3_carry_0 */
    case 350:  /* *addhi3_carry_0 */
    case 349:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 348:  /* adddi3_carry */
    case 347:  /* addsi3_carry */
    case 346:  /* addhi3_carry */
    case 345:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 344:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 343:  /* *dec_cmovdi */
    case 342:  /* *dec_cmovsi */
    case 341:  /* *dec_cmovhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 340:  /* *subdi_3 */
    case 339:  /* *subsi_3 */
    case 338:  /* *subhi_3 */
    case 337:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 336:  /* *subvdi4_overflow_2 */
    case 335:  /* *subvsi4_overflow_2 */
    case 334:  /* *subvhi4_overflow_2 */
    case 333:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 332:  /* *subvdi4_overflow_1 */
    case 331:  /* *subvsi4_overflow_1 */
    case 330:  /* *subvhi4_overflow_1 */
    case 329:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 5472:  /* *avx512vl_vpternlogv2df_2 */
    case 5471:  /* *avx512vl_vpternlogv2df_2 */
    case 5470:  /* *avx512vl_vpternlogv2df_2 */
    case 5469:  /* *avx512vl_vpternlogv2df_2 */
    case 5468:  /* *avx512vl_vpternlogv2df_2 */
    case 5467:  /* *avx512vl_vpternlogv2df_2 */
    case 5466:  /* *avx512vl_vpternlogv2df_2 */
    case 5465:  /* *avx512vl_vpternlogv2df_2 */
    case 5464:  /* *avx512vl_vpternlogv2df_2 */
    case 5463:  /* *avx512vl_vpternlogv2df_2 */
    case 5462:  /* *avx512vl_vpternlogv2df_2 */
    case 5461:  /* *avx512vl_vpternlogv2df_2 */
    case 5460:  /* *avx512vl_vpternlogv2df_2 */
    case 5459:  /* *avx512vl_vpternlogv2df_2 */
    case 5458:  /* *avx512vl_vpternlogv2df_2 */
    case 5457:  /* *avx512vl_vpternlogv2df_2 */
    case 5456:  /* *avx512vl_vpternlogv2df_2 */
    case 5455:  /* *avx512vl_vpternlogv2df_2 */
    case 5454:  /* *avx512vl_vpternlogv2df_2 */
    case 5453:  /* *avx512vl_vpternlogv2df_2 */
    case 5452:  /* *avx512vl_vpternlogv2df_2 */
    case 5451:  /* *avx512vl_vpternlogv2df_2 */
    case 5450:  /* *avx512vl_vpternlogv2df_2 */
    case 5449:  /* *avx512vl_vpternlogv2df_2 */
    case 5448:  /* *avx512vl_vpternlogv2df_2 */
    case 5447:  /* *avx512vl_vpternlogv2df_2 */
    case 5446:  /* *avx512vl_vpternlogv2df_2 */
    case 5445:  /* *avx512vl_vpternlogv4df_2 */
    case 5444:  /* *avx512vl_vpternlogv4df_2 */
    case 5443:  /* *avx512vl_vpternlogv4df_2 */
    case 5442:  /* *avx512vl_vpternlogv4df_2 */
    case 5441:  /* *avx512vl_vpternlogv4df_2 */
    case 5440:  /* *avx512vl_vpternlogv4df_2 */
    case 5439:  /* *avx512vl_vpternlogv4df_2 */
    case 5438:  /* *avx512vl_vpternlogv4df_2 */
    case 5437:  /* *avx512vl_vpternlogv4df_2 */
    case 5436:  /* *avx512vl_vpternlogv4df_2 */
    case 5435:  /* *avx512vl_vpternlogv4df_2 */
    case 5434:  /* *avx512vl_vpternlogv4df_2 */
    case 5433:  /* *avx512vl_vpternlogv4df_2 */
    case 5432:  /* *avx512vl_vpternlogv4df_2 */
    case 5431:  /* *avx512vl_vpternlogv4df_2 */
    case 5430:  /* *avx512vl_vpternlogv4df_2 */
    case 5429:  /* *avx512vl_vpternlogv4df_2 */
    case 5428:  /* *avx512vl_vpternlogv4df_2 */
    case 5427:  /* *avx512vl_vpternlogv4df_2 */
    case 5426:  /* *avx512vl_vpternlogv4df_2 */
    case 5425:  /* *avx512vl_vpternlogv4df_2 */
    case 5424:  /* *avx512vl_vpternlogv4df_2 */
    case 5423:  /* *avx512vl_vpternlogv4df_2 */
    case 5422:  /* *avx512vl_vpternlogv4df_2 */
    case 5421:  /* *avx512vl_vpternlogv4df_2 */
    case 5420:  /* *avx512vl_vpternlogv4df_2 */
    case 5419:  /* *avx512vl_vpternlogv4df_2 */
    case 5418:  /* *avx512f_vpternlogv8df_2 */
    case 5417:  /* *avx512f_vpternlogv8df_2 */
    case 5416:  /* *avx512f_vpternlogv8df_2 */
    case 5415:  /* *avx512f_vpternlogv8df_2 */
    case 5414:  /* *avx512f_vpternlogv8df_2 */
    case 5413:  /* *avx512f_vpternlogv8df_2 */
    case 5412:  /* *avx512f_vpternlogv8df_2 */
    case 5411:  /* *avx512f_vpternlogv8df_2 */
    case 5410:  /* *avx512f_vpternlogv8df_2 */
    case 5409:  /* *avx512f_vpternlogv8df_2 */
    case 5408:  /* *avx512f_vpternlogv8df_2 */
    case 5407:  /* *avx512f_vpternlogv8df_2 */
    case 5406:  /* *avx512f_vpternlogv8df_2 */
    case 5405:  /* *avx512f_vpternlogv8df_2 */
    case 5404:  /* *avx512f_vpternlogv8df_2 */
    case 5403:  /* *avx512f_vpternlogv8df_2 */
    case 5402:  /* *avx512f_vpternlogv8df_2 */
    case 5401:  /* *avx512f_vpternlogv8df_2 */
    case 5400:  /* *avx512f_vpternlogv8df_2 */
    case 5399:  /* *avx512f_vpternlogv8df_2 */
    case 5398:  /* *avx512f_vpternlogv8df_2 */
    case 5397:  /* *avx512f_vpternlogv8df_2 */
    case 5396:  /* *avx512f_vpternlogv8df_2 */
    case 5395:  /* *avx512f_vpternlogv8df_2 */
    case 5394:  /* *avx512f_vpternlogv8df_2 */
    case 5393:  /* *avx512f_vpternlogv8df_2 */
    case 5392:  /* *avx512f_vpternlogv8df_2 */
    case 5391:  /* *avx512vl_vpternlogv4sf_2 */
    case 5390:  /* *avx512vl_vpternlogv4sf_2 */
    case 5389:  /* *avx512vl_vpternlogv4sf_2 */
    case 5388:  /* *avx512vl_vpternlogv4sf_2 */
    case 5387:  /* *avx512vl_vpternlogv4sf_2 */
    case 5386:  /* *avx512vl_vpternlogv4sf_2 */
    case 5385:  /* *avx512vl_vpternlogv4sf_2 */
    case 5384:  /* *avx512vl_vpternlogv4sf_2 */
    case 5383:  /* *avx512vl_vpternlogv4sf_2 */
    case 5382:  /* *avx512vl_vpternlogv4sf_2 */
    case 5381:  /* *avx512vl_vpternlogv4sf_2 */
    case 5380:  /* *avx512vl_vpternlogv4sf_2 */
    case 5379:  /* *avx512vl_vpternlogv4sf_2 */
    case 5378:  /* *avx512vl_vpternlogv4sf_2 */
    case 5377:  /* *avx512vl_vpternlogv4sf_2 */
    case 5376:  /* *avx512vl_vpternlogv4sf_2 */
    case 5375:  /* *avx512vl_vpternlogv4sf_2 */
    case 5374:  /* *avx512vl_vpternlogv4sf_2 */
    case 5373:  /* *avx512vl_vpternlogv4sf_2 */
    case 5372:  /* *avx512vl_vpternlogv4sf_2 */
    case 5371:  /* *avx512vl_vpternlogv4sf_2 */
    case 5370:  /* *avx512vl_vpternlogv4sf_2 */
    case 5369:  /* *avx512vl_vpternlogv4sf_2 */
    case 5368:  /* *avx512vl_vpternlogv4sf_2 */
    case 5367:  /* *avx512vl_vpternlogv4sf_2 */
    case 5366:  /* *avx512vl_vpternlogv4sf_2 */
    case 5365:  /* *avx512vl_vpternlogv4sf_2 */
    case 5364:  /* *avx512vl_vpternlogv8sf_2 */
    case 5363:  /* *avx512vl_vpternlogv8sf_2 */
    case 5362:  /* *avx512vl_vpternlogv8sf_2 */
    case 5361:  /* *avx512vl_vpternlogv8sf_2 */
    case 5360:  /* *avx512vl_vpternlogv8sf_2 */
    case 5359:  /* *avx512vl_vpternlogv8sf_2 */
    case 5358:  /* *avx512vl_vpternlogv8sf_2 */
    case 5357:  /* *avx512vl_vpternlogv8sf_2 */
    case 5356:  /* *avx512vl_vpternlogv8sf_2 */
    case 5355:  /* *avx512vl_vpternlogv8sf_2 */
    case 5354:  /* *avx512vl_vpternlogv8sf_2 */
    case 5353:  /* *avx512vl_vpternlogv8sf_2 */
    case 5352:  /* *avx512vl_vpternlogv8sf_2 */
    case 5351:  /* *avx512vl_vpternlogv8sf_2 */
    case 5350:  /* *avx512vl_vpternlogv8sf_2 */
    case 5349:  /* *avx512vl_vpternlogv8sf_2 */
    case 5348:  /* *avx512vl_vpternlogv8sf_2 */
    case 5347:  /* *avx512vl_vpternlogv8sf_2 */
    case 5346:  /* *avx512vl_vpternlogv8sf_2 */
    case 5345:  /* *avx512vl_vpternlogv8sf_2 */
    case 5344:  /* *avx512vl_vpternlogv8sf_2 */
    case 5343:  /* *avx512vl_vpternlogv8sf_2 */
    case 5342:  /* *avx512vl_vpternlogv8sf_2 */
    case 5341:  /* *avx512vl_vpternlogv8sf_2 */
    case 5340:  /* *avx512vl_vpternlogv8sf_2 */
    case 5339:  /* *avx512vl_vpternlogv8sf_2 */
    case 5338:  /* *avx512vl_vpternlogv8sf_2 */
    case 5337:  /* *avx512f_vpternlogv16sf_2 */
    case 5336:  /* *avx512f_vpternlogv16sf_2 */
    case 5335:  /* *avx512f_vpternlogv16sf_2 */
    case 5334:  /* *avx512f_vpternlogv16sf_2 */
    case 5333:  /* *avx512f_vpternlogv16sf_2 */
    case 5332:  /* *avx512f_vpternlogv16sf_2 */
    case 5331:  /* *avx512f_vpternlogv16sf_2 */
    case 5330:  /* *avx512f_vpternlogv16sf_2 */
    case 5329:  /* *avx512f_vpternlogv16sf_2 */
    case 5328:  /* *avx512f_vpternlogv16sf_2 */
    case 5327:  /* *avx512f_vpternlogv16sf_2 */
    case 5326:  /* *avx512f_vpternlogv16sf_2 */
    case 5325:  /* *avx512f_vpternlogv16sf_2 */
    case 5324:  /* *avx512f_vpternlogv16sf_2 */
    case 5323:  /* *avx512f_vpternlogv16sf_2 */
    case 5322:  /* *avx512f_vpternlogv16sf_2 */
    case 5321:  /* *avx512f_vpternlogv16sf_2 */
    case 5320:  /* *avx512f_vpternlogv16sf_2 */
    case 5319:  /* *avx512f_vpternlogv16sf_2 */
    case 5318:  /* *avx512f_vpternlogv16sf_2 */
    case 5317:  /* *avx512f_vpternlogv16sf_2 */
    case 5316:  /* *avx512f_vpternlogv16sf_2 */
    case 5315:  /* *avx512f_vpternlogv16sf_2 */
    case 5314:  /* *avx512f_vpternlogv16sf_2 */
    case 5313:  /* *avx512f_vpternlogv16sf_2 */
    case 5312:  /* *avx512f_vpternlogv16sf_2 */
    case 5311:  /* *avx512f_vpternlogv16sf_2 */
    case 5310:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5309:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5308:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5307:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5306:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5305:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5304:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5303:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5302:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5301:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5300:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5299:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5298:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5297:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5296:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5295:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5294:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5293:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5292:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5291:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5290:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5289:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5288:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5287:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5286:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5285:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5284:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5283:  /* *avx512vl_vpternlogv16hf_2 */
    case 5282:  /* *avx512vl_vpternlogv16hf_2 */
    case 5281:  /* *avx512vl_vpternlogv16hf_2 */
    case 5280:  /* *avx512vl_vpternlogv16hf_2 */
    case 5279:  /* *avx512vl_vpternlogv16hf_2 */
    case 5278:  /* *avx512vl_vpternlogv16hf_2 */
    case 5277:  /* *avx512vl_vpternlogv16hf_2 */
    case 5276:  /* *avx512vl_vpternlogv16hf_2 */
    case 5275:  /* *avx512vl_vpternlogv16hf_2 */
    case 5274:  /* *avx512vl_vpternlogv16hf_2 */
    case 5273:  /* *avx512vl_vpternlogv16hf_2 */
    case 5272:  /* *avx512vl_vpternlogv16hf_2 */
    case 5271:  /* *avx512vl_vpternlogv16hf_2 */
    case 5270:  /* *avx512vl_vpternlogv16hf_2 */
    case 5269:  /* *avx512vl_vpternlogv16hf_2 */
    case 5268:  /* *avx512vl_vpternlogv16hf_2 */
    case 5267:  /* *avx512vl_vpternlogv16hf_2 */
    case 5266:  /* *avx512vl_vpternlogv16hf_2 */
    case 5265:  /* *avx512vl_vpternlogv16hf_2 */
    case 5264:  /* *avx512vl_vpternlogv16hf_2 */
    case 5263:  /* *avx512vl_vpternlogv16hf_2 */
    case 5262:  /* *avx512vl_vpternlogv16hf_2 */
    case 5261:  /* *avx512vl_vpternlogv16hf_2 */
    case 5260:  /* *avx512vl_vpternlogv16hf_2 */
    case 5259:  /* *avx512vl_vpternlogv16hf_2 */
    case 5258:  /* *avx512vl_vpternlogv16hf_2 */
    case 5257:  /* *avx512vl_vpternlogv16hf_2 */
    case 5256:  /* *avx512bw_vpternlogv32hf_2 */
    case 5255:  /* *avx512bw_vpternlogv32hf_2 */
    case 5254:  /* *avx512bw_vpternlogv32hf_2 */
    case 5253:  /* *avx512bw_vpternlogv32hf_2 */
    case 5252:  /* *avx512bw_vpternlogv32hf_2 */
    case 5251:  /* *avx512bw_vpternlogv32hf_2 */
    case 5250:  /* *avx512bw_vpternlogv32hf_2 */
    case 5249:  /* *avx512bw_vpternlogv32hf_2 */
    case 5248:  /* *avx512bw_vpternlogv32hf_2 */
    case 5247:  /* *avx512bw_vpternlogv32hf_2 */
    case 5246:  /* *avx512bw_vpternlogv32hf_2 */
    case 5245:  /* *avx512bw_vpternlogv32hf_2 */
    case 5244:  /* *avx512bw_vpternlogv32hf_2 */
    case 5243:  /* *avx512bw_vpternlogv32hf_2 */
    case 5242:  /* *avx512bw_vpternlogv32hf_2 */
    case 5241:  /* *avx512bw_vpternlogv32hf_2 */
    case 5240:  /* *avx512bw_vpternlogv32hf_2 */
    case 5239:  /* *avx512bw_vpternlogv32hf_2 */
    case 5238:  /* *avx512bw_vpternlogv32hf_2 */
    case 5237:  /* *avx512bw_vpternlogv32hf_2 */
    case 5236:  /* *avx512bw_vpternlogv32hf_2 */
    case 5235:  /* *avx512bw_vpternlogv32hf_2 */
    case 5234:  /* *avx512bw_vpternlogv32hf_2 */
    case 5233:  /* *avx512bw_vpternlogv32hf_2 */
    case 5232:  /* *avx512bw_vpternlogv32hf_2 */
    case 5231:  /* *avx512bw_vpternlogv32hf_2 */
    case 5230:  /* *avx512bw_vpternlogv32hf_2 */
    case 5229:  /* *avx512vl_vpternlogv2di_2 */
    case 5228:  /* *avx512vl_vpternlogv2di_2 */
    case 5227:  /* *avx512vl_vpternlogv2di_2 */
    case 5226:  /* *avx512vl_vpternlogv2di_2 */
    case 5225:  /* *avx512vl_vpternlogv2di_2 */
    case 5224:  /* *avx512vl_vpternlogv2di_2 */
    case 5223:  /* *avx512vl_vpternlogv2di_2 */
    case 5222:  /* *avx512vl_vpternlogv2di_2 */
    case 5221:  /* *avx512vl_vpternlogv2di_2 */
    case 5220:  /* *avx512vl_vpternlogv2di_2 */
    case 5219:  /* *avx512vl_vpternlogv2di_2 */
    case 5218:  /* *avx512vl_vpternlogv2di_2 */
    case 5217:  /* *avx512vl_vpternlogv2di_2 */
    case 5216:  /* *avx512vl_vpternlogv2di_2 */
    case 5215:  /* *avx512vl_vpternlogv2di_2 */
    case 5214:  /* *avx512vl_vpternlogv2di_2 */
    case 5213:  /* *avx512vl_vpternlogv2di_2 */
    case 5212:  /* *avx512vl_vpternlogv2di_2 */
    case 5211:  /* *avx512vl_vpternlogv2di_2 */
    case 5210:  /* *avx512vl_vpternlogv2di_2 */
    case 5209:  /* *avx512vl_vpternlogv2di_2 */
    case 5208:  /* *avx512vl_vpternlogv2di_2 */
    case 5207:  /* *avx512vl_vpternlogv2di_2 */
    case 5206:  /* *avx512vl_vpternlogv2di_2 */
    case 5205:  /* *avx512vl_vpternlogv2di_2 */
    case 5204:  /* *avx512vl_vpternlogv2di_2 */
    case 5203:  /* *avx512vl_vpternlogv2di_2 */
    case 5202:  /* *avx512vl_vpternlogv4di_2 */
    case 5201:  /* *avx512vl_vpternlogv4di_2 */
    case 5200:  /* *avx512vl_vpternlogv4di_2 */
    case 5199:  /* *avx512vl_vpternlogv4di_2 */
    case 5198:  /* *avx512vl_vpternlogv4di_2 */
    case 5197:  /* *avx512vl_vpternlogv4di_2 */
    case 5196:  /* *avx512vl_vpternlogv4di_2 */
    case 5195:  /* *avx512vl_vpternlogv4di_2 */
    case 5194:  /* *avx512vl_vpternlogv4di_2 */
    case 5193:  /* *avx512vl_vpternlogv4di_2 */
    case 5192:  /* *avx512vl_vpternlogv4di_2 */
    case 5191:  /* *avx512vl_vpternlogv4di_2 */
    case 5190:  /* *avx512vl_vpternlogv4di_2 */
    case 5189:  /* *avx512vl_vpternlogv4di_2 */
    case 5188:  /* *avx512vl_vpternlogv4di_2 */
    case 5187:  /* *avx512vl_vpternlogv4di_2 */
    case 5186:  /* *avx512vl_vpternlogv4di_2 */
    case 5185:  /* *avx512vl_vpternlogv4di_2 */
    case 5184:  /* *avx512vl_vpternlogv4di_2 */
    case 5183:  /* *avx512vl_vpternlogv4di_2 */
    case 5182:  /* *avx512vl_vpternlogv4di_2 */
    case 5181:  /* *avx512vl_vpternlogv4di_2 */
    case 5180:  /* *avx512vl_vpternlogv4di_2 */
    case 5179:  /* *avx512vl_vpternlogv4di_2 */
    case 5178:  /* *avx512vl_vpternlogv4di_2 */
    case 5177:  /* *avx512vl_vpternlogv4di_2 */
    case 5176:  /* *avx512vl_vpternlogv4di_2 */
    case 5175:  /* *avx512f_vpternlogv8di_2 */
    case 5174:  /* *avx512f_vpternlogv8di_2 */
    case 5173:  /* *avx512f_vpternlogv8di_2 */
    case 5172:  /* *avx512f_vpternlogv8di_2 */
    case 5171:  /* *avx512f_vpternlogv8di_2 */
    case 5170:  /* *avx512f_vpternlogv8di_2 */
    case 5169:  /* *avx512f_vpternlogv8di_2 */
    case 5168:  /* *avx512f_vpternlogv8di_2 */
    case 5167:  /* *avx512f_vpternlogv8di_2 */
    case 5166:  /* *avx512f_vpternlogv8di_2 */
    case 5165:  /* *avx512f_vpternlogv8di_2 */
    case 5164:  /* *avx512f_vpternlogv8di_2 */
    case 5163:  /* *avx512f_vpternlogv8di_2 */
    case 5162:  /* *avx512f_vpternlogv8di_2 */
    case 5161:  /* *avx512f_vpternlogv8di_2 */
    case 5160:  /* *avx512f_vpternlogv8di_2 */
    case 5159:  /* *avx512f_vpternlogv8di_2 */
    case 5158:  /* *avx512f_vpternlogv8di_2 */
    case 5157:  /* *avx512f_vpternlogv8di_2 */
    case 5156:  /* *avx512f_vpternlogv8di_2 */
    case 5155:  /* *avx512f_vpternlogv8di_2 */
    case 5154:  /* *avx512f_vpternlogv8di_2 */
    case 5153:  /* *avx512f_vpternlogv8di_2 */
    case 5152:  /* *avx512f_vpternlogv8di_2 */
    case 5151:  /* *avx512f_vpternlogv8di_2 */
    case 5150:  /* *avx512f_vpternlogv8di_2 */
    case 5149:  /* *avx512f_vpternlogv8di_2 */
    case 5148:  /* *avx512vl_vpternlogv4si_2 */
    case 5147:  /* *avx512vl_vpternlogv4si_2 */
    case 5146:  /* *avx512vl_vpternlogv4si_2 */
    case 5145:  /* *avx512vl_vpternlogv4si_2 */
    case 5144:  /* *avx512vl_vpternlogv4si_2 */
    case 5143:  /* *avx512vl_vpternlogv4si_2 */
    case 5142:  /* *avx512vl_vpternlogv4si_2 */
    case 5141:  /* *avx512vl_vpternlogv4si_2 */
    case 5140:  /* *avx512vl_vpternlogv4si_2 */
    case 5139:  /* *avx512vl_vpternlogv4si_2 */
    case 5138:  /* *avx512vl_vpternlogv4si_2 */
    case 5137:  /* *avx512vl_vpternlogv4si_2 */
    case 5136:  /* *avx512vl_vpternlogv4si_2 */
    case 5135:  /* *avx512vl_vpternlogv4si_2 */
    case 5134:  /* *avx512vl_vpternlogv4si_2 */
    case 5133:  /* *avx512vl_vpternlogv4si_2 */
    case 5132:  /* *avx512vl_vpternlogv4si_2 */
    case 5131:  /* *avx512vl_vpternlogv4si_2 */
    case 5130:  /* *avx512vl_vpternlogv4si_2 */
    case 5129:  /* *avx512vl_vpternlogv4si_2 */
    case 5128:  /* *avx512vl_vpternlogv4si_2 */
    case 5127:  /* *avx512vl_vpternlogv4si_2 */
    case 5126:  /* *avx512vl_vpternlogv4si_2 */
    case 5125:  /* *avx512vl_vpternlogv4si_2 */
    case 5124:  /* *avx512vl_vpternlogv4si_2 */
    case 5123:  /* *avx512vl_vpternlogv4si_2 */
    case 5122:  /* *avx512vl_vpternlogv4si_2 */
    case 5121:  /* *avx512vl_vpternlogv8si_2 */
    case 5120:  /* *avx512vl_vpternlogv8si_2 */
    case 5119:  /* *avx512vl_vpternlogv8si_2 */
    case 5118:  /* *avx512vl_vpternlogv8si_2 */
    case 5117:  /* *avx512vl_vpternlogv8si_2 */
    case 5116:  /* *avx512vl_vpternlogv8si_2 */
    case 5115:  /* *avx512vl_vpternlogv8si_2 */
    case 5114:  /* *avx512vl_vpternlogv8si_2 */
    case 5113:  /* *avx512vl_vpternlogv8si_2 */
    case 5112:  /* *avx512vl_vpternlogv8si_2 */
    case 5111:  /* *avx512vl_vpternlogv8si_2 */
    case 5110:  /* *avx512vl_vpternlogv8si_2 */
    case 5109:  /* *avx512vl_vpternlogv8si_2 */
    case 5108:  /* *avx512vl_vpternlogv8si_2 */
    case 5107:  /* *avx512vl_vpternlogv8si_2 */
    case 5106:  /* *avx512vl_vpternlogv8si_2 */
    case 5105:  /* *avx512vl_vpternlogv8si_2 */
    case 5104:  /* *avx512vl_vpternlogv8si_2 */
    case 5103:  /* *avx512vl_vpternlogv8si_2 */
    case 5102:  /* *avx512vl_vpternlogv8si_2 */
    case 5101:  /* *avx512vl_vpternlogv8si_2 */
    case 5100:  /* *avx512vl_vpternlogv8si_2 */
    case 5099:  /* *avx512vl_vpternlogv8si_2 */
    case 5098:  /* *avx512vl_vpternlogv8si_2 */
    case 5097:  /* *avx512vl_vpternlogv8si_2 */
    case 5096:  /* *avx512vl_vpternlogv8si_2 */
    case 5095:  /* *avx512vl_vpternlogv8si_2 */
    case 5094:  /* *avx512f_vpternlogv16si_2 */
    case 5093:  /* *avx512f_vpternlogv16si_2 */
    case 5092:  /* *avx512f_vpternlogv16si_2 */
    case 5091:  /* *avx512f_vpternlogv16si_2 */
    case 5090:  /* *avx512f_vpternlogv16si_2 */
    case 5089:  /* *avx512f_vpternlogv16si_2 */
    case 5088:  /* *avx512f_vpternlogv16si_2 */
    case 5087:  /* *avx512f_vpternlogv16si_2 */
    case 5086:  /* *avx512f_vpternlogv16si_2 */
    case 5085:  /* *avx512f_vpternlogv16si_2 */
    case 5084:  /* *avx512f_vpternlogv16si_2 */
    case 5083:  /* *avx512f_vpternlogv16si_2 */
    case 5082:  /* *avx512f_vpternlogv16si_2 */
    case 5081:  /* *avx512f_vpternlogv16si_2 */
    case 5080:  /* *avx512f_vpternlogv16si_2 */
    case 5079:  /* *avx512f_vpternlogv16si_2 */
    case 5078:  /* *avx512f_vpternlogv16si_2 */
    case 5077:  /* *avx512f_vpternlogv16si_2 */
    case 5076:  /* *avx512f_vpternlogv16si_2 */
    case 5075:  /* *avx512f_vpternlogv16si_2 */
    case 5074:  /* *avx512f_vpternlogv16si_2 */
    case 5073:  /* *avx512f_vpternlogv16si_2 */
    case 5072:  /* *avx512f_vpternlogv16si_2 */
    case 5071:  /* *avx512f_vpternlogv16si_2 */
    case 5070:  /* *avx512f_vpternlogv16si_2 */
    case 5069:  /* *avx512f_vpternlogv16si_2 */
    case 5068:  /* *avx512f_vpternlogv16si_2 */
    case 5067:  /* *avx512vl_vpternlogv8hi_2 */
    case 5066:  /* *avx512vl_vpternlogv8hi_2 */
    case 5065:  /* *avx512vl_vpternlogv8hi_2 */
    case 5064:  /* *avx512vl_vpternlogv8hi_2 */
    case 5063:  /* *avx512vl_vpternlogv8hi_2 */
    case 5062:  /* *avx512vl_vpternlogv8hi_2 */
    case 5061:  /* *avx512vl_vpternlogv8hi_2 */
    case 5060:  /* *avx512vl_vpternlogv8hi_2 */
    case 5059:  /* *avx512vl_vpternlogv8hi_2 */
    case 5058:  /* *avx512vl_vpternlogv8hi_2 */
    case 5057:  /* *avx512vl_vpternlogv8hi_2 */
    case 5056:  /* *avx512vl_vpternlogv8hi_2 */
    case 5055:  /* *avx512vl_vpternlogv8hi_2 */
    case 5054:  /* *avx512vl_vpternlogv8hi_2 */
    case 5053:  /* *avx512vl_vpternlogv8hi_2 */
    case 5052:  /* *avx512vl_vpternlogv8hi_2 */
    case 5051:  /* *avx512vl_vpternlogv8hi_2 */
    case 5050:  /* *avx512vl_vpternlogv8hi_2 */
    case 5049:  /* *avx512vl_vpternlogv8hi_2 */
    case 5048:  /* *avx512vl_vpternlogv8hi_2 */
    case 5047:  /* *avx512vl_vpternlogv8hi_2 */
    case 5046:  /* *avx512vl_vpternlogv8hi_2 */
    case 5045:  /* *avx512vl_vpternlogv8hi_2 */
    case 5044:  /* *avx512vl_vpternlogv8hi_2 */
    case 5043:  /* *avx512vl_vpternlogv8hi_2 */
    case 5042:  /* *avx512vl_vpternlogv8hi_2 */
    case 5041:  /* *avx512vl_vpternlogv8hi_2 */
    case 5040:  /* *avx512vl_vpternlogv16hi_2 */
    case 5039:  /* *avx512vl_vpternlogv16hi_2 */
    case 5038:  /* *avx512vl_vpternlogv16hi_2 */
    case 5037:  /* *avx512vl_vpternlogv16hi_2 */
    case 5036:  /* *avx512vl_vpternlogv16hi_2 */
    case 5035:  /* *avx512vl_vpternlogv16hi_2 */
    case 5034:  /* *avx512vl_vpternlogv16hi_2 */
    case 5033:  /* *avx512vl_vpternlogv16hi_2 */
    case 5032:  /* *avx512vl_vpternlogv16hi_2 */
    case 5031:  /* *avx512vl_vpternlogv16hi_2 */
    case 5030:  /* *avx512vl_vpternlogv16hi_2 */
    case 5029:  /* *avx512vl_vpternlogv16hi_2 */
    case 5028:  /* *avx512vl_vpternlogv16hi_2 */
    case 5027:  /* *avx512vl_vpternlogv16hi_2 */
    case 5026:  /* *avx512vl_vpternlogv16hi_2 */
    case 5025:  /* *avx512vl_vpternlogv16hi_2 */
    case 5024:  /* *avx512vl_vpternlogv16hi_2 */
    case 5023:  /* *avx512vl_vpternlogv16hi_2 */
    case 5022:  /* *avx512vl_vpternlogv16hi_2 */
    case 5021:  /* *avx512vl_vpternlogv16hi_2 */
    case 5020:  /* *avx512vl_vpternlogv16hi_2 */
    case 5019:  /* *avx512vl_vpternlogv16hi_2 */
    case 5018:  /* *avx512vl_vpternlogv16hi_2 */
    case 5017:  /* *avx512vl_vpternlogv16hi_2 */
    case 5016:  /* *avx512vl_vpternlogv16hi_2 */
    case 5015:  /* *avx512vl_vpternlogv16hi_2 */
    case 5014:  /* *avx512vl_vpternlogv16hi_2 */
    case 5013:  /* *avx512bw_vpternlogv32hi_2 */
    case 5012:  /* *avx512bw_vpternlogv32hi_2 */
    case 5011:  /* *avx512bw_vpternlogv32hi_2 */
    case 5010:  /* *avx512bw_vpternlogv32hi_2 */
    case 5009:  /* *avx512bw_vpternlogv32hi_2 */
    case 5008:  /* *avx512bw_vpternlogv32hi_2 */
    case 5007:  /* *avx512bw_vpternlogv32hi_2 */
    case 5006:  /* *avx512bw_vpternlogv32hi_2 */
    case 5005:  /* *avx512bw_vpternlogv32hi_2 */
    case 5004:  /* *avx512bw_vpternlogv32hi_2 */
    case 5003:  /* *avx512bw_vpternlogv32hi_2 */
    case 5002:  /* *avx512bw_vpternlogv32hi_2 */
    case 5001:  /* *avx512bw_vpternlogv32hi_2 */
    case 5000:  /* *avx512bw_vpternlogv32hi_2 */
    case 4999:  /* *avx512bw_vpternlogv32hi_2 */
    case 4998:  /* *avx512bw_vpternlogv32hi_2 */
    case 4997:  /* *avx512bw_vpternlogv32hi_2 */
    case 4996:  /* *avx512bw_vpternlogv32hi_2 */
    case 4995:  /* *avx512bw_vpternlogv32hi_2 */
    case 4994:  /* *avx512bw_vpternlogv32hi_2 */
    case 4993:  /* *avx512bw_vpternlogv32hi_2 */
    case 4992:  /* *avx512bw_vpternlogv32hi_2 */
    case 4991:  /* *avx512bw_vpternlogv32hi_2 */
    case 4990:  /* *avx512bw_vpternlogv32hi_2 */
    case 4989:  /* *avx512bw_vpternlogv32hi_2 */
    case 4988:  /* *avx512bw_vpternlogv32hi_2 */
    case 4987:  /* *avx512bw_vpternlogv32hi_2 */
    case 4986:  /* *avx512vl_vpternlogv16qi_2 */
    case 4985:  /* *avx512vl_vpternlogv16qi_2 */
    case 4984:  /* *avx512vl_vpternlogv16qi_2 */
    case 4983:  /* *avx512vl_vpternlogv16qi_2 */
    case 4982:  /* *avx512vl_vpternlogv16qi_2 */
    case 4981:  /* *avx512vl_vpternlogv16qi_2 */
    case 4980:  /* *avx512vl_vpternlogv16qi_2 */
    case 4979:  /* *avx512vl_vpternlogv16qi_2 */
    case 4978:  /* *avx512vl_vpternlogv16qi_2 */
    case 4977:  /* *avx512vl_vpternlogv16qi_2 */
    case 4976:  /* *avx512vl_vpternlogv16qi_2 */
    case 4975:  /* *avx512vl_vpternlogv16qi_2 */
    case 4974:  /* *avx512vl_vpternlogv16qi_2 */
    case 4973:  /* *avx512vl_vpternlogv16qi_2 */
    case 4972:  /* *avx512vl_vpternlogv16qi_2 */
    case 4971:  /* *avx512vl_vpternlogv16qi_2 */
    case 4970:  /* *avx512vl_vpternlogv16qi_2 */
    case 4969:  /* *avx512vl_vpternlogv16qi_2 */
    case 4968:  /* *avx512vl_vpternlogv16qi_2 */
    case 4967:  /* *avx512vl_vpternlogv16qi_2 */
    case 4966:  /* *avx512vl_vpternlogv16qi_2 */
    case 4965:  /* *avx512vl_vpternlogv16qi_2 */
    case 4964:  /* *avx512vl_vpternlogv16qi_2 */
    case 4963:  /* *avx512vl_vpternlogv16qi_2 */
    case 4962:  /* *avx512vl_vpternlogv16qi_2 */
    case 4961:  /* *avx512vl_vpternlogv16qi_2 */
    case 4960:  /* *avx512vl_vpternlogv16qi_2 */
    case 4959:  /* *avx512vl_vpternlogv32qi_2 */
    case 4958:  /* *avx512vl_vpternlogv32qi_2 */
    case 4957:  /* *avx512vl_vpternlogv32qi_2 */
    case 4956:  /* *avx512vl_vpternlogv32qi_2 */
    case 4955:  /* *avx512vl_vpternlogv32qi_2 */
    case 4954:  /* *avx512vl_vpternlogv32qi_2 */
    case 4953:  /* *avx512vl_vpternlogv32qi_2 */
    case 4952:  /* *avx512vl_vpternlogv32qi_2 */
    case 4951:  /* *avx512vl_vpternlogv32qi_2 */
    case 4950:  /* *avx512vl_vpternlogv32qi_2 */
    case 4949:  /* *avx512vl_vpternlogv32qi_2 */
    case 4948:  /* *avx512vl_vpternlogv32qi_2 */
    case 4947:  /* *avx512vl_vpternlogv32qi_2 */
    case 4946:  /* *avx512vl_vpternlogv32qi_2 */
    case 4945:  /* *avx512vl_vpternlogv32qi_2 */
    case 4944:  /* *avx512vl_vpternlogv32qi_2 */
    case 4943:  /* *avx512vl_vpternlogv32qi_2 */
    case 4942:  /* *avx512vl_vpternlogv32qi_2 */
    case 4941:  /* *avx512vl_vpternlogv32qi_2 */
    case 4940:  /* *avx512vl_vpternlogv32qi_2 */
    case 4939:  /* *avx512vl_vpternlogv32qi_2 */
    case 4938:  /* *avx512vl_vpternlogv32qi_2 */
    case 4937:  /* *avx512vl_vpternlogv32qi_2 */
    case 4936:  /* *avx512vl_vpternlogv32qi_2 */
    case 4935:  /* *avx512vl_vpternlogv32qi_2 */
    case 4934:  /* *avx512vl_vpternlogv32qi_2 */
    case 4933:  /* *avx512vl_vpternlogv32qi_2 */
    case 4932:  /* *avx512bw_vpternlogv64qi_2 */
    case 4931:  /* *avx512bw_vpternlogv64qi_2 */
    case 4930:  /* *avx512bw_vpternlogv64qi_2 */
    case 4929:  /* *avx512bw_vpternlogv64qi_2 */
    case 4928:  /* *avx512bw_vpternlogv64qi_2 */
    case 4927:  /* *avx512bw_vpternlogv64qi_2 */
    case 4926:  /* *avx512bw_vpternlogv64qi_2 */
    case 4925:  /* *avx512bw_vpternlogv64qi_2 */
    case 4924:  /* *avx512bw_vpternlogv64qi_2 */
    case 4923:  /* *avx512bw_vpternlogv64qi_2 */
    case 4922:  /* *avx512bw_vpternlogv64qi_2 */
    case 4921:  /* *avx512bw_vpternlogv64qi_2 */
    case 4920:  /* *avx512bw_vpternlogv64qi_2 */
    case 4919:  /* *avx512bw_vpternlogv64qi_2 */
    case 4918:  /* *avx512bw_vpternlogv64qi_2 */
    case 4917:  /* *avx512bw_vpternlogv64qi_2 */
    case 4916:  /* *avx512bw_vpternlogv64qi_2 */
    case 4915:  /* *avx512bw_vpternlogv64qi_2 */
    case 4914:  /* *avx512bw_vpternlogv64qi_2 */
    case 4913:  /* *avx512bw_vpternlogv64qi_2 */
    case 4912:  /* *avx512bw_vpternlogv64qi_2 */
    case 4911:  /* *avx512bw_vpternlogv64qi_2 */
    case 4910:  /* *avx512bw_vpternlogv64qi_2 */
    case 4909:  /* *avx512bw_vpternlogv64qi_2 */
    case 4908:  /* *avx512bw_vpternlogv64qi_2 */
    case 4907:  /* *avx512bw_vpternlogv64qi_2 */
    case 4906:  /* *avx512bw_vpternlogv64qi_2 */
    case 291:  /* *leahi_general_3b */
    case 290:  /* *leaqi_general_3b */
    case 289:  /* *leahi_general_3 */
    case 288:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7531:  /* xop_pmacssdd */
    case 7530:  /* xop_pmacsdd */
    case 7529:  /* xop_pmacssww */
    case 7528:  /* xop_pmacsww */
    case 5661:  /* *avx512vl_vpternlogv2df_3 */
    case 5660:  /* *avx512vl_vpternlogv2df_3 */
    case 5659:  /* *avx512vl_vpternlogv2df_3 */
    case 5658:  /* *avx512vl_vpternlogv2df_3 */
    case 5657:  /* *avx512vl_vpternlogv2df_3 */
    case 5656:  /* *avx512vl_vpternlogv2df_3 */
    case 5655:  /* *avx512vl_vpternlogv2df_3 */
    case 5654:  /* *avx512vl_vpternlogv2df_3 */
    case 5653:  /* *avx512vl_vpternlogv2df_3 */
    case 5652:  /* *avx512vl_vpternlogv4df_3 */
    case 5651:  /* *avx512vl_vpternlogv4df_3 */
    case 5650:  /* *avx512vl_vpternlogv4df_3 */
    case 5649:  /* *avx512vl_vpternlogv4df_3 */
    case 5648:  /* *avx512vl_vpternlogv4df_3 */
    case 5647:  /* *avx512vl_vpternlogv4df_3 */
    case 5646:  /* *avx512vl_vpternlogv4df_3 */
    case 5645:  /* *avx512vl_vpternlogv4df_3 */
    case 5644:  /* *avx512vl_vpternlogv4df_3 */
    case 5643:  /* *avx512f_vpternlogv8df_3 */
    case 5642:  /* *avx512f_vpternlogv8df_3 */
    case 5641:  /* *avx512f_vpternlogv8df_3 */
    case 5640:  /* *avx512f_vpternlogv8df_3 */
    case 5639:  /* *avx512f_vpternlogv8df_3 */
    case 5638:  /* *avx512f_vpternlogv8df_3 */
    case 5637:  /* *avx512f_vpternlogv8df_3 */
    case 5636:  /* *avx512f_vpternlogv8df_3 */
    case 5635:  /* *avx512f_vpternlogv8df_3 */
    case 5634:  /* *avx512vl_vpternlogv4sf_3 */
    case 5633:  /* *avx512vl_vpternlogv4sf_3 */
    case 5632:  /* *avx512vl_vpternlogv4sf_3 */
    case 5631:  /* *avx512vl_vpternlogv4sf_3 */
    case 5630:  /* *avx512vl_vpternlogv4sf_3 */
    case 5629:  /* *avx512vl_vpternlogv4sf_3 */
    case 5628:  /* *avx512vl_vpternlogv4sf_3 */
    case 5627:  /* *avx512vl_vpternlogv4sf_3 */
    case 5626:  /* *avx512vl_vpternlogv4sf_3 */
    case 5625:  /* *avx512vl_vpternlogv8sf_3 */
    case 5624:  /* *avx512vl_vpternlogv8sf_3 */
    case 5623:  /* *avx512vl_vpternlogv8sf_3 */
    case 5622:  /* *avx512vl_vpternlogv8sf_3 */
    case 5621:  /* *avx512vl_vpternlogv8sf_3 */
    case 5620:  /* *avx512vl_vpternlogv8sf_3 */
    case 5619:  /* *avx512vl_vpternlogv8sf_3 */
    case 5618:  /* *avx512vl_vpternlogv8sf_3 */
    case 5617:  /* *avx512vl_vpternlogv8sf_3 */
    case 5616:  /* *avx512f_vpternlogv16sf_3 */
    case 5615:  /* *avx512f_vpternlogv16sf_3 */
    case 5614:  /* *avx512f_vpternlogv16sf_3 */
    case 5613:  /* *avx512f_vpternlogv16sf_3 */
    case 5612:  /* *avx512f_vpternlogv16sf_3 */
    case 5611:  /* *avx512f_vpternlogv16sf_3 */
    case 5610:  /* *avx512f_vpternlogv16sf_3 */
    case 5609:  /* *avx512f_vpternlogv16sf_3 */
    case 5608:  /* *avx512f_vpternlogv16sf_3 */
    case 5607:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5606:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5605:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5604:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5603:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5602:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5601:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5600:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5599:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5598:  /* *avx512vl_vpternlogv16hf_3 */
    case 5597:  /* *avx512vl_vpternlogv16hf_3 */
    case 5596:  /* *avx512vl_vpternlogv16hf_3 */
    case 5595:  /* *avx512vl_vpternlogv16hf_3 */
    case 5594:  /* *avx512vl_vpternlogv16hf_3 */
    case 5593:  /* *avx512vl_vpternlogv16hf_3 */
    case 5592:  /* *avx512vl_vpternlogv16hf_3 */
    case 5591:  /* *avx512vl_vpternlogv16hf_3 */
    case 5590:  /* *avx512vl_vpternlogv16hf_3 */
    case 5589:  /* *avx512bw_vpternlogv32hf_3 */
    case 5588:  /* *avx512bw_vpternlogv32hf_3 */
    case 5587:  /* *avx512bw_vpternlogv32hf_3 */
    case 5586:  /* *avx512bw_vpternlogv32hf_3 */
    case 5585:  /* *avx512bw_vpternlogv32hf_3 */
    case 5584:  /* *avx512bw_vpternlogv32hf_3 */
    case 5583:  /* *avx512bw_vpternlogv32hf_3 */
    case 5582:  /* *avx512bw_vpternlogv32hf_3 */
    case 5581:  /* *avx512bw_vpternlogv32hf_3 */
    case 5580:  /* *avx512vl_vpternlogv2di_3 */
    case 5579:  /* *avx512vl_vpternlogv2di_3 */
    case 5578:  /* *avx512vl_vpternlogv2di_3 */
    case 5577:  /* *avx512vl_vpternlogv2di_3 */
    case 5576:  /* *avx512vl_vpternlogv2di_3 */
    case 5575:  /* *avx512vl_vpternlogv2di_3 */
    case 5574:  /* *avx512vl_vpternlogv2di_3 */
    case 5573:  /* *avx512vl_vpternlogv2di_3 */
    case 5572:  /* *avx512vl_vpternlogv2di_3 */
    case 5571:  /* *avx512vl_vpternlogv4di_3 */
    case 5570:  /* *avx512vl_vpternlogv4di_3 */
    case 5569:  /* *avx512vl_vpternlogv4di_3 */
    case 5568:  /* *avx512vl_vpternlogv4di_3 */
    case 5567:  /* *avx512vl_vpternlogv4di_3 */
    case 5566:  /* *avx512vl_vpternlogv4di_3 */
    case 5565:  /* *avx512vl_vpternlogv4di_3 */
    case 5564:  /* *avx512vl_vpternlogv4di_3 */
    case 5563:  /* *avx512vl_vpternlogv4di_3 */
    case 5562:  /* *avx512f_vpternlogv8di_3 */
    case 5561:  /* *avx512f_vpternlogv8di_3 */
    case 5560:  /* *avx512f_vpternlogv8di_3 */
    case 5559:  /* *avx512f_vpternlogv8di_3 */
    case 5558:  /* *avx512f_vpternlogv8di_3 */
    case 5557:  /* *avx512f_vpternlogv8di_3 */
    case 5556:  /* *avx512f_vpternlogv8di_3 */
    case 5555:  /* *avx512f_vpternlogv8di_3 */
    case 5554:  /* *avx512f_vpternlogv8di_3 */
    case 5553:  /* *avx512vl_vpternlogv4si_3 */
    case 5552:  /* *avx512vl_vpternlogv4si_3 */
    case 5551:  /* *avx512vl_vpternlogv4si_3 */
    case 5550:  /* *avx512vl_vpternlogv4si_3 */
    case 5549:  /* *avx512vl_vpternlogv4si_3 */
    case 5548:  /* *avx512vl_vpternlogv4si_3 */
    case 5547:  /* *avx512vl_vpternlogv4si_3 */
    case 5546:  /* *avx512vl_vpternlogv4si_3 */
    case 5545:  /* *avx512vl_vpternlogv4si_3 */
    case 5544:  /* *avx512vl_vpternlogv8si_3 */
    case 5543:  /* *avx512vl_vpternlogv8si_3 */
    case 5542:  /* *avx512vl_vpternlogv8si_3 */
    case 5541:  /* *avx512vl_vpternlogv8si_3 */
    case 5540:  /* *avx512vl_vpternlogv8si_3 */
    case 5539:  /* *avx512vl_vpternlogv8si_3 */
    case 5538:  /* *avx512vl_vpternlogv8si_3 */
    case 5537:  /* *avx512vl_vpternlogv8si_3 */
    case 5536:  /* *avx512vl_vpternlogv8si_3 */
    case 5535:  /* *avx512f_vpternlogv16si_3 */
    case 5534:  /* *avx512f_vpternlogv16si_3 */
    case 5533:  /* *avx512f_vpternlogv16si_3 */
    case 5532:  /* *avx512f_vpternlogv16si_3 */
    case 5531:  /* *avx512f_vpternlogv16si_3 */
    case 5530:  /* *avx512f_vpternlogv16si_3 */
    case 5529:  /* *avx512f_vpternlogv16si_3 */
    case 5528:  /* *avx512f_vpternlogv16si_3 */
    case 5527:  /* *avx512f_vpternlogv16si_3 */
    case 5526:  /* *avx512vl_vpternlogv8hi_3 */
    case 5525:  /* *avx512vl_vpternlogv8hi_3 */
    case 5524:  /* *avx512vl_vpternlogv8hi_3 */
    case 5523:  /* *avx512vl_vpternlogv8hi_3 */
    case 5522:  /* *avx512vl_vpternlogv8hi_3 */
    case 5521:  /* *avx512vl_vpternlogv8hi_3 */
    case 5520:  /* *avx512vl_vpternlogv8hi_3 */
    case 5519:  /* *avx512vl_vpternlogv8hi_3 */
    case 5518:  /* *avx512vl_vpternlogv8hi_3 */
    case 5517:  /* *avx512vl_vpternlogv16hi_3 */
    case 5516:  /* *avx512vl_vpternlogv16hi_3 */
    case 5515:  /* *avx512vl_vpternlogv16hi_3 */
    case 5514:  /* *avx512vl_vpternlogv16hi_3 */
    case 5513:  /* *avx512vl_vpternlogv16hi_3 */
    case 5512:  /* *avx512vl_vpternlogv16hi_3 */
    case 5511:  /* *avx512vl_vpternlogv16hi_3 */
    case 5510:  /* *avx512vl_vpternlogv16hi_3 */
    case 5509:  /* *avx512vl_vpternlogv16hi_3 */
    case 5508:  /* *avx512bw_vpternlogv32hi_3 */
    case 5507:  /* *avx512bw_vpternlogv32hi_3 */
    case 5506:  /* *avx512bw_vpternlogv32hi_3 */
    case 5505:  /* *avx512bw_vpternlogv32hi_3 */
    case 5504:  /* *avx512bw_vpternlogv32hi_3 */
    case 5503:  /* *avx512bw_vpternlogv32hi_3 */
    case 5502:  /* *avx512bw_vpternlogv32hi_3 */
    case 5501:  /* *avx512bw_vpternlogv32hi_3 */
    case 5500:  /* *avx512bw_vpternlogv32hi_3 */
    case 5499:  /* *avx512vl_vpternlogv16qi_3 */
    case 5498:  /* *avx512vl_vpternlogv16qi_3 */
    case 5497:  /* *avx512vl_vpternlogv16qi_3 */
    case 5496:  /* *avx512vl_vpternlogv16qi_3 */
    case 5495:  /* *avx512vl_vpternlogv16qi_3 */
    case 5494:  /* *avx512vl_vpternlogv16qi_3 */
    case 5493:  /* *avx512vl_vpternlogv16qi_3 */
    case 5492:  /* *avx512vl_vpternlogv16qi_3 */
    case 5491:  /* *avx512vl_vpternlogv16qi_3 */
    case 5490:  /* *avx512vl_vpternlogv32qi_3 */
    case 5489:  /* *avx512vl_vpternlogv32qi_3 */
    case 5488:  /* *avx512vl_vpternlogv32qi_3 */
    case 5487:  /* *avx512vl_vpternlogv32qi_3 */
    case 5486:  /* *avx512vl_vpternlogv32qi_3 */
    case 5485:  /* *avx512vl_vpternlogv32qi_3 */
    case 5484:  /* *avx512vl_vpternlogv32qi_3 */
    case 5483:  /* *avx512vl_vpternlogv32qi_3 */
    case 5482:  /* *avx512vl_vpternlogv32qi_3 */
    case 5481:  /* *avx512bw_vpternlogv64qi_3 */
    case 5480:  /* *avx512bw_vpternlogv64qi_3 */
    case 5479:  /* *avx512bw_vpternlogv64qi_3 */
    case 5478:  /* *avx512bw_vpternlogv64qi_3 */
    case 5477:  /* *avx512bw_vpternlogv64qi_3 */
    case 5476:  /* *avx512bw_vpternlogv64qi_3 */
    case 5475:  /* *avx512bw_vpternlogv64qi_3 */
    case 5474:  /* *avx512bw_vpternlogv64qi_3 */
    case 5473:  /* *avx512bw_vpternlogv64qi_3 */
    case 299:  /* *leadi_general_4 */
    case 298:  /* *leadi_general_4 */
    case 297:  /* *leasi_general_4 */
    case 296:  /* *leasi_general_4 */
    case 295:  /* *leahi_general_4 */
    case 294:  /* *leahi_general_4 */
    case 293:  /* *leaqi_general_4 */
    case 292:  /* *leaqi_general_4 */
    case 287:  /* *leahi_general_2b */
    case 286:  /* *leaqi_general_2b */
    case 285:  /* *leahi_general_2 */
    case 284:  /* *leaqi_general_2 */
    case 283:  /* *leahi_general_1 */
    case 282:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 281:  /* *addvdi4_overflow_2 */
    case 280:  /* *addvsi4_overflow_2 */
    case 279:  /* *addvhi4_overflow_2 */
    case 278:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 277:  /* *addvdi4_overflow_1 */
    case 276:  /* *addvsi4_overflow_1 */
    case 275:  /* *addvhi4_overflow_1 */
    case 274:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 455:  /* *mulvdi4_1 */
    case 454:  /* *mulvsi4_1 */
    case 453:  /* *mulvhi4_1 */
    case 328:  /* *subvti4_doubleword_1 */
    case 327:  /* *subvdi4_doubleword_1 */
    case 324:  /* subvdi4_1 */
    case 323:  /* subvsi4_1 */
    case 322:  /* subvhi4_1 */
    case 321:  /* subvqi4_1 */
    case 273:  /* *addvti4_doubleword_1 */
    case 272:  /* *addvdi4_doubleword_1 */
    case 269:  /* addvdi4_1 */
    case 268:  /* addvsi4_1 */
    case 267:  /* addvhi4_1 */
    case 266:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 460:  /* *umulvqi4 */
    case 459:  /* *mulvqi4 */
    case 452:  /* *mulvhi4 */
    case 451:  /* *mulvdi4 */
    case 450:  /* *mulvsi4 */
    case 326:  /* *subvti4_doubleword */
    case 325:  /* *subvdi4_doubleword */
    case 320:  /* *subvdi4 */
    case 319:  /* *subvsi4 */
    case 318:  /* *subvhi4 */
    case 317:  /* *subvqi4 */
    case 271:  /* *addvti4_doubleword */
    case 270:  /* *addvdi4_doubleword */
    case 265:  /* *addvdi4 */
    case 264:  /* *addvsi4 */
    case 263:  /* *addvhi4 */
    case 262:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 619:  /* *xorqi_extdi_2 */
    case 618:  /* *iorqi_extdi_2 */
    case 617:  /* *xorqi_extsi_2 */
    case 616:  /* *iorqi_extsi_2 */
    case 615:  /* *xorqi_exthi_2 */
    case 614:  /* *iorqi_exthi_2 */
    case 557:  /* *andqi_extdi_2 */
    case 556:  /* *andqi_extsi_2 */
    case 555:  /* *andqi_exthi_2 */
    case 316:  /* *subqi_extdi_2 */
    case 315:  /* *subqi_extsi_2 */
    case 314:  /* *subqi_exthi_2 */
    case 261:  /* *addqi_extdi_2 */
    case 260:  /* *addqi_extsi_2 */
    case 259:  /* *addqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 810:  /* *ashrqi_extdi_2 */
    case 809:  /* *lshrqi_extdi_2 */
    case 808:  /* *ashrqi_extsi_2 */
    case 807:  /* *lshrqi_extsi_2 */
    case 806:  /* *ashrqi_exthi_2 */
    case 805:  /* *lshrqi_exthi_2 */
    case 737:  /* *ashlqi_extdi_2 */
    case 736:  /* *ashlqi_extsi_2 */
    case 735:  /* *ashlqi_exthi_2 */
    case 613:  /* *xorqi_extdi_1 */
    case 612:  /* *iorqi_extdi_1 */
    case 611:  /* *xorqi_extsi_1 */
    case 610:  /* *iorqi_extsi_1 */
    case 609:  /* *xorqi_exthi_1 */
    case 608:  /* *iorqi_exthi_1 */
    case 551:  /* *andqi_extdi_1 */
    case 550:  /* *andqi_extsi_1 */
    case 549:  /* *andqi_exthi_1 */
    case 258:  /* *addqi_extdi_1 */
    case 257:  /* *addqi_extsi_1 */
    case 256:  /* *addqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 804:  /* *ashrdi3_cconly */
    case 803:  /* *lshrdi3_cconly */
    case 802:  /* *ashrsi3_cconly */
    case 801:  /* *lshrsi3_cconly */
    case 800:  /* *ashrhi3_cconly */
    case 799:  /* *lshrhi3_cconly */
    case 798:  /* *ashrqi3_cconly */
    case 797:  /* *lshrqi3_cconly */
    case 734:  /* *ashldi3_cconly */
    case 733:  /* *ashlsi3_cconly */
    case 732:  /* *ashlhi3_cconly */
    case 731:  /* *ashlqi3_cconly */
    case 607:  /* *xordi_3 */
    case 606:  /* *iordi_3 */
    case 605:  /* *xorsi_3 */
    case 604:  /* *iorsi_3 */
    case 603:  /* *xorhi_3 */
    case 602:  /* *iorhi_3 */
    case 601:  /* *xorqi_3 */
    case 600:  /* *iorqi_3 */
    case 255:  /* *adddi_5 */
    case 254:  /* *addsi_5 */
    case 253:  /* *addhi_5 */
    case 252:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 251:  /* *addsi_4 */
    case 250:  /* *addhi_4 */
    case 249:  /* *addqi_4 */
    case 248:  /* *adddi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 247:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 246:  /* *adddi_3 */
    case 245:  /* *addsi_3 */
    case 244:  /* *addhi_3 */
    case 243:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 796:  /* *ashrsi3_cmp_zext */
    case 795:  /* *lshrsi3_cmp_zext */
    case 730:  /* *ashlsi3_cmp_zext */
    case 597:  /* *xorsi_2_zext */
    case 596:  /* *iorsi_2_zext */
    case 544:  /* *andsi_2_zext */
    case 313:  /* *subsi_2_zext */
    case 242:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 794:  /* *ashrdi3_cmp */
    case 793:  /* *lshrdi3_cmp */
    case 792:  /* *ashrsi3_cmp */
    case 791:  /* *lshrsi3_cmp */
    case 790:  /* *ashrhi3_cmp */
    case 789:  /* *lshrhi3_cmp */
    case 788:  /* *ashrqi3_cmp */
    case 787:  /* *lshrqi3_cmp */
    case 729:  /* *ashldi3_cmp */
    case 728:  /* *ashlsi3_cmp */
    case 727:  /* *ashlhi3_cmp */
    case 726:  /* *ashlqi3_cmp */
    case 595:  /* *xordi_2 */
    case 594:  /* *iordi_2 */
    case 593:  /* *xorsi_2 */
    case 592:  /* *iorsi_2 */
    case 591:  /* *xorhi_2 */
    case 590:  /* *iorhi_2 */
    case 589:  /* *xorqi_2 */
    case 588:  /* *iorqi_2 */
    case 548:  /* *andsi_2 */
    case 547:  /* *andhi_2 */
    case 546:  /* *andqi_2 */
    case 545:  /* *andqi_2_maybe_si */
    case 543:  /* *anddi_2 */
    case 312:  /* *subdi_2 */
    case 311:  /* *subsi_2 */
    case 310:  /* *subhi_2 */
    case 309:  /* *subqi_2 */
    case 241:  /* *adddi_2 */
    case 240:  /* *addsi_2 */
    case 239:  /* *addhi_2 */
    case 238:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 847:  /* *rotrhi3_1_slp */
    case 846:  /* *rotlhi3_1_slp */
    case 845:  /* *rotrqi3_1_slp */
    case 844:  /* *rotlqi3_1_slp */
    case 786:  /* *ashrhi3_1_slp */
    case 785:  /* *lshrhi3_1_slp */
    case 784:  /* *ashrqi3_1_slp */
    case 783:  /* *lshrqi3_1_slp */
    case 725:  /* *ashlhi3_1_slp */
    case 724:  /* *ashlqi3_1_slp */
    case 587:  /* *xorhi_1_slp */
    case 586:  /* *iorhi_1_slp */
    case 585:  /* *xorqi_1_slp */
    case 584:  /* *iorqi_1_slp */
    case 542:  /* *andhi_1_slp */
    case 541:  /* *andqi_1_slp */
    case 308:  /* *subhi_1_slp */
    case 307:  /* *subqi_1_slp */
    case 237:  /* *addhi_1_slp */
    case 236:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1844:  /* kxnordi */
    case 1843:  /* kxnorsi */
    case 1842:  /* kxnorhi */
    case 1841:  /* kxnorqi */
    case 839:  /* *rotrsi3_1_zext */
    case 838:  /* *rotlsi3_1_zext */
    case 778:  /* *ashrsi3_1_zext */
    case 777:  /* *lshrsi3_1_zext */
    case 766:  /* *ashrsi3_cvt_zext */
    case 721:  /* *ashlsi3_1_zext */
    case 579:  /* *xorsi_1_zext */
    case 578:  /* *iorsi_1_zext */
    case 537:  /* *andsi_1_zext */
    case 448:  /* *mulsi3_1_zext */
    case 378:  /* *subsi3_carry_zext_0r */
    case 377:  /* *subsi3_carry_zext_0 */
    case 306:  /* *subsi_1_zext */
    case 233:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1861:  /* klshiftrtdi */
    case 1860:  /* kashiftdi */
    case 1859:  /* klshiftrtsi */
    case 1858:  /* kashiftsi */
    case 1857:  /* klshiftrthi */
    case 1856:  /* kashifthi */
    case 1855:  /* klshiftrtqi */
    case 1854:  /* kashiftqi */
    case 1853:  /* kadddi */
    case 1852:  /* kaddsi */
    case 1851:  /* kaddhi */
    case 1850:  /* kaddqi */
    case 1836:  /* kxordi */
    case 1835:  /* kiordi */
    case 1834:  /* kanddi */
    case 1833:  /* kxorsi */
    case 1832:  /* kiorsi */
    case 1831:  /* kandsi */
    case 1830:  /* kxorhi */
    case 1829:  /* kiorhi */
    case 1828:  /* kandhi */
    case 1827:  /* kxorqi */
    case 1826:  /* kiorqi */
    case 1825:  /* kandqi */
    case 1630:  /* xorv2hi3 */
    case 1629:  /* iorv2hi3 */
    case 1628:  /* andv2hi3 */
    case 1627:  /* xorv2qi3 */
    case 1626:  /* iorv2qi3 */
    case 1625:  /* andv2qi3 */
    case 1624:  /* xorv4qi3 */
    case 1623:  /* iorv4qi3 */
    case 1622:  /* andv4qi3 */
    case 1566:  /* ashrv2qi3 */
    case 1565:  /* lshrv2qi3 */
    case 1564:  /* ashlv2qi3 */
    case 1491:  /* subv2qi3 */
    case 1490:  /* addv2qi3 */
    case 1259:  /* pro_epilogue_adjust_stack_sub_di */
    case 1258:  /* pro_epilogue_adjust_stack_sub_si */
    case 1257:  /* pro_epilogue_adjust_stack_add_di */
    case 1256:  /* pro_epilogue_adjust_stack_add_si */
    case 1255:  /* *umindi3_1 */
    case 1254:  /* *umaxdi3_1 */
    case 1253:  /* *smindi3_1 */
    case 1252:  /* *smaxdi3_1 */
    case 1251:  /* *uminsi3_1 */
    case 1250:  /* *umaxsi3_1 */
    case 1249:  /* *sminsi3_1 */
    case 1248:  /* *smaxsi3_1 */
    case 1247:  /* *uminhi3_1 */
    case 1246:  /* *umaxhi3_1 */
    case 1245:  /* *sminhi3_1 */
    case 1244:  /* *smaxhi3_1 */
    case 1243:  /* *uminqi3_1 */
    case 1242:  /* *umaxqi3_1 */
    case 1241:  /* *sminqi3_1 */
    case 1240:  /* *smaxqi3_1 */
    case 1239:  /* *uminti3_doubleword */
    case 1238:  /* *umaxti3_doubleword */
    case 1237:  /* *sminti3_doubleword */
    case 1236:  /* *smaxti3_doubleword */
    case 1235:  /* *umindi3_doubleword */
    case 1234:  /* *umaxdi3_doubleword */
    case 1233:  /* *smindi3_doubleword */
    case 1232:  /* *smaxdi3_doubleword */
    case 843:  /* *rotrhi3_1 */
    case 842:  /* *rotlhi3_1 */
    case 841:  /* *rotrqi3_1 */
    case 840:  /* *rotlqi3_1 */
    case 836:  /* *rotrdi3_1 */
    case 835:  /* *rotldi3_1 */
    case 834:  /* *rotrsi3_1 */
    case 833:  /* *rotlsi3_1 */
    case 782:  /* *lshrhi3_1 */
    case 781:  /* *lshrqi3_1 */
    case 780:  /* *ashrhi3_1 */
    case 779:  /* *ashrqi3_1 */
    case 774:  /* *lshrdi3_1 */
    case 773:  /* *lshrsi3_1 */
    case 772:  /* *ashrdi3_1 */
    case 771:  /* *ashrsi3_1 */
    case 765:  /* ashrdi3_cvt */
    case 764:  /* ashrsi3_cvt */
    case 757:  /* ashrti3_doubleword */
    case 756:  /* lshrti3_doubleword */
    case 755:  /* ashrdi3_doubleword */
    case 754:  /* lshrdi3_doubleword */
    case 723:  /* *ashlqi3_1 */
    case 722:  /* *ashlhi3_1 */
    case 719:  /* *ashldi3_1 */
    case 718:  /* *ashlsi3_1 */
    case 705:  /* ashlti3_doubleword */
    case 704:  /* ashldi3_doubleword */
    case 583:  /* *xorqi_1 */
    case 582:  /* *iorqi_1 */
    case 574:  /* *xordi_1_btc */
    case 573:  /* *iordi_1_bts */
    case 572:  /* *xordi_1 */
    case 571:  /* *iordi_1 */
    case 570:  /* *xorsi_1 */
    case 569:  /* *iorsi_1 */
    case 568:  /* *xorhi_1 */
    case 567:  /* *iorhi_1 */
    case 566:  /* *xordi3_doubleword */
    case 565:  /* *iordi3_doubleword */
    case 540:  /* *andqi_1 */
    case 539:  /* *andsi_1 */
    case 538:  /* *andhi_1 */
    case 536:  /* *anddi_1_btr */
    case 535:  /* *anddi_1 */
    case 534:  /* *anddi3_doubleword */
    case 449:  /* *mulqi3_1 */
    case 447:  /* *muldi3_1 */
    case 446:  /* *mulsi3_1 */
    case 445:  /* *mulhi3_1 */
    case 375:  /* *subdi3_carry_0r */
    case 374:  /* *subsi3_carry_0r */
    case 373:  /* *subhi3_carry_0r */
    case 372:  /* *subqi3_carry_0r */
    case 371:  /* *subdi3_carry_0 */
    case 370:  /* *subsi3_carry_0 */
    case 369:  /* *subhi3_carry_0 */
    case 368:  /* *subqi3_carry_0 */
    case 305:  /* *subdi_1 */
    case 304:  /* *subsi_1 */
    case 303:  /* *subhi_1 */
    case 302:  /* *subqi_1 */
    case 301:  /* *subti3_doubleword */
    case 300:  /* *subdi3_doubleword */
    case 235:  /* *addqi_1 */
    case 234:  /* *addhi_1 */
    case 232:  /* *adddi_1 */
    case 231:  /* *addsi_1 */
    case 230:  /* *addti3_doubleword */
    case 229:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 7109:  /* sse_stmxcsr */
    case 1372:  /* rdpid_rex64 */
    case 1371:  /* rdpid */
    case 1331:  /* rdgsbasedi */
    case 1330:  /* rdfsbasedi */
    case 1329:  /* rdgsbasesi */
    case 1328:  /* rdfsbasesi */
    case 1323:  /* lwp_slwpcbdi */
    case 1322:  /* lwp_slwpcbsi */
    case 1318:  /* fnstsw */
    case 1291:  /* fxsave64 */
    case 1290:  /* fxsave */
    case 1286:  /* rdtsc */
    case 1272:  /* *prefetch_prefetchwt1 */
    case 1120:  /* x86_fnstsw_1 */
    case 1066:  /* *load_tp_x32_zext */
    case 1065:  /* *load_tp_di */
    case 1064:  /* *load_tp_si */
    case 941:  /* set_got_rex64 */
    case 201:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 226:  /* floatunssixf2_i387_with_xmm */
    case 225:  /* floatunssidf2_i387_with_xmm */
    case 224:  /* floatunssisf2_i387_with_xmm */
    case 200:  /* fix_truncsi_i387 */
    case 199:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 219:  /* floatdixf2_i387_with_xmm */
    case 218:  /* floatdidf2_i387_with_xmm */
    case 217:  /* floatdisf2_i387_with_xmm */
    case 198:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 1890:  /* *negv2df2 */
    case 1889:  /* *absv2df2 */
    case 1888:  /* *negv4df2 */
    case 1887:  /* *absv4df2 */
    case 1886:  /* *negv8df2 */
    case 1885:  /* *absv8df2 */
    case 1884:  /* *negv4sf2 */
    case 1883:  /* *absv4sf2 */
    case 1882:  /* *negv8sf2 */
    case 1881:  /* *absv8sf2 */
    case 1880:  /* *negv16sf2 */
    case 1879:  /* *absv16sf2 */
    case 1878:  /* *negv8hf2 */
    case 1877:  /* *absv8hf2 */
    case 1876:  /* *negv16hf2 */
    case 1875:  /* *absv16hf2 */
    case 1874:  /* *negv32hf2 */
    case 1873:  /* *absv32hf2 */
    case 1418:  /* *mmx_negv2sf2 */
    case 1417:  /* *mmx_absv2sf2 */
    case 948:  /* ffssi2_no_cmove */
    case 678:  /* *negdf2_1 */
    case 677:  /* *absdf2_1 */
    case 676:  /* *negsf2_1 */
    case 675:  /* *abssf2_1 */
    case 674:  /* *neghf2_1 */
    case 673:  /* *abshf2_1 */
    case 665:  /* *negtf2_1 */
    case 664:  /* *abstf2_1 */
    case 194:  /* fix_truncdi_i387_fisttp */
    case 193:  /* fix_truncsi_i387_fisttp */
    case 192:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 187:  /* *fixuns_truncdf_1 */
    case 186:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 157:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1848:  /* knotdi */
    case 1847:  /* knotsi */
    case 1846:  /* knothi */
    case 1845:  /* knotqi */
    case 1477:  /* negv2qi2 */
    case 1208:  /* *x86_movdicc_0_m1_neg */
    case 1207:  /* *x86_movsicc_0_m1_neg */
    case 1206:  /* *x86_movhicc_0_m1_neg */
    case 1205:  /* *x86_movqicc_0_m1_neg */
    case 1204:  /* *x86_movdicc_0_m1_se */
    case 1203:  /* *x86_movsicc_0_m1_se */
    case 1202:  /* *x86_movdicc_0_m1 */
    case 1201:  /* *x86_movsicc_0_m1 */
    case 1046:  /* popcounthi2 */
    case 1040:  /* popcountdi2 */
    case 1039:  /* popcountsi2 */
    case 970:  /* clzdi2_lzcnt */
    case 969:  /* clzsi2_lzcnt */
    case 956:  /* ctzdi2 */
    case 955:  /* ctzsi2 */
    case 672:  /* *negxf2_i387_1 */
    case 671:  /* *absxf2_i387_1 */
    case 670:  /* *negdf2_i387_1 */
    case 669:  /* *absdf2_i387_1 */
    case 668:  /* *negsf2_i387_1 */
    case 667:  /* *abssf2_i387_1 */
    case 659:  /* *absdi2_1 */
    case 658:  /* *abssi2_1 */
    case 657:  /* *abshi2_1 */
    case 656:  /* *absqi2_1 */
    case 653:  /* *absti2_doubleword */
    case 652:  /* *absdi2_doubleword */
    case 628:  /* *negdi_1 */
    case 627:  /* *negsi_1 */
    case 626:  /* *neghi_1 */
    case 625:  /* *negqi_1 */
    case 624:  /* *negti2_doubleword */
    case 623:  /* *negdi2_doubleword */
    case 197:  /* *fix_truncdi_i387_1 */
    case 196:  /* *fix_truncsi_i387_1 */
    case 195:  /* *fix_trunchi_i387_1 */
    case 154:  /* zero_extendqihi2_and */
    case 151:  /* zero_extendhisi2_and */
    case 150:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 694:  /* *one_cmplhi_1_slp */
    case 693:  /* *one_cmplqi_1_slp */
    case 133:  /* *insvqi_3 */
    case 132:  /* *insvqi_3 */
    case 131:  /* *insvqi_3 */
    case 130:  /* *insvqi_3 */
    case 129:  /* *insvqi_3 */
    case 128:  /* *insvqi_3 */
    case 127:  /* *insvqi_2 */
    case 126:  /* *insvqi_2 */
    case 125:  /* *insvqi_2 */
    case 124:  /* *insvqi_2 */
    case 123:  /* *insvqi_2 */
    case 122:  /* *insvqi_2 */
    case 121:  /* *insvqi_1 */
    case 120:  /* *insvqi_1 */
    case 119:  /* *insvqi_1 */
    case 115:  /* *insvqi_1_mem_rex64 */
    case 114:  /* *insvqi_1_mem_rex64 */
    case 113:  /* *insvqi_1_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 8530:  /* avx512f_pd512_pd */
    case 8529:  /* avx512f_ps512_ps */
    case 8528:  /* avx512f_si512_si */
    case 7859:  /* avx512cd_maskw_vec_dupv4si */
    case 7858:  /* avx512cd_maskw_vec_dupv8si */
    case 7857:  /* avx512cd_maskw_vec_dupv16si */
    case 7856:  /* avx512cd_maskb_vec_dupv2di */
    case 7855:  /* avx512cd_maskb_vec_dupv4di */
    case 7854:  /* avx512cd_maskb_vec_dupv8di */
    case 7836:  /* *avx512dq_broadcastv8sf */
    case 7834:  /* *avx512dq_broadcastv16sf */
    case 7832:  /* *avx512dq_broadcastv4si */
    case 7830:  /* *avx512dq_broadcastv8si */
    case 7828:  /* *avx512dq_broadcastv16si */
    case 7750:  /* avx512fp16_vec_dupv8hf */
    case 7748:  /* avx512vl_vec_dupv16hf */
    case 7746:  /* avx512bw_vec_dupv32hf */
    case 7744:  /* avx512vl_vec_dupv8hi */
    case 7742:  /* avx512vl_vec_dupv16hi */
    case 7740:  /* avx512bw_vec_dupv32hi */
    case 7738:  /* avx512vl_vec_dupv32qi */
    case 7736:  /* avx512vl_vec_dupv16qi */
    case 7734:  /* avx512bw_vec_dupv64qi */
    case 7732:  /* avx512vl_vec_dupv2df */
    case 7730:  /* avx512vl_vec_dupv4df */
    case 7728:  /* avx512f_vec_dupv8df */
    case 7726:  /* avx512vl_vec_dupv4sf */
    case 7724:  /* avx512vl_vec_dupv8sf */
    case 7722:  /* avx512f_vec_dupv16sf */
    case 7720:  /* avx512vl_vec_dupv2di */
    case 7718:  /* avx512vl_vec_dupv4di */
    case 7716:  /* avx512f_vec_dupv8di */
    case 7714:  /* avx512vl_vec_dupv4si */
    case 7712:  /* avx512vl_vec_dupv8si */
    case 7710:  /* avx512f_vec_dupv16si */
    case 7709:  /* avx512bw_vec_dupv32hf_1 */
    case 7708:  /* avx512bw_vec_dupv64qi_1 */
    case 7707:  /* avx512bw_vec_dupv32hi_1 */
    case 7706:  /* avx512f_vec_dupv8di_1 */
    case 7705:  /* avx512f_vec_dupv16si_1 */
    case 7704:  /* avx2_vec_dupv4df */
    case 7651:  /* avx2_pbroadcastv16hf_1 */
    case 7650:  /* avx2_pbroadcastv4di_1 */
    case 7649:  /* avx2_pbroadcastv8si_1 */
    case 7648:  /* avx2_pbroadcastv16hi_1 */
    case 7647:  /* avx2_pbroadcastv32qi_1 */
    case 7646:  /* avx2_pbroadcastv8hf */
    case 7645:  /* avx2_pbroadcastv16hf */
    case 7644:  /* avx2_pbroadcastv32hf */
    case 7643:  /* avx2_pbroadcastv2di */
    case 7642:  /* avx2_pbroadcastv4di */
    case 7641:  /* avx2_pbroadcastv4si */
    case 7640:  /* avx2_pbroadcastv8si */
    case 7639:  /* avx2_pbroadcastv8hi */
    case 7638:  /* avx2_pbroadcastv16hi */
    case 7637:  /* avx2_pbroadcastv32hi */
    case 7636:  /* avx2_pbroadcastv16qi */
    case 7635:  /* avx2_pbroadcastv32qi */
    case 7634:  /* avx2_pbroadcastv64qi */
    case 7633:  /* avx2_pbroadcastv8di */
    case 7632:  /* avx2_pbroadcastv16si */
    case 7424:  /* sse4_1_zero_extendv2siv2di2 */
    case 7422:  /* sse4_1_sign_extendv2siv2di2 */
    case 7400:  /* sse4_1_zero_extendv2hiv2di2 */
    case 7398:  /* sse4_1_sign_extendv2hiv2di2 */
    case 7388:  /* avx2_zero_extendv4hiv4di2 */
    case 7386:  /* avx2_sign_extendv4hiv4di2 */
    case 7374:  /* sse4_1_zero_extendv2qiv2di2 */
    case 7372:  /* sse4_1_sign_extendv2qiv2di2 */
    case 7362:  /* avx2_zero_extendv4qiv4di2 */
    case 7360:  /* avx2_sign_extendv4qiv4di2 */
    case 7350:  /* avx512f_zero_extendv8qiv8di2 */
    case 7348:  /* avx512f_sign_extendv8qiv8di2 */
    case 7334:  /* sse4_1_zero_extendv4hiv4si2 */
    case 7332:  /* sse4_1_sign_extendv4hiv4si2 */
    case 7306:  /* sse4_1_zero_extendv4qiv4si2 */
    case 7304:  /* sse4_1_sign_extendv4qiv4si2 */
    case 7294:  /* avx2_zero_extendv8qiv8si2 */
    case 7292:  /* avx2_sign_extendv8qiv8si2 */
    case 7274:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 7272:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 7022:  /* *vec_extractv4si_0_zext */
    case 7021:  /* *vec_extractv4si_0_zext_sse4 */
    case 6127:  /* *avx512f_us_truncatev8div16qi2_store_2 */
    case 6126:  /* *avx512f_truncatev8div16qi2_store_2 */
    case 6125:  /* *avx512f_ss_truncatev8div16qi2_store_2 */
    case 6121:  /* avx512f_us_truncatev8div16qi2 */
    case 6120:  /* avx512f_truncatev8div16qi2 */
    case 6119:  /* avx512f_ss_truncatev8div16qi2 */
    case 6106:  /* *avx512vl_us_truncatev2div2si2_store_2 */
    case 6105:  /* *avx512vl_truncatev2div2si2_store_2 */
    case 6104:  /* *avx512vl_ss_truncatev2div2si2_store_2 */
    case 6084:  /* *avx512vl_us_truncatev2div2hi2_store_2 */
    case 6083:  /* *avx512vl_truncatev2div2hi2_store_2 */
    case 6082:  /* *avx512vl_ss_truncatev2div2hi2_store_2 */
    case 6054:  /* *avx512vl_us_truncatev4div4hi2_store_2 */
    case 6053:  /* *avx512vl_truncatev4div4hi2_store_2 */
    case 6052:  /* *avx512vl_ss_truncatev4div4hi2_store_2 */
    case 6051:  /* *avx512vl_us_truncatev4siv4hi2_store_2 */
    case 6050:  /* *avx512vl_truncatev4siv4hi2_store_2 */
    case 6049:  /* *avx512vl_ss_truncatev4siv4hi2_store_2 */
    case 6008:  /* *avx512vl_us_truncatev8siv8qi2_store_2 */
    case 6007:  /* *avx512vl_truncatev8siv8qi2_store_2 */
    case 6006:  /* *avx512vl_ss_truncatev8siv8qi2_store_2 */
    case 6005:  /* *avx512vl_us_truncatev8hiv8qi2_store_2 */
    case 6004:  /* *avx512vl_truncatev8hiv8qi2_store_2 */
    case 6003:  /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */
    case 5972:  /* *avx512vl_us_truncatev4div4qi2_store_2 */
    case 5971:  /* *avx512vl_truncatev4div4qi2_store_2 */
    case 5970:  /* *avx512vl_ss_truncatev4div4qi2_store_2 */
    case 5969:  /* *avx512vl_us_truncatev4siv4qi2_store_2 */
    case 5968:  /* *avx512vl_truncatev4siv4qi2_store_2 */
    case 5967:  /* *avx512vl_ss_truncatev4siv4qi2_store_2 */
    case 5948:  /* *avx512vl_us_truncatev2div2qi2_store_2 */
    case 5947:  /* *avx512vl_truncatev2div2qi2_store_2 */
    case 5946:  /* *avx512vl_ss_truncatev2div2qi2_store_2 */
    case 4184:  /* *vec_setv2di_0_zero_extendsi_1 */
    case 4174:  /* *vec_setv2di_0_zero_extendhi_1 */
    case 4155:  /* avx512f_vec_dupv8df_1 */
    case 4154:  /* avx512f_vec_dupv16sf_1 */
    case 4153:  /* avx2_vec_dupv8sf_1 */
    case 4152:  /* avx2_vec_dupv4sf */
    case 4151:  /* avx2_vec_dupv8sf */
    case 4112:  /* sse2_cvtps2pd */
    case 4087:  /* vec_unpacks_lo_v16sf */
    case 4086:  /* *avx_cvtps2pd256_2 */
    case 4057:  /* sse2_cvttpd2dq */
    case 4051:  /* avx512dq_fixuns_truncv2sfv2di2 */
    case 4049:  /* avx512dq_fix_truncv2sfv2di2 */
    case 3998:  /* ufix_truncv2dfv2si2 */
    case 3967:  /* sse2_cvtdq2pd */
    case 3966:  /* avx_cvtdq2pd256_2 */
    case 3965:  /* avx512f_cvtdq2pd512_2 */
    case 3963:  /* ufloatv2siv2df2 */
    case 3911:  /* sse2_cvttsd2siq */
    case 3909:  /* sse2_cvttsd2si */
    case 3901:  /* avx512f_vcvttsd2usiq */
    case 3899:  /* avx512f_vcvttsd2usi */
    case 3893:  /* avx512f_vcvttss2usiq */
    case 3891:  /* avx512f_vcvttss2usi */
    case 3802:  /* sse_cvttss2siq */
    case 3800:  /* sse_cvttss2si */
    case 3789:  /* sse_cvttps2pi */
    case 3738:  /* avx512fp16_float_extend_phv2df2 */
    case 3732:  /* avx512fp16_float_extend_phv4sf2 */
    case 3730:  /* avx512fp16_float_extend_phv4df2 */
    case 3712:  /* avx512fp16_fixuns_truncdi2 */
    case 3710:  /* avx512fp16_fix_truncdi2 */
    case 3708:  /* avx512fp16_fixuns_truncsi2 */
    case 3706:  /* avx512fp16_fix_truncsi2 */
    case 3700:  /* avx512fp16_fixuns_truncv2di2 */
    case 3698:  /* avx512fp16_fix_truncv2di2 */
    case 3688:  /* avx512fp16_fixuns_truncv4di2 */
    case 3686:  /* avx512fp16_fix_truncv4di2 */
    case 3684:  /* avx512fp16_fixuns_truncv4si2 */
    case 3682:  /* avx512fp16_fix_truncv4si2 */
    case 1686:  /* *vec_dupv2hi */
    case 1673:  /* *vec_extractv2si_1_zext */
    case 1671:  /* *vec_extractv2si_0_zext */
    case 1670:  /* *vec_extractv2si_0_zext_sse4 */
    case 1666:  /* *vec_dupv4hi */
    case 1648:  /* sse4_1_zero_extendv2qiv2hi2 */
    case 1647:  /* sse4_1_sign_extendv2qiv2hi2 */
    case 1646:  /* sse4_1_zero_extendv2hiv2si2 */
    case 1645:  /* sse4_1_sign_extendv2hiv2si2 */
    case 1644:  /* sse4_1_zero_extendv4qiv4hi2 */
    case 1643:  /* sse4_1_sign_extendv4qiv4hi2 */
    case 691:  /* *one_cmplsi2_1_zext */
    case 185:  /* *fixuns_truncdfsi2_avx512f_zext */
    case 184:  /* *fixuns_truncsfsi2_avx512f_zext */
    case 183:  /* *fixuns_trunchfsi2zext */
    case 163:  /* *extendqisi2_zext */
    case 161:  /* *extendhisi2_zext */
    case 112:  /* *extzvqi */
    case 111:  /* *extzvqi */
    case 110:  /* *extzvqi */
    case 106:  /* *extzvqi_mem_rex64 */
    case 105:  /* *extzvqi_mem_rex64 */
    case 104:  /* *extzvqi_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 912:  /* *sibcall_memory */
    case 911:  /* *sibcall_memory */
    case 101:  /* *movstricthi_xor */
    case 100:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 146:  /* *swapxf */
    case 97:  /* *swaphi */
    case 96:  /* *swapqi */
    case 95:  /* *swapdi */
    case 94:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 8608:  /* vpopcountv8hi */
    case 8606:  /* vpopcountv16hi */
    case 8604:  /* vpopcountv32hi */
    case 8602:  /* vpopcountv32qi */
    case 8600:  /* vpopcountv16qi */
    case 8598:  /* vpopcountv64qi */
    case 8588:  /* vpopcountv2di */
    case 8586:  /* vpopcountv4di */
    case 8584:  /* vpopcountv8di */
    case 8582:  /* vpopcountv4si */
    case 8580:  /* vpopcountv8si */
    case 8578:  /* vpopcountv16si */
    case 8533:  /* avx512f_pd512_256pd */
    case 8532:  /* avx512f_ps512_256ps */
    case 8531:  /* avx512f_si512_256si */
    case 8507:  /* clzv2di2 */
    case 8505:  /* clzv4di2 */
    case 8503:  /* clzv8di2 */
    case 8501:  /* clzv4si2 */
    case 8499:  /* clzv8si2 */
    case 8497:  /* clzv16si2 */
    case 7996:  /* avx_pd256_pd */
    case 7995:  /* avx_ps256_ps */
    case 7994:  /* avx_si256_si */
    case 7852:  /* *avx512dq_broadcastv4df_1 */
    case 7850:  /* *avx512dq_broadcastv4di_1 */
    case 7848:  /* *avx512dq_broadcastv8df_1 */
    case 7846:  /* *avx512dq_broadcastv8di_1 */
    case 7844:  /* *avx512dq_broadcastv16si_1 */
    case 7842:  /* *avx512dq_broadcastv16sf_1 */
    case 7840:  /* *avx512vl_broadcastv8sf_1 */
    case 7838:  /* *avx512vl_broadcastv8si_1 */
    case 7820:  /* vec_dupv4df */
    case 7819:  /* vec_dupv4di */
    case 7818:  /* vec_dupv8sf */
    case 7817:  /* vec_dupv8si */
    case 7816:  /* *vec_dupv8hf */
    case 7815:  /* *vec_dupv16hf */
    case 7814:  /* *vec_dupv4si */
    case 7813:  /* *vec_dupv8si */
    case 7812:  /* *vec_dupv8hi */
    case 7811:  /* *vec_dupv16hi */
    case 7810:  /* *vec_dupv16qi */
    case 7809:  /* *vec_dupv32qi */
    case 7804:  /* *vec_dupv2di */
    case 7803:  /* *vec_dupv4si */
    case 7802:  /* vec_dupv4sf */
    case 7800:  /* *avx512vl_vec_dup_gprv2df */
    case 7798:  /* *avx512vl_vec_dup_gprv4df */
    case 7796:  /* *avx512f_vec_dup_gprv8df */
    case 7794:  /* *avx512vl_vec_dup_gprv4sf */
    case 7792:  /* *avx512vl_vec_dup_gprv8sf */
    case 7790:  /* *avx512f_vec_dup_gprv16sf */
    case 7788:  /* *avx512vl_vec_dup_gprv2di */
    case 7786:  /* *avx512vl_vec_dup_gprv4di */
    case 7784:  /* *avx512f_vec_dup_gprv8di */
    case 7782:  /* *avx512vl_vec_dup_gprv4si */
    case 7780:  /* *avx512vl_vec_dup_gprv8si */
    case 7778:  /* *avx512f_vec_dup_gprv16si */
    case 7776:  /* *avx512fp16_vec_dup_gprv8hf */
    case 7774:  /* *avx512vl_vec_dup_gprv16hf */
    case 7772:  /* *avx512bw_vec_dup_gprv32hf */
    case 7770:  /* *avx512vl_vec_dup_gprv8hi */
    case 7768:  /* *avx512vl_vec_dup_gprv16hi */
    case 7766:  /* *avx512bw_vec_dup_gprv32hi */
    case 7764:  /* *avx512vl_vec_dup_gprv32qi */
    case 7762:  /* *avx512vl_vec_dup_gprv16qi */
    case 7760:  /* *avx512bw_vec_dup_gprv64qi */
    case 7758:  /* *avx512f_broadcastv8di */
    case 7756:  /* *avx512f_broadcastv8df */
    case 7754:  /* *avx512f_broadcastv16si */
    case 7752:  /* *avx512f_broadcastv16sf */
    case 7428:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 7426:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 7418:  /* avx2_zero_extendv4siv4di2 */
    case 7416:  /* avx2_sign_extendv4siv4di2 */
    case 7412:  /* avx512f_zero_extendv8siv8di2 */
    case 7410:  /* avx512f_sign_extendv8siv8di2 */
    case 7404:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 7402:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 7392:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 7390:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 7384:  /* avx512f_zero_extendv8hiv8di2 */
    case 7382:  /* avx512f_sign_extendv8hiv8di2 */
    case 7378:  /* *sse4_1_zero_extendv2qiv2di2_1 */
    case 7376:  /* *sse4_1_sign_extendv2qiv2di2_1 */
    case 7366:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 7364:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 7354:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 7352:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 7338:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 7336:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 7326:  /* avx2_zero_extendv8hiv8si2 */
    case 7324:  /* avx2_sign_extendv8hiv8si2 */
    case 7318:  /* avx512f_zero_extendv16hiv16si2 */
    case 7316:  /* avx512f_sign_extendv16hiv16si2 */
    case 7310:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 7308:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 7298:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 7296:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 7290:  /* *avx512f_zero_extendv16qiv16si2 */
    case 7288:  /* *avx512f_sign_extendv16qiv16si2 */
    case 7278:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 7276:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 7266:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 7264:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 7258:  /* avx2_zero_extendv16qiv16hi2 */
    case 7256:  /* avx2_sign_extendv16qiv16hi2 */
    case 7185:  /* *absv2di2 */
    case 7184:  /* *absv4di2 */
    case 7183:  /* *absv8di2 */
    case 7182:  /* *absv4si2 */
    case 7181:  /* *absv8si2 */
    case 7180:  /* *absv16si2 */
    case 7179:  /* *absv8hi2 */
    case 7178:  /* *absv16hi2 */
    case 7177:  /* *absv32hi2 */
    case 7176:  /* *absv16qi2 */
    case 7175:  /* *absv32qi2 */
    case 7174:  /* *absv64qi2 */
    case 7027:  /* *vec_extractv2di_1 */
    case 7020:  /* *vec_extractv2di_0_sse */
    case 7019:  /* *vec_extractv2di_0 */
    case 7018:  /* *vec_extractv4si_0 */
    case 7008:  /* *vec_extractv8hi_0_mem */
    case 7007:  /* *vec_extractv16qi_0_mem */
    case 6124:  /* *avx512f_us_truncatev8div16qi2_store_1 */
    case 6123:  /* *avx512f_truncatev8div16qi2_store_1 */
    case 6122:  /* *avx512f_ss_truncatev8div16qi2_store_1 */
    case 6103:  /* *avx512vl_us_truncatev2div2si2_store_1 */
    case 6102:  /* *avx512vl_truncatev2div2si2_store_1 */
    case 6101:  /* *avx512vl_ss_truncatev2div2si2_store_1 */
    case 6081:  /* *avx512vl_us_truncatev2div2hi2_store_1 */
    case 6080:  /* *avx512vl_truncatev2div2hi2_store_1 */
    case 6079:  /* *avx512vl_ss_truncatev2div2hi2_store_1 */
    case 6048:  /* *avx512vl_us_truncatev4div4hi2_store_1 */
    case 6047:  /* *avx512vl_truncatev4div4hi2_store_1 */
    case 6046:  /* *avx512vl_ss_truncatev4div4hi2_store_1 */
    case 6045:  /* *avx512vl_us_truncatev4siv4hi2_store_1 */
    case 6044:  /* *avx512vl_truncatev4siv4hi2_store_1 */
    case 6043:  /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
    case 6002:  /* *avx512vl_us_truncatev8siv8qi2_store_1 */
    case 6001:  /* *avx512vl_truncatev8siv8qi2_store_1 */
    case 6000:  /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
    case 5999:  /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
    case 5998:  /* *avx512vl_truncatev8hiv8qi2_store_1 */
    case 5997:  /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
    case 5966:  /* *avx512vl_us_truncatev4div4qi2_store_1 */
    case 5965:  /* *avx512vl_truncatev4div4qi2_store_1 */
    case 5964:  /* *avx512vl_ss_truncatev4div4qi2_store_1 */
    case 5963:  /* *avx512vl_us_truncatev4siv4qi2_store_1 */
    case 5962:  /* *avx512vl_truncatev4siv4qi2_store_1 */
    case 5961:  /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
    case 5945:  /* *avx512vl_us_truncatev2div2qi2_store_1 */
    case 5944:  /* *avx512vl_truncatev2div2qi2_store_1 */
    case 5943:  /* *avx512vl_ss_truncatev2div2qi2_store_1 */
    case 5915:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 5914:  /* *avx512vl_truncatev16hiv16qi2 */
    case 5913:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 5912:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 5911:  /* *avx512vl_truncatev8siv8hi2 */
    case 5910:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 5909:  /* *avx512vl_us_truncatev4div4si2 */
    case 5908:  /* *avx512vl_truncatev4div4si2 */
    case 5907:  /* *avx512vl_ss_truncatev4div4si2 */
    case 5902:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 5901:  /* avx512bw_truncatev32hiv32qi2 */
    case 5900:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 5882:  /* *avx512f_us_truncatev8div8hi2 */
    case 5881:  /* *avx512f_truncatev8div8hi2 */
    case 5880:  /* *avx512f_ss_truncatev8div8hi2 */
    case 5879:  /* *avx512f_us_truncatev8div8si2 */
    case 5878:  /* *avx512f_truncatev8div8si2 */
    case 5877:  /* *avx512f_ss_truncatev8div8si2 */
    case 5876:  /* *avx512f_us_truncatev16siv16hi2 */
    case 5875:  /* *avx512f_truncatev16siv16hi2 */
    case 5874:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 5873:  /* *avx512f_us_truncatev16siv16qi2 */
    case 5872:  /* *avx512f_truncatev16siv16qi2 */
    case 5871:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 5866:  /* vec_dupv2df */
    case 5862:  /* *vec_extractv2df_0_sse */
    case 5861:  /* sse2_storelpd */
    case 5860:  /* *vec_extractv2df_1_sse */
    case 5859:  /* sse2_storehpd */
    case 4244:  /* *vec_extractv8hf_0 */
    case 4243:  /* *vec_extractv16hf_0 */
    case 4242:  /* *vec_extractv32hf_0 */
    case 4241:  /* vec_extract_hi_v32qi */
    case 4240:  /* vec_extract_lo_v32qi */
    case 4239:  /* vec_extract_hi_v64qi */
    case 4238:  /* vec_extract_lo_v64qi */
    case 4237:  /* vec_extract_hi_v16hf */
    case 4236:  /* vec_extract_hi_v16hi */
    case 4235:  /* vec_extract_lo_v16hf */
    case 4234:  /* vec_extract_lo_v16hi */
    case 4233:  /* vec_extract_hi_v32hf */
    case 4232:  /* vec_extract_hi_v32hi */
    case 4231:  /* vec_extract_lo_v32hf */
    case 4230:  /* vec_extract_lo_v32hi */
    case 4229:  /* vec_extract_hi_v8sf */
    case 4228:  /* vec_extract_hi_v8si */
    case 4225:  /* vec_extract_lo_v8sf */
    case 4224:  /* vec_extract_lo_v8si */
    case 4221:  /* vec_extract_hi_v4df */
    case 4220:  /* vec_extract_hi_v4di */
    case 4217:  /* vec_extract_lo_v4df */
    case 4216:  /* vec_extract_lo_v4di */
    case 4213:  /* vec_extract_lo_v16si */
    case 4212:  /* vec_extract_lo_v16sf */
    case 4209:  /* vec_extract_hi_v16si */
    case 4208:  /* vec_extract_hi_v16sf */
    case 4205:  /* vec_extract_hi_v8di */
    case 4204:  /* vec_extract_hi_v8df */
    case 4201:  /* vec_extract_lo_v8di */
    case 4200:  /* vec_extract_lo_v8df */
    case 4187:  /* *vec_extractv4sf_0 */
    case 4148:  /* sse_storelps */
    case 4146:  /* sse_storehps */
    case 4114:  /* extendv2sfv2df2 */
    case 4084:  /* avx_cvtps2pd256 */
    case 4080:  /* avx512f_cvtps2pd512 */
    case 4077:  /* truncv2dfv2sf2 */
    case 4074:  /* avx_cvtpd2ps256 */
    case 4070:  /* *avx512f_cvtpd2ps512 */
    case 4055:  /* ufix_truncv4sfv4si2 */
    case 4053:  /* ufix_truncv8sfv8si2 */
    case 4047:  /* fixuns_truncv4sfv4di2 */
    case 4045:  /* fix_truncv4sfv4di2 */
    case 4041:  /* fixuns_truncv8sfv8di2 */
    case 4037:  /* fix_truncv8sfv8di2 */
    case 4019:  /* fixuns_truncv2dfv2di2 */
    case 4017:  /* fix_truncv2dfv2di2 */
    case 4015:  /* fixuns_truncv4dfv4di2 */
    case 4013:  /* fix_truncv4dfv4di2 */
    case 4009:  /* fixuns_truncv8dfv8di2 */
    case 4005:  /* fix_truncv8dfv8di2 */
    case 4003:  /* ufix_truncv4dfv4si2 */
    case 4001:  /* fix_truncv4dfv4si2 */
    case 3994:  /* fixuns_truncv8dfv8si2 */
    case 3990:  /* fix_truncv8dfv8si2 */
    case 3961:  /* ufloatv4siv4df2 */
    case 3959:  /* ufloatv8siv8df2 */
    case 3951:  /* floatunsv4div4sf2 */
    case 3949:  /* floatv4div4sf2 */
    case 3945:  /* floatunsv8div8sf2 */
    case 3941:  /* floatv8div8sf2 */
    case 3937:  /* floatunsv2div2df2 */
    case 3933:  /* floatv2div2df2 */
    case 3929:  /* floatunsv4div4df2 */
    case 3925:  /* floatv4div4df2 */
    case 3921:  /* floatunsv8div8df2 */
    case 3917:  /* floatv8div8df2 */
    case 3915:  /* floatv4siv4df2 */
    case 3913:  /* floatv8siv8df2 */
    case 3883:  /* fixuns_truncv2dfv2si2 */
    case 3882:  /* sse2_cvttpd2pi */
    case 3880:  /* floatunsv2siv2df2 */
    case 3879:  /* sse2_cvtpi2pd */
    case 3877:  /* fix_truncv4sfv4si2 */
    case 3875:  /* fix_truncv8sfv8si2 */
    case 3871:  /* ufix_truncv16sfv16si2 */
    case 3867:  /* fix_truncv16sfv16si2 */
    case 3827:  /* ufloatv4siv4sf2 */
    case 3823:  /* ufloatv8siv8sf2 */
    case 3819:  /* ufloatv16siv16sf2 */
    case 3817:  /* floatv4siv4sf2 */
    case 3815:  /* floatv8siv8sf2 */
    case 3811:  /* floatv16siv16sf2 */
    case 3750:  /* avx512fp16_vcvtps2ph_v8sf */
    case 3746:  /* avx512fp16_vcvtps2ph_v16sf */
    case 3742:  /* avx512fp16_vcvtpd2ph_v8df */
    case 3740:  /* *avx512fp16_float_extend_phv2df2_load */
    case 3736:  /* *avx512fp16_float_extend_phv4sf2_load */
    case 3734:  /* *avx512fp16_float_extend_phv4df2_load */
    case 3726:  /* avx512fp16_float_extend_phv8sf2 */
    case 3722:  /* avx512fp16_float_extend_phv16sf2 */
    case 3718:  /* avx512fp16_float_extend_phv8df2 */
    case 3717:  /* avx512fp16_fixuns_truncdi2_mem */
    case 3716:  /* avx512fp16_fix_truncdi2_mem */
    case 3715:  /* avx512fp16_fixuns_truncsi2_mem */
    case 3714:  /* avx512fp16_fix_truncsi2_mem */
    case 3704:  /* *avx512fp16_fixuns_truncv2di2_load */
    case 3702:  /* *avx512fp16_fix_truncv2di2_load */
    case 3696:  /* *avx512fp16_fixuns_truncv4di2_load */
    case 3694:  /* *avx512fp16_fix_truncv4di2_load */
    case 3692:  /* *avx512fp16_fixuns_truncv4si2_load */
    case 3690:  /* *avx512fp16_fix_truncv4si2_load */
    case 3678:  /* avx512fp16_fixuns_truncv8di2 */
    case 3674:  /* avx512fp16_fix_truncv8di2 */
    case 3670:  /* avx512fp16_fixuns_truncv16si2 */
    case 3666:  /* avx512fp16_fix_truncv16si2 */
    case 3662:  /* avx512fp16_fixuns_truncv8si2 */
    case 3658:  /* avx512fp16_fix_truncv8si2 */
    case 3654:  /* avx512fp16_fixuns_truncv32hi2 */
    case 3650:  /* avx512fp16_fix_truncv32hi2 */
    case 3646:  /* avx512fp16_fixuns_truncv16hi2 */
    case 3642:  /* avx512fp16_fix_truncv16hi2 */
    case 3638:  /* avx512fp16_fixuns_truncv8hi2 */
    case 3634:  /* avx512fp16_fix_truncv8hi2 */
    case 3592:  /* avx512fp16_vcvtuqq2ph_v8di */
    case 3588:  /* avx512fp16_vcvtqq2ph_v8di */
    case 3584:  /* avx512fp16_vcvtudq2ph_v16si */
    case 3580:  /* avx512fp16_vcvtdq2ph_v16si */
    case 3576:  /* avx512fp16_vcvtudq2ph_v8si */
    case 3572:  /* avx512fp16_vcvtdq2ph_v8si */
    case 3568:  /* avx512fp16_vcvtuw2ph_v32hi */
    case 3564:  /* avx512fp16_vcvtw2ph_v32hi */
    case 3560:  /* avx512fp16_vcvtuw2ph_v16hi */
    case 3556:  /* avx512fp16_vcvtw2ph_v16hi */
    case 3552:  /* avx512fp16_vcvtuw2ph_v8hi */
    case 3548:  /* avx512fp16_vcvtw2ph_v8hi */
    case 2140:  /* sse2_sqrtv2df2 */
    case 2138:  /* avx_sqrtv4df2 */
    case 2134:  /* avx512f_sqrtv8df2 */
    case 2132:  /* sse_sqrtv4sf2 */
    case 2130:  /* avx_sqrtv8sf2 */
    case 2126:  /* avx512f_sqrtv16sf2 */
    case 2124:  /* avx512fp16_sqrtv8hf2 */
    case 2122:  /* avx512fp16_sqrtv16hf2 */
    case 2118:  /* avx512fp16_sqrtv32hf2 */
    case 1672:  /* *vec_extractv2si_1 */
    case 1669:  /* *vec_extractv2si_0 */
    case 1667:  /* *vec_dupv2si */
    case 1665:  /* mmx_pswapdv2si2 */
    case 1606:  /* one_cmplv2hi2 */
    case 1605:  /* one_cmplv2qi2 */
    case 1604:  /* one_cmplv4qi2 */
    case 1550:  /* absv2hi2 */
    case 1549:  /* absv2qi2 */
    case 1548:  /* absv4qi2 */
    case 1547:  /* ssse3_absv2si2 */
    case 1546:  /* ssse3_absv4hi2 */
    case 1545:  /* ssse3_absv8qi2 */
    case 1468:  /* *vec_extractv2sf_1 */
    case 1467:  /* *vec_extractv2sf_0 */
    case 1464:  /* *vec_dupv2sf */
    case 1461:  /* *mmx_movsldup */
    case 1460:  /* *mmx_movshdup */
    case 1459:  /* mmx_pswapdv2sf2 */
    case 1456:  /* floatunsv2siv2sf2 */
    case 1455:  /* mmx_floatv2siv2sf2 */
    case 1454:  /* fixuns_truncv2sfv2si2 */
    case 1453:  /* mmx_fix_truncv2sfv2si2 */
    case 1430:  /* sqrtv2sf2 */
    case 1119:  /* *sqrtdf2_sse */
    case 1118:  /* *sqrtsf2_sse */
    case 1117:  /* sqrthf2 */
    case 1114:  /* sqrtxf2 */
    case 1051:  /* *bswaphi2_movbe */
    case 1050:  /* *bswapdi2 */
    case 1049:  /* *bswapsi2 */
    case 1048:  /* *bswapdi2_movbe */
    case 1047:  /* *bswapsi2_movbe */
    case 692:  /* *one_cmplqi2_1 */
    case 690:  /* *one_cmpldi2_1 */
    case 689:  /* *one_cmplsi2_1 */
    case 688:  /* *one_cmplhi2_1 */
    case 687:  /* *one_cmpldi2_doubleword */
    case 686:  /* *negxf2_i387 */
    case 685:  /* *absxf2_i387 */
    case 684:  /* *negdf2_i387 */
    case 683:  /* *absdf2_i387 */
    case 682:  /* *negsf2_i387 */
    case 681:  /* *abssf2_i387 */
    case 223:  /* *floatunsdidf2_avx512 */
    case 222:  /* *floatunssidf2_avx512 */
    case 221:  /* *floatunsdisf2_avx512 */
    case 220:  /* *floatunssisf2_avx512 */
    case 216:  /* *floatdidf2_i387 */
    case 215:  /* *floatdisf2_i387 */
    case 214:  /* floatunsdihf2 */
    case 213:  /* floatdihf2 */
    case 212:  /* floatunssihf2 */
    case 211:  /* floatsihf2 */
    case 210:  /* *floatdidf2 */
    case 209:  /* *floatsidf2 */
    case 208:  /* *floatdisf2 */
    case 207:  /* *floatsisf2 */
    case 206:  /* floatdixf2 */
    case 205:  /* floatsixf2 */
    case 204:  /* floathixf2 */
    case 203:  /* floathidf2 */
    case 202:  /* floathisf2 */
    case 191:  /* fix_truncdfdi_sse */
    case 190:  /* fix_truncdfsi_sse */
    case 189:  /* fix_truncsfdi_sse */
    case 188:  /* fix_truncsfsi_sse */
    case 182:  /* fixuns_truncdfsi2_avx512f */
    case 181:  /* fixuns_truncsfsi2_avx512f */
    case 180:  /* fixuns_truncdfdi2 */
    case 179:  /* fixuns_truncsfdi2 */
    case 178:  /* fixuns_trunchfdi2 */
    case 177:  /* fix_trunchfdi2 */
    case 176:  /* fixuns_trunchfsi2 */
    case 175:  /* fix_trunchfsi2 */
    case 174:  /* *truncdfhf2 */
    case 173:  /* *truncsfhf2 */
    case 172:  /* truncxfdf2 */
    case 171:  /* truncxfsf2 */
    case 170:  /* truncdfsf2 */
    case 169:  /* *extenddfxf2_i387 */
    case 168:  /* *extendsfxf2_i387 */
    case 167:  /* *extendhfdf2 */
    case 166:  /* *extendhfsf2 */
    case 165:  /* *extendsfdf2 */
    case 164:  /* extendqihi2 */
    case 162:  /* extendqisi2 */
    case 160:  /* extendhisi2 */
    case 159:  /* extendhidi2 */
    case 158:  /* extendqidi2 */
    case 156:  /* *extendsidi2_rex64 */
    case 155:  /* *zero_extendqihi2 */
    case 153:  /* *zero_extendhisi2 */
    case 152:  /* *zero_extendqisi2 */
    case 149:  /* zero_extendhidi2 */
    case 148:  /* zero_extendqidi2 */
    case 147:  /* *zero_extendsidi2 */
    case 109:  /* *extzvdi */
    case 108:  /* *extzvsi */
    case 107:  /* *extzvhi */
    case 103:  /* *extvsi */
    case 102:  /* *extvhi */
    case 93:  /* *movabsdi_2 */
    case 92:  /* *movabssi_2 */
    case 91:  /* *movabshi_2 */
    case 90:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 910:  /* *sibcall */
    case 909:  /* *sibcall */
    case 906:  /* *call */
    case 905:  /* *call */
    case 895:  /* *setcc_qi_slp */
    case 118:  /* insvdi_1 */
    case 117:  /* insvsi_1 */
    case 116:  /* insvhi_1 */
    case 99:  /* *movstricthi_1 */
    case 98:  /* *movstrictqi_1 */
    case 89:  /* *movabsdi_1 */
    case 88:  /* *movabssi_1 */
    case 87:  /* *movabshi_1 */
    case 86:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 891:  /* *setcc_si_1_and */
    case 890:  /* *setcc_hi_1_and */
    case 78:  /* *movdi_or */
    case 77:  /* *movsi_or */
    case 76:  /* *movhi_or */
    case 75:  /* *movdi_and */
    case 74:  /* *movsi_and */
    case 73:  /* *movhi_and */
    case 72:  /* *movdi_xor */
    case 71:  /* *movsi_xor */
    case 66:  /* *popdi1_epilogue */
    case 65:  /* *popsi1_epilogue */
    case 62:  /* *pushdi2_prologue */
    case 61:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 8776:  /* *movp2hi_internal */
    case 8775:  /* *movp2qi_internal */
    case 8559:  /* *movv64si_internal */
    case 8558:  /* *movv64sf_internal */
    case 1721:  /* movv2df_internal */
    case 1720:  /* movv4df_internal */
    case 1719:  /* movv8df_internal */
    case 1718:  /* movv4sf_internal */
    case 1717:  /* movv8sf_internal */
    case 1716:  /* movv16sf_internal */
    case 1715:  /* movv8hf_internal */
    case 1714:  /* movv16hf_internal */
    case 1713:  /* movv32hf_internal */
    case 1712:  /* movv1ti_internal */
    case 1711:  /* movv2ti_internal */
    case 1710:  /* movv4ti_internal */
    case 1709:  /* movv2di_internal */
    case 1708:  /* movv4di_internal */
    case 1707:  /* movv8di_internal */
    case 1706:  /* movv4si_internal */
    case 1705:  /* movv8si_internal */
    case 1704:  /* movv16si_internal */
    case 1703:  /* movv8hi_internal */
    case 1702:  /* movv16hi_internal */
    case 1701:  /* movv32hi_internal */
    case 1700:  /* movv16qi_internal */
    case 1699:  /* movv32qi_internal */
    case 1698:  /* movv64qi_internal */
    case 1415:  /* *pushv2qi2 */
    case 1414:  /* *movv2qi_internal */
    case 1413:  /* *pushv2hf2_rex64 */
    case 1412:  /* *pushv1si2_rex64 */
    case 1411:  /* *pushv2hi2_rex64 */
    case 1410:  /* *pushv4qi2_rex64 */
    case 1409:  /* *movv2hf_internal */
    case 1408:  /* *movv1si_internal */
    case 1407:  /* *movv2hi_internal */
    case 1406:  /* *movv4qi_internal */
    case 1405:  /* *movv4hf_internal */
    case 1404:  /* *movv2sf_internal */
    case 1403:  /* *movv1di_internal */
    case 1402:  /* *movv2si_internal */
    case 1401:  /* *movv4hi_internal */
    case 1400:  /* *movv8qi_internal */
    case 1271:  /* *prefetch_3dnow */
    case 894:  /* *setcc_qi */
    case 893:  /* *setcc_si_1_movzbl */
    case 892:  /* *setcc_hi_1_movzbl */
    case 889:  /* *setcc_di_1 */
    case 228:  /* *leadi */
    case 227:  /* *leasi */
    case 145:  /* *movhf_internal */
    case 144:  /* *movsf_internal */
    case 143:  /* *movdf_internal */
    case 142:  /* *movxf_internal */
    case 141:  /* *movtf_internal */
    case 140:  /* *pushsf */
    case 139:  /* *pushsf_rex64 */
    case 138:  /* *pushhf */
    case 137:  /* *pushhf_rex64 */
    case 136:  /* *pushdf */
    case 135:  /* *pushxf */
    case 134:  /* *pushtf */
    case 85:  /* *movqi_internal */
    case 84:  /* *movhi_internal */
    case 83:  /* *movsi_internal */
    case 82:  /* *movdi_internal */
    case 81:  /* *movti_internal */
    case 80:  /* *movoi_internal_avx */
    case 79:  /* *movxi_internal_avx512f */
    case 70:  /* *popfldi1 */
    case 69:  /* *popflsi1 */
    case 68:  /* *pushfldi2 */
    case 67:  /* *pushflsi2 */
    case 64:  /* *popdi1 */
    case 63:  /* *popsi1 */
    case 60:  /* *pushhi2 */
    case 59:  /* *pushqi2 */
    case 58:  /* *pushsi2 */
    case 57:  /* *pushsi2_rex64 */
    case 56:  /* *pushdi2_rex64 */
    case 55:  /* *pushti2 */
    case 54:  /* *pushdi2 */
    case 53:  /* *pushv1ti2 */
    case 52:  /* *pushv1ti2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 51:  /* *cmpiuhf */
    case 49:  /* *cmpiudf */
    case 47:  /* *cmpiusf */
    case 45:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1054:  /* parityqi2_cmp */
    case 43:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 42:  /* *cmpuxf_i387 */
    case 41:  /* *cmpudf_i387 */
    case 40:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 39:  /* *cmpxf_si_i387 */
    case 38:  /* *cmpdf_si_i387 */
    case 37:  /* *cmpsf_si_i387 */
    case 36:  /* *cmpxf_hi_i387 */
    case 35:  /* *cmpdf_hi_i387 */
    case 34:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 7102:  /* *sse2_pmovmskb_lt */
    case 7101:  /* *avx2_pmovmskb_lt */
    case 7074:  /* *sse2_movmskpd_lt */
    case 7073:  /* *avx_movmskpd256_lt */
    case 7072:  /* *sse_movmskps_lt */
    case 7071:  /* *avx_movmskps256_lt */
    case 33:  /* *cmpdf_i387 */
    case 32:  /* *cmpsf_i387 */
    case 31:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 28:  /* *cmpqi_extdi_4 */
    case 27:  /* *cmpqi_extsi_4 */
    case 26:  /* *cmpqi_exthi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 25:  /* *cmpqi_extdi_3 */
    case 24:  /* *cmpqi_extsi_3 */
    case 23:  /* *cmpqi_exthi_3 */
    case 22:  /* *cmpqi_extdi_2 */
    case 21:  /* *cmpqi_extsi_2 */
    case 20:  /* *cmpqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 19:  /* *cmpqi_extdi_1 */
    case 18:  /* *cmpqi_extsi_1 */
    case 17:  /* *cmpqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 520:  /* *testsi_1 */
    case 519:  /* *testhi_1 */
    case 518:  /* *testqi_1 */
    case 517:  /* *testqi_1_maybe_si */
    case 516:  /* *testdi_1 */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 50:  /* *cmpihf */
    case 48:  /* *cmpidf */
    case 46:  /* *cmpisf */
    case 44:  /* *cmpixf_i387 */
    case 30:  /* *cmpti_doubleword */
    case 29:  /* *cmpdi_doubleword */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
