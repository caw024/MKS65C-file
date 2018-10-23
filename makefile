all: file.o
	gcc file.o

run:
	./a.out

clean:
	rm -rf file.o ./a.out file.txt

file.o: file.c
	gcc -c file.c
