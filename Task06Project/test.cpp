#include "test.h"

void print(string name, int index, long long expected) {
    long long actual = get_fibo_number(index);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with index = " << index << " result is " << actual << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

void test01() {
    int index = -10;
    long long expected = -1;
    print("test01", index, expected);
}

void test02() {
    int index = 0;
    long long expected = -1;
    print("test02", index, expected);
}

void test03() {
    int index = 1;
    long long expected = 0;
    print("test03", index, expected);
}

void test04() {
    int index = 2;
    long long expected = 1;
    print("test04", index, expected);
}

void test05() {
    int index = 3;
    long long expected = 1;
    print("test05", index, expected);
}

void test06() {
    int index = 4;
    long long expected = 2;
    print("test06", index, expected);
}

void test07() {
    int index = 5;
    long long expected = 3;
    print("test07", index, expected);
}

void test08() {
    int index = 8;
    long long expected = 13;
    print("test08", index, expected);
}
void test09() {
    int index = 10;
    long long expected = 34;
    print("test09", index, expected);
}

void test10() {
    int index = 20;
    long long expected = 4181;
    print("test10", index, expected);
}
