cmake_minimum_required(VERSION 3.28)
project(uniasset_shader)

if (COMMAND zepo_generate)
    zepo_generate()
endif ()

include_directories(src)

add_subdirectory(src/uniasset.shader)

