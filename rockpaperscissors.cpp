#include <iostream>
#include <ctime>

void showChoice(char choice);
char getUserChoice();
char getComputerChoice();
void showWinner(char userChoice, char computerChoice);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your Choice: " << '\n';
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's Choice: " << '\n';
    showChoice(computer);
    showWinner(player, computer);
    return 0;
}
char getComputerChoice(){
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    switch(computerChoice){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
char getUserChoice(){
    char userChoice;
    do{
        std::cout << "Choose either: " << '\n';
        std::cout << "(r for Rock) " << '\n';
        std::cout << "(p for Paper) " << '\n';
        std::cout << "(s for Scissors) " << '\n';
        std::cin >> userChoice;
    }while(userChoice != 'r' && userChoice != 'p'&& userChoice != 's');
    return userChoice;
}
void showWinner(char userChoice, char computerChoice){
    switch(userChoice){
        case 'r':
            if(computerChoice == 'r'){
                std::cout << "Tie! " << '\n';
            }
            if(computerChoice == 'p'){
                std::cout << "You lose! " << '\n';
            }
            if(computerChoice == 's'){
                std::cout << "You Win! " << '\n';
            }
            break;
        case 'p':
            if(computerChoice == 'r'){
                std::cout << "You Win! " << '\n';
            }
            if(computerChoice == 'p'){
                std::cout << "Tie! " << '\n';
            }
            if(computerChoice == 's'){
                std::cout << "You Win! " << '\n';
            }
            break;
        case 's':
            if(computerChoice == 'r'){
                std::cout << "Tie! " << '\n';
            }
            if(computerChoice == 'p'){
                std::cout << "You lose! " << '\n';
            }
            if(computerChoice == 's'){
                std::cout << "You Win! " << '\n';
            }
            break;
    }
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock" << '\n';
                  break;
        case 'p': std::cout << "Paper" << '\n';
                  break;
        case 's': std::cout << "Scissors" << '\n';
                  break;
    }
    // std::cout << choice << '\n';
}