#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool isValidEmail(const std::string& email) {
    const std::regex pattern(R"((\w+)(\.{0,1}\w+)*@(\w+)(\.\w+)+)");
    return std::regex_match(email, pattern);
}

int main() {
    std::string email;

    std::cout << "Enter an email address: ";
    std::cin >> email;

    if (isValidEmail(email)) {
        std::cout << "Valid email address." << std::endl;
    } else {
        std::cout << "Invalid email address." << std::endl;
    }

    return 0;

}