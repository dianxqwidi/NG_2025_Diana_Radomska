#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number_one, number_two;
    char operation;

    cout << "Welcome! It's Calculator:)" << endl;
    cout << "Enter first number: " << endl;
    cin >> number_one;
    cout << "Enter operation (+, -, *, /, ^, r): " << endl;
    cin >> operation;

    if (operation != 'r') { // If the user selects 'r', the calculator will compute the square root of the first number only.
        cout << "Enter second number: " << endl;
        cin >> number_two;
    }

    switch (operation) {
    case '+':
        cout << number_one << " + " << number_two << " = " << number_one + number_two << endl;
        break;
    case '-':
        cout << number_one << " - " << number_two << " = " << number_one - number_two << endl;
        break;
    case '*':
        cout << number_one << " * " << number_two << " = " << number_one * number_two << endl;
        break;
    case '/':
        if (number_two != 0) {
            cout << number_one << " / " << number_two << " = " << number_one / number_two << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    case '^':
        cout << number_one << " ^ " << number_two << " = " << pow(number_one, number_two) << endl;
        break;
    case 'r':
        if (number_one >= 0) {
            cout << "Square root of " << number_one << " = " << sqrt(number_one) << endl;
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
