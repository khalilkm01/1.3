# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: main.bin

main.bin: main.o 
	$(CC) main.o  -o main.bin

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o main.bin