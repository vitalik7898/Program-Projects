#include <iostream>
#include <cmath>
#include <iomanip>
#include <numbers>

using namespace std;

// Checks whether the given value x belongs to the expression domain.
bool isInDomain(double x){
    return x > -4.0 && x != 14.0;
}


// instruction for equation
double f(double x) {
    using numbers::e;
    using numbers::pi;

    double part1 = sin(19 / 65);
    double part2_1 = (21 * e) / (59 * pi);
    double part2_2 = 8.0 / ((x + 12.0) * (x - 14.0));
    double part3 = part2_1 * part2_2;
    double part4 = 13 * (pi / 2 - atan(x + 3));
    double part5 = 1 / sqrt(x + 4);

    return part1 - part3 - part4 - part5;
}


int main() {
    double x;

    cout << "The author of this program is Tkachenko Vitalii K-15.\n";
    cout << "This program calculates the value of the expression by given x. Variant 42.\n";

    cout << "Enter x (x > -4, x != 14): ";
    cin >> x;

    cout << "***** do calculations ...";
    bool defined = isInDomain(x);
    double result = 0.0;
    if (defined) {
        result = f(x);
    }

    return 0;
}