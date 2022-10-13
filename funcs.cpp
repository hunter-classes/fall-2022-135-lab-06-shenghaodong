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
        int convert;
        if(isAlp == true){
            convert = userLine[i] + shiftVal;
            if((int)userLine[i] >= 65 && (int)userLine[i]<= 90){//Uppercase
                if(convert > 90){
                    convert = convert - 90 + 64;
                    char newChar = convert;
                    std::cout << newChar << " " << convert << std::endl;
                }else{
                    char newChar = convert;
                    std::cout << newChar << " " << convert << std::endl;
                }

            }else if((int)userLine[i] >= 97 && (int)userLine[i]<= 122){//Lowercase
                if(convert > 122){
                    convert = convert - 122 + 96;
                    char newChar = convert;
                    std::cout << newChar << " " << convert << std::endl;
                }else{
                    char newChar = convert;
                    std::cout << newChar << " " << convert << std::endl;
                }
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