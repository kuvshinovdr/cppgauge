#include <iostream>
#include <cmath>

double sign(double x)
{
    if (x < 0.) {
        return -1.;
    } else if (0. < x) {
        return +1.;
    } else {
        return  0.;
    }
}

int main()
{
    using namespace std;
    cout << "Enter a, b, c: ";
    double a, b, c;
    if (cin >> a >> b >> c) {
        cout << "Solving " << a << "x2 + " << b << "x + " << c << " == 0:\n";
        double d = b*b - 4.0*a*c;
        if (d > 0.) {
            double q = -0.5 * (b + sign(b) * sqrt(d));
            double x1 = q / a;
            double x2 = c / q;
            cout << "x1 == " << x1 << '\n';
            cout << "x2 == " << x2 << '\n';
        } else if (d == 0.) {
            double x = -0.5 * b / a;
            cout << "x == " << x << '\n';
        } else {
            cout << "No roots.\n";
        }

        return 0;
    } else {
        cout << "Failed to parse a, b, c.\n";
        return 1;
    }
}
