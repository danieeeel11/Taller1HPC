cmake_minimum_required(VERSION 3.5)

project(Punto8 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Punto8 main.cpp)

install(TARGETS Punto8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
