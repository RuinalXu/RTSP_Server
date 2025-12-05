cmake_minimum_required(VERSION 3.20)

project(RtspServer VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXE_NAME RtspServer)

aux_source_directory(./src SRC)

add_executable(${EXE_NAME} ${SRC})

include_directories(./include)
