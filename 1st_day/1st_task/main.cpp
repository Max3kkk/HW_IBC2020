#include <iostream>
#include <string>
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
    float x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((x1 == x2 && x2 == x3 && x1 == x3) or (y1 == y2 && y2 == y3 && y1 == y3))
    {
        cout << "It is not a triangle, it is a line";
        return 0;
    }

    cout << S(x1, y1, x2, y2, x3, y3);
}
