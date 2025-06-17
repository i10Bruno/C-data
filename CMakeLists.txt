cmake_minimum_required(VERSION 3.16)

project(date2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(date2 main.cpp
    date2.h date2.cpp)

include(GNUInstallDirs)
install(TARGETS date2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
