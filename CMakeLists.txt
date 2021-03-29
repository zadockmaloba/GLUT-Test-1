cmake_minimum_required(VERSION 3.0)

project(glut_test1)

add_executable(glut_test1 main.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(glut_test1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})

install(TARGETS glut_test1 RUNTIME DESTINATION bin)
