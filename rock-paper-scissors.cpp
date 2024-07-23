
// Online C++ compiler to run C++ program online

#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    
    std::cout << "Choose rock, paper, or scissor: ";
    
    //std::string user_option;
    //std::cin >> user_option;
    
    int ub = 3, lb = 1;
    for (int i = 0; i < 5; i++) 
        std::cout << (std::rand() % (ub - lb + 1)) + lb << " ";
    
    //std::cout << user_option << std::endl;
    //std::cout << comp_option << std::endl;
    
    return 0;
}