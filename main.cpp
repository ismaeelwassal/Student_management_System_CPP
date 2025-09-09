#include <iostream>
#include <map>
#include <vector>
#include "StudentSystem.h"
using namespace std;

int main() {
    map<int, Student> students;
    map<int, Course> courses;
    vector<Enrollment> enrollments;

    int choice;
    while (true) {
        cout << "\n********************************(Hello in student management system) ***********************************************************\n\n";
        cout << "Please enter your service you want to do :\n";
        cout << "1. Add Student\t\t\t\t";
        cout << "2. Add Course\n";
        cout << "3. Enroll Student in Course\t\t";
        cout << "4. Display Enrollments\n";
        cout << "5. Display Total Student Count\t\t";
        cout << "6. Search Student by ID \n";
        cout << "7. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addStudent(students); break;
        case 2: addCourse(courses); break;
        case 3: enrollStudent(students, courses, enrollments); break;
        case 4: displayEnrollments(enrollments, students, courses); break;
        case 5: cout << "Total number of students: " << Student::getStudentCount() << endl; break;
        case 6: searchStudent(students); break;
        case 7: cout << "Exiting...\n"; return 0;
        default: cout << "Invalid choice. Please try again.\n";
        }
    }
}

