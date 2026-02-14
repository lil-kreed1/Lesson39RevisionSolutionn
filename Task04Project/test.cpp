#include "test.h"

void print(string name, int n, int m, string expected) {
    string actual = get_numbers_in_order(n, m);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with n = " << n << " and m = " << m << " numbers order is: " << actual << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}

void test01() {
    int n = 2;
    int m = 7;
    string expected = "2 3 4 5 6 7";
    print("test01", n, m, expected);
}

void test02() {
    int n = 5;
    int m = 1;
    string expected = "5 4 3 2 1";
    print("test02", n, m, expected);
}

void test03() {
    int n = 9;
    int m = 9;
    string expected = "9";
    print("test03", n, m, expected);
}

void test04() {
    int n = -4;
    int m = 4;
    string expected = "-4 -3 -2 -1 0 1 2 3 4";
    print("test04", n, m, expected);
}


void test05() {
    int n = 4;
    int m = -4;
    string expected = "4 3 2 1 0 -1 -2 -3 -4";
    print("test01", n, m, expected);
}

void test06() {
    int n = -1;
    int m = -5;
    string expected = "-1 -2 -3 -4 -5";
    print("test01", n, m, expected);
}

void test07() {
    int n = -7;
    int m = -2;
    string expected = "-7 -6 -5 -4 -3 -2";
    print("test01", n, m, expected);
}