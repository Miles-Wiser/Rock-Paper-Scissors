
// ========== Libraries ==========

#include <iostream>
#include <cstdlib>
#include <time.h>

// ========== Main Loop ==========

int main() {
    
    std::cout << "Choose 1 for rock,  2 for paper, or 3 for scissor: ";
    
    // Sets up player's choice
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
    
    // Sets up computer's choice
    srand(time_t(NULL));
    int comp_option = (rand() % 3) +1; // This is not fully random yet. Fix this. The computer always selects paper.
    // It may be a product of the onlie compiler giving the same time for "srand(NUUL)." Try this in visual studios.
    // In "C++ Shell," another online compiler, appears to always choose scissors.
    
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
    
    // Compares player's choice versus the computer's and prints the result
    if(user_option - comp_option == -2 or user_option - comp_option == 1) {
        std::cout << "You win, I guess.";
    }
    else if(user_option - comp_option == 0) {
        std::cout << "It is a draw.";
    }
    else {
        std::cout << "You lose, I win!";
    }
    
    return 0;
}
