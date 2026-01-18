#include "URLController.h"
#include <iostream>


void URLController::createShortUrl(const std::string& longUrl) {
std::string shortCode = service.shortenUrl(longUrl);
std::cout << "Short URL created: http://short.ly/" << shortCode << std::endl;
}


void URLController::redirect(const std::string& shortCode) const {
std::string longUrl = service.getOriginalUrl(shortCode);
if (longUrl.empty()) {
std::cout << "Invalid short URL" << std::endl;
} else {
std::cout << "Redirecting to: " << longUrl << std::endl;
}
}