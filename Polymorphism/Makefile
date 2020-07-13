main: main.o SavingsAccount.o IAccount.h
	g++ main.o SavingsAccount.o -o main -std=c++11 -g
main.o: main.cpp SavingsAccount.h IAccount.h
	g++ -c main.cpp -std=c++11 -g
SavingsAccount.o: SavingsAccount.cpp SavingsAccount.h IAccount.h
	g++ -c SavingsAccount.cpp -std=c++11 -g
