#Michael Girbino
#EECS 338 HW1: Fibonacci Sequence
CC = gcc
CFLAGS = -std=c11 -ggdb
OUT = fibonacci.o
SRC = fibonacci.c

all:	fibonacci

fibonacci:
	$(CC) -o $(OUT) $(SRC) $(CFLAGS)  
	chmod 755 $(OUT)

clean:
	rm -f $(OUT)
