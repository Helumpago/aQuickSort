
CC=clang++
FL=$(DIST)
DBG=-g -Wall
DIST=-O3

OUT=o.exe

main: aQuickSort
	$(CC) $(FL) aQuickSort.o main.cpp -o $(OUT)
aQuickSort:
	$(CC) $(FL) -c aQuickSort.cpp -o aQuickSort.o

run:
	./$(OUT)
clean:
	rm *.o *.exe
