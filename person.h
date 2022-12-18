#ifndef PERSON_H
#define PERSON_H
#include <iostream>

#pragma once

using namespace std;

class person
{
    protected:
        string name;
        int phone;
        int age;

    public:
        person();
        virtual void setInfo()=0;
        virtual void getInfo()=0;

        ~person();

};

#endif
