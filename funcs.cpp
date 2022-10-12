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

/*
isalpha(c)	 	Checks if character c is alphabetic,
isdigit(c)	 	Checks if character c is decimal digit,
isspace(c)	 	Checks if character c is a white-space.
*/
void caeserCipher(std::string asciiLine, int shiftVal){
    std::string userLine = asciiLine;
    for(int i = 0; i < asciiLine.size(); i++){
        bool isAlp = isalpha(userLine[i]);
        if(isAlp == true){
            int convert = userLine[i] + shiftVal;
            if((int)UserLine[i] >= 65 && (int)UserLine[i]<=90){//Uppercase


            }else if(){//Lowercase

            }

        }else{
            std::cout << userLine.substr(i, 1) << std::endl;
        }
    }
    std::cout << "\n";
}
/*
            std::cout << "original: " << (int)userLine[i] << "\n";
            
            std::cout << "new: " << convert << "\n";
            char newChar = convert;
            //std::cout << newChar;
*/