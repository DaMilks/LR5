#include "Complex.h"
Pair& Complex::operator+(Pair& other)
{

	return *(new Complex(number1 + other.GetNumber1(), number2 + other.GetNumber2()));
}
Pair& Complex::operator-(Pair& other)
{
	return *(new Complex(number1 - other.GetNumber1(), number2 - other.GetNumber2()));
}
char Complex::PairType() {
	return 'C';
}
string Complex::ToString()
{
	return "(" + to_string(number1) + "+" + to_string(number2) + "i)";
}
Complex::Complex() : Pair()
{

}
Complex::Complex(int n1, int n2) : Pair(n1, n2)
{

}

