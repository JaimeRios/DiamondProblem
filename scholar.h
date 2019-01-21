#ifndef SCHOLAR_H
#define SCHOLAR_H

#include "employee.h"
#include "student.h"


class Scholar: public Employee, public Student
{
public:
    Scholar(string n, int s, float sc, int sYD);
    virtual ~Scholar();
    int getScholarshipDuration() const;
    void setScholarshipDuration(int sD);
    virtual void showName();

private:
    int scholarshipYearDuration;
};

#endif // SCHOLAR_H
