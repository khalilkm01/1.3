# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: main.bin

main.bin: main.o funcs.o
	$(CC) main.o funcs.o -o main.bin

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

funcs.o: funcs.cpp
	$(CC) $(CFLAGS) funcs.cpp

clean:
	rm *.o main.bin