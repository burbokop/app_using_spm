cmake_minimum_required(VERSION 3.15)

project(app_using_spm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_directories(/home/borys/.magura/vsys/lib)

add_executable(app_using_spm main.cpp)

find_package(magura REQUIRED)

target_connect_magura(app_using_spm)



