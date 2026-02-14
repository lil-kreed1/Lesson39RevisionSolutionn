#include "test.h"

void print(string name, int number, string expected) {
    string actual = get_prime_num(number);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with number = " << number << " result is " << actual << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

void test01() {
    int number = -1;
    string expected = "Error.";
    print("test01", number, expected);
}

void test02() {
    int number = 0;
    string expected = "Error.";
    print("test02", number, expected);
}

void test03() {
    int number = 1;
    string expected = "Error.";
    print("test03", number, expected);
}

void test04() {
    int number = 2;
    string expected = "2";
    print("test04", number, expected);
}


void test05() {
    int number = 3;
    string expected = "2 3";
    print("test05", number, expected);
}

void test06() {
    int number = 4;
    string expected = "2 3";
    print("test06", number, expected);
}

void test07() {
    int number = 5;
    string expected = "2 3 5";
    print("test07", number, expected);
}

void test08() {
    int number = 6;
    string expected = "2 3 5";
    print("test08", number, expected);
}

void test09() {
    int number = 7;
    string expected = "2 3 5 7";
    print("test09", number, expected);
}

void test10() {
    int number = 30;
    string expected = "2 3 5 7 11 13 17 19 23 29";
    print("test10", number, expected);
}

void test11() {
    int number = 75;
    string expected = "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73";
    print("test11", number, expected);
}

void test12() {
    int number = 76;
    string expected = "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73";
    print("test12", number, expected);
}

void test13() {
    int number = 77;
    string expected = "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73";
    print("test13", number, expected);
}

void test14() {
    int number = 78;
    string expected = "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73";
    print("test14", number, expected);
}
void test15() {
    int number = 79;
    string expected = "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79";
    print("test15", number, expected);
}
