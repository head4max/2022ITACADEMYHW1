#include "../Header Files/equation_calculation.h"
#include <cmath>
#include <iostream>

long get_discriminant(int a, int b, int c)
{
    return b*b-4*a*c;
}

bool isRight4SquareEquation(int a, int b, int c)
{
    return (a != 0 and b!=0 and c!=0);
}

void print_roots()
{
    std::cout << "this equation has no roots" << std::endl;
}

void print_roots(int a, int b)
{
    std::cout << "This equation has only one root: x1 = x2 =" << -1.00 * b / (2 * a) << std::endl;
}

void print_roots(int a, int b, long D)
{
    if(D < 0)
        print_roots();
    else if (D == 0)
        print_roots(a, b);
    else std::cout << "Roots of equation: x1 = " << 1.00 * (-b - sqrt(D)) / (2 * a) << " ,x2 = " << 1.00 * (-b + sqrt(D)) / (2 * a) << std::endl;
}