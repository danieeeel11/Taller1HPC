cmake_minimum_required(VERSION 3.5)

project(Punto9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Punto9 main.cpp)

install(TARGETS Punto9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
