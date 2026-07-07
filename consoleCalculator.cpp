#include <iostream>

int main(){
    char op;
    int num1;
    int num2;

    std::cout << "Pick an operation (+, -, /, *)" << std::endl;
    std::cin >> op;
    
    std::cout << "Pick a number: " << std::endl;
    std::cin >> num1;
    
    std::cout << "Pick a second number: " << std::endl;
    std::cin >> num2;


    switch(op){
        case '+': 
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '/': 
            std::cout << "Result: " << num1 / num2 << std::endl;
            break;
        case '*': 
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        default:
            std::cout << "Invalid Response!! " << std::endl;
    }
    return 0;
}