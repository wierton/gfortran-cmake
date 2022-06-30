add_library(libdecnumber SHARED
  decNumber.c decContext.c bid/decimal32.c bid/decimal64.c bid/decimal128.c bid/bid2dpd_dpd2bid.c bid/host-ieee32.c bid/host-ieee64.c bid/host-ieee128.c
  )
target_compile_options(libdecnumber PRIVATE
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  )
target_include_directories(libdecnumber PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})
