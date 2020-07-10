#include"SavingsAccount.h"

SavingsAccount::SavingsAccount() : Account(), interest{.25} {
     
}

SavingsAccount::SavingsAccount(double amount, std::string name, double intRate) : 
    Account(amount, name), interest{intRate} {

}

SavingsAccount::SavingsAccount(const SavingsAccount& other) : Account(other),
    interest{other.interest} {

}

void SavingsAccount::print() {
    Account::print();
    std::cout << "Interest rate on this account is currently: " << interest << std::endl;
}
