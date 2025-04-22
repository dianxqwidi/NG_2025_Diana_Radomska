#include <iostream>
using namespace std;

int main() {
    double accounts[10] = {0}; // 10 accounts with zero balance
    int choice;

    cout << "Welcome to the banking system!" << endl;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Check account balance\n";
        cout << "2. Deposit money into account\n";
        cout << "3. Withdraw money from account\n";
        cout << "4. Show all accounts\n";
        cout << "5. Show total balance across all accounts\n";
        cout << "6. Exit\n";
        cout << "Choose an option (1-6): ";
        cin >> choice;

        if (choice == 6) {
            cout << "Thank you for using our system! Goodbye!" << endl;
            break;
        }

        int accountNumber;
        double amount;

        switch (choice) {
        case 1:
            cout << "Enter account number (1-10): ";
            cin >> accountNumber;
            if (accountNumber < 1 || accountNumber > 10) {
                cout << "Invalid account number!" << endl;
            } else {
                cout << "Balance of account " << accountNumber << ": " << accounts[accountNumber - 1] << endl;
            }
            break;
        case 2:
            cout << "Enter account number (1-10): ";
            cin >> accountNumber;
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (accountNumber < 1 || accountNumber > 10 || amount < 0) {
                cout << "Invalid input!" << endl;
            } else {
                accounts[accountNumber - 1] += amount;
                cout << "Account " << accountNumber << " balance updated." << endl;
            }
            break;
        case 3:
            cout << "Enter account number (1-10): ";
            cin >> accountNumber;
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (accountNumber < 1 || accountNumber > 10 || amount < 0 || amount > accounts[accountNumber - 1]) {
                cout << "Invalid input!" << endl;
            } else {
                accounts[accountNumber - 1] -= amount;
                cout << "Account " << accountNumber << " balance updated." << endl;
            }
            break;
        case 4:
            cout << "Balances of all accounts:\n";
            for (int i = 0; i < 10; i++) {
                cout << "Account " << (i + 1) << ": " << accounts[i] << endl;
            }
            break;
        case 5: {
            double total = 0;
            for (int i = 0; i < 10; i++) {
                total += accounts[i];
            }
            cout << "Total amount across all accounts: " << total << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    }
    return 0;
}
