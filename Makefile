main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

main.o: main.cpp unindent.h

clean:
	rm -f main.o unindent.o indent.o
