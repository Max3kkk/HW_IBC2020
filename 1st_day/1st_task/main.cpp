#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// function that calculates the area of triangle
double S(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a, b, c, p;
    a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    b = sqrt(pow(x3-x2, 2) + pow(y2-y3, 2));
    c = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));

    p = (a + b + c)/2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

//find the area through Heron's formula
int main()
{
    double x1,y1,x2,y2,x3,y3, ans;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    ans = S(x1, y1, x2, y2, x3, y3);

    //if area of triangle is less then a minimum possible value of double, then it is a line
    if (ans < 2.2250738585072014e-308)
    {
        cout << "It is not a triangle, it is a line";
        return 0;
    }
    cout << S(x1, y1, x2, y2, x3, y3);
}
