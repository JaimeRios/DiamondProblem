#include "employee.h"

//Employee must explicitly initialize the bass class "Person"
Employee::Employee(string n,int s): Person (n), salary(s)
{

}

Employee::~Employee()
{

}

int Employee::getSalary() const
{
    return salary;
}

void Employee::setSalary(int s)
{
    salary=s;
}

void Employee::showName()
{
    std::cout<<"I'm an employee, my name is "<< Person::getName();
}
