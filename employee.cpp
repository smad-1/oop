#include "employee.h"

#include <iostream>
//#include "person.cpp"
//#include "person.h"

using namespace std;

int employee::ID=0;

employee::employee(string user, string pass): person()
{
    ID=++ID;
    username=user;
    shift="NULL";
    password=pass;
    salary=0;
}

employee::~employee()
{

}
void employee::setInfo()
{
    cout<<"Name: ";
    cin>>name;
    getchar();
    cout<<"Age: ";
    cin>>age;
    getchar();
    cout<<"Phone number: ";
    cin>>phone;
    getchar();
    cout<<"Employee ID: "<<ID<<endl;
    cout<<"Shift: ";
    cin>>shift;
    getchar();
    cout<<"Salary: ";
    cin>>salary;
}

void employee::getInfo()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Phone number: "<<phone<<endl;
    cout<<"Employee ID: "<<ID<<endl;
    cout<<"Shift: "<<shift<<endl;
    cout<<"Salary: "<<salary<<endl;
}
