#include <string>

#include "Bank.hpp"

/************************************************
** Member function definitions
************************************************/


Bank::Bank() {
  name_ = "";
  amount_starting_ = 0.0;
  amount_salary_ = 0.0;
  amount_left_ = 0.0;
}

Bank::Bank( const std::string & name,
      const double & starting,
      const double & salary){
      name_ = name;
      amount_starting_ = starting;
      amount_salary_ = salary;
}
