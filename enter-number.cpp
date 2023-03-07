//Program: enternumber.cpp
//Author: L. Montoya
//Description: This program reads in a number and displays it on the screen afterwards.
#include <iostream>
int main()
{
    int number; //stores the number entered by then user

    std::cout << "Enter a number ";
    std::cin >> number;
    std::cout << "Your number is " << number << std::endl;

    return 0;

}
