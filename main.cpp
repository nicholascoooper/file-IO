#include <iostream>
#include <string>
#include <fstream>

int main(){
	
	int num1;
	int num2;
	std::string string1; 
	bool keepGoing = true;
	std::ifstream inFile;
	inFile.open("data.csv");

	while (keepGoing){
		getline(inFile, string1);
		if(inFile.eof()){
			keepGoing = false;
		}else{
			std::cout<<"hi"<<std::endl;
		}
	}

	return 0;
}
