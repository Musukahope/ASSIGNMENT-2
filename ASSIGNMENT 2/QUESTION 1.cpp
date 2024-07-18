#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    string name;
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    void getCustomerDetails() {
        cout << "Enter customer name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter bank balance: ";
        cin >> bankBalance;
        cout << "Enter CRB status (good/bad): ";
        cin >> crbStatus;
        cout << "Enter months as a customer: ";
        cin >> monthsAsCustomer;
    }

    bool isQualifiedForLoan() {
        if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Customer customer;
    customer.getCustomerDetails();

    if (customer.isQualifiedForLoan()) {
        cout << "Customer " << customer.name << " is qualified for the loan." << endl;
    } else {
        cout << "Customer " << customer.name << " is not qualified for the loan." << endl;
    }

    return 0;
}

