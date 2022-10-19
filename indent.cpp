#include <iostream>
#include "indent.h"
int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if (line[i] == c){
            count++;
        }//end condition
    }//end for loop
    return count;
}//end countChar function

