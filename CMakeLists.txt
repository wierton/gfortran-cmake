cmake_minimum_required (VERSION 3.16)
project(wizard CXX C Fortran)
include(cmake/wizard.cmake)

set(LIBGFORTRAN_COMMON_CXXFLAGS
  -w -ggdb3 -O0 -DIN_GCC -fno-exceptions -fno-rtti
  -fasynchronous-unwind-tables -DHAVE_CONFIG_H
  )

set(LIBGFORTRAN_TOP_INCDIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(LIBGFORTRAN_COMMON_INCDIRS
  ${CMAKE_CURRENT_SOURCE_DIR}/gcc
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/libcpp/include
  ${CMAKE_CURRENT_SOURCE_DIR}/libcody
  ${CMAKE_CURRENT_SOURCE_DIR}/libdecnumber
  ${CMAKE_CURRENT_SOURCE_DIR}/libdecnumber/bid
  ${CMAKE_CURRENT_SOURCE_DIR}/libbacktrace
  )

add_subdirectory(libcpp)
add_subdirectory(libdecnumber)
add_subdirectory(libbacktrace)
add_subdirectory(libiberty)
add_subdirectory(gcc/fortran)
add_subdirectory(gcc)
