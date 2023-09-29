all: main

P0.o: P0.cpp P0.h
	g++ -c P0.cpp

main.o: main.cpp P0.h
	g++ -c main.cpp

main: main.o P0.o
	g++ -o main main.o P0.o

clean:
	rm -f *.o main

test: all
	./main
