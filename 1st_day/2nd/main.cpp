#include <iostream>
#include <cmath>

using namespace std;

float S(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, p;
    a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    b = sqrt(pow(x3-x2, 2) + pow(y2-y3, 2));
    c = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));

    p = (a + b + c)/2.0;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, wholeS, sumS;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;

    wholeS = S(x1, y1, x2, y2, x3, y3) + S(x3, y3, x4, y4, x1, y1);
    sumS = S(x1, y1, x2, y2, x5, y5) + S(x2, y2, x3, y3, x5, y5) + S(x3, y3, x4, y4, x5, y5) + S(x4, y4, x1, y1, x5, y5);

//    cout << wholeS << endl << sumS << endl;
    if (wholeS == sumS)
        cout << "the point lies inside";
    else
        cout << "the point lies outside";
}
