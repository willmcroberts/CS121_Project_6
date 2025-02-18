program: main.o address.o date.o student.o
	g++ -g main.o address.o date.o student.o -o "Heap"

main.o: main.cpp address.h date.h student.h
	g++ -c -g  main.cpp

address.o: address.cpp address.h
	g++ -c -g address.cpp

date.o: date.cpp date.h
	g++ -c -g date.cpp

student.o: student.cpp student.h date.h address.h

run: program
	./Heap

clean: 
	rm *.o
	rm Heap

debug:
	gdb Heap
