#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    // Getting input from the user
    cout << "Enter the age of the customer: ";
    cin >> age;
    cout << "Enter the type of movie (regular/3D): ";
    cin >> movieType;

    // Determine the ticket price based on the age and type of movie
    if (age < 0) {
        cout << "Invalid age entered." << endl;
        return 1; // Exit the program if the age is invalid
    } else if (movieType != "regular" && movieType != "3D") {
        cout << "Invalid movie type entered." << endl;
        return 1; // Exit the program if the movie type is invalid
    }

    if (age < 12) {
        if (movieType == "regular") {
            ticketPrice = 5.00; // Regular movie for children under 12
        } else {
            ticketPrice = 8.00; // 3D movie for children under 12
        }
    } else if (age >= 12 && age <= 64) {
        if (movieType == "regular") {
            ticketPrice = 10.00; // Regular movie for adults
        } else {
            ticketPrice = 15.00; // 3D movie for adults
        }
    } else {
        if (movieType == "regular") {
            ticketPrice = 7.00; // Regular movie for seniors
        } else {
            ticketPrice = 10.00; // 3D movie for seniors
        }
    }

    // Output the ticket price
    cout << "The ticket price is: $" << ticketPrice << endl;

    return 0;
}
