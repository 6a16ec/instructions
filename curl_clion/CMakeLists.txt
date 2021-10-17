cmake_minimum_required(VERSION 3.20)
project(main)

set(CMAKE_CXX_STANDARD 20)

set(libcurl_INCLUDE_DIR "C:/Users/Public/curl/include")
include_directories(${libcurl_INCLUDE_DIR})

add_executable(main main.cpp)

target_link_libraries(main C:/Users/Public/curl/lib/libcurl.dll.a)
