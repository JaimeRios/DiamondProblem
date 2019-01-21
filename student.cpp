#include "student.h"

Student::Student(string n, float sc): Person (n), score(sc)
{

}

Student::~Student()
{

}

float Student::getScore() const
{
    return score;
}

void Student::setScore(float sc)
{
    score=sc;
}

void Student::showName()
{
    std::cout<<"I'm an student, my name is "<< Person::getName();
}
