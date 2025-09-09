#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    int courseId;
    string courseName;
    int creditHours;

public:
    Course(int id, string name, int hours);
    Course();

    int getCourseId() const;
    string getCourseName() const;
    int getCreditHours() const;

    void displayInfo() const;
};

#endif

