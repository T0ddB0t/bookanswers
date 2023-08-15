#include <iostream>

using namespace std;
class Fraction{
private:
    int numerator;
    int denominator;
    int factor;

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}
    Fraction(int fac, int num, int den) : factor(fac), numerator(num), denominator(den) {} 
    ~Fraction(){}
    Fraction reduce() const {
        int newNumerator = numerator;
        int newFactor = factor;
        while(newNumerator > denominator){
            newNumerator -= denominator;
            newFactor++;
        }
        return Fraction(newFactor, newNumerator, denominator);
    }
    friend ostream& operator<<(ostream& out, const Fraction& fr){
        Fraction r = fr.reduce();
        out << r.factor << " " << r.numerator << "/" << r.denominator;
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
    Fraction operator+(const Fraction& other) const {
        int n = (numerator * other.denominator) + (other.numerator * denominator);
        int d = denominator * other.denominator;

        return Fraction(n,d);
    }
    Fraction operator-(const Fraction& other) const {
        int n = (numerator * other.denominator) - (other.numerator * denominator);
        int d = denominator * other.denominator;

        return Fraction(n,d);
    }
};