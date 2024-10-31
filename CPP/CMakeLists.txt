cmake_minimum_required(VERSION 3.15)
project(BoostExample)

# Point to vcpkg's toolchain file
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

add_executable(main main.cpp)
find_package(Boost REQUIRED)  # Find the Boost package
target_link_libraries(main Boost::boost)
