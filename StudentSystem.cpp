#include "StudentSystem.h"
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

bool isDigits(const string& s) {
    return all_of(s.begin(), s.end(), ::isdigit);
}

void addStudent(map<int, Student>& students) {
    int id, level, age;
    double gpa;
    string name, nationalId;

    cout << "Enter student ID: ";
    cin >> id;
    if (students.find(id) != students.end()) {
        cout << "Error: Student ID already exists.\n";
        return;
    }

    cout << "Enter student name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    if (!all_of(name.begin(), name.end(), [](char c) { return isalpha(c) || c == ' '; })) {
        cout << "Error: Name must contain only letters.\n";
        return;
    }

    cout << "Enter student level (1-5): ";
    cin >> level;
    if (level < 1 || level > 5) {
        cout << "Error: Level must be between 1 and 5.\n";
        return;
    }

    cout << "Enter student GPA (0.0 - 4.0): ";
    cin >> gpa;
    if (gpa < 0.0 || gpa > 4.0) {
        cout << "Error: GPA must be between 0.0 and 4.0.\n";
        return;
    }

    cout << "Enter student age (18 - 29): ";
    cin >> age;
    if (age < 18 || age > 29) {
        cout << "Error: Age must be between 18 and 29.\n";
        return;
    }

    cout << "Enter student national ID (14 digits): ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nationalId);
    if (nationalId.length() != 14 || !isDigits(nationalId)) {
        cout << "Error: National ID must be 14 digits.\n";
        return;
    }
    for (map<int, Student>::const_iterator it = students.begin(); it != students.end(); ++it) {
        if (it->second.getNationalId() == nationalId) {
            cout << "Error: National ID already exists.\n";
            return;
        }
    }

    students[id] = Student(id, name, level, gpa, age, nationalId);
    Student::incrementCount();
    cout << "Student added successfully.\n";
}

void addCourse(map<int, Course>& courses) {
    int courseId, creditHours;
    string courseName;

    cout << "Enter course ID: ";
    cin >> courseId;
    if (courses.find(courseId) != courses.end()) {
        cout << "Error: Course ID already exists.\n";
        return;
    }

    cout << "Enter course name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, courseName);
    for (map<int, Course>::const_iterator it = courses.begin(); it != courses.end(); ++it) {
        if (it->second.getCourseName() == courseName) {
            cout << "Error: Course name already exists.\n";
            return;
        }
    }

    cout << "Enter credit hours (1 - 3): ";
    cin >> creditHours;
    if (creditHours < 1 || creditHours > 3) {
        cout << "Error: Credit hours must be between 1 and 3.\n";
        return;
    }

    courses[courseId] = Course(courseId, courseName, creditHours);
    cout << "Course added successfully.\n";
}

void enrollStudent(map<int, Student>& students, map<int, Course>& courses, vector<Enrollment>& enrollments) {
    int studentId, courseId;
    cout << "Enter student ID: ";
    cin >> studentId;
    cout << "Enter course ID: ";
    cin >> courseId;

    if (students.find(studentId) == students.end()) {
        cout << "Error: Invalid student ID.\n";
        return;
    }
    if (courses.find(courseId) == courses.end()) {
        cout << "Error: Invalid course ID.\n";
        return;
    }
    for (size_t i = 0; i < enrollments.size(); i++) {
        if (enrollments[i].getStudentId() == studentId && enrollments[i].getCourseId() == courseId) {
            cout << "Error: Student is already enrolled in this course.\n";
            return;
        }
    }

    enrollments.push_back(Enrollment(studentId, courseId));
    cout << "Student enrolled successfully.\n";
}

void displayEnrollments(const vector<Enrollment>& enrollments, const map<int, Student>& students, const map<int, Course>& courses) {
    if (enrollments.empty()) {
        cout << "No enrollments found.\n";
        return;
    }

    cout << "Enrollments:\n";
    for (size_t i = 0; i < enrollments.size(); i++) {
        enrollments[i].displayEnrollment(students, courses);
    }
}

void searchStudent(const map<int, Student>& students) {
    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;

    map<int, Student>::const_iterator it = students.find(searchId);
    if (it != students.end()) {
        cout << "########################################################\n";
        cout << "Student found:\n";
        cout << "########################################################\n";
        it->second.displayInfo();
    }
    else {
        cout << "No student found with ID: " << searchId << endl;
    }
}
