cmake_minimum_required(VERSION 3.14)
project(ThreadPool)

set(CMAKE_CXX_STANDARD 17)

add_executable(ThreadPool main.cpp)
target_link_libraries(ThreadPool pthread)