main: main.o fact.o combination.o 
	g++ -o main main.o fact.o combination.o

main.o: main.cpp fact.h
	g++ -c main.cpp

fact.o: fact.cpp fact.h
	g++ -c fact.cpp

combination.o: combination.cpp fact.h
	g++ -c combination.cpp
