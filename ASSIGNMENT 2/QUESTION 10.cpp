#include <iostream>

using namespace std;

int main() {
    double accountBalance = 1000.0; // Initial account balance
    double dailyLimit = 500.0;      // Daily withdrawal limit
    double withdrawalAmount;

    // Getting input from the user
    cout << "Enter the amount you want to withdraw: $";
    cin >> withdrawalAmount;

    // Verification and processing
    if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount entered." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Withdrawal amount exceeds the daily limit." << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds in your account." << endl;
    } else {
        // Process the withdrawal
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining balance: $" << accountBalance << endl;
    }

    return 0;
}
