#ifndef OBJ
#define OBJ

#include <list>
#include <string>

#define ADJ_OPINION 1
#define ADJ_SIZE 2
#define ADJ_PHYSICAL 3
#define ADJ_SHAPE 4
#define ADJ_AGE 5
#define ADJ_COLOR 6
#define ADJ_ORIGIN 7
#define ADJ_MATERIAL 8
#define ADJ_TYPE 9
#define ADJ_PURPOSE 10

class Room;
//class Comp;

struct Adjective{
	
	int priority;
	std::string adj;
};

class Obj{
	
	protected:
		
		std::string name;
		std::string desc;

		Room* loc;

		std::list<Adjective> adjectives;
		void sort_adjectives();

		//list<Comp*> components;

	public:
		
		std::string return_adjectives();
		
		void add_adjective(int,std::string);
		void remove_adjective(std::string);

		//void add_comp(Comp*);
		//void remove_comp(Comp*);

		//void get_signal(vector<string>);
};

#endif
