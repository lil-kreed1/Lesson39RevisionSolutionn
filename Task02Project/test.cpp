#include "test.h"

void print(string name, int n, int m, string expected) {
    string actual = get_odd_numbers_sequence(n, m);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with n = " << n << " and m = " << m << " result is " << actual << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
}

void test01() {
    int n = 1;
    int m = 5;
    string expected = "5 3 1";
    print("test01", n, m, expected);
}

void test02() {
    int n = 5;
    int m = 1;
    string expected = "5 3 1";
    print("test02", n, m, expected);
}

void test03() {
    int n = 6;
    int m = 2;
    string expected = "5 3";
    print("test03", n, m, expected);
}

void test04() {
    int n = 2;
    int m = 6;
    string expected = "5 3";
    print("test04", n, m, expected);
}


void test05() {
    int n = 62;
    int m = 77;
    string expected = "77 75 73 71 69 67 65 63";
    print("test05", n, m, expected);
}

void test06() {
    int n = 8;
    int m = -4;
    string expected = "7 5 3 1 -1 -3";
    print("test06", n, m, expected);
}

void test07() {
    int n = 13;
    int m = 13;
    string expected = "13";
    print("test07", n, m, expected);
}

void test08() {
    int n = 4;
    int m = 4;
    string expected = "";
    print("test08", n, m, expected);
}

void test09() {
    int n = -5;
    int m = -10;
    string expected = "-5 -7 -9";
    print("test09", n, m, expected);
}

void test10() {
    int n = -10;
    int m = -6;
    string expected = "-7 -9";
    print("test10", n, m, expected);
}

void test11() {
    int n = 0;
    int m = -10;
    string expected = "-1 -3 -5 -7 -9";
    print("test11", n, m, expected);
}

void test12() {
    int n = 1;
    int m = -10;
    string expected = "1 -1 -3 -5 -7 -9";
    print("test11", n, m, expected);
}