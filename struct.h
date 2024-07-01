#include <iostream>

using namespace std;

struct ComplexNumber {
    double real;
    double imaginary;

    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        double r = real * other.real - imaginary * other.imaginary;
        double i = real * other.imaginary + imaginary * other.real;
        return ComplexNumber(r, i);
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        if (denominator == 0.0) {
            throw invalid_argument("Division by zero");
        }
        double r = (real * other.real + imaginary * other.imaginary) / denominator;
        double i = (imaginary * other.real - real * other.imaginary) / denominator;
        return ComplexNumber(r, i);
    }

    friend ostream& operator<<(ostream& out, const ComplexNumber& c) {
        out << c.real;
        if (c.imaginary >= 0) {
            out << " + " << c.imaginary << "i";
        }
        else {
            out << " - " << -c.imaginary << "i";
        }
        return out;
    }
};
