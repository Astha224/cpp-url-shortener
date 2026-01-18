#include "URLRepository.h"


void URLRepository::save(const std::string& shortUrl, const std::string& longUrl) {
urlMap[shortUrl] = longUrl;
}


std::string URLRepository::find(const std::string& shortUrl) const {
auto it = urlMap.find(shortUrl);
return it != urlMap.end() ? it->second : "";
}