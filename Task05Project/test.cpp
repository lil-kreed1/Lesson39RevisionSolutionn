#include "test.h"

void print(string name, long long number, bool expected) {
    bool actual = is_digits_count_even(number);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with number = " << number << " result is " << (actual ? "true" : "false") << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

void test01() {
    long long number = 2;
    bool expected = false;
    print("test01", number, expected);
}

void test02() {
    long long number = -2;
    bool expected = false;
    print("test02", number, expected);
}

void test03() {
    long long number = 22;
    bool expected = true;
    print("test03", number, expected);
}

void test04() {
    long long number = -22;
    bool expected = true;
    print("test04", number, expected);
}

void test05() {
    long long number = 0;
    bool expected = false;
    print("test05", number, expected);
}

void test06() {
    long long number = 1234567;
    bool expected = false;
    print("test06", number, expected);
}

void test07() {
    long long number = 234567;
    bool expected = true;
    print("test07", number, expected);
}
