#include <iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;

    cout << "Two integers: "
         << calc.add(10, 20) << endl;

    cout << "Two decimals: "
         << calc.add(10.5, 20.5) << endl;

    cout << "Three integers: "
         << calc.add(10, 20, 30) << endl;

    return 0;
}