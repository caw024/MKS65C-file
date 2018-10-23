all: file.o
	gcc file.o

run:
	./a.out

clean:
	rm *.o

file.o: file.c
	gcc -c file.c
