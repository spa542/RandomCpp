#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<iostream>
#include"IllegalBalanceException.h"

class Account {
    private:
        double balance;
    public:
        Account();
        Account(double);
        void print();
};

#endif
