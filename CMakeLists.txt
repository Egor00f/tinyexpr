cmake_minimum_required(VERSION 3.14)



project(tinyexpr)

option(tinyexpr_BUILD_EXAMPLES "Build tinyexpr examples" ON)
option(tinyexpr_BUILD_TESTS "Build tinyexpr tests" ON)

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Wshadow")

add_library(tinyexpr STATIC
	${CMAKE_CURRENT_SOURCE_DIR}/src/tinyexpr.c
)

target_include_directories(tinyexpr
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_options(tinyexpr
	PUBLIC -fno-ident -fomit-frame-pointer -fno-ident -U__WIN32__ -U_Win32 -U_WIN32 -U__MINGW32__ -UWIN32
)

if(tinyexpr_BUILD_EXAMPLES)
	add_subdirectory(examples)
endif()

if(tinyexpr_BUILD_TESTS)
	enable_testing()
	add_subdirectory(tests)
endif()
