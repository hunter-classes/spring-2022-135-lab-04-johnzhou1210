OBJECTS=main.o shapes.o

main: main.o shapes.o
	g++ -o main $(OBJECTS)

main.o: main.cpp shapes.h
	g++ -c main.cpp

shapes.o: shapes.cpp
	g++ -c shapes.cpp

clean:
	rm -f $(OBJECTS)
