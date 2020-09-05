# CMakeList.txt : CMake project for WebCrawler, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (WebCrawler "WebCrawler.cpp" "WebCrawler.h" "Crawler.h" "Crawler.cpp" "Robots.h" "UrlQueue.h")
target_link_libraries(WebCrawler PUBLIC ${CURL_INCLUDE_DIR})
target_include_directories(WebCrawler PUBLIC ${CURL_INCLUDE_DIR})
# TODO: Add tests and install targets if needed.
