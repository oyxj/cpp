#include <iostream>
#include <stdio.h>
#include "Employee.h"
#include "Employee.cpp"
using namespace std;
using namespace Records;
int main()
{
    cout<<"Testing the Employee class."<<endl;
    Employee emp;
    emp.setFirstName("John");
    emp.setLastName("Doe");
    emp.setEmployeeNumber(71);
    emp.setSalary(50000);
    emp.promote();
    emp.promote(50);
    emp.hire(); 
    emp.display();
    getchar();
    return 0;
}