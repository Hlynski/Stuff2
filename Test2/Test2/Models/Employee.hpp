//
//  Employee.hpp
//  Test2
//
//  Created by Hlynur Víðisson on 04/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Staff{
public:
    string name;
    int *SSN;
    double pay;
    vector<int> month;
    vector<int> year;
private:
    Staff();
    Staff(string name, int *SSN, double pay, vector<int> month, vector<int> year);
    string get_name(string name);
    int get_SSN(int *SSN);
    double get_pay(double pay);
    int get_month(int month);
    int get_year(int year);
    
};
#endif /* Employee_hpp */
