#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Welcome! It's Calculator:)" << endl;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter operation (+, -, *, /, ^, r): " << endl;
    cin >> operation;

    if (operation != 'r') { // If the user selects 'r', the calculator will compute the square root of the first number only.
        cout << "Enter second number: " << endl;
        cin >> b;
    }

    switch (operation) {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << a << " / " << b << " = " << a / b << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    case '^':
        cout << a << " ^ " << b << " = " << pow(a, b) << endl;
        break;
    case 'r':
        if (a >= 0) {
            cout << "Square root of " << a << " = " << sqrt(a) << endl;
        } else {
            cout << "Error: Square root of negative number!" << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation!" << endl;
        break;
    }

    return 0;
}
