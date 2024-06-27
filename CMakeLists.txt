cmake_minimum_required(VERSION 3.15)
project(CrowSample)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add compiler flags to suppress warnings
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")
elseif(MSVC)
    add_compile_options(/w)
endif()

set(INCLUDE_PATHS boost_1_81_0 crow/include)

add_executable(CrowSample main.cpp)

target_include_directories(CrowSample PUBLIC ${INCLUDE_PATHS})

