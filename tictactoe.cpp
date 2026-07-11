#include <iostream>
#include <ctime>
#include <cstdlib>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char computer, char player);
bool isBoardFull(char *spaces);
int main(){
    char player = 'X';
    char computer = 'O';
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    bool running = true;
    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, computer, player)){
            running = false;
        }
        
        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, computer, player)){
            running = false;
        }
        
    }

}

void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';  
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     \n";
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int number;

    while(true){
        std::cout << "Enter a number(1 - 9): \n";
        if(!(std::cin >> number)){
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Try again.\n";
            continue;
        }

        number--;

        if(number < 0 || number > 8){
            std::cout << "Number must be between 1 and 9.\n";
            continue;
        }

        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        else{
            std::cout << "Taken. Try Again! \n";
        }
    }
}

void computerMove(char *spaces, char computer){
    srand(static_cast<unsigned int>(time(0)));

    while(true){
        int number = rand() % 9;

        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool isBoardFull(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    return true;
}

bool checkWinner(char *spaces, char computer, char player){
    if(spaces[0] != ' ' && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[3] != ' ' && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[6] != ' ' && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[0] != ' ' && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[1] != ' ' && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[2] != ' ' && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[0] != ' ' && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(spaces[2] != ' ' && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE \n";
        return true;
    }
    else if(isBoardFull(spaces)){
        std::cout << "IT'S A TIE! \n";
        return true;
    }
    else{
        return false;
    }
    return true;
}