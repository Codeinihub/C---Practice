#include <iostream>
#include <ctime>

double deposit();
double withDraw(double balance);
double showMoney(double balance);

int main(){
    int choice;
    srand(time(NULL));
    do{
        int balance = 100;
        std::cout << "What would you like to do today (type a number): " << '\n';
        std::cout << "1. Deposit money" << '\n';
        std::cout << "2. Withdraw money" << '\n';
        std::cout << "3. Show balance" << '\n';
        std::cout << "4. Exit" << '\n';
        std::cin >> choice;
        switch(choice){
            case 1:
                balance += deposit();
                std::cout << "You now have: " << "$" << balance << '\n';
                break;
            case 2:
                balance -= withDraw(balance);
                std::cout << "You now have: " << "$" << balance << '\n';
                break;
            case 3:
                std::cout << "You have: " << "$" << showMoney(balance) << '\n';
                break;
            case 4:
                std::cout << "Have a nice day! " << '\n';
                break;
            default:
                std::cout << "Invalid Choice! " << '\n';
                break;
        }
    }while(choice != 4);
    return 0;
}

double deposit(){
    int amount;
    
    while(true){
        std::cout << "How much would you like to deposit: " << '\n';
        std::cin >> amount;
        if (amount < 0){
            std::cout << "Invalid amount. Try Again! " << '\n';
        }
        else{
            return amount; 
        }
    }
}
double withDraw(double balance){
    if(balance == 0){
        std::cout << "You have insufficient funds" << '\n';
        return balance;
    }
    int amount;
    while (true){
        std::cout << "How much would you like to withdraw: " << '\n';
        std::cin >> amount;
        if(amount > balance){
            std::cout << "You have insufficient funds. Try Again!" << '\n';
        }
        else{
            return amount; 
        }
    }
}

double showMoney(double balance){
    return balance;
}