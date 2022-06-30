add_library(libcpp SHARED
  charset.cc directives.cc errors.cc expr.cc files.cc identifiers.cc init.cc lex.cc line-map.cc macro.cc mkdeps.cc pch.cc symtab.cc traditional.cc
  )
target_compile_options(
  libcpp PRIVATE -w -g -O2 -fno-exceptions -fno-rtti
  )
target_include_directories(libcpp PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})
