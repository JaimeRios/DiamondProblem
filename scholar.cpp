#include "scholar.h"

Scholar::Scholar(string n, int s, float sc, int sYD): Person (n),Employee (n,s), Student (n,sc), scholarshipYearDuration(sYD)
{

}

Scholar::~Scholar()
{

}

int Scholar::getScholarshipDuration() const
{
    return scholarshipYearDuration;
}

void Scholar::setScholarshipDuration(int sD)
{
    scholarshipYearDuration=sD;
}

void Scholar::showName()
{
    std::cout<<"I'm an scholar, my name is "<< Person::getName();
}
