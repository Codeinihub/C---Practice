#include <iostream>

int main(){
    char choice;
    double temp;


    do{
        std::cout << "Choose a unit to convert to" << "\n";
        std::cout << "F for Farenheit" << "\n";
        std::cout << "C for Celsius" << "\n";
        std::cin >> choice;
    }while(!(choice == 'F' || choice == 'C'));
    switch(choice){
        case 'F': 
            std::cout << "Enter a temparature in Celsius: " << "\n";
            std::cin >> temp;
            std::cout << (1.8 * temp) + 32.0 << " Fanrenheit" << "\n";
            break;
        case 'C': 
            std::cout << "Enter a temparature in Farenheit: " << "\n";
            std::cin >> temp;
            std::cout << (temp - 32)/1.8 << " Celsius" << "\n";
            break;
    }
}