#include <map>
#include <string>
#include <iostream>

#include "textutils.hpp"
#include "parser.hpp"
#include "room.hpp"
#include "edge.hpp"

using namespace std;

void print(vector<string> args, string user){
		
	cout << user << ": ";

	for(int i = 0;i < args.size();i++){
			
		cout << args[i] << " ";
	}

	cout << endl;
}

int main(){
	/*
	Parser p;

	p.add_command("print",print);

	p.parse("Print Hello There! I am your new friend!","Preston");
	*/

	Room first_room;
	first_room.name = "Atrium";

	Room second_room;
	second_room.name = "Basement";

	Edge test_edge;
	test_edge.room_a = &first_room;
	test_edge.room_b = &second_room;
	test_edge.room_a_dir = "down";
	test_edge.room_b_dir = "up";

	first_room.add_edge(&test_edge);
	second_room.add_edge(&test_edge);

	cout << first_room.get_neighbor("down")->name << endl;

	return 0;
}

