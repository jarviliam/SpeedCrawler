# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CURL_LIBRARY "-lcurl")
cmake_minimum_required (VERSION 3.8)

project ("WebCrawler")

# Include sub-projects.
add_subdirectory ("WebCrawler")
find_package(CURL REQUIRED)
