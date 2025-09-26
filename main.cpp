#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(){
	
	int num1;
	int num2;
	int addnum;
	std::string strnum1;
	std::string strnum2;
	std::string string1; 
	bool keepGoing = true;
	std::stringstream ss;
	std::ifstream inFile;
	inFile.open("data.csv");

	while (keepGoing){
		std::getline(inFile, strnum1, ',');
		std::getline(inFile, strnum2, ',');
		std::getline(inFile, string1, ',');
		ss.clear();
		if(inFile.eof()){
			keepGoing = false;
		}else{	
			ss<<strnum1;
			ss>>num1;
			ss.clear();
			ss<<strnum2;
			ss>>num2;
			ss.clear();
			addnum = num1 + num2;
			for(int i = 0 ; i< addnum; i++){
				std::cout<<string1<<std::endl;
				}
			std::cout<<std::endl;
		}

	}
	inFile.close();	
	return 0;
}
