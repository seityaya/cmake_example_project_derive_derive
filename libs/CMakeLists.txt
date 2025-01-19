## Author                 : Seityagiya Terlekchi
## Contacts               : terlekchiseityaya@gmail.com
## Creation Date          : 2025.01
## License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
## SPDX-License-Identifier: LGPL-2.1-or-later
## Copyright © 2025-2025 Seityagiya Terlekchi. All rights reserved.

cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(my_calculator_libs)

include(FetchContent)

if(NOT TARGET my_math)
    add_subdirectory(${CMAKE_SOURCE_DIR}/libs/cmake_example_project)
endif()

if(NOT TARGET my_math)
    FetchContent_Declare(cmake_example_project
      GIT_REPOSITORY "https://github.com/seityaya/cmake_example_project.git"
      GIT_TAG "origin/master"
      SOURCE_DIR "${CMAKE_SOURCE_DIR}/libs/cmake_example_project"
    )
    FetchContent_MakeAvailable(cmake_example_project)
endif()


if(NOT TARGET my_calc)
    add_subdirectory(${CMAKE_SOURCE_DIR}/libs/cmake_example_project_derive)
endif()

if(NOT TARGET my_calc)
    FetchContent_Declare(cmake_example_project_derive
      GIT_REPOSITORY "https://github.com/seityaya/cmake_example_project_derive.git"
      GIT_TAG "origin/master"
      SOURCE_DIR "${CMAKE_SOURCE_DIR}/libs/cmake_example_project_derive"
    )
    FetchContent_MakeAvailable(cmake_example_project_derive)
endif()
