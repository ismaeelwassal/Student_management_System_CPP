#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string nationalId;

public:
    Person(string n, int a, string na);
    Person();

    string getName() const;
    int getAge() const;
    string getNationalId() const;

    virtual void displayInfo() const;
};

#endif

