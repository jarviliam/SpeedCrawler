# CMakeList.txt : CMake project for WebCrawler, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(CURL REQUIRED)
# Add source to this project's executable.
link_directories(C:/Users/Liam/source/repos/WebCrawler/curl/lib)
add_executable (WebCrawler "main.cpp"  "Crawler.h" "Crawler.cpp"   "Parser.h" "Parser.cpp")
include_directories(${$CURL_INCLUDE_DIR})
target_link_libraries(WebCrawler ${CURL_LIBRARIES})
