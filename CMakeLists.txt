cmake_minimum_required(VERSION 3.0)

project(OpenGLLearning)

add_subdirectory(deps/glfw)

add_subdirectory(deps/glad)

include_directories(${PROJECT_SOURCE_DIR}/deps/glad/include)
include_directories(${PROJECT_SOURCE_DIR}/deps/glfw/include)
include_directories(${PROJECT_SOURCE_DIR}/deps/linmath)

set(SRC_LIST src/main.cpp)

add_executable(OpenGLLearning ${SRC_LIST})

link_directories(${PROJECT_SOURCE_DIR}/build/deps/glfw/src)

link_libraries(glfw)

link_libraries(glad)

target_link_libraries(OpenGLLearning glfw glad)
