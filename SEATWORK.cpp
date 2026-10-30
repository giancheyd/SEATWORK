/******************************************************************************
Problem 1: Positive Number & Digit Counter
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int val;

    cout << "Enter an integer (up to 4 digits): ";
    cin >> val;

    if (val <= 0) {
        cout << "It is a non-positive number\n";
    } else if (val <= 9) {
        cout << "It is a positive 1-digit number.\n";
    } else if (val <= 99) {
        cout << "It is a positive 2-digit number.\n";
    } else if (val <= 999) {
        cout << "It is a positive 3-digit number.\n";
    } else if (val <= 9999) {
        cout << "It is a positive 4-digit number.\n";
    } else {
        cout << "Number exceeds 4 digits limit.\n";
    }

    return 0;
}

/******************************************************************************
Problem 1: Positive Number & Digit Counter
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int val;

    cout << "Enter an integer (up to 4 digits): ";
    cin >> val;

    if (val <= 0) {
        cout << "It is a non-positive number\n";
    } else if (val <= 9) {
        cout << "It is a positive 1-digit number.\n";
    } else if (val <= 99) {
        cout << "It is a positive 2-digit number.\n";
    } else if (val <= 999) {
        cout << "It is a positive 3-digit number.\n";
    } else if (val <= 9999) {
        cout << "It is a positive 4-digit number.\n";
    } else {
        cout << "Number exceeds 4 digits limit.\n";
    }

    return 0;
}

