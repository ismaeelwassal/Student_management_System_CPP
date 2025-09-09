#include "Student.h"
#include <iostream>
using namespace std;

int Student::studentCount = 0;

Student::Student(int id, string name, int level, double g, int age, string nationalId)
    : Person(name, age, nationalId), id(id), level(level), gpa(g) {}

Student::Student() : Person("", 0, ""), id(0), level(0), gpa(0.0) {}

int Student::getId() const { return id; }
int Student::getLevel() const { return level; }
double Student::getGPA() const { return gpa; }

void Student::displayInfo() const {
    cout << "Name: " << getName()
        << " | Age: " << getAge()
        << " | National ID: " << getNationalId()
        << " | Student ID: " << id
        << " | Level: " << level
        << " | GPA: " << gpa << endl;
}

int Student::getStudentCount() { return studentCount; }
void Student::incrementCount() { studentCount++; }
