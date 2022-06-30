#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "hash-set.h"
#include "vec.h"
#include "input.h"
#include "alias.h"
#include "symtab.h"
#include "inchash.h"
#include "tree-core.h"
#include "tree.h"
#include "diagnostic-core.h"
#include "gcc-rich-location.h"
#include "print-tree.h"
#include "pretty-print.h"
#include "intl.h"
#include "cpplib.h"
#include "diagnostic.h"

#include <stdlib.h>

label_text
range_label_for_type_mismatch::get_text (unsigned /*range_idx*/) const
{
  abort();
}
