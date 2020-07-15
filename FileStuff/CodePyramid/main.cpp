#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>

int main() {

    std::string input;
    std::cout << "Enter a string so a pyramid can be created: " << std::endl;
    std::getline(std::cin, input);

    int startCount = 1;
    for (int i = 0; i < input.length(); i++, startCount++) {
        for (int space = 1; space <= input.length() - i; space++) {
            std::cout << " "; 
        }
        for (int h = 0; h < input.length() && h < startCount; h++) {
            std::cout << input[h]; 
        }
        for (int h = startCount - 2; h >= 0; h--) {
            std::cout << input[h];
        }
        std::cout << std::endl;
    }

    return 0;
}
