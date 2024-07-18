#include <iostream>

using namespace std;

int main() {
    double purchaseAmount;
    double discount;
    double totalCost;

    // Getting input from the user
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    // Determine the discount based on the purchase amount
    if (purchaseAmount >= 500) {
        discount = 0.20; // 20% discount
    } else if (purchaseAmount >= 200) {
        discount = 0.15; // 15% discount
    } else if (purchaseAmount >= 100) {
        discount = 0.10; // 10% discount
    } else {
        discount = 0.0; // No discount
    }

    // Calculate the total cost after applying the discount
    totalCost = purchaseAmount - (purchaseAmount * discount);

    // Output the total cost
    cout << "The total cost after applying the discount is: $" << totalCost << endl;

    return 0;
}
