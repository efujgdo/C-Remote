# 最低版本
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(TEST)

# 包含头文件
include_directories(include)

# 编译可执行程序
add_executable(test_cmake main.cpp src/add.cpp src/sub.cpp)
