#include "logic.h"

string get_numbers_in_order(int n, int m) {
	string s = "";

	int d =n > m ? -1 : 1;

	for (int i = n; i != m; i+= d) {
		s += to_string(i) + " ";
	}

	s += to_string(m);

	return s;
}