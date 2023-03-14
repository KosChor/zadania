#include <bits/stdc++.h>
using namespace std;

const double delta = 0.001;

double pierwiastek(double A)
{
    double x1 = 2;
    double x2 = (2.0 + A/2.0)/2.0;
    while(abs(x1 - x2) > delta) // abs - wartość bezwzględna
    {
    x1 = x2;
    x2 = (x1+A/x1)/2.0;
    }
    return x2;
}

int main()
{
    cout.precision(10); // do 10 miejsc po przecinku
    cout << fixed << sqrt(125) << " " << pierwiastek(125) << endl;
}
