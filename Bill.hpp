#pragma once
#include <iostream>
#include <string>


struct Bill {

    std::string payee_;
    double amount_due_;
    unsigned int due_month_;
    unsigned int due_day_;
    Bill();
    Bill( const std::string & name,
        const double & dues,
        const unsigned int & month,
        const unsigned int & day);
    bool isOverdue(const unsigned int &currMonth, const unsigned int& currDay );
    unsigned int daysOverdue(const unsigned int &currMonth, const unsigned int& currDay );
};
