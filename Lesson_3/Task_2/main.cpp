#include <iostream>
#include <string>

using namespace std;

int main () {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string vowels = "aeiouAEIOU";
    int vowel = 0; int consonant = 0;

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];

        bool is_vowel = false;
        for (int j = 0; j < vowels.length(); j++) {
            if (c == vowels[j]) {
                is_vowel = true;
                break;
            }
        }

        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
            if (is_vowel) {
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    int total = vowel + consonant;

    if (total == 0) {
        cout << "No letters found!" << endl;
    } else {
        cout << "Vowels: " << vowel * 100 / total << "%" << endl;
        cout << "Consonants: " << consonant * 100 / total << "%" << endl;
    }

    return 0;
}
