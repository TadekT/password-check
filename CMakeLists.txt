cmake_minimum_required(VERSION 3.22)
project(PassowrdValidation)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_executable(
validation
validation.cpp
validation-gt.cpp
)
add_executable(
  main
  main.cpp
  validation.cpp
)
target_link_libraries(
    validation
    GTest::gtest_main
    )

target_compile_options(validation PRIVATE -Wall -Wextra -pedantic -Werror -Wconversion)
  
include(GoogleTest)
gtest_discover_tests(validation)
      
      