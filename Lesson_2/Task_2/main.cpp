#include <iostream>

using namespace std;

int main() {
    int number[5];
    for (int n = 0; n < 5; n++) {
        cout << "Enter number: " ;
        cin >> number[n];
    }
    for (int n = 0; n < 5; n++) {
        for (int p = 0; p < number[n]; p++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
