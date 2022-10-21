#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"
int main(){

std::cout << "----------------------removeLeadingSpaces:---------------------" << std::endl;
std::cout << "removeLeadingSpaces(\"       int x = 1;  \"): " << std::endl << removeLeadingSpaces("       int x = 1;  ") << std::endl;
//printout the wholebad-code.cpp with removeLeadingSpaces function
std::cout << "------------REMOVED INDENTATION FOR bad-code.cpp --------------" << std::endl;
std::cout << removeSpaces("bad-code.cpp")<< std::endl;
//print out indented fixed codes
std::cout << "---------PROPERLY FORMATTED INDENTATON FOR bad-code.cpp--------" << std::endl;
std::cout << indentation("bad-code.cpp") << std::endl;
return 0;
}