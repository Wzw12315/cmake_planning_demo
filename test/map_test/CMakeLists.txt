project(map_test)

# 添加可执行文件
add_executable(${PROJECT_NAME} map_test.cpp)

# 设置 pnc_map 库路径
target_include_directories(${PROJECT_NAME} PUBLIC ${PNC_Map_Dir})
target_link_libraries(${PROJECT_NAME} PUBLIC pnc_map)

add_test(NAME map_test COMMAND map_test)
