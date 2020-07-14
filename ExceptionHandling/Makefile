main: main.o Account.o
	g++ -o main main.o Account.o -std=c++11 -g
main.o: main.cpp Account.h IllegalBalanceException.h
	g++ -c main.cpp -std=c++11 -g
Account.o: Account.h Account.cpp IllegalBalanceException.h
	g++ -c Account.cpp -std=c++11 -g
clean:
	rm -f *.o main
