#include "Fraction.h"

int main(){
    Fraction frac1(3, 2);
    Fraction frac2(7, 3);
    Fraction frac4(1,4,5);
    Fraction frac3 = frac1 / frac2;
    Fraction frac5 = frac1 - frac2;
    //3/2 + 7/3
    std::cout << frac5 << std::endl;
}