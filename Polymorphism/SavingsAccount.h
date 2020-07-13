#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include<iostream>
#include<string>
#include"IAccount.h"

class SavingsAccount : public I_Account {
    private: 
        std::string holder;
        double balance;
        int w_num;
        int d_num;
    
    public:
        SavingsAccount();
        double withdraw(double);
        void deposit(double);
        void print();
};

#endif
