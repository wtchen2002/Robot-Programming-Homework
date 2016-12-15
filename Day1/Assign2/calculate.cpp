#include <iostream>
#include "calculate.h"

int calculate(int value) {
	if (value >= 0) {
		return value;
	}
	else if (value < 0) {
		value = value - (2 * value);
		return value;
	}
}
