#include <map>
#include <string>
#include <iostream>

#include "textutils.hpp"
#include "parser.hpp"

using namespace std;

void print(vector<string> args, string user){
		
	cout << user << ": ";

	for(int i = 0;i < args.size();i++){
			
		cout << args[i] << " ";
	}

	cout << endl;
}

int main(){

	Parser p;

	p.add_command("print",print);

	p.parse("Print Hello There! I am your new friend!","Preston");

	return 0;
}

