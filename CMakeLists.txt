# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("WebCrawler")

# Include sub-projects.
add_subdirectory ("WebCrawler")

set(CURL_LIBRARY "${CMAKE_SOURCE_DIR}/cURL")
find_package(CURL REQUIRED)
message(public ${CURL_LIBRARIES})
include_directories(${CURL_LIBRARIES})
