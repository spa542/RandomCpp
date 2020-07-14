#include<iostream>
#include"Account.h"
#include"IllegalBalanceException.h"
#include<string>

int main(void) {
    
    try {
        Account yeet(-54);
    } catch(IllegalBalanceException &ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
