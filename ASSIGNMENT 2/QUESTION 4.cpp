#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Getting input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the difference
    int difference = num1 - num2;

    // Use switch case to determine the maximum number
    switch ((difference > 0) - (difference < 0)) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case -1:
            cout << "The maximum number is: " << num2 << endl;
            break;
        case 0:
            cout << "Both numbers are equal." << endl;
            break;
        default:
            cout << "Unexpected case." << endl;
    }

    return 0;
}
