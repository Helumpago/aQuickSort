
CC=clang++
DBG=-g -Wall
FL=$(DBG)

out=o.exe

all: main

main: aQuickSort
	$(CC) $(FL)  main.cpp aQuickSort.o -o $(out)
aQuickSort:
	$(CC) $(FL) -c aQuickSort.cpp -o aQuickSort.o

run:
	./$(out)
clean:
	rm *.o *.exe
