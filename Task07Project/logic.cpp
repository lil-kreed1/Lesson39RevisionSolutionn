#include "logic.h"

string get_prime_num(int n) {
	if (n < 2) {
		return "Error.";
	}

	string msg = "";
	bool first = true;

	for (int i = 2; i <= n; i++) {
		bool is_prime = true;

		if (i <= 1) {
			is_prime = false;
		}
		else if (i == 2) {
			is_prime = true;
		}
		else if (i % 2 == 0) {
			is_prime = false;
		}
		else {
			for (int j = 3; j <= sqrt(i); j += 2) {
				if (i % j == 0) {
					is_prime = false;
					break;
				}
			}
		}

		if (is_prime) {
			if (!first) {
				msg += " ";
			}
			msg += to_string(i);
			first = false;
		}
	}
	return msg;
}
