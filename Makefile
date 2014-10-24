.PHONY: all
all: main

main: main.o
	gcc -o main main.c person.o

main.o: main.c
	gcc person/person.c -c

.PHONY: clean
clean:
	rm -rf main main.o person.o