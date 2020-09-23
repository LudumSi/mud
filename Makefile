
CC = g++
BIN = mud.exe
OBJECTS = main.o parser.o room.o edge.o textutils.o obj.o

mud: $(OBJECTS)
	$(CC) -o $(BIN) $(OBJECTS)

main.o:	main.cpp parser.o room.o edge.o obj.o
parser.o: parser.cpp textutils.cpp 
room.o: room.cpp edge.cpp obj.cpp
edge.o: edge.cpp room.cpp
textutils.o: textutils.cpp
obj.o: obj.cpp

clean:
	rm -f *.o
	rm -f $(BIN)
