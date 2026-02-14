#include "test.h"

void print(string name, int row, char sign, string expected) {
    string actual = build_pyramid(row, sign);
    cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
        << ": with row = " << row << " and sign " << sign << endl;
    cout << "-----------------------------------------------" << endl;
}

void test01() {
    int row = 2;
    char sign = '#';
    string expected = " #\n###";
    print("test01", row, sign, expected);
}

void test02() {
    int row = 3;
    char sign = '#';
    string expected = "  #\n ###\n#####";
    print("test03", row, sign, expected);
}

void test03() {
    int row = 4;
    char sign = '#';
    string expected = "   #\n  ###\n #####\n#######";
    print("test04", row, sign, expected);
}

void test04() {
    int row = 2;
    char sign = '$';
    string expected = " $\n$$$";
    print("test02", row, sign, expected);
}

void test05() {
    int row = 5;
    char sign = '@';
    string expected = "    @\n   @@@\n  @@@@@\n @@@@@@@\n@@@@@@@@@";
    print("test05", row, sign, expected);
}

void test06() {
    int row = 0;
    char sign = '#';
    string expected = "Error.";
    print("test06", row, sign, expected);
}

void test07() {
    int row = 5;
    char sign = ' ';
    string expected = "Error.";
    print("test07", row, sign, expected);
}

void test08() {
    int row = -1;
    char sign = '#';
    string expected = "Error.";
    print("test08", row, sign, expected);
}