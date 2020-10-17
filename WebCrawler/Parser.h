#pragma once
#ifndef PARSER_H
#include <unordered_set>
#include <queue>
#include <string>
#include <vector>
namespace SpeedCrawler {
	class Parser {
	private:
		std::queue<std::string> todoLinks;
		std::unordered_set<std::string> parsedLinks;
		std::vector<std::string> robotsUrls;
		std::string url;

	public:
		Parser(std::string target) :url(target) {};
		~Parser() {};

		//Fetch URL. Const Refs because we are not modifiying
		void fetchURL(const std::string& url);
		void getRobots(const std::string& robotsURL);
		void extractLinks(std::vector<std::string>& links);

		size_t curlCB(char* buffer, size_t size, size_t nmemb, std::string* userp);
	};
}
#endif // !PARSER_H

