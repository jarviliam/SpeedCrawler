#pragma once
#ifndef ROBOTS_H
#define ROBOTS_H
#include <vector>
#include <string>

namespace SpeedCrawler {
	class Robots {
	public:
		boolean isFound = false;
	private:
		std::vector<std::string> robotsList;
	};
};
#endif // ! ROBOTS_H

