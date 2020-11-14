#include "Parser.h"

#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <vector>

#include "curl/curl.h"

void SpeedCrawler::Parser::fetchURL(const std::string& url){};
void SpeedCrawler::Parser::getRobots(const std::string& url) {
    CURL* curl;
    curl_global_init(CURL_GLOBAL_DEFAULT);
    std::string buffer;
    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION,
                     &SpeedCrawler::Parser::curlCB);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);
    CURLcode resp = curl_easy_perform(curl);
    if (resp != CURLE_OK) {
        std::cout << "Error Occured : " << resp << std::endl;
    } else {
        std::cout << "URL OK" << std::endl;
        std::cout << buffer << std::endl;
    }
};

size_t SpeedCrawler::Parser::curlCB(char* buffer, size_t size, size_t nmemb,
                                    std::string* userp) {
    userp->append((char*)buffer, size * nmemb);
    return size * nmemb;
}
