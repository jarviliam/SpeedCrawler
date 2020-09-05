#pragma once
#ifndef CRAWLER_H
#define CRAWLER_H

#include<string>
#include<curl/curl.h>
namespace SpeedCrawler
{
	class Crawler
	{
	public:
		void start(const std::string& target);
		void stop();
		~Crawler();
		Crawler();
	private:
		bool isRunning = true;
		void crawl(const std::string& url);
	};
};
#endif