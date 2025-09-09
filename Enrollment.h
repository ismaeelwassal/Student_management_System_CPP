#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include <map>
#include "Student.h"
#include "Course.h"

class Enrollment {
private:
    int studentId;
    int courseId;

public:
    Enrollment(int sId, int cId);

    int getStudentId() const;
    int getCourseId() const;

    void displayEnrollment(const map<int, Student>& students, const map<int, Course>& courses) const;
};

#endif

