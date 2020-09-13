
#include "textutils.hpp"

using namespace std;

string lower(string str){
	
	for(int i = 0;i < str.length();i++){
		
		if(str[i] >= 65 && str[i] <= 91){
			
			str[i] = str[i]+32;
		}
	}

	return str;
}

bool str_comp(const string a, const string b){
	
	string a_lower = lower(a);
	string b_lower = lower(b);
	
	if(a_lower.compare(b_lower) == 0){
		return 0;
	}

	int min_len;

	if(a.length() < b.length()){
		min_len = a.length();
	}else{
		min_len = b.length();
	}

	for(int i = 0;i < min_len;i++){
		
		if(a[0] < b[0]){
			return 1;
		
		}else if(b[0] < a[0]){
			return 0;
		}
	}

	return 1;
}

vector<string> split_string(string str){

	vector<string> output;
	
	string tmp = "";

	for(int i = 0;i < str.length();i++){
		

		if(str[i] != ' '){	
			
			tmp.push_back(str[i]);

			if(i == str.length()-1 && tmp != ""){
				output.push_back(tmp);
			}

		}else{	

			if(tmp != ""){
				output.push_back(tmp);
				tmp = "";
			}			
		}
	}

	return output;
}
