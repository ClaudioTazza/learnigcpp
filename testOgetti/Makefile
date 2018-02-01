CXX=g++
CXXFLAGS=-Wall -ansi -pedantic

main: main.o bibita.o
	$(CXX) $^ -o $@

bibita.o: bibita.cpp bibita.h
main.o: main.cpp bibita.h

.PHONY: clean
clean:
	rm -f *.o main
