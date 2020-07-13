#include"SavingsAccount.h"

SavingsAccount::SavingsAccount() {
    holder = "Unknown";
    balance = 0.0;
    w_num = 0;
    d_num = 0;
}

double SavingsAccount::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "Withdraw amount exceeds balance, transaction cancelled." << std::endl;
        return 0.0;
    }
    balance -= amount;
    w_num++;
    return amount;
}

void SavingsAccount::deposit(double amount) {
    balance += amount;
    d_num++;
}

void SavingsAccount::print() {
    std::cout << "Account Holder Name: " << holder << std::endl;
    std::cout << "Current Balance: " << balance << std::endl;
    std::cout << "Num of withdraws: " << w_num << std::endl;
    std::cout << "Num of deposits: " << d_num << std::endl;
}

