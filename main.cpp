#include <iostream>
#include "Header Files/sys_message.h"
#include "Header Files/equation_calculation.h"

int main() {
    int a = 0, b = 0, c = 0;
    bool isExit = true, isRepeat = false;

    sayHello();

    while(isExit) {
        if(!isRepeat)
            std::cout << "Enter integer coef a,b,c from ax^2+by+c=0 :" << std::endl;
        else
            isRepeat = false;
        std::cin >> a >> b >> c;

        if(isRight4SquareEquation(a,b,c))
            print_roots(a, b, get_discriminant(a, b, c));
        else {
            std::cout << "Enter more accurate coefficient" << std::endl;
            isRepeat = true;
        }

        if(!isRepeat) {
            std::cout << "Press 1 to continue or 0 for exit:" << std::endl;
            std::cin >> isExit;
            std::cout << std::endl << std::endl;
        }
    }
    return 0;
}
