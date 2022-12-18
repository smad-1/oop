#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

#include "person.h"

#pragma once

using namespace std;

class employee:public person
{
    protected:
        static int ID;
        string username;
        string shift;
        string password;
        double salary;

    public:
        employee(string user, string pass);
        ~employee();
        void setInfo();
        void getInfo();
        virtual void showUser()=0;

};

#endif
