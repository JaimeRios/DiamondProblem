#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
public:
    Person(string n);
    virtual ~Person();
    string getName()const;
    virtual void showName();
private:
         string name;

};

#endif // PERSON_H
