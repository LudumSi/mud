
#include <iostream>
#include "parser.hpp"
#include "textutils.hpp"

using namespace std;

void Parser::add_command(string cmd, void(*func)(vector<string>,string)){
	
	com_tree->insert(make_pair(cmd,func));
}

void Parser::parse(string str, string user){
	
	vector<string> data = split_string(str);
	string cmd = lower(data[0]);
	vector<string> args;

	for(int i = 0;i < data.size();i++){
		
		if(i != 0){
			args.push_back(data[i]);
		}
	}


	map<string,void(*)(vector<string>,string)>::iterator it;

	it = com_tree->find(cmd);
	
	if(it != com_tree->end()){
	 	
		it->second(args,user);
	
	}else{
		cout << "Command not recognized: " << cmd << endl;
	}
}

Parser::Parser(){
	
	this->com_tree = new map<string,void(*)(vector<string>,string),bool(*)(string,string)>(&str_comp);
}

Parser::~Parser(){

	delete this->com_tree;
}
