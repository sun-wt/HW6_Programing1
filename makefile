all: hw0601.o hw0602.o hw0602another.c hw0603.o hw0603another.c hw0604.o hw0604another.c hw0605.o hw0605another.c
	gcc hw0601.o -o hw0601
	gcc hw0602another.c hw0602.o -o hw0602
	gcc hw0603another.c hw0603.o -o hw0603 -lm
	gcc hw0604another.c hw0604.o -o hw0604
	gcc hw0605another.c hw0605.o -o hw0605

hw0601: hw0601.c
	gcc -c hw0601.c -o hw0601.o -lm
	gcc -shared hw0601.o -o libhw0601.so

hw0602: hw0602.c
	gcc -c hw0602.c -o hw0602.o 
	gcc -shared hw0602.o -o libhw0602.so

hw0603: hw0603.c
	gcc -c hw0603.c -o hw0603.o -lm
	gcc -shared hw0603.o -o libhw0603.so

hw0604: hw0604.c
	gcc -c hw0604.c -o hw0604.o 
	gcc -shared hw0604.o -o libhw0604.so

hw0605: hw0605.c
	gcc -c hw0605.c -o hw0605.o 
	gcc -shared hw0605.o -o libhw0605.so

