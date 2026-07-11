#include <iostream>
#include <array>

std::array<std::string, 3> questions();
std::array<std::string, 4> answers();
int main(){
    
    std::cout << "Welcome to my Quiz!" << '\n';
    int size = sizeof(questions())/sizeof(std::string);
    for(int i = 0; i < size ; i++){
        std::string ans;
        do{
            std::cout << questions()[i] << '\n';
            std::cout << "Choose between: " << "A B C D" << '\n';
            std::cin >> ans;
        }while(!(ans == "A" || ans == "B"|| ans == "C"|| ans == "D"));
        if(ans == answers()[i]){
            std::cout << "Correct! " << '\n';
        }
        else{
            std::cout << "Wrong! " << '\n';
        }
    }
}

std::array<std::string, 3> questions(){
    std::array<std::string, 3> questions = {"1. Who is the GOAT? ", 
                                "2. What year is it? ", 
                                "3. What is my favourite food? "
                            };
    return questions;
}

std::array<std::string, 4> answers(){
    std::array<std::string, 4> answers = {"A ", "B", "C", "D"};
    return answers;
}