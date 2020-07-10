#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include<iostream>
#include<string>
#include"Account.h"

class SavingsAccount : public Account {
    private:
        double interest;
    public:
        SavingsAccount();
        SavingsAccount(double, std::string, double);
        SavingsAccount(const SavingsAccount&);
        void print();
};

#endif
