#include "Enrollment.h"
#include <iostream>
using namespace std;

Enrollment::Enrollment(int sId, int cId) : studentId(sId), courseId(cId) {}

int Enrollment::getStudentId() const { return studentId; }
int Enrollment::getCourseId() const { return courseId; }

void Enrollment::displayEnrollment(const map<int, Student>& students, const map<int, Course>& courses) const {
    cout << "Enrollment Info:\n";
    students.at(studentId).displayInfo();
    courses.at(courseId).displayInfo();
    cout << "--------------------------------------------------\n";
}
