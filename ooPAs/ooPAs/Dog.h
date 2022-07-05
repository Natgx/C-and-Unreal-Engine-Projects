#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::string;
class Dog
{
public:
	string breed;
	string color;
	string height; // I could have also made this a double variable to take in decimals but since the picture had specific inputs I made both a string.
	string weight;
	void Shake();
	void Sit();
	void layDown();
};

