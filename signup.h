#ifndef SIGNUP_H_INCLUDED
#define SIGNUP_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string.h>
#include <chrono>
#include <thread>
#include "employee.h"
#include "manager.h"
#include "myGlobals.h"

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

bool login(int option, string userID, string userPass)
{
    int flag=0;
    string id, pass;

   // ifstream input("records.txt");   //ifstream reads the file

    if(option==1)
    {
        ifstream input("manager.txt");
        while(input>>id>>pass)
        {
            if(id==userID && pass==userPass)
            {
                flag=1;
                break;
                system("cls");
            }
        }
        input.close();
    }
    else if(option==2)
    {
        ifstream input("chef.txt");
        while(input>>id>>pass)
        {
            if(id==userID && pass==userPass)
            {
                flag=1;
                break;
                system("cls");
            }
        }
        input.close();
    }
    else if(option==3)
    {
        ifstream input("cashier.txt");
        while(input>>id>>pass)
        {
            if(id==userID && pass==userPass)
            {
                flag=1;
                break;
                system("cls");
            }
        }
        input.close();
    }
    else if(option==4)
    {
        ifstream input("server.txt");
        while(input>>id>>pass)
        {
            if(id==userID && pass==userPass)
            {
                flag=1;
                break;
                system("cls");
            }
        }
        input.close();
    }

    if(flag)
    {
        cout<<"\t\t\tSuccessfully logged in.\n\n";
        sleep_for(1s);
        return true;
    }
    else
    {
        cout<<"\n\t\t\tInvalid username or password.\n\n";
        sleep_for(1s);
        system("cls");
        return false;
    }
}

bool register_(string title)
{
    bool flag=0;
    string r_user, r_password, r_id, r_pass;
    system("cls");

    cout<<"\t\t\t REGISTRATION PAGE  \n\n";
    cout<<"\t\t\tEnter username: ";
    cin>>r_user;
    cout<<"\t\t\tEnter password: ";
    cin>>r_password;

    ifstream exists("records.txt"); //read
    while(exists>>r_id)
    {
        if(r_id==r_user)
        {
            flag=1;
            system("cls");
        }
    }
    exists.close();

    if(flag)
    {
        cout<<"\t\t\tUsername already exists. Please try again.\n\n";
        return flag;
    }

    if(title=="manager")
    {
        ofstream f2("manager.txt",ios::app);  //ofstream writes to the file, app->appends
        ofstream f1("records.txt",ios::app);  //total record of all accounts

        f1<<r_user<<' '<<r_password<<endl;
        f2<<r_user<<' '<<r_password<<endl;
        system("cls");

        globals::emps[globals::emp_count++] = new manager(r_user,r_password);

        cout<<"\n\t\t\t Successfully registered. \n\n";
        cout<<"\t\t\t Returning to home page. \n\n";
        sleep_for(2s);
        system("cls");
        f1.close();
        f2.close();
        return flag;
    }
    else if(title=="chef")
    {
        ofstream f2("chef.txt",ios::app);
        ofstream f1("records.txt",ios::app);  //total record of all accounts

        f2<<r_user<<' '<<r_password<<endl;
        f1<<r_user<<' '<<r_password<<endl;
        system("cls");

       // employee* emps[emp_count++] = new chef(r_user,r_password);

        cout<<"\n\t\t\t Successfully registered. \n\n";
        cout<<"\t\t\t Returning to home page. \n\n";
        sleep_for(2s);
        system("cls");
        f1.close();
        f2.close();
        return flag;
    }
    else if(title=="cashier")
    {
        ofstream f2("cashier.txt",ios::app);
        ofstream f1("records.txt",ios::app);  //total record of all accounts

        f1<<r_user<<' '<<r_password<<endl;
        f2<<r_user<<' '<<r_password<<endl;
        system("cls");

       // employee* emps[emp_count++] = new cashier(r_user,r_password);

        cout<<"\n\t\t\t Successfully registered. \n\n";
        cout<<"\t\t\t Returning to home page. \n\n";
        sleep_for(2s);
        system("cls");
        f1.close();
        f2.close();
        return flag;
    }
    else if(title=="server")
    {
        ofstream f2("server.txt",ios::app);
        ofstream f1("records.txt",ios::app);  //total record of all accounts

        f1<<r_user<<' '<<r_password<<endl;
        f2<<r_user<<' '<<r_password<<endl;
        system("cls");

       // employee* emps[emp_count++] = new server(r_user,r_password);

        cout<<"\n\t\t\t Successfully registered. \n\n";
        cout<<"\t\t\t Returning to home page. \n\n";
        sleep_for(2s);
        system("cls");
        f1.close();
        f2.close();
        return flag;
    }

}

void forgot()
{

}

#endif // SIGNUP_H_INCLUDED
