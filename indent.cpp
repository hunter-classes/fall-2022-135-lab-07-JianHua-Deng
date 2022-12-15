#include <iostream>
#include <fstream>
#include "indent.h"
#include "unindent.h"

int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if (line[i] == c){
            count++;
        }//end condition
    }//end for loop
    return count;
}//end countChar function

std::string indentation(std::string filename){

//opening file
std::ifstream badcodes(filename);
if(badcodes.fail()){
    return "Failed to open file";  
}//end condition

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

