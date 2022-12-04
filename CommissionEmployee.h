//
// Created by Administrator on 2022/10/27.
//

#ifndef CLION_COMMISSIONEMPLOYEE_H
#define CLION_COMMISSIONEMPLOYEE_H
#include <iostream>

class CommissionEmployee {
public:
    CommissionEmployee(const std::string&, const std::string&,
            const std::string&, double=0.0, double=0.0);
    void setFirstName(const std::string&);
    std::string getFirstName() const;
    void setLastName(const std::string&);
    std::string getLastName() const;
    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber() const;
    void setGrossSales(double);
    double getGrossSales() const;
    void setCommissionRate(double);
    double getCommissionRate() const;
    double earnings() const;
    void print() const;

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales;
    double commisionRate;

};


#endif //CLION_COMMISSIONEMPLOYEE_H
