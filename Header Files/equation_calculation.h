#ifndef HWLESSON2_EQUATION_CALCULATION_H
#define HWLESSON2_EQUATION_CALCULATION_H

#endif //HWLESSON2_EQUATION_CALCULATION_H
///calculating discriminant of equation
long get_discriminant(int a, int b, int c);
///check coeff to equal square equation conditions
bool isRight4SquareEquation(int a, int b, int c);
///print message when square equation has no roots
void print_roots();
///print message when square equation has only one root
void print_roots(int a, int b);
///print message when square equation has two roots
void print_roots(int a, int b, long D);