#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "person.h"
#include "signup.h"
#include "myGlobals.h"

namespace globals{

  employee* emps[100];
  int emp_count=0;
}

//employee* emps[100];

using namespace std;

int main(void)
{
   // person p("Sad",22,123);
  //  p.getInfo();

  using namespace std::this_thread;     // sleep_for, sleep_until
  using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
  using std::chrono::system_clock;

  int choice;
  cout<<"\t\t\t________________________________\n\n";
  cout<<"\t\t\t   WELCOME TO THE LOGIN PAGE     \n\n\n";
  cout<<"\t\t\t1. Login."<<endl;
  cout<<"\t\t\t2. Sign up."<<endl;
  cout<<"\t\t\t3. Forgot password."<<endl;
  cout<<"\t\t\t4. Exit.\n"<<endl;
  cout<<"\t\t\tEnter choice: ";
  cin>>choice;
  cout<<endl;

  int option;

  switch(choice)
  {
  case 1:
    {
        sleep_for(1s);
        cout<<"\t\t\t1. Login as Manager."<<endl;
        cout<<"\t\t\t2. Login as Chef."<<endl;
        cout<<"\t\t\t3. Login as Cashier."<<endl;
        cout<<"\t\t\t4. Login as Server."<<endl;

        cin>>option;

        string userID, userPass;
        system("cls");

        cout<<"\t\t\t LOGIN PAGE   \n\n";
        cout<<"\t\t\tEnter username: ";
        cin>>userID;
        cout<<"\t\t\tEnter password: ";
        cin>>userPass;

        bool log=login(option,userID,userPass);

        if(log) break;
        else main();
    }
  case 2:
    {
        sleep_for(1s);
        string title;
        cout<<"Job title (manager/chef/cashier/server): ";
        cin>>title;
        register_(title);
        main();
        break;
    }
  case 3:
    {
        cout<<"forgot pass"<<endl;
        break;
    }
  case 4:
    {
        cout<<"\t\t\tExiting home page. Thank You!\n\n";
        break;
    }
  default:
    {
       // system("cls");
        cout<<"\t\t\tInvalid choice.\n\n";
        sleep_for(2s);
        system("cls");
        main();
    }
  }

  if(option==1)
  {

    cout<<"HERE"<<endl;
    cout<<globals::emp_count<<endl;

    globals::emps[0]->setInfo();
    globals::emps[0]->showUser();
  }




    return 0;
} // namespace std;
