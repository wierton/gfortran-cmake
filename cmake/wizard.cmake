macro(set_cxx_standard version)
  if (CMAKE_VERSION VERSION_LESS "3.1")
	if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++${version}")
	endif ()
  else ()
	set (CMAKE_CXX_STANDARD ${version})
  endif ()
endmacro(set_cxx_standard)

# name FILES pattern DEPENDS libraries
function(add_wiz_library name)
  set(singleValueArgs TYPE)
  set(multiValueArgs FILES INCLUDES INCLUDES_BEFORE DEPENDS OPTIONS)
  cmake_parse_arguments(OPT ""
    "${singleValueArgs}" "${multiValueArgs}" ${ARGV})
  file(GLOB SRCS ${OPT_FILES})
  if(DEFINED OPT_TYPE)
    set(LIBTYPE ${OPT_TYPE})
  else()
    set(LIBTYPE STATIC)
  endif()
  add_library(${name} ${LIBTYPE} ${SRCS})
  if(DEFINED OPT_DEPENDS)
	target_link_libraries(${name} ${OPT_DEPENDS})
  endif()
  if(DEFINED OPT_OPTIONS)
    target_compile_options(${name} PRIVATE ${OPT_OPTIONS})
  endif()
  if(DEFINED OPT_INCLUDES_BEFORE)
    target_include_directories(${name} BEFORE PRIVATE ${OPT_INCLUDES_BEFORE})
  endif()
  if(DEFINED OPT_INCLUDES)
    target_include_directories(${name} PRIVATE ${OPT_INCLUDES})
  endif()
  add_custom_command(
    TARGET ${name}
    POST_BUILD
    COMMAND mkdir -p ${CMAKE_BINARY_DIR}/lib
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${name}>
    ${CMAKE_BINARY_DIR}/lib/$<TARGET_FILE_NAME:${name}>
    DEPENDS ${name}
    )
endfunction()

function(add_wiz_program name)
  set(singleValueArgs)
  set(multiValueArgs INCLUDES INCLUDES_BEFORE FILES DEPENDS OPTIONS)
  cmake_parse_arguments(OPT ""
    "${singleValueArgs}" "${multiValueArgs}" ${ARGV})
  file(GLOB SRCS ${OPT_FILES})
  add_executable(${name} ${SRCS})
  if(DEFINED OPT_DEPENDS)
	target_link_libraries(${name} ${OPT_DEPENDS})
  endif()
  if(DEFINED OPT_OPTIONS)
    target_compile_options(${name} PRIVATE ${OPT_OPTIONS})
  endif()
  if(DEFINED OPT_INCLUDES_BEFORE)
    target_include_directories(${name} BEFORE PRIVATE ${OPT_INCLUDES_BEFORE})
  endif()
  if(DEFINED OPT_INCLUDES)
    target_include_directories(${name} PRIVATE ${OPT_INCLUDES})
  endif()
  add_custom_command(
    TARGET ${name}
    POST_BUILD
    COMMAND mkdir -p ${CMAKE_BINARY_DIR}/bin
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${name}>
    ${CMAKE_BINARY_DIR}/bin/$<TARGET_FILE_NAME:${name}>
    DEPENDS ${name}
    )
endfunction()

function(add_clang_format)
  set(multiValueArgs DIRECTORY)
  cmake_parse_arguments(CF "" "" "${multiValueArgs}" ${ARGV})

  file(GLOB_RECURSE ALL_SOURCE_FILES *.cpp *.h *.c *.cc *.hpp)
  # message("${ALL_SOURCE_FILES}")

  foreach (SOURCE_FILE ${ALL_SOURCE_FILES})
	set(DIR_NOTFOUND 1)
	foreach (DIR ${CF_DIRECTORY})
	  string(FIND ${SOURCE_FILE} ${PROJECT_SOURCE_DIR}/${DIR} PROJECT_TRDPARTY_DIR_FOUND)
	  if (NOT ${PROJECT_TRDPARTY_DIR_FOUND} EQUAL -1)
		unset(DIR_NOTFOUND)
	  endif ()
	endforeach()

	if(DEFINED DIR_NOTFOUND)
	  # message("remove ${SOURCE_FILE}")
	  list(REMOVE_ITEM ALL_SOURCE_FILES ${SOURCE_FILE})
	else()
	  # message("keep ${SOURCE_FILE}")
	endif()
  endforeach ()

  # message("${ALL_SOURCE_FILES}")

  add_custom_target(
	clang-format
	COMMAND clang-format -i ${ALL_SOURCE_FILES}
	)
endfunction()
