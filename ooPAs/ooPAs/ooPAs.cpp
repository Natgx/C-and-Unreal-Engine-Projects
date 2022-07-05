// ooPAs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Dog.h"
#include <vector>
using std::cout;
using std::string;
using std::cin;
using std::vector;
int main()
{
    Dog fydo; // Fydo is what I named the dog
    fydo.breed = "Hound";
    fydo.color = "Brown";
    fydo.height = "2 feet tall";
    fydo.weight = "60 punds";
    cout << "Information about Fydo:\n";
    vector<string> list = { fydo.breed, fydo.color, fydo.height, fydo.weight };
    for (auto info : list) 
    {
        cout << info << "\n";
    }
    cout << "Fydo's behviors:\n";
    fydo.Sit();
    cout << "\n";
    fydo.Shake();
    cout << "\n";
    fydo.layDown();
    cout << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
