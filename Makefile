
CC = g++
BIN = mud.exe
OBJECTS = main.o parser.o room.o edge.o textutils.o

mud: $(OBJECTS)
	$(CC) -o $(BIN) $(OBJECTS)

main.o:	main.cpp parser.o room.o edge.o
parser.o: parser.cpp textutils.cpp 
room.o: room.cpp edge.cpp
edge.o: edge.cpp room.cpp
textutils.o: textutils.cpp

clean:
	rm -f *.o
	rm -f $(BIN)
