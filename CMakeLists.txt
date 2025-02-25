cmake_minimum_required(VERSION 3.14)

project(DeGrootLib LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(DeGrootLib SHARED
  degrootlib.cpp
  degrootlib.h
)

target_link_libraries(DeGrootLib PRIVATE)

target_compile_definitions(DeGrootLib PRIVATE DEGROOTLIB_LIBRARY)

project(test_DeGrootLib LANGUAGES CXX)

add_executable(test_DeGrootLib main.cpp)
target_link_libraries(test_DeGrootLib DeGrootLib)
