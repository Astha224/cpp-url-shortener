#include <iostream>
#include "URLController.h"

int main() {
URLController controller;
int choice;
while (true) {
std::cout << "\n--- URL Shortener Service ---\n";
std::cout << "1. Shorten URL\n";
std::cout << "2. Redirect URL\n";
std::cout << "3. Exit\n";
std::cout << "Enter choice: ";
std::cin >> choice;


if (choice == 1) {
std::string longUrl;
std::cin.ignore();
std::cout << "Enter long URL: ";
getline(std::cin, longUrl);
controller.createShortUrl(longUrl);
} else if (choice == 2) {
std::string shortCode;
std::cout << "Enter short code: ";
std::cin >> shortCode;
controller.redirect(shortCode);
} else if (choice == 3) {
break;
} else {
std::cout << "Invalid option" << std::endl;
}
}
return 0;
}