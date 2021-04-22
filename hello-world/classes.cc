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
    Fraction(int numerador, int denominador)
    {
        std::cout << numerador << "/" << denominador << std::endl;
    }
};

int main()
{
    int a = 2;
    int b = 5;

    Fraction f(a, b);
    // Error, private member
    //std::cout << f.numerador << std::endl;
    //std::cout << f.denominador << std::endl;

    return 0;
}