cmake_minimum_required(VERSION 3.20)
project(opengltest)

set(CMAKE_CXX_STANDARD 14)

add_executable(opengltest main.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
