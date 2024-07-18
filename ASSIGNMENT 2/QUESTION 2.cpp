#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string course;
    int score;
    char grade;

    // Getting input from the user
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);
    cout << "Enter the course: ";
    getline(cin, course);
    cout << "Enter the score: ";
    cin >> score;

    // Determining the grade
    if (score >= 70 && score <= 100) {
        grade = 'A';
    } else if (score >= 60 && score < 70) {
        grade = 'B';
    } else if (score >= 50 && score < 60) {
        grade = 'C';
    } else if (score >= 40 && score < 50) {
        grade = 'D';
    } else if (score >= 0 && score < 40) {
        grade = 'F';
    } else {
        cout << "Invalid score entered." << endl;
        return 1; // Exit the program if the score is invalid
    }

    // Outputting the result
    cout << "Student Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
