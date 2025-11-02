/* Program name: main.cpp
* Author: Jeff Weimer
* Date last updated: 10/30/2025
* Purpose: intro
*/
#include <iostream>

void prompt();

int main (){

    prompt();

    return 0;
}

void prompt()
{
    std::string line;
    std::cout << "Enter a statement to finish the sentence" << std::endl;
    std::cout << "Welcome to:" << std:: endl;
    std::getline(std::cin, line);
    std::cout << "Welcome to " << line << "!" << std::endl;
}
