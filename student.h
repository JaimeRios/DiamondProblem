#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student: virtual public Person
{
public:
    Student(string n, float sc);
    virtual ~Student();
    float getScore()const;
    void setScore(float sc);
    virtual void showName();
private:
    float score;
};

#endif // STUDENT_H
