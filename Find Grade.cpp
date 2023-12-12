#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

double calculateGPA(const vector<pair<string, char>>& grades, const vector<int>& credits) {
    unordered_map<char, double> gradePoints = {{'A', 4.0}, {'B', 3.0}, {'C', 2.0}, {'D', 1.0}, {'F', 0.0}};

    double totalCredits = 0;
    double totalGradePoints = 0;

    for (size_t i = 0; i < grades.size(); ++i) {
        totalCredits += credits[i];
        totalGradePoints += gradePoints[grades[i].second] * credits[i];
    }

    if (totalCredits == 0) {
        return 0.0;
    }

    double gpa = totalGradePoints / totalCredits;
    return gpa;
}

int main() {
    vector<pair<string, char>> grades;
    vector<int> credits;

    for (int i = 0; i < 4; ++i) {
        string courseName;
        char grade;
        int credit;

        cout << "Enter course name for course " << i + 1 << ": ";
        cin >> courseName;

        cout << "Enter grade (A, B, C, D, F) for course " << i + 1 << ": ";
        cin >> grade;

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credit;

        grades.push_back({courseName, grade});
        credits.push_back(credit);
    }

    double result = calculateGPA(grades, credits);

    cout << "Your GPA is: " << result << endl;

    return 0;
}
