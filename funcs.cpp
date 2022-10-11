#include <iostream>
#include "funcs.h"

// add functions here
void testAscii(std::string asciiLine){
    getline(std::cin, asciiLine);
    std::cout << "line: " << asciiLine << std::endl;
}
