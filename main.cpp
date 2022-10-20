#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"
int main(){
std::cout << removeLeadingSpaces("       int x = 1;  ") << std::endl;

//indentations 
int count = 0;
std::string result;
std::ifstream badFile("bad-code.cpp");
if(badFile.fail()){
    std::cout << "Failed to open file" << std::endl;
    return 1;
}//end condition

result = indentation(badFile);
std::cout << result << std::endl;
return 0;
}