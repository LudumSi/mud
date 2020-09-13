#ifndef ROOM_HPP
#define ROOM_HPP

#include <list>
#include <string>

class Obj;
class Edge;

class Room{

	protected:

		std::list<Obj*> contents;
		std::list<Edge*> edges;

	public:
		
		std::string name;
		std::string desc;

		void add_obj(Obj*);
		void remove_obj(Obj*);
		
		void add_edge(Edge*);
		void remove_edge(Edge*);
		
		Edge* get_edge(std::string);
		Room* get_neighbor(std::string);
};

#endif
