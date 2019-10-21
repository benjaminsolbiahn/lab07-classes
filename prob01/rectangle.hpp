#include <iostream>

class Rectangle{

private:
  int length_;
  int width_;

public:
  void set_length(unsigned int length);
  void set_width(unsigned int width);
  unsigned int length();
  unsigned int width();
  unsigned int area();
  Rectangle longest_rectangle(Rectangle rect1, Rectangle rect2);
};
