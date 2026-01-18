#ifndef URL_REPOSITORY_H
#define URL_REPOSITORY_H


#include <unordered_map>
#include <string>


class URLRepository {
private:
std::unordered_map<std::string, std::string> urlMap;


public:
void save(const std::string& shortUrl, const std::string& longUrl);
std::string find(const std::string& shortUrl) const;
};


#endif