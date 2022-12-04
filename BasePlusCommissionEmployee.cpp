//
// Created by Administrator on 2022/10/27.
//
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(CommissionEmployee &emp, double salary)
        :cEmp(emp)
        {
            setBaseSalary(salary);
        }

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary >= 0)
    {
        baseSalary = salary;
    } else{
        throw invalid_argument("Salary must be >= 0.0");
    }

}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + cEmp.earnings();
}

void BasePlusCommissionEmployee::print() const
{

    cout << "base-salaried commission employee: ";
    cEmp.print();
    cout << "\nbase salary: " << getBaseSalary();

}
