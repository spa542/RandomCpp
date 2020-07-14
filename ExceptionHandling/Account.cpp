#include"Account.h"

Account::Account() : balance{0} {
    
}

Account::Account(double amount) : balance{amount} { 
    if (amount < 0) {
        throw IllegalBalanceException();
    }
}

void Account::print() {
    std::cout << "Balance is " << balance << std::endl;
}
