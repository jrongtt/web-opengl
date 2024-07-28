cmake_minimum_required(VERSION 3.0)
project(TextbookOpenGL)

set(CMAKE_CXX_STANDARD 11)

# Set the path to vcpkg toolchain file
set(CMAKE_TOOLCHAIN_FILE "C:/Users/jackp/vcpkg/scripts/buildsystems/vcpkg.cmake")

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

add_executable(TextbookOpenGL src/main.cpp)

target_link_libraries(TextbookOpenGL PRIVATE glad::glad glfw)
