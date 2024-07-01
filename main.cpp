#include "struct.h"

int main() {
    try {
        Fraction f1(3, 4);
        Fraction f2(2, 6);
		Fraction result;
        char operation;

        cout << "Fraction 1: " << f1 << endl;
        cout << "Fraction 2: " << f2 << endl;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
        case '+':
            result = f1 + f2;
            cout << "Sum: " << result << endl;
            break;
        case '-':
            result = f1 - f2;
            cout << "Difference: " << result << endl;
            break;
        case '*':
            result = f1 * f2;
            cout << "Product: " << result << endl;
            break;
        case '/':
            result = f1 / f2;
            cout << "Quotient: " << result << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
        }

        cout << "Fraction 1 as mixed number: ";
        f1.toMixedNumber();

        cout << "Fraction 2 as mixed number: ";
        f2.toMixedNumber();

    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}