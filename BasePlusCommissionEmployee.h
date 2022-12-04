//
// Created by Administrator on 2022/10/27.
//

#ifndef CLION_BASEPLUSCOMMISSIONEMPLOYEE_H
#define CLION_BASEPLUSCOMMISSIONEMPLOYEE_H
#include <iostream>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee {
public:
    BasePlusCommissionEmployee(CommissionEmployee &, double=0.0);

    void setBaseSalary(double);
    double getBaseSalary() const;
    double earnings() const;
    void print() const;
private:
    double baseSalary;
    CommissionEmployee cEmp;
};


#endif //CLION_BASEPLUSCOMMISSIONEMPLOYEE_H
