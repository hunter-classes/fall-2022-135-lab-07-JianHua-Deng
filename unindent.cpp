#include <iostream>
#include <fstream>
#include <string>
#include "unindent.h"

std::string removeLeadingSpaces(std::string line){
    std::string result;
    bool firstNonSpace = false;
    for(int i = 0; i < line.length(); i++){
        if(!isspace(line[i]) && !firstNonSpace){
            firstNonSpace = true;
        }//end condition

        if(firstNonSpace){
            result += line[i];
        }//end condition

    }//end of for loop
    return result;
}//end of function removeLeadingSpaces

std::string removeSpaces(std::string filename){
//opening file
std::ifstream badcodes("bad-code.cpp");
if(badcodes.fail()){
    return "Failed to open file";
}//end condition

//initializing variables
std::string result, line;
//removing spaces
while(std::getline(badcodes, line)){
result = result + removeLeadingSpaces(line) + "\n";
}//end while loop
badcodes.close();
return result;
}//end removeSpaces function