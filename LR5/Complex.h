#pragma once
#include "Pair.h"
class Complex :
    public Pair
{
public:
	Pair& operator+(Pair& other) override;
	Pair& operator-(Pair& other) override;
	char PairType() override;
	string ToString() override;
	Complex();
	Complex(int r, int i);
};


