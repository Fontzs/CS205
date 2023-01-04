CC = g++
TARGET = main
OBJ = fac.o main.o

$(TARGET) : $(OBJ)
	$(CC) -o $(TARGET) ./main.o ./fac.o

main.o: main.cpp
	$(CC) -c -Wall main.cpp -o main.o

fac.o: fac.cpp
	$(CC) -c -Wall fac.cpp -o fac.o

.PHONY:clean
clean:
	rm -f *.o main

