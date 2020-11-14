#pragma once
#ifndef CRAWLER_H
#define CRAWLER_H

#include <curl/curl.h>

#include <iostream>
#include <string>

namespace SpeedCrawler {
class Crawler {
   public:
    void start() {
        // Begin crawling by fetching the Robots Text
        this->isRunning = true;
        curl_global_init(CURL_GLOBAL_DEFAULT);
        CURL* curl = curl_easy_init();
        if (curl) {
            CURLcode response;
            curl_easy_setopt(curl, CURLOPT_URL, target.c_str());
            response = curl_easy_perform(curl);
            std::cout << response << std::endl;
            curl_easy_cleanup(curl);
        } else {
            std::__throw_runtime_error("No Curl");
        }
    }
    void stop();
    ~Crawler();
    Crawler(const std::string& tg) : target(tg) {}

   private:
    const std::string& target;
    bool isRunning = false;
    void crawl(const std::string& url);
};  // namespace SpeedCrawler
};  // namespace SpeedCrawler
#endif
