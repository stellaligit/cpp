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

// Q: given the total number of heads and legs, find how many chickens and rabbits there are. If it is impossible, output "no answer."
int main_5() {
    // n = total heads, m = total legs
    int n, m;
    cin >> n >> m;
    // output chicken, rabbits | or no answer
    int chicken = (n * 4 - m)/2;
    if ((m % 2 == 1) || (chicken < 0) || (chicken > n)) {
        cout << "No answer" << endl;
    } else {
        int rabbit = n - chicken;
        cout << chicken << ' ' << rabbit << endl;
    }
    return 0;
}

// Q: sort three numbers from least to greatest
int main_6a() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            if (b > c){
                cout << c << ' ' << b << ' ' << a << endl;
            } else {
                cout << b << ' ' << c << ' ' << a << endl;   
            }
        } else {
            cout << b << ' ' << a << ' ' << c << endl;   
        }
    } else {
        if (b > c) {
            if (a > c){
                cout << c << ' ' << a << ' ' << b << endl;
            } else {
                cout << a << ' ' << c << ' ' << b << endl;   
            }
        } else {
            cout << a << ' ' << b << ' ' << c << endl;   
        }
    }
    return 0;
}

int main_6b() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        cout << c << ' ' << a << ' ' << b << endl;
    } else if (b > c) {
        cout << a << ' ' << c << ' ' << b << endl;
    } else {
        cout << a << ' ' << b << ' ' << c << endl;
    }
    return 0;
}

// Q: given a temperature in Fahrenheit, calculate the degree in Celsius to 3 decimal points
int main_7() {
    float f;
    cin >> f;
    cout << fixed << setprecision(3) << 5*(f-32)/9 << endl;
    return 0;
}

int main_8() {
    int a;
    cin >> a;
    cout << a*(a+1)/2 << endl;
    return 0;
}

// Q: given a degree from 0 degrees to 360 degrees, output the sin() and cos() value of that degree
int main_9() {
    int a;
    cin >> a;
    double b = a *(M_PI / 180.0); // conversion because standard sin() is in radians in c++
    cout << sin(b) << ' ' << cos(b) << endl;
    return 0;
}

// Q: Cost of a shirt is $95. If you purchase over $300, you get a discount of 15%. Calculate your final amount.
int main_10() {
    int shirts;
    cin >> shirts;
    float cost = shirts*95;
    if (cost >= 300) {
        cost = 0.85*cost;
    }
    cout << fixed << setprecision(2) << cost << endl;
    return 0;
}

// Q: given three triangle side lengths, solve if they form a triangle and if they form a right angle triangle
int main_11() {
    int a, b , c;
    cin >> a >> b >> c;
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    if (b > c) {
        int t = b;
        b = c;
        c = t;
    }
    if (a+b<=c) {
        cout << "not a triangle" << endl;
    } else if (a*a + b*b == c*c) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}

// Q: Given the year, find if the year is a leap year.
int main_12a() {
    int year;
    cin >> year;
    // Leap year = divisible by 4, or if divisible by 100 must be divisible by 400
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    } else {
        if (year % 4 == 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}

int main_12b() {
    int year;
    cin >> year;
    bool t;
    if (year % 4 == 0) {
        if (year % 400 == 0) {
            t = true;
        } else if (year % 100 != 0) {
            t = true;
        }
    }
    if (t) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}

int main_12c() {
    int year;
    cin >> year;
    bool t = (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0));
    // if t is true then first option, if t is false then second one
    cout << (t ? "yes" : "no") << endl;
    return 0;
}

int main_13()
{
    int x = 0;
    int y = 0;
    bool a = false, b = true;
    if (a)
        if (b)
            y++;
        else
            y++;
            x++;
    return 0;
}

// for loops
int main_14() {
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << i << endl;
    }
    cout << i;
    return 0;
}

// output all 4 digit perfect squares in the format aabb
int main_15a() {
    for (int i = 33; i < 100; i++) {
        int a = i*i;
        if ((a/100 % 11 == 0) && (a%100 % 11 == 0)) {
            cout << a << endl;
        }
    }
    return 0;
}

// another way but in this case its worse
int main_15b() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            int a = (i * 1100) + (j * 11);
            int b = sqrt(a);
            if (b * b == a) {
                cout << a << endl;
            }
        }
    }
    return 0;
}

// see how many times it takes for a number to become 1 if: if even, divide by 2 | if odd, n = 3n+1
int main_16a() {
    for (int b = 3; b <= 20; b++) {
        int a = b;
        int counter = 0;
        while (a != 1) {
            // (a%2 == 0) ? (a = a/2) : (a = 3*a + 1);
            a = (a%2 == 0) ? (a/2) : (3*a + 1);
            counter++;
        }
        cout << b << ' ' << counter << endl;
    }
    return 0;
}

//for testing out big numbers like 987654321
int main_16b() {
    // unsigned int (all positive), long or long long, etc.
    unsigned int a, counter = 0;
    // int t = 0;
    cin >> a;
    while (a != 1) {
        // (a%2 == 0) ? (a = a/2) : (a = 3*a + 1);
        a = (a%2 == 0) ? (a/2) : (3*a + 1);
        counter++;
        /*
        t++;
        if (t%1000==0) {
            cout << "step " << t << ' ' << a << endl;
            break;
        }
        */
    }
    cout << counter << endl;
    return 0;
}

int main_17() {
    float value = 0;
    int count = 0;
    // can't use "^" for exponents in c++
    // e means "times ten to the power of"
    for (int i = 1; i <= 1e6+1; i+=2) {
        count += 1;
        if (count%2==0) {
            value -= 1.0/i;
        } else {
            value += 1.0/i;
        }
    }
    cout << value << endl;
    return 0;
}