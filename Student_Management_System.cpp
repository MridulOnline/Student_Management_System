#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

int main() {
    int studentID[MAX_STUDENTS];
    string studentName[MAX_STUDENTS];
    int studentAge[MAX_STUDENTS];
    float studentMarks[MAX_STUDENTS];

    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;