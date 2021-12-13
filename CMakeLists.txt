cmake_minimum_required(VERSION 3.0.0)
project(VSCodeSDL VERSION 0.1.0)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_TOOLCHAIN_FILE "C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")
# set(CMAKE_PREFIX_PATH "C:/dev/vcpkg/installed/x64-windows/share")

find_package(SDL2 CONFIG REQUIRED)
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2 SDL2::SDL2main)