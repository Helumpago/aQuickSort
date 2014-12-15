
CC=clang++
FL=$(DBG)
DBG=-g -Wall
DIST=-O3

OUT=o.exe

## Compilation ##
main:
	$(CC) $(FL) main.cpp -o $(OUT)

## Utilities ##
run:
	./$(OUT)
clean:
	rm *.o *.exe
