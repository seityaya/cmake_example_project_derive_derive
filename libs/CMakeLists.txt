cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(my_calculator_libs)

include(FetchContent)


FetchContent_Declare(cmake_example_project
  GIT_REPOSITORY "https://github.com/seityaya/cmake_example_project.git"
  GIT_TAG "origin/master"
  SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/cmake_example_project"
)
FetchContent_MakeAvailable(cmake_example_project)


FetchContent_Declare(cmake_example_project_derive
  GIT_REPOSITORY "https://github.com/seityaya/cmake_example_project_derive.git"
  GIT_TAG "origin/master"
  SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/cmake_example_project_derive"
)
FetchContent_MakeAvailable(cmake_example_project_derive)
