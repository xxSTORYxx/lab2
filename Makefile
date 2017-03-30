Main: Elo.o main.o
	g++ -o Main main6.o Elo.o

Elo.o: Elo.cpp Elo.h
	g++ -c Elo.cpp

main.o: main.cpp Elo.h
	g++ -c main.cpp

clean:
	rm Elo *.o
