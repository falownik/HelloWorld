all:
	g++ -I ./lib -c HelloWorld.cpp
	g++ -o HelloWorld HelloWorld.o
	rm -f *.o
	./HelloWorld
