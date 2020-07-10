#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<iostream>
#include<string>

class Account {
    private:
        double balance;
        std::string account_holder;
        int num_of_withdraws;
        int num_of_deposits;
    public:
        Account();
        Account(double, std::string);
        Account(const Account&);
        ~Account();
        void deposit(double);
        void withdraw(double);
        void print();
};

#endif
