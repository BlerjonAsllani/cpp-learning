#include <iostream>

int main() {
    
    std::string name;

    std::cout << "Whats your name?" << '\n';
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << '\n';
} 