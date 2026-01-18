A console based URL Shortener application built using C++, demonstrating clean architecture, separation of concerns, and real-world backend logic.
This project simulates how services like Bitly generate and resolve short URLs.

Features
* Generate short URLs from long URLs
* Redirect short URLs to original URLs
* Accepts both short codes (1) and full short URLs (http://short.ly/1)
* In-memory storage using hash maps
* Menu-driven interactive CLI

 Tech Stack
* Language: C++
* Concepts Used:
    * OOP (Classes, Encapsulation)
    * STL (unordered_map)
    * String parsing
    * Modular architecture
* Tools: VS Code, Git, GitHub

Project Structure

cpp-url-shortener/
├── include/
│   ├── URLService.h        # Core business logic
│   └── URLController.h    # Input handling & flow control
├── src/
│   ├── URLService.cpp
│   ├── URLController.cpp
│   └── main.cpp            # Application entry point
How to Run Compile
g++ -std=c++17 src/*.cpp -Iinclude -o url_shortener

Execute
./url_shortener

Sample Usage

--- URL Shortener Service ---
1. Shorten URL
2. Redirect URL
3. Exit

Enter choice: 1
Enter long URL: https://example.com
Short URL created: http://short.ly/1

Enter choice: 2
Enter short URL: http://short.ly/1
Redirecting to: https://example.com

Design Highlights
* Controller-Service separation for scalability
* Defensive input handling
* Easy to extend (database, expiry, analytics)

Future Enhancements
* Persistent storage (file / database)
* URL expiration
* Click analytics
* REST API version

Author
Astha Gupta Software Engineer | C++ | Backend Systems
