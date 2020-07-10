#include"Account.h"

Account::Account() : balance{0.0}, account_holder{"Unknown"}, num_of_withdraws{0},
    num_of_deposits{0} {
    
}

Account::Account(double initBalance, std::string name) : balance{initBalance}, 
    account_holder{name}, num_of_withdraws{0}, num_of_deposits{0} {

}

Account::Account(const Account& other) : balance{other.balance}, 
    account_holder{other.account_holder}, num_of_withdraws{other.num_of_withdraws}, 
    num_of_deposits{other.num_of_deposits} {
    
}

Account::~Account() {

}

void Account::deposit(double amount) {
    balance += amount;
    std::cout << amount << " added to account." << std::endl;
    num_of_deposits++;
}

void Account::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "You do not have that much money, please try again." << std::endl;
        return;
    }
    balance -= amount;
    std::cout << amount << " withdrawn from your account." << std::endl;
    num_of_withdraws++;
}

void Account::print() {
    std::cout << "Account Holder Name: " << account_holder << std::endl;
    std::cout << "Current Balance: " << balance << std::endl;
    std::cout << "Number of withdraws on this account: " << num_of_withdraws << std::endl;
    std::cout << "Number of deposits on this account: " << num_of_deposits << std::endl;
}
