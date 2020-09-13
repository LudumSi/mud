#ifndef EDGE_HPP
#define EDGE_HPP

#include <string>

class Room;

class Edge{
	
	public:
		
		bool open; //Whether you can pass through the edge
		bool sight; //Whether you can see things through the edge
		bool sound; //Whether you can hear things through the edge
		
		Room* room_a;
		std::string room_a_dir; //Important that these are the directions FROM the room to the other room. 

		//So if room_a_dir was "south", then you would go south from room a to reach room b
		
		Room* room_b;
		std::string room_b_dir;

		std::string get_room_dir(Room*);
		Room* get_neighbor(Room*);

		//It's a class rather than a struct so that I can make doors and stuff more complex later.
};

#endif
