//
// Created by carlosal1015 on 4/17/21.
//
#include <iostream>

template <typename T>
T min(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs: rhs;
}

int main()
{
    int a_entero = 8;
    int b_entero = 16;
    int menor_entero = min<int>(a_entero, b_entero);

    float a_float = 3.14;
    float b_float = 2.71;
    float menor_float = min<float>(a_float, b_float);

    std::cout << "El menor es " << menor_entero;
    std::cout << std::endl;
    std::cout << "El otro menor es " << menor_float;

    return 0;
}
