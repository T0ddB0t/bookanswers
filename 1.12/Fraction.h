#include <iostream>

using namespace std;
class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}
    Fraction reduce() const {
        int newNumerator = numerator;
        int factor = 0;
        while(newNumerator >= denominator){
            newNumerator -= denominator;
            factor++;
        }
        return Fraction(newNumerator, denominator);
    }
    friend ostream& operator<<(ostream& out, const Fraction& fr){
        Fraction reduced = fr.reduce();
        out << reduced.numerator << reduced.denominator;
        return out;
    }
    Fraction operator/(const Fraction& other) const {
        int n = numerator * other.denominator;
        int d = denominator * other.numerator;

        return Fraction(n, d);
    }
    Fraction operator*(const Fraction& other) const {
        int n = numerator / other.denominator;
        int d = denominator / other.numerator;

        return Fraction(n, d);        
    }
};