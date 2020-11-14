#pragma once
#ifndef ROBOTS_H
#define ROBOTS_H

#include <iostream>
#include <regex>
#include <string>
#include <vector>

namespace SpeedCrawler {
// Robots.txt management
class Robots {
   public:
    Robots(std::string url, std::string contents) {}

    void parseRobots(std::string& contents) {
        // Split Lines
        auto lines = splitLines(contents);
        for (auto x : lines) {
            // Debug
            std::cout << x << std::endl;
        }
    };

    // Function for Splitting the Robots.txt lines
    // TODO: Handle Comment Lines / Sitemaps
    std::vector<std::string> splitLines(const std::string& source) {
        std::vector<std::string> results;
        // Regex for line
        const std::regex line("/\r\n|\r|\n/");
        std::sregex_token_iterator iter(source.begin(), source.end(), line, -1);
        for (std::sregex_token_iterator end; iter != end; ++iter) {
            results.push_back(iter->str());
        }
        return results;
    };

   private:
    const std::string url;
    const int port = 80;
    std::vector<std::string> sitemaps;
};
#endif
