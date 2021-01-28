project(print_hello)

set(CMAKE_CXX_STANDARD 17)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(ERROR "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

include_directories("./include/")

set(THIS_PROJECT_EXECUTABLE_LIST src/phl.cpp)

add_library(print_hello_lib SHARED ${THIS_PROJECT_EXECUTABLE_LIST})

target_link_libraries(print_hello_lib ${CONAN_LIBS})
