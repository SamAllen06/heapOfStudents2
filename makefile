main.o: main.cpp student.h address.h date.h student.cpp address.cpp date.cpp
	g++ -g main.cpp student.cpp address.cpp date.cpp -o main.o

run: main.o
	./main.o

debug: main.o
	gdb main.o

clean:
	rm *.o

valgrind: 
	valgrind --leak-check=full ./main.o
