#ifndef _ILLEGALBALANCEEXCEPTION_H_
#define _ILLEGALBALANCEEXCEPTION_H_
#include<iostream>

class IllegalBalanceException : public std::exception {
    public:
        IllegalBalanceException() noexcept = default;
        ~IllegalBalanceException() noexcept = default;
        virtual const char* what() {
            return "Balance is incorrect";
        }
};

#endif
