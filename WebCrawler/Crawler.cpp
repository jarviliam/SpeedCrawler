#include "Crawler.h"

namespace SpeedCrawler
{
	Crawler::Crawler() {

	};
	Crawler::~Crawler() {

	};

	void Crawler::crawl(const std::string& target) {

		/*curl_global_init(CURL_GLOBAL_DEFAULT);
		CURL* curl = curl_easy_init();

		if (curl) {
			CURLcode response;
			curl_easy_setopt(curl, CURLOPT_URL, target.c_str());
			response = curl_easy_perform(curl);
			curl_easy_cleanup(curl);

			//Make Parser Here
		}
		else {
			//throw std::_Xruntime_error("No Connection");
		}*/
	};
	//Init Lists Here
void Crawler::start(const std::string& url) {
	this->isRunning = true;


	}
}