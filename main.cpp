#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"
int main(){
//std::cout << removeLeadingSpaces("       int x = 1;  ") << std::endl;

//indentations 
int count = 0;
std::string line, newstring;
std::fstream badFile("bad-code.cpp");
if(badFile.fail()){
    std::cout << "Failed to open file" << std::endl;
    return 1;
}//end condition

while(getline(badFile, line)){ 
std::cout << count << std::endl;
    if(line[0] == '}'){
        count--;
    }
   for(int i = 0; i < count; i++){
        newstring += '\t';
   }//end for loop

   newstring = newstring + line + '\n';
   count += countChar(line, '{');
   count -= countChar(line, '}'); 
}//end while loop
badFile.close();
std::cout << newstring << std::endl;
return 0;
}