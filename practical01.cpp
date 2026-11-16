#include <iostream>
using namespace std;

int main()
{
    string name;
    int marks1, marks2, marks3;
    const int TOTAL_SUBJECTS = 3;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter marks for Subject 1: ";
    cin >> marks1;

    cout << "Enter marks for Subject 2: ";
    cin >> marks2;

    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    int total = marks1 + marks2 + marks3;
    float average = (float)total / TOTAL_SUBJECTS;

    bool passed = (marks1 >= 40 && marks2 >= 40 && marks3 >= 40);

    cout << "\nName: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 75)
        cout << "Grade: A" << endl;
    else if (average >= 60)
        cout << "Grade: B" << endl;
    else if (average >= 50)
        cout << "Grade: C" << endl;
    else if (average >= 40)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    if (passed)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}
