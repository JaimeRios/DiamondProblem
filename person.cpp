#include "person.h"

Person::Person(string n):name(n)
{

}

Person::~Person()
{

}

string Person::getName() const
{
    return name;
}

void Person::showName()
{
    std::cout<<"I'm a Person, my name is "<< Person::getName();
}
