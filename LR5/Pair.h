#pragma once
#include<string>
using namespace std;
class Pair
{
protected:
	int number1, number2;
public:
	Pair();
	Pair(int number1, int number2);
	int GetNumber1();
	int GetNumber2();
	virtual string ToString() = 0;
	virtual Pair& operator+(Pair& other) = 0;
	virtual Pair& operator-(Pair& other) = 0;
	virtual char PairType() = 0;

};
