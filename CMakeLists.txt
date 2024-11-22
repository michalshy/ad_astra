cmake_minimum_required(VERSION 3.30)
project(ad_astra)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(SFML)

add_executable(ad_astra 
    src/main.cpp 
    src/Globals.hpp 
    src/System/Logic/Timer.hpp
    src/System/Logic/Timer.cpp
    src/Graphic/Interactive/Button.cpp
    src/Graphic/Interactive/Button.hpp
)

target_link_libraries(ad_astra PRIVATE sfml-graphics)

enable_testing()

add_executable(ad_astra_tests
    test/begin.cc
)
target_link_libraries(
    ad_astra_tests
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(ad_astra_tests)