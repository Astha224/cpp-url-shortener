#ifndef URL_CONTROLLER_H
#define URL_CONTROLLER_H


#include <string>
#include "URLService.h"


class URLController {
private:
URLService service;


public:
void createShortUrl(const std::string& longUrl);
void redirect(const std::string& shortCode) const;
};


#endif