cmake_minimum_required(VERSION 3.29)
project(CPP)

set(CMAKE_CXX_STANDARD 20)

# Check if build is ARM (Raspberry Pi)
if (${CMAKE_SYSTEM_PROCESSOR} MATCHES "arm" OR ${CMAKE_SYSTEM_PROCESSOR} MATCHES "aarch64")
    message(STATUS "Compiling for Raspberry Pi (ARM)")

    # Find and link libraries for the Pi
    find_library(WIRINGPI_LIB wiringPi)
    target_link_libraries(my_program ${WIRINGPI_LIB})

else()
    message(STATUS "Compiling for non-ARM platform (x86/x64)")

    # Maybe find a mock-GPIO library?
endif()

add_executable(CPP src/main.cpp
        src/Controller.cpp
        include/Controller.h)
