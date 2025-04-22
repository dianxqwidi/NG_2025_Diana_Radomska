#include <iostream>
using namespace std;

int main() {
    double accounts[10] = {0}; // 10 рахунків з нульовим балансом
    int choice;

    cout << "Вітаємо у банківській системі!" << endl;

    while (true) {
        cout << "\nМеню:\n";
        cout << "1. Подивитися баланс рахунку\n";
        cout << "2. Покласти гроші на рахунок\n";
        cout << "3. Зняти гроші з рахунку\n";
        cout << "4. Показати всі рахунки\n";
        cout << "5. Показати загальну суму на всіх рахунках\n";
        cout << "6. Вийти\n";
        cout << "Виберіть опцію (1-6): ";
        cin >> choice;

        if (choice == 6) {
            cout << "Дякуємо за використання нашої системи! До побачення!" << endl;
            break;
        }

        int accountNumber;
        double amount;

        switch (choice) {
        case 1:
            cout << "Введіть номер рахунку (0-10): ";
            cin >> accountNumber;
            if (accountNumber < 0 || accountNumber >= 10) {
                cout << "Неправильний номер рахунку!" << endl;
            } else {
                cout << "Баланс рахунку " << accountNumber << ": " << accounts[accountNumber] << endl;
            }
            break;
        case 2:
            cout << "Введіть номер рахунку (0-10): ";
            cin >> accountNumber;
            cout << "Введіть суму для поповнення: ";
            cin >> amount;
            if (accountNumber < 0 || accountNumber >= 10 || amount < 0) {
                cout << "Неправильні дані!" << endl;
            } else {
                accounts[accountNumber] += amount;
                cout << "Баланс рахунку " << accountNumber << " оновлено." << endl;
            }
            break;
        case 3:
            cout << "Введіть номер рахунку (0-10): ";
            cin >> accountNumber;
            cout << "Введіть суму для зняття: ";
            cin >> amount;
            if (accountNumber < 0 || accountNumber >= 10 || amount < 0 || amount > accounts[accountNumber]) {
                cout << "Неправильні дані!" << endl;
            } else {
                accounts[accountNumber] -= amount;
                cout << "Баланс рахунку " << accountNumber << " оновлено." << endl;
            }
            break;
        case 4:
            cout << "Баланс всіх рахунків:\n";
            for (int i = 0; i < 10; i++) {
                cout << "Рахунок " << i << ": " << accounts[i] << endl;
            }
            break;
        case 5:
            double total = 0;
            for (int i = 0; i < 10; i++) {
                total += accounts[i];
            }
            cout << "Загальна сума на всіх рахунках: " << total << endl;
            break;
        default:
            cout << "Неправильний вибір! Спробуйте ще раз." << endl;
            break;
        }
    }
    return 0;
