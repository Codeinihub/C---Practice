#include <iostream>

int main(){
    char op;
    int num1;
    int num2;
    std::cout << "Pick an operation (+, -, /, *)" << "\n";
    std::cin >> op;
    std::cout << op << "\n";
    std::cout << "Pick a number: " << "\n";
    std::cin >> num1;
    std::cout << num1 << "\n";
    std::cout << "Pick a second number: " << "\n";
    std::cin >> num2;
    std::cout << num1 << "\n";


    switch(op){
        case '+': 
            std::cout << "Result: " << num1 + num2 << "\n";
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << "\n";
            break;
        case '/': 
            std::cout << "Result: " << num1 / num2 << "\n";
            break;
        case '*': 
            std::cout << "Result: " << num1 + num2 << "\n";
            break;
        default:
            std::cout << "Invalid Response!! ";
    }
    return 0;
}