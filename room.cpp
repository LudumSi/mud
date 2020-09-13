#include "room.hpp"
#include "textutils.hpp"
#include "edge.hpp"

using namespace std;

void Room::add_obj(Obj* object){
	contents.push_back(object);
}

void Room::remove_obj(Obj* object){
	contents.remove(object);
}

void Room::add_edge(Edge* edge){
	edges.push_back(edge);
}

void Room::remove_edge(Edge* edge){
	edges.remove(edge);
}

Edge* Room::get_edge(string str){
	
	list<Edge*>::iterator it;
	for(it = edges.begin();it != edges.end();++it){

		if((*it)->get_room_dir(this) == str){
			return *it;
		}

		//This is where an error in the get_room function should be caught.
		//It will only happen when the edge is not symmetric with the room.	
	}

	return NULL;
}

Room* Room::get_neighbor(string str){
	
	return get_edge(str)->get_neighbor(this); 
}


