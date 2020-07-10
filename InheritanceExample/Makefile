main: main.o SavingsAccount.o Account.o
	g++ -o main -std=c++11 main.o SavingsAccount.o Account.o
main.o: main.cpp SavingsAccount.h Account.h
	g++ -c main.cpp -std=c++11 -g
SavingsAccount.o: SavingsAccount.h SavingsAccount.cpp Account.o
	g++ -c SavingsAccount.cpp -std=c++11 -g
Account.o: Account.h Account.cpp
	g++ -c Account.cpp -std=c++11 -g
clean:
	rm -f *.o main
