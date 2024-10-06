

add_executable(example ${CMAKE_CURRENT_SOURCE_DIR}/example.c)
target_link_libraries(example PRIVATE tinyexpr)
	
add_executable(example2 ${CMAKE_CURRENT_SOURCE_DIR}/example2.c)
target_link_libraries(example2 PRIVATE tinyexpr)
	
add_executable(example3 ${CMAKE_CURRENT_SOURCE_DIR}/example3.c)
target_link_libraries(example3 PRIVATE tinyexpr)

add_executable(repl ${CMAKE_CURRENT_SOURCE_DIR}/repl.c)
target_link_libraries(repl PRIVATE tinyexpr)