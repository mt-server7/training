all: function

function: main.o class.o function.o
	g++ main.o class.o -o function

main.o: main.cpp
	g++ -c main.cpp

class.o: class.cpp
	g++ -c class.cpp

function.o: function.cpp
	g++ -c function.cpp

clean:
	rm -rf *.o function
