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

    // Determine the grade using switch-case
    switch (score / 10) {
        case 10: // For scores 100
        case 9:  // For scores 90-99
        case 8:  // For scores 80-89
        case 7:  // For scores 70-79
            grade = 'A';
            break;
        case 6:  // For scores 60-69
            grade = 'B';
            break;
        case 5:  // For scores 50-59
            grade = 'C';
            break;
        case 4:  // For scores 40-49
            grade = 'D';
            break;
        case 3:  // For scores 30-39
        case 2:  // For scores 20-29
        case 1:  // For scores 10-19
        case 0:  // For scores 0-9
            grade = 'F';
            break;
        default:
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
