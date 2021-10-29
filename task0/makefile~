# All Targets
all: Run

libs: asm-lib c-lib

# Executable "run" depends on the files main.o, add.o and numbers.o.

Run:  main.o add.o numbers.o
	gcc -m32 -g -Wall -o Run main.o add.o numbers.o

add.o: add.s
	nasm -g -f elf -w+all -o add.o add.s

numbers.o: numbers.c
	gcc -g -Wall -m32 -ansi -c -o numbers.o numbers.c

main.o: main.c
	gcc -g -Wall -m32 -ansi -c -o main.o main.c

#tell make that "clean" is not a file name!
.PHONY: clean

#Clean the build directory
clean: 
	rm -f *.o hello
