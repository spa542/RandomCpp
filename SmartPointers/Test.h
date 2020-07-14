#ifndef _TEST_H_
#define _TEST_H_
#include<iostream>

class Test {
    private:
        int value;
    public:
        Test();
        Test(int);
        void set_value(int);
        void print();
};

#endif
