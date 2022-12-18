#ifndef SIGNUP_H_INCLUDED
#define SIGNUP_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string.h>
#include <chrono>
#include <thread>
#include "signup.h"

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

void login()
{
    int flag=0;
    string userID, userPass, id, pass;
    system("cls")

    cout<<"\t\t\t LOGIN PAGE   \n\n";
    cout<<"\t\t\tEnter username: ";
    cin>>userID;
    cout<<"\t\t\tEnter password: ";
    cin>>userPass;

    ifstream input("records.txt");   //ifstream reads the file

    while(input>>id>>pass)
    {
        if(id==userID && pass==userPass)
        {
            flag=1;
            system("cls");
        }
    }
    input.close();

    if(flag)
    {
        cout<<"\t\t\tSuccessfully logged in.\n\n";
        main();
    }
    else
    {
        cout<<"\t\t\tInvalid username or password.\n\n";
        main();
    }
}

void register_()
{
    string r_user, r_password, r_id, r_pass;
    system("cls");

    cout<<"\t\t\t REGISTRATION PAGE  \n\n";
    cout<<"\t\t\tEnter username: ";
    cin>>r_user;
    cout<<"\t\t\tEnter password: ";
    cin>>r_password;

    ofstream f1("records.txt",ios::app);  //ofstream writes to the file, app->appends

    f1<<r_user<<' '<<r_password<<endl;
    system("cls");

    cout<<"\n\t\t\t Successfully registered. \n\n";
    cout<<"\t\t\t Returning to home page. \n\n";
    sleep_for(2s);
    main();
}

void forgot()
{

}
