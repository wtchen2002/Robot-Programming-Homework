#include <iostream>
#include <array>

namespace math {

double Cap(double number, double min, double max) {
  if(number < min) {
    return min;
  } else if(number > max) {
    return max;
  } else {
    return number;
  }
}

std::array<double> CapArray(std::array<double> array, double min, double max) {
  for(double i:array) {
    if(i < min) {
      i = min;
    } else if(i > max) {
      i = min;
    }
  }
  return array;
}

}
