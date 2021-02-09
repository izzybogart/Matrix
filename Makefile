all: transpose.o matrix_dynamic.h matrix_static.h
	gcc transpose.o -o run_transpose

transpose.o: transpose.c matrix_dynamic.h matrix_static.h
	gcc -c transpose.c

clean:
	rm *.o
	rm run_transpose


