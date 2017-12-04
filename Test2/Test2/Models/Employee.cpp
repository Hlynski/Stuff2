//
//  Employee.cpp
//  Test2
//
//  Created by Hlynur Víðisson on 04/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include "Employee.hpp"
Staff::Staff()
{
    name = "";
    SSN = 0;
    pay = 0.0;
    
}
Staff::Staff(string name, int *SSN, double pay, vector<int> month, vector<int> year)
{
    this->name = name;
    this->SSN = SSN;
    this->pay = pay;
    this->month = month;
    this->year = year;
}
string Staff::get_name(string name)
{
    return name;
}
int Staff::get_SSN(int *SSN)
{
    return *SSN;
}
double Staff::get_pay(double pay)
{
    return pay;
}
int Staff::get_month(int month)
{
    return month;
}
int Staff::get_year(int year)
{
    return year;
}
