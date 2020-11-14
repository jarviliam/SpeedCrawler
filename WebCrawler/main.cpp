// WebCrawler.cpp : Defines the entry point for the application.
//
#include "Crawler.h"
#include "Parser.h"

int main() {
    std::string target = "www.uniqlo.com";
    SpeedCrawler::Crawler crawl{target};
    crawl.start();
    // SpeedCrawler::Parser ps{target};
    // ps.getRobots(target);
    return 0;
}
