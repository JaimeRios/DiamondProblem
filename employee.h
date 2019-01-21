#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"


class Employee: virtual Person
{
public:
    Employee(string n,int s);
    virtual ~Employee();
    int getSalary() const;
    void setSalary(int s);
    virtual void showName();
private:
    int salary;
};

#endif // EMPLOYEE_H
