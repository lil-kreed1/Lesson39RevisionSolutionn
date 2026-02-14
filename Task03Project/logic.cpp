#include "logic.h"

bool is_power_of_two(int num){
	if (num <= 0) {
		return false;
	}

	while (num % 2 == 0) {
		num /= 2;
	}

	return num == 1;
}