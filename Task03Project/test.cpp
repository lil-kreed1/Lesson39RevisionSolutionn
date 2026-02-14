#include "test.h"

void print(string name, int number, bool expected) {
    bool actual = is_power_of_two(number);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with number = " << number << " result is " << (actual ? "true" : "false") << endl;
    cout << "-------------------------------------------------------" << endl;
}

void test01() {
    int number = 2;
    bool expected = true;
    print("test01", number, expected);
}

void test02() {
    int number = -2;
    bool expected = false;
    print("test02", number, expected);
}

void test03() {
    int number = 1;
    bool expected = true;
    print("test03", number, expected);
}

void test04() {
    int number = 8;
    bool expected = true;
    print("test04", number, expected);
}

void test05() {
    int number = 256;
    bool expected = true;
    print("test05", number, expected);
}

void test06() {
    int number = 1024;
    bool expected = true;
    print("test06", number, expected);
}

void test07() {
    int number = 32;
    bool expected = true;
    print("test07", number, expected);
}

void test08() {
    int number = 3;
    bool expected = false;
    print("test08", number, expected);
}

void test09() {
    int number = 10;
    bool expected = false;
    print("test09", number, expected);
}

void test10() {
    int number = 80;
    bool expected = false;
    print("test10", number, expected);
}