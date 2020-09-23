#include "obj.hpp"

using namespace std;

bool adj_compare(const Adjective adj1, const Adjective adj2){
	
	return adj1.priority < adj2.priority;
}

bool operator==(const Adjective adj1, const Adjective adj2){
	
	if(adj1.adj == adj2.adj){
		
		return 1;
	}

	return 0;
}

void Obj::sort_adjectives(){
	
	adjectives.sort(&adj_compare);
}

void Obj::add_adjective(int priority, string adj){
	
	Adjective new_adj;

	new_adj.adj = adj;
	new_adj.priority = priority;

	this->adjectives.push_back(new_adj);

	sort_adjectives();
	//Might also consider adding unique()
}

void Obj::remove_adjective(string adj){
	
	list<Adjective>::iterator it;
	for(it = adjectives.begin();it != adjectives.end();++it){
		
		if(it->adj == adj){
			adjectives.remove(*it);
			return;
		}
	}	
}

string Obj::return_adjectives(){
	
	string output;

	list<Adjective>::iterator it;
	for(it = adjectives.begin();it != adjectives.end();++it){
		
		if(it != adjectives.begin()){
			output.append(" ");			
		}
		output.append(it->adj);		
	}

	return output;
}
