a.out: main.o sll_node.h
	g++ -Wall -std=c++20 -fsanitize=address main.o

main.o: main.cpp sll_node.h
	g++ -Wall -g3 -c -std=c++20 -fsanitize=address main.cpp

clean:
	rm -f a.out core *.o