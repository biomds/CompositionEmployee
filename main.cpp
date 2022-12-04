//
// Created by Administrator on 2022/11/8.
//
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

/*
 * (Composition as an Alternative to Inheritance) Many programs written with inheritance
 * could be written with composition instead, and vice versa. Rewrite class BasePlusCommissionEmployee
 * of the CommissionEmployee–BasePlusCommissionEmployee hierarchy to use composition
 * rather than inheritance. After you do this, assess the relative merits of the two approaches for 
 * designing classes CommissionEmployee and BasePlusCommissionEmployee, as well as for object-oriented 
 * programs in general. Which approach is more natural? Why?
 */

using namespace std;

int main()
{

    CommissionEmployee cEmP("Sue", "Jones", "222-22-2222", 5000, .04);
    BasePlusCommissionEmployee employee(cEmP, 300);
    // set floating-point output formatting
    cout << fixed << setprecision(2);
    // get commission employee data
    cout << "Employee information obtained by get functions: \n"
    << "\nFirst name is " << cEmP.getFirstName()
    << "\nLast name is " << cEmP.getLastName()
    << "\nSocial security number is "
    << cEmP.getSocialSecurityNumber()
    << "\nGross sales is " << cEmP.getGrossSales()
    << "\nCommission rate is " << cEmP.getCommissionRate() << endl;

    employee.setBaseSalary(1000);
//    employee.setCommissionRate(.1);
    cout << "\nUpdated employee information output by print function\n" << endl;
    employee.print();
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
    return 0;
}


