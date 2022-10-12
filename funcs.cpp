#include <iostream>
#include <cctype>
#include "funcs.h"

// add functions here
void testAscii(std::string asciiLine){
    std::string userLine;
    userLine = asciiLine;
    std::cout << "Input: " << asciiLine << "\n" << std::endl;
    for(int i = 0; i < asciiLine.size(); i++){
        int convert = (int)userLine[i];
        std::cout << userLine.substr(i, 1) << " " << convert << std::endl;
    }
}


