// WebCrawler.cpp : Defines the entry point for the application.
//
#include "Crawler.h"
#include "Parser.h"


int main()
{
	std::string target = "http://unicase.jp/robots.txt";
	SpeedCrawler::Parser ps{target};
	ps.getRobots(target);
	return 0;
}
