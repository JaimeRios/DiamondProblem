#include <iostream>
#include "scholar.h"

using namespace std;


/*
 *                   ---------
 *                   |Person |
 *                   ---------
 *                    ^     ^
 *                   /       \
 *               virtual   virtual
 *                 /           \
 *                /             \
 *            ----------    ---------
 *            |Employee|    |Student|
 *            ----------    ---------
 *                ^             ^
 *                \            /
 *                 \          /
 *                  \        /
 *                   \      /
 *                  _________
 *                  |Scholar|
 *                  ---------
 *
 * Employee and Student must use virtual inheritance in order to create
 * only an instace of Person in an scholar instance.
 *
 */



int main()
{
    Scholar pedro("Jaime",1000,7.0,2);
    pedro.showName();
    cout<< ", Salary: "
        << pedro.getSalary()<<", Score: "
        << pedro.getScore()<<", Years of Scholarship: "
        << pedro.getScholarshipDuration()<<endl;

    Person *pPerson=nullptr;
    Student *pStudent=nullptr;
    Scholar *pScholar=nullptr;

    //Using Person pointer
    pPerson = new Student("Pedro",7.0f);
    pPerson->showName();// will use student's showName member
    delete pPerson;
    pPerson=nullptr;

    //Using Student pointer
    pStudent = new Scholar("Alejandra",800,9.3f,2);
    pStudent->showName(); // Will use Scholar's showName member
    delete pStudent;
    pStudent=nullptr;

    //Using Scholar pointer
    pScholar = new Scholar("Carlos",1200,7.3f,1);
    pScholar->showName(); // Will use Scholar's showName member
    delete pScholar;
    pScholar=nullptr;

    return 0;
}
