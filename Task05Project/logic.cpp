#include "logic.h"

bool is_digits_count_even(long long number){
	number = number < 0 ? -number : number;

	int count = 1;

	while (number > 9) {
		number /= 10;
		count++;
	}

	return count % 2 == 0;
}