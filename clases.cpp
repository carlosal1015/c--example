//
// Created by carlosal1015 on 4/17/21.
//

#include <iostream>

class Fraction
{
private:
    int numerador;
    int denominador;
    /* public, protected and private
    variables, constants, aand functions */
public:
    Fraction(int numerador, int denomirador);
};

int main()
{
    int a = 5;
    int b = 2;
    Fraction(a, b);

    return 0;
}