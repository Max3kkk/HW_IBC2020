#include <iostream>
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
//we find the area of parallelogram by the sum of 2 triangles
//summarize the areas of triangles, which consist of parallelogram's sides and the point
//if the sums of areas are equal, then the point lies inside of parallelogram
int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, wholeS, sumS;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;

    wholeS = S(x1, y1, x2, y2, x3, y3) + S(x3, y3, x4, y4, x1, y1);
    sumS = S(x1, y1, x2, y2, x5, y5) + S(x2, y2, x3, y3, x5, y5) + S(x3, y3, x4, y4, x5, y5) + S(x4, y4, x1, y1, x5, y5);

    //to eliminate inaccuracy (instead of comparing it with 0.0)
    if ((wholeS - sumS) >= 2.2250738585072014e-308)
        cout << "the point lies inside";
    else
        cout << "the point lies outside";
}
