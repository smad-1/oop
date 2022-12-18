#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
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
        person(string n,int x,int p);
        void getInfo();

        ~person();

};

class employee:public person
{
    protected:
        int ID;
        string username;
        string shift;
        string password;
        double salary;

    public:
        employee(string n, int a, int p, int x, string user, string s, string pass, double sal);
        ~employee();

};

#endif // HEADER_H_INCLUDED
