
// https://www.programiz.com/cpp-programming/online-compiler/

#include <iostream>
#include <cstdlib> // maybe use srand() or rand()?

int main() {
    
    std::cout << "Choose 1 for rock,  2 for paper, or 3 for scissor: ";
    
    int user_option;
    std::cin >> user_option;
    while(1 > user_option or user_option > 3) {
        std::cout << "That option is invalid.\n";
        std::cout << "Choose 1 for rock,  2 for paper, or 3 for scissor: ";
        std::cin >> user_option;
    }
    
    switch (user_option) {
        case 1:
            std::cout << "You chose Rock.\n";
            break;
        case 2:
            std::cout << "You chose Paper.\n";
            break;
        case 3:
            std::cout << "You chose Scissors.\n";
            break;
    }
    
    int comp_option = 3; //Figure out how to make this random
    
    switch (comp_option) {
        case 1:
            std::cout << "I choose Rock\n";
            break;
        case 2:
            std::cout << "I choose Paper\n";
            break;
        case 3:
            std::cout << "I choose Scissors\n";
            break;
    }
    
    return 0;
}
