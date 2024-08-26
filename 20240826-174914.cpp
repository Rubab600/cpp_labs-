#include <iostream>

using namespace std;

int result_num, result_den;

void add_fractions(int, int, int, int);
void sub_fractions(int, int, int, int);
void multiply_fractions(int, int, int, int);
void divide_fractions(int, int, int, int);
void display_result();
void simplify_fraction();

int main(int argc, char const *argv[]) {
    int f1_num, f1_den, f2_num, f2_den;
    char dummy; // dummy character to read the '/' in fraction 1/2

    cout << "Enter first fraction e.g. 2/3\t";
    cin >> f1_num >> dummy >> f1_den;
    cout << "Enter second fraction \t";
    cin >> f2_num >> dummy >> f2_den;

    cout << "adding fractions results in \t";
    add_fractions(f1_num, f1_den, f2_num, f2_den);
    simplify_fraction();
    display_result();
    cout << endl;

    cout << "subtracting fractions results in \t";
    sub_fractions(f1_num, f1_den, f2_num, f2_den);
    simplify_fraction();
    display_result();
    cout << endl;

    cout << "multiplying fractions results in \t";
    multiply_fractions(f1_num, f1_den, f2_num, f2_den);
    simplify_fraction();
    display_result();
    cout << endl;

    cout << "dividing fractions results in \t";
    divide_fractions(f1_num, f1_den, f2_num, f2_den);
    simplify_fraction();
    display_result();
    cout << endl;

    return 0;
}

void add_fractions(int f1_num, int f1_den, int f2_num, int f2_den) {
    result_den = f1_den * f2_den;
    result_num = f1_num * f2_den + f2_num * f1_den;
}

void sub_fractions(int f1_num, int f1_den, int f2_num, int f2_den) {
    result_den = f1_den * f2_den;
    result_num = f1_num * f2_den - f2_num * f1_den;
}

void multiply_fractions(int f1_num, int f1_den, int f2_num, int f2_den) {
    result_den = f1_den * f2_den;
    result_num = f1_num * f2_num;
}

void divide_fractions(int f1_num, int f1_den, int f2_num, int f2_den) {
    result_num = f1_num * f2_den;
    result_den = f1_den * f2_num;
}

void display_result() {
    cout << result_num << "/" << result_den;
}

void simplify_fraction() {
    int gcd = 1;
    for (int i = 1; i <= min(abs(result_num), abs(result_den)); ++i) {
        if (result_num % i == 0 && result_den % i == 0) {
            gcd = i;
        }
    }
    result_num /= gcd;
    result_den /= gcd;
}