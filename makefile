CC = g++
CFLAGS = -std=c++11
LIBS =

all: bin/main 
	
obj/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $< $(LIBS)

bin/% : obj/%.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)
