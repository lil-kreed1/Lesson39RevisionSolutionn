#include "logic.h"

string count_likes(int day, int like) {
	if (day <= 0 || like < 0) {
		return "Error.";
	}

	string msg = "Day 1: " + to_string(like) + " likes";

	for (int i = 2; i <= day; i++) {
		msg += "\nDay " + to_string(day) + ": " + to_string(i * like) + " likes";
	}

	return msg;
}