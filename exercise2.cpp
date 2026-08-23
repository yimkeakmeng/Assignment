#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double gpa;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "\nName: " << name
         << "\nAge: " << age
         << "\nGPA: " << gpa;

    return 0;
}