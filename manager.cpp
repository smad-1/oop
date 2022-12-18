#include "manager.h"
#include "myGlobals.h"
//#include "signup.h"

manager::manager(string user, string pass):employee(user,pass)
{
    //ctor
}

manager::~manager()
{
    //dtor
}

void manager::showUser()
{
    getInfo();
}

void manager::showEmpInfo()
{
    for(int i=0; i<100; i++)
    {
        globals::emps[i]->getInfo();
    }
}
