#ifndef STUDENT_SYSTEM_H
#define STUDENT_SYSTEM_H

#include <map>
#include <vector>
#include <string>
#include "Student.h"
#include "Course.h"
#include "Enrollment.h"

bool isDigits(const string& s);

void addStudent(map<int, Student>& students);
void addCourse(map<int, Course>& courses);
void enrollStudent(map<int, Student>& students, map<int, Course>& courses, vector<Enrollment>& enrollments);
void displayEnrollments(const vector<Enrollment>& enrollments, const map<int, Student>& students, const map<int, Course>& courses);
void searchStudent(const map<int, Student>& students);

#endif

