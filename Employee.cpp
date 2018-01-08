#include <iostream>
#include "Employee.h"
using namespace std;
namespace Records
{
    Employee::Employee()
    :mFirstName("")
    ,mLastName("")
    ,mEmployeeNumber(-1)
    ,mSalary(kDefaultStartingSalary)
    ,mHired(false)
    {}

    void Employee::promote(int raiseAmount)
    {
        setSalary(getSalary()+raiseAmount);
    }

    void Employee::demote(int demeritAmount)
    {
        setSalary(getSalary()-demeritAmount);
    }

    void Employee::hire()
    {
        mHired=true;
    }

    void Employee::fire()
    {
        mHired=false;
    }

    void Employee::display() const
    {
        cout<<"Employee: "<<getLastName()<<", "<<getFirstName()<<endl;
        cout<<"--------------------------"<<endl;
        cout<<(mHired?"Current Employee":"Former Employee")<<endl;
        cout<<"Employee Number: "<<getEmployeeNumber()<<endl;
        cout<<"Salary: $"<<getSalary()<<endl;
        cout<<endl;
    }

    const string& Employee::getLastName() const
    {
        return mLastName;
    }

    void Employee::setLastName(const string& lastName)
    {
        mLastName=lastName;
    }

    const string& Employee::getFirstName() const
    {
        return mFirstName;
    }

    void Employee::setFirstName(const string& firstName)
    {
        mFirstName=firstName;        
    }

    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }

    void Employee::setEmployeeNumber(int number) 
    {
        mEmployeeNumber=number;
    }
    
    int Employee::getSalary() const
    {
        return mSalary;
    }

    void Employee::setSalary(int salaray)
    {
        mSalary=salaray;
    }

    bool Employee::getIsHired() const
    {
        return mHired;
    }
}