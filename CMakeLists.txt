cmake_minimum_required(VERSION 3.0)

project(glut_test1)

add_executable(glut_test1 main.cpp)

install(TARGETS glut_test1 RUNTIME DESTINATION bin)
