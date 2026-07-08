#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    int tries = 0;
    int guess;
    int num = (rand()% 100) + 1;
    do{
        std::cout << "Guess a number 1 - 100" << '\n';
        std::cin >> guess;
        if(guess > num){
            std::cout << "Too high!" << '\n';
        }
        if(guess < num){
            std::cout << "Too low!" << '\n';
        }
        tries++;
    }while(guess != num);
    std::cout << "Correct!" << '\n';
    std::cout << "Tries: " << tries << '\n';
}