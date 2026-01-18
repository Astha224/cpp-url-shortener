#ifndef URL_SERVICE_H
#define URL_SERVICE_H


#include <string>
#include "URLRepository.h"


class URLService {
private:
URLRepository repository;
int counter;
std::string encodeBase62(int id) const;


public:
URLService();
std::string shortenUrl(const std::string& longUrl);
std::string getOriginalUrl(const std::string& shortCode) const;
};


#endif