#include <iostream>

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