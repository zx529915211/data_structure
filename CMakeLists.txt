cmake_minimum_required(VERSION 3.22)
project(data_structure)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRCS *.cpp)

message(${SRCS})

add_executable(data_structure)

target_sources(data_structure PRIVATE ${SRCS})


