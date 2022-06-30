add_library(libbacktrace SHARED
  atomic.c dwarf.c fileline.c posix.c print.c sort.c state.c backtrace.c simple.c elf.c mmapio.c mmap.c
  )
target_compile_options(libbacktrace PRIVATE
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  )
target_include_directories(libbacktrace PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})
