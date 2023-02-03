#include "Rational.h"
int Rational::gcd(int a, int b)
{
	int temp;
	while (a)
	{
		temp = b % a;
		b = a;
		a = temp;
	}
	return b;
}
void Rational::reduce()
{
	int g;
	if (number1 < 0)
		g = gcd(-number1, number2);
	else
		g = gcd(number1, number2);
	number1 /= g;
	number2 /= g;
}
char Rational::PairType()
{
	return 'R';
}
Pair& Rational::operator+(Pair& other)
{
	Rational* t = new Rational(number1 * other.GetNumber2() + other.GetNumber1() * number2, number2 * other.GetNumber2());
	t->reduce();
	return *t;
}
Pair& Rational::operator-(Pair& other)
{
	Rational* t = new Rational(number1 * other.GetNumber2() - other.GetNumber1() * number2, number2 * other.GetNumber2());
	t->reduce();
	return *t;
}
string Rational::ToString()
{
	return "(" + to_string(number1) + "/" + to_string(number2) + ")";
}
Rational::Rational() :Pair()
{
	number2 = 1;
}
Rational::Rational(int n1, int n2) : Pair(n1, n2)
{
	if (number2 < 0)
	{
		number1 *= -1;
		number2 *= -1;
	}
}