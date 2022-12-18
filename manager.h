#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class manager : public employee
{
    private:


    public:
        manager(string user, string pass);
        virtual ~manager();
        void showUser();
        void showEmpInfo();
};

#endif // MANAGER_H
