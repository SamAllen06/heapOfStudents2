program: main.o student.o address.o date.o
	g++ -g main.o student.o address.o date.o -o program

main.o: main.cpp date.h student.h address.h 
	g++ -g main.cpp -o main.o

student.o: student.cpp student.h date.h address.h
	g++ -g student.cpp -o student.o

date.o: date.cpp date.h
	g++ -g date.cpp -o date.o

address.o: address.cpp address.h
	g++ -g address.cpp -o address.o

debug: program
	gdb program

run: program
	./program

clean:
	rm *.o
	rm program

valgrind: 
	valgrind --leak-check=full ./program
