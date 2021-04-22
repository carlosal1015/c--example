set(TARGET "hello-world")

# set(TARGET_SRC
#         ${TARGET}.cc
#         )

cmake_minimum_required(VERSION 3.17)
project(${TARGET})
set(CMAKE_CXX_STANDARD 17)

# add_executable(${TARGET} ${TARGET_SRC})

FOREACH(file classes hello namespaces templatesv1 templatesv2)
  ADD_EXECUTABLE(${file} ${file}.cc)
ENDFOREACH()