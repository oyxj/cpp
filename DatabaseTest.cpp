#include <iostream>
#include <stdio.h>
#include "Database.h"
#include "Database.cpp"
using namespace std;
using namespace Records;
int main()
{
    Database myDB;
    Employee& emp1=myDB.addEmployee("Greg","Wallis");
    emp1.fire();
    Employee& emp2=myDB.addEmployee("Marc","Gregpore");
    emp2.setSalary(100000);
    Employee& emp3=myDB.addEmployee("John","Doe");
    emp3.setSalary(10000);
    emp3.promote();
    cout<<"all employees: "<<endl<<endl;
    myDB.displayAll();
    cout<<endl<<"Current employees: "<<endl<<endl;
    myDB.displayCurrent();
    cout<<endl<<"Former employees: "<<endl<<endl;
    myDB.displayFormer();
    getchar();
    return 0;
}