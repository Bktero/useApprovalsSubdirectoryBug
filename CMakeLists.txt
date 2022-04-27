cmake_minimum_required(VERSION 3.21)
project(useApprovalsSubdirectoryBug)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp test.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ApprovalTests Catch)