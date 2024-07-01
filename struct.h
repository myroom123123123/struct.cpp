#include <iostream>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;

    Fraction(int num = 0, int denom = 1) {
        if (denom == 0) {
            throw invalid_argument("Denominator cannot be zero");
        }
        numerator = num;
        denominator = denom;
        reduce();
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void reduce() {
        int gcdValue = gcd(abs(numerator), abs(denominator));
        numerator /= gcdValue;
        denominator /= gcdValue;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    void toMixedNumber() const {
        if (abs(numerator) >= denominator) {
            int wholePart = numerator / denominator;
            int remainder = abs(numerator) % denominator;
            cout << "Mixed number: " << wholePart << " " << remainder << "/" << denominator << endl;
        }
        else {
            cout << "Proper fraction: " << numerator << "/" << denominator << endl;
        }
    }
};

Fraction operator+(const Fraction& a, const Fraction& b) {
    int num = a.numerator * b.denominator + b.numerator * a.denominator;
    int denom = a.denominator * b.denominator;
    return Fraction(num, denom);
}

Fraction operator-(const Fraction& a, const Fraction& b) {
    int num = a.numerator * b.denominator - b.numerator * a.denominator;
    int denom = a.denominator * b.denominator;
    return Fraction(num, denom);
}

Fraction operator*(const Fraction& a, const Fraction& b) {
    int num = a.numerator * b.numerator;
    int denom = a.denominator * b.denominator;
    return Fraction(num, denom);
}

Fraction operator/(const Fraction& a, const Fraction& b) {
    if (b.numerator == 0) {
        throw invalid_argument("Cannot divide by zero");
    }
    int num = a.numerator * b.denominator;
    int denom = a.denominator * b.numerator;
    return Fraction(num, denom);
}

ostream& operator<<(ostream& out, const Fraction& frac) {
    out << frac.numerator << "/" << frac.denominator;
    return out;
}
