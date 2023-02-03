#include "Pair.h"
Pair::Pair()
{
	number1 = number2 = 0;
}
Pair::Pair(int n1, int n2)
{
	number1 = n1;
	number2 = n2;
}
int Pair::GetNumber1()
{
	return number1;
}
int Pair::GetNumber2()
{
	return number2;
}
