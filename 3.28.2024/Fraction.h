#ifndef FRACTION_H
#define FRACTION_H

#include <string>

class Fraction
{
private:
   int numerator;
   int denominator;

public:
    Fraction(int numerator, int denominator);

    void setNumerator(int);
    void setDenominator(int);

    int getNumerator() const;
    int getDenominator() const;

    double toDecimal() const;

    string toString() const;
};

Fraction::~Fraction()
{
}




#endif