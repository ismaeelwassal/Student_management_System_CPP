#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int id;
    int level;
    double gpa;
    static int studentCount;

public:
    Student(int id, string name, int level, double g, int age, string nationalId);
    Student();

    int getId() const;
    int getLevel() const;
    double getGPA() const;

    void displayInfo() const override;

    static int getStudentCount();
    static void incrementCount();
};

#endif

