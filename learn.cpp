#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main_1() {
    cout << 3-4 << endl;
    cout << 5*6 << endl;
    cout << 8/4 << endl;
    cout << fixed << setprecision(2) << (float) 8/5 << endl;
    return 0;
}

int main_2() {
    const double pi = 3.14159265358979323846;
    double r, h;
    cin >> r >> h;
    // output surface area of cylinder
    cout << (2*pi*r*h+pi*r*r*2) << endl;
    return 0;
}

// Q: reverse three digit number's order: 364 --> 463
int main_3() {
    int num;
    cin >> num;
    //cout << (num%10)*100+(num%100-num%10)+(num/100) << endl;
    cout << (num%10) << (num%100-num%10)/10 << (num/100) << endl;
    return 0;
}

// Q: output two numbers swapped: 24 59 --> 59 24
int main_4() {
    int one;
    int two;
    cin >> one >> two;
    one = one + two;
    two = one - two;
    one = one - two;
    cout << one << ' ' << two << endl;
    return 0;
}

/*

a         b

11        14
11 + 14,  14
11 + 14,  11+14-14
11+14-11, 11
14        11

a = a + b;
b = a - b;
a = a - b;

*/