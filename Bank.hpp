#pragma once
#include <iostream>
#include <string>


struct Bank {

    std::string name_;
    double amount_starting_;
    double amount_salary_;
    double amount_left_;

    Bank();
    Bank( const std::string & name,
        const double & starting,
        const double & salary);
};
