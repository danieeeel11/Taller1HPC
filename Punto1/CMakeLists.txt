cmake_minimum_required(VERSION 3.5)

project(Punto1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Punto1 main.cpp)

install(TARGETS Punto1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
