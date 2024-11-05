# Minimum CMake version required
cmake_minimum_required(VERSION 3.16)

# Project name and language
project(Osprey LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include directories for your project and external dependencies
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(/usr/local/include)  # General include path
include_directories(/usr/local/include/google)  # Specific include path for Protocol Buffers

# Find and link Protocol Buffers
find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})

# Find and link gRPC
find_package(gRPC CONFIG REQUIRED)
include_directories(${gRPC_INCLUDE_DIRS})

# Add Abseil manually if needed
find_library(ABSL_BASE absl_base HINTS /usr/local/lib)
find_library(ABSL_STRINGS absl_strings HINTS /usr/local/lib)

# Source files for your project
set(SOURCE_FILES src/client.cpp)

# Create the executable
add_executable(client ${SOURCE_FILES})

# Link the executable with the libraries
target_link_libraries(client PRIVATE
    ${Protobuf_LIBRARIES}
    gRPC::grpc++
    ${ABSL_BASE}
    ${ABSL_STRINGS}
    Threads::Threads)

