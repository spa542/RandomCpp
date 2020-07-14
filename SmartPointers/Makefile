main: main.o Test.o
	g++ -o main main.o Test.o -std=c++17 -g
main.o: main.cpp Test.h
	g++ -c main.cpp -std=c++17 -g
Test.o: Test.cpp Test.h
	g++ -c Test.cpp -std=c++17 -g
clean:
	rm -f *.o main
