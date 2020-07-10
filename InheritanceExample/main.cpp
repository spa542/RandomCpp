#include<iostream>
#include<string>
#include"Account.h"
#include"SavingsAccount.h"

int main() {

    Account one(500.0, "Ryan Rosiak");
    SavingsAccount two(1500.0, "Mary Rosiak", .56);

    one.print();
    two.print();

    one.deposit(1000);
    one.withdraw(220.56);

    one.print();

    two.withdraw(3.45);
    two.withdraw(90.50);
    two.deposit(500.0);

    two.print();
    
    return 0;
}
