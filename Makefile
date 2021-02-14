all: main.o matrix_static.h
	gcc main.o -o run_main

transpose.o: main.c matrix_static.h
	gcc -c main.c

clean:
	rm *.o
	rm run_main


