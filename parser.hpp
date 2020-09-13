#ifndef PARSER_HPP
#define PARSER_HPP

#include <map>
#include <string>
#include <vector>

class Parser{

	protected:
		
	//Main tree for commands
	std::map<std::string,void(*)(std::vector<std::string>,std::string),bool(*)(std::string,std::string)>* com_tree;
		
	public:
		
	void add_command(std::string,void(*)(std::vector<std::string>,std::string));

	void parse(std::string,std::string);

	Parser();
	~Parser();	
};

#endif
