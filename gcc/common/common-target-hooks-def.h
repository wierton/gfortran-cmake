#ifndef TARGET_HANDLE_OPTION
#define TARGET_HANDLE_OPTION default_target_handle_option
#endif
#ifndef TARGET_OPTION_INIT_STRUCT
#define TARGET_OPTION_INIT_STRUCT hook_void_gcc_optionsp
#endif
#ifndef TARGET_OPTION_OPTIMIZATION_TABLE
#define TARGET_OPTION_OPTIMIZATION_TABLE empty_optimization_table
#endif
#ifndef TARGET_DEFAULT_TARGET_FLAGS
#define TARGET_DEFAULT_TARGET_FLAGS 0
#endif
#ifndef TARGET_EXCEPT_UNWIND_INFO
#define TARGET_EXCEPT_UNWIND_INFO default_except_unwind_info
#endif
#ifndef TARGET_SUPPORTS_SPLIT_STACK
#define TARGET_SUPPORTS_SPLIT_STACK hook_bool_bool_gcc_optionsp_false
#endif
#ifndef TARGET_GET_VALID_OPTION_VALUES
#define TARGET_GET_VALID_OPTION_VALUES default_get_valid_option_values
#endif
#ifndef TARGET_UNWIND_TABLES_DEFAULT
#define TARGET_UNWIND_TABLES_DEFAULT false
#endif
#ifndef TARGET_HAVE_NAMED_SECTIONS
#define TARGET_HAVE_NAMED_SECTIONS true
#endif
#ifndef TARGET_ALWAYS_STRIP_DOTDOT
#define TARGET_ALWAYS_STRIP_DOTDOT false
#endif

#define TARGETM_COMMON_INITIALIZER \
  { \
    TARGET_HANDLE_OPTION, \
    TARGET_OPTION_INIT_STRUCT, \
    TARGET_OPTION_OPTIMIZATION_TABLE, \
    TARGET_DEFAULT_TARGET_FLAGS, \
    TARGET_EXCEPT_UNWIND_INFO, \
    TARGET_SUPPORTS_SPLIT_STACK, \
    TARGET_GET_VALID_OPTION_VALUES, \
    TARGET_UNWIND_TABLES_DEFAULT, \
    TARGET_HAVE_NAMED_SECTIONS, \
    TARGET_ALWAYS_STRIP_DOTDOT, \
  }
