#include "struct.h"

int main() {
    try {
        ComplexNumber c1(2.0, 3.0);
        ComplexNumber c2(-1.0, 2.5);
        ComplexNumber result;
        char operation;

        cout << "Complex number 1: " << c1 << endl;
        cout << "Complex number 2: " << c2 << endl;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
        case '+':
            result = c1 + c2;
            cout << "Sum: " << result << endl;
            break;
        case '-':
            result = c1 - c2;
            cout << "Difference: " << result << endl;
            break;
        case '*':
            result = c1 * c2;
            cout << "Product: " << result << endl;
            break;
        case '/':
            result = c1 / c2;
            cout << "Quotient: " << result << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
        }

    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
