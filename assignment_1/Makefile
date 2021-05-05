CC=gcc
CFLAGS=-std=c99
DEPS = average.h
OBJ = average.o main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
