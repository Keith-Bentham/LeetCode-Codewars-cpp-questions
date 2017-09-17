cmake_minimum_required(VERSION 3.6)
project(LeetCode_Codewars_cpp_questions)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ReverseInteger.cpp)
add_executable(LeetCode_Codewars_cpp_questions ${SOURCE_FILES})