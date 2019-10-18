#include <iostream>

class Rectangle {

private:
  int length_;
  int width_;

public:
  void set_length(int length);
  void set_width(int width);
  int length();
  int width();
  int area();
};

Rectangle longest_retangle(Rectangle area_1, Rectangle area_2);
