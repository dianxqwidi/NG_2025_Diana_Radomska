#include <iostream>

using namespace std;

void enterNumbers(int userNumbers[], int arraySize) {
    for (int index = 0; index < arraySize; index++) {
        cout << "Enter number " << index + 1 << ": ";
        cin >> userNumbers[index];

        if (userNumbers[index] < 0) {
            cout << "(Please enter a number greater than or equal to 0)\n";
            index--;
        }
    }
}

void drawStars(const int userNumbers[], int arraySize) {
    int maxValue = 0;

    for (int index = 0; index < arraySize; index++) {
        if (userNumbers[index] > maxValue) {
            maxValue = userNumbers[index];
        }
    }

    for (int index = 0; index < arraySize; index++) {
        int spaces = maxValue - userNumbers[index];
        for (int starCounter = 0; starCounter < spaces; starCounter++) {
            cout << " ";
        }
        for (int starCounter = 0; starCounter < userNumbers[index]; starCounter++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    const int numberInputs = 5;
    int userNumbers[numberInputs];

    cout << "Enter 5 non-negative numbers\n";
    enterNumbers(userNumbers, numberInputs);

    cout << "\nDrawing stars:\n";
    drawStars(userNumbers, numberInputs);

    return 0;
}
