#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(int id, string name, int hours) : courseId(id), courseName(name), creditHours(hours) {}
Course::Course() : courseId(0), courseName(""), creditHours(0) {}

int Course::getCourseId() const { return courseId; }
string Course::getCourseName() const { return courseName; }
int Course::getCreditHours() const { return creditHours; }

void Course::displayInfo() const {
    cout << "Course ID: " << courseId
        << " | Name: " << courseName
        << " | Credit Hours: " << creditHours << endl;
}
