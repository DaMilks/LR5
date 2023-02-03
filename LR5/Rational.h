#pragma once
#include "Pair.h"
class Rational :
    public Pair
{
	private:
		int gcd(int a, int b);
		void reduce();
	public:
		Pair& operator+(Pair& other) override;
		Pair& operator-(Pair& other) override;
		char PairType() override;
		string ToString() override;
		Rational();
		Rational(int n, int d);
};

