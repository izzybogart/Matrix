all: static_matrix.o matrix_static.h
	gcc static_matrix.o -o run_static_matrix

transpose.o: main.c matrix_static.h
	gcc -c main.c

clean:
	rm *.o
	rm run_static_matrix


