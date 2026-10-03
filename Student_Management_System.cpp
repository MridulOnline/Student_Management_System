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

        switch (choice) {

            case 1:
                if (count >= MAX_STUDENTS) {
                    cout << "Student limit reached.\n";
                    break;
                }

                cout << "\nEnter Student ID: ";
                cin >> studentID[count];

                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, studentName[count]);

                cout << "Enter Student Age: ";
                cin >> studentAge[count];

                cout << "Enter Student Marks: ";
                cin >> studentMarks[count];

                count++;

                cout << "Student added successfully!\n";
                break;


            case 2:
                if (count == 0) {
                    cout << "\nNo students available.\n";
                }
                else {
                    cout << "\n===== Student Details =====\n";

                    for (int i = 0; i < count; i++) {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "ID: " << studentID[i] << endl;
                        cout << "Name: " << studentName[i] << endl;
                        cout << "Age: " << studentAge[i] << endl;
                        cout << "Marks: " << studentMarks[i] << endl;
                    }
                }
                break;


            case 3: {
                int searchID;
                bool found = false;

                cout << "\nEnter Student ID to search: ";
                cin >> searchID;

                for (int i = 0; i < count; i++) {

                    if (studentID[i] == searchID) {
                        cout << "\nStudent found!\n";
                        cout << "ID: " << studentID[i] << endl;
                        cout << "Name: " << studentName[i] << endl;
                        cout << "Age: " << studentAge[i] << endl;
                        cout << "Marks: " << studentMarks[i] << endl;

                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student not found.\n";
                }

                break;
            }


            case 4:
                cout << "\nProgram exited.\n";
                break;


            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
