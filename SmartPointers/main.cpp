#include<iostream>
#include<memory>
#include<vector>
#include"Test.h"

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::unique_ptr<std::vector<std::shared_ptr<Test>>> &woot, int sizeOfVect) {
    int input;
    for (int i = 0; i < sizeOfVect; i++) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> input;
        woot->push_back(std::make_shared<Test>(input));
    }
}

void display(std::unique_ptr<std::vector<std::shared_ptr<Test>>> &woot, int sizeOfVect) {
    for (int i = 0; i < sizeOfVect; i++) {
        woot->at(i)->print();
    }
}

int main() {

    std::unique_ptr<std::vector<std::shared_ptr<Test>>> ptr = make();
    int amount;
    std::cout << "How many data points will you input? " << std::endl;
    std::cin >> amount;
    fill(ptr, amount);
    display(ptr, amount);

    return 0;
}
