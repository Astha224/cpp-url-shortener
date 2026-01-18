#include "URLService.h"


URLService::URLService() : counter(1) {}


std::string URLService::encodeBase62(int id) const {
const std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::string result;


while (id > 0) {
result = chars[id % 62] + result;
id /= 62;
}
return result;
}


std::string URLService::shortenUrl(const std::string& longUrl) {
std::string shortCode = encodeBase62(counter++);
repository.save(shortCode, longUrl);
return shortCode;
}


std::string URLService::getOriginalUrl(const std::string& shortCode) const {
return repository.find(shortCode);
}