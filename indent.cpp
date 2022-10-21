#include <iostream>
#include <fstream>
#include "indent.h"

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

int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if (line[i] == c){
            count++;
        }//end condition
    }//end for loop
    return count;
}//end countChar function

std::string indentation(std::ifstream& badcodes){
std::string line, newstring;
int count = 0;
while(std::getline(badcodes, line)){ 
    line = removeLeadingSpaces(line);
    if(line[0] == '}'){
        count--;
    }
   for(int i = 0; i < count; i++){
        newstring += '\t';
   }//end for loop

   newstring = newstring + line + '\n';
   count += countChar(line, '{');
}//end while loop
badcodes.close();
return newstring;
}//end indentation

