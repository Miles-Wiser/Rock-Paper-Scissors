
// https://www.programiz.com/cpp-programming/online-compiler/

#include <iostream>
#include <cstdlib> // maybe use srand() or rand()?

int main() {
    
    std::cout << "Choose 1 for rock,  2 for paper, or 3 for scissor: ";
    
    int user_option;
    while(1 >= user_option ) {
        std::cout // unfinshed loop to check for user_option between 1 and 3
    }
    std::cin >> user_option;
    
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
