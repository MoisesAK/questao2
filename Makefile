all: prog

prog: *.o
	gcc exemplo2.o -o prog

*.o:	
	gcc -c exemplo2.c 

clean:	
	rm *.o prog
	
