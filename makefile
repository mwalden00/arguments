all: args.o
	gcc -o program args.o

args.o: args.c args.h
	gcc -c args.c

clean: 
	rm *.o
	rm program

run: 
	./program

