#include "edge.hpp"
#include "room.hpp"

using namespace std;

string Edge::get_room_dir(Room* room){
	
	if(room == room_a){
		
		return room_a_dir;
	
	}else if(room == room_b){
		
		return room_b_dir;
	}else{
		
		return "";
		//Should probably thow an error here
	}
}

Room* Edge::get_neighbor(Room* room){
	
	if(room == room_a){
		
		return room_b;

	}else if(room == room_b){
		
		return room_a;

	}else{
		return NULL;
	}
}
