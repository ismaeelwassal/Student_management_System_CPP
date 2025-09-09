#include "Person.h"

Person::Person(string n, int a, string na) : name(n), age(a), nationalId(na) {}
Person::Person() : name(""), age(0), nationalId("") {}

string Person::getName() const { return name; }
int Person::getAge() const { return age; }
string Person::getNationalId() const { return nationalId; }

void Person::displayInfo() const {
    cout << "Name: " << name
        << " | Age: " << age
        << " | National ID: " << nationalId;
}
