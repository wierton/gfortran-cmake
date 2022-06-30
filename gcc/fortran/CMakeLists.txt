set(FORTRAN_SRCS
  arith.cc
  array.cc
  bbt.cc
  check.cc
  class.cc
  constructor.cc
  cpp.cc
  data.cc
  decl.cc
  dump-parse-tree.cc
  error.cc
  expr.cc
  interface.cc
  intrinsic.cc
  io.cc
  iresolve.cc
  match.cc
  matchexp.cc
  misc.cc
  module.cc
  openmp.cc
  options.cc
  parse.cc
  primary.cc
  resolve.cc
  scanner.cc
  simplify.cc
  st.cc
  symbol.cc
  target-memory.cc
  convert.cc
  dependency.cc
  f95-lang.cc
  trans.cc
  trans-array.cc
  trans-common.cc
  trans-const.cc
  trans-decl.cc
  trans-expr.cc
  trans-intrinsic.cc
  trans-io.cc
  trans-openmp.cc
  trans-stmt.cc
  trans-types.cc
  frontend-passes.cc
  )

set(FORTRAN_CXXFLAGS
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  ${LIBGFORTRAN_COMMON_INCDIRS}
  )

add_library(libgfortran SHARED ${FORTRAN_SRCS})
target_compile_options(libgfortran PRIVATE ${FORTRAN_CXXFLAGS})
target_include_directories(libgfortran PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})
target_link_libraries(libgfortran PRIVATE LLVM)
