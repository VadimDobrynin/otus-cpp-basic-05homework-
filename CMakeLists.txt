cmake_minimum_required(VERSION 3.8)
project(otus_cpp_basic_05homework_)

set(CMAKE_CXX_STANDARD 17)


add_subdirectory(statistics)

add_executable(homework5
        main.cpp)

target_link_libraries(homework5 StatLibrary)