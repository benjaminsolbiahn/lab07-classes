#include <iostream>

Class Car[]:{

private:
  std::string name_;
  double price_;
  unsigned int mileage_;

public:
  void set_name(std::string name);
  void set_price(double price);
  void set_mileage(unsigned int mileage);
  std::string name();
  double price();
  unsigned int mileage();
};

lowest_price(Car[], unsigned int size)
