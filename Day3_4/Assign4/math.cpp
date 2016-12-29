#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

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

std::vector<double> CapVector(std::vector<double> vector, double min, double max) {
  for(int i = 0; i < (vector.size() - 1); i++) {
    if(vector[i] < min) {
      vector[i] = min;
    } else if(i > max) {
      vector[i] = min;
    }
  }
  return vector;
}

double Average(std::vector<double> vector) {
  double sum = 0;
  for(int i = 0; i < (vector.size() - 1); i++) {
    sum += vector[i];
  }
  return sum / vector.size();
}

bool Sign(double number) {
  if(number > 0) {
    return true;
  } else if(number < 0) {
    return false;
  }
}

double Median(std::vector<double> vector) {
  std::sort(vector.begin(), vector.end());
  double median;
  if(vector.size() % 2 == 0) {
    median = (vector[(vector.size() / 2) - 1] + vector[(vector.size() / 2)]) / 2;
  } else {
    median = vector[(vector.size() - 1) / 2];
  }
  return median;
}

double Mode(std::vector<double> vector) {
  int number = 0;
  int current_number = vector[number];
  int count = 0;
  int mode = 0;
  for(int i = 0; i < (vector.size() - 1); i++) {
    for(int j = 0; j < (vector.size() - 1); i++) {
      if(vector[j] == current_number) {
        count += 1;
      }
    }
    if(count > mode) {
      mode = count;
    }
    count = 0;
    number += 1;
  }
  return mode;
}

std::vector<double> Difference (std::vector<double> vector1, std::vector<double> vector2) {
  std::vector<double> final_vector;
  for(int i = 0; i < (vector1.size() - 1); i++) {
    final_vector.push_back(vector1[i] - vector2[i]);
  }
  return final_vector;
}

}
