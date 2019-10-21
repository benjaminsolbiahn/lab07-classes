#include <iostream>
#include <iomanip>
#include "rectangle.hpp"

  void Rectangle::set_length(unsigned int length){
    length_ = length;
  }
  void Rectangle::set_width(unsigned int width){
    width_ = width;
  }
  unsigned int Rectangle::length(){
    return length_;
  }
  unsigned int Rectangle::width(){
    return width_;
  }
  unsigned int Rectangle::area(){
    return length_ * width_;
  }
  Rectangle longest_rectangle(Rectangle rect1, Rectangle rect2){
    if (rect1.area() > rect2.area()) {
      return rect1;
    } else {
      return rect2;
    }
  }
