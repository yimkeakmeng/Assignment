#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;
}

char getLetterGrade(int score) {
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int scores[n];

    // Input scores
    for (int i = 0; i < n; i++) {
        cout << "Enter score for student " << (i + 1) << ": ";
        cin >> scores[i];
    }

    // Calculate average
    double average = calculateAverage(scores, n);

    // Display grades
    cout << "\n--- Student Grades ---\n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1)
             << ": " << scores[i]
             << " - Grade "
             << getLetterGrade(scores[i])
             << endl;
    }

    // Display class average
    cout << "\nClass Average: " << average << endl;

    return 0;
}