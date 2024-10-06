
add_executable(smoke ${CMAKE_CURRENT_SOURCE_DIR}/smoke.c)
target_link_libraries(smoke PRIVATE tinyexpr)

add_executable(benchmark ${CMAKE_CURRENT_SOURCE_DIR}/benchmark.c)
target_link_libraries(benchmark PRIVATE tinyexpr)


add_test(
	NAME smoke
	COMMAND smoke
)

add_test(
	NAME benchmark
	COMMAND benchmark
)