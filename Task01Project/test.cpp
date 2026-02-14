#include "test.h"

void print(string name, int like, int day, string expected) {
    string actual = count_likes(day, like);

    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << " with days = " << day << " and likes = " << like << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

void test01() {
    int like = 100;
    int day = 3;
    string expected = "Day 1: 100 likes\nDay 2: 200 likes\nDay 3: 300 likes";
    print("test01", like, day, expected);
}

void test02() {
    int like = 50;
    int day = 1;
    string expected = "Day 1: 50 likes";
    print("test02", like, day, expected);
}

void test03() {
    int like = 0;
    int day = 2;
    string expected = "Day 1: 0 likes\nDay 2: 0 likes";
    print("test03", like, day, expected);
}

void test04() {
    int like = 8;
    int day = 0;
    string expected = "Error.";
    print("test04", like, day, expected);
}

void test05() {
    int like = 5;
    int day = -1;
    string expected = "Error.";
    print("test05", like, day, expected);
}

void test06() {
    int like = -2;
    int day = 7;
    string expected = "Error.";
    print("test06", like, day, expected);
}
