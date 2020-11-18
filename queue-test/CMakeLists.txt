cmake_minimum_required(VERSION 3.0)

project(queue_test VERSION 0.0.1 LANGUAGES CXX)

find_package(GTest CONFIG REQUIRED)

add_executable(queue_test queue_test.cpp)
target_link_libraries(queue_test GTest::gtest)

include(CTest)
add_test(first_and_only_test queue_test)
