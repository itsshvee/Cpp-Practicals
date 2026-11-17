/*
 * PRACTICAL 01: GitHub Setup and C++ Fundamentals
 * Course: B.Tech (Artificial Intelligence & Data Science) - 2nd Year
 * Subject: Object Oriented Programming (OOP)
 * 
 * AIM: To practise basic C++ syntax (data types, constants, variables, operators,
 *      and input/output) and learn how to track code changes using Git and GitHub.
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // 1. Constants
    const int TOTAL_SUBJECTS = 3;
    const int MAX_MARKS_PER_SUBJECT = 100;
    const float PASSING_MARK = 40.0f;

    // 2. Variables of suitable data types
    string studentName;
    int rollNumber;
    float marks1, marks2, marks3;
    float totalMarks, averageMarks;
    char grade;
    bool isPassed;

    // 3. User Input using cin
    cout << "========================================" << endl;
    cout << "  Student Performance Evaluation System  " << endl;
    cout << "========================================" << endl;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter marks for Subject 1 (out of " << MAX_MARKS_PER_SUBJECT << "): ";
    cin >> marks1;

    cout << "Enter marks for Subject 2 (out of " << MAX_MARKS_PER_SUBJECT << "): ";
    cin >> marks2;

    cout << "Enter marks for Subject 3 (out of " << MAX_MARKS_PER_SUBJECT << "): ";
    cin >> marks3;

    // 4. Arithmetic Operators (+, /)
    totalMarks = marks1 + marks2 + marks3;
    averageMarks = totalMarks / TOTAL_SUBJECTS;

    // 5. Relational (>=) and Logical Operators (&&)
    // Student passes if all individual subject marks >= 40 AND average >= 40
    isPassed = (marks1 >= PASSING_MARK) && 
               (marks2 >= PASSING_MARK) && 
               (marks3 >= PASSING_MARK) && 
               (averageMarks >= PASSING_MARK);

    // Decision making using relational operators
    if (averageMarks >= 90.0f) {
        grade = 'O'; // Outstanding
    } else if (averageMarks >= 75.0f) {
        grade = 'A';
    } else if (averageMarks >= 60.0f) {
        grade = 'B';
    } else if (averageMarks >= 40.0f) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // 6. Output using cout with formatting
    cout << "\n----------------------------------------" << endl;
    cout << "             REPORT CARD                " << endl;
    cout << "----------------------------------------" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Roll Number  : " << rollNumber << endl;
    cout << fixed << setprecision(2);
    cout << "Subject 1    : " << marks1 << " / " << MAX_MARKS_PER_SUBJECT << endl;
    cout << "Subject 2    : " << marks2 << " / " << MAX_MARKS_PER_SUBJECT << endl;
    cout << "Subject 3    : " << marks3 << " / " << MAX_MARKS_PER_SUBJECT << endl;
    cout << "Total Marks  : " << totalMarks << " / " << (TOTAL_SUBJECTS * MAX_MARKS_PER_SUBJECT) << endl;
    cout << "Average      : " << averageMarks << "%" << endl;
    cout << "Grade        : " << grade << endl;
    cout << "Result       : " << (isPassed ? "PASSED" : "FAILED") << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
