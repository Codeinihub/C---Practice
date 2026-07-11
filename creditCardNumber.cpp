#include <iostream>

// This program utilizes the Luhn Algorithm.
int getEvenSum(std::string cardNumber);
int getOddSum(std::string cardNumber);
int getNumber(int number);

int main(){
    std::string cardNumber;
    int result = 0;
    std::cout << "Enter you card number" << '\n';
    std::cin >> cardNumber;
    result = getOddSum(cardNumber) + getEvenSum(cardNumber);

    if(result % 10 == 0){
        std::cout << "That number is valid! " <<'\n';
    }
    else{
        std::cout << "That number is not valid! " <<'\n';
    }

    return 0;
}

int getNumber(int number){
    return number % 10 + (number/10 % 10);
}
int getEvenSum(std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] + '0';
    }
    return sum;
}
int getOddSum(std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getNumber((cardNumber[i] + '0') * 2);
    }
    return sum;
}