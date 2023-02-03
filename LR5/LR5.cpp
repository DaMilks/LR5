#include <iostream>
#include <vector>
#include <memory>
#include"Pair.h"
#include"Complex.h"
#include"Rational.h"
using namespace std;
int main()
{
    int n, num1, num2;
    char c;
    setlocale(0, "");
    cout << "Размер масссива" << endl;
    cin >> n;
    vector<shared_ptr<Pair>> Pairs(n);
    for (int i = 0;i < n;i++)
    {
        cin >> c >> num1 >> num2;
        if (c == 'C')
        {
            Pairs[i] = shared_ptr<Pair>(new Complex(num1, num2));

        }
        if (c == 'R')
        {
            Pairs[i] = shared_ptr<Pair>(new Rational(num1, num2));
        }
    }
    vector <shared_ptr<Pair>> Result(2);
    Result[0] = shared_ptr<Pair>(new Complex());
    Result[1] = shared_ptr<Pair>(new Rational());

    for (auto x : Pairs)
    {
        if (x->PairType() == 'C')
        {
            *Result[0].get() = *Result[0] + *x;
        }
        if (x->PairType() == 'R')
            *Result[1].get() = *Result[1] + *x;
    }
    cout << Result[0]->ToString() << " " << Result[1]->ToString();
}