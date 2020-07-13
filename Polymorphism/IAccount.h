#ifndef _I_ACCOUNT_H_
#define _I_ACCOUNT_H_
#include<iostream>
#include<string>

class I_Account {
    public:
        virtual double withdraw(double) = 0;
        virtual void deposit(double) = 0;
};

#endif
