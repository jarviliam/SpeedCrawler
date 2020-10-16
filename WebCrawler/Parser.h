#pragma once
#ifndef PARSER_H
#include <unordered_set>
#include <queue>
#include <string>
#include <vector>
namespace SpeedCrawler {
	class Parser {
	private:
		std::queue<std::String> todoLinks;
		std::unordered_set<std::string> parsedLinks;
		std::vector<std::string> robotsUrls;

	public:
		Parser(){}
		~Parser(){}

		//Fetch URL
		void fetchURL(const std::string url);
		void extractLinks(std::vector& links);
	};
}
#endif // !PARSER_H

