#include <iostream>
using namespace std;

int main()
{
    double grade1, grade2, grade3, grade4;
    cout << "Enter grade for course CA: ";
    cin >> grade1;
    cout << "Enter grade for course INC: ";
    cin >> grade2;
    cout << "Enter grade for course NA: ";
    cin >> grade3;
    cout << "Enter grade for course CSA: ";
    cin >> grade4;

    double gpa = (grade1 + grade2 + grade3 + grade4) / 4;
    cout << "GPA: " << gpa << endl;

    return 0;
}
