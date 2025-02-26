program: main.o student.o address.o date.o
	g++ -g main.o student.o address.o date.o -o program

main.o: main.cpp date.h student.h address.h
	g++ -c -g main.cpp

student.o: student.cpp student.h date.h address.h
	g++ -c -g student.cpp

date.o: date.cpp date.h
	g++ -c -g date.cpp

address.o: address.cpp address.h
	g++ -c -g address.cpp

debug: program
	gdb program

run: program
	./program

clean:
	rm *.o
	rm program

valgrind: program
	valgrind --leak-check=full ./program                                                                                   
