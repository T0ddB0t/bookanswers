#include <iostream>

using namespace std;
class Fraction{
protected:
    ostream writeFraction(ostream&);
    istream readFraction(istream&);
    friend ostream& operator<<(ostream& out, Fraction& fr){
        return fr.writeFraction(out);
    }
    friend istream& operator>>(istream& in, Fraction& fr){
        return fr.readFraction(in);
    }
private:
    double value;
public:
    Fraction(double val) : value(val){}
    friend Fraction operator/(const Fraction& numerator, const Fraction& dominator){
        
    }

};