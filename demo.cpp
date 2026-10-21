#include <iostream>
#include <cmath>
#include <iomanip>
#include <numbers>

using namespace std;

bool isInDomain(double x){
    return x > -4.0 && x != 14.0;
}


int main() {
    double x;

    cout << "The author of this program is Tkachenko Vitalii K-15.\n";
    cout << "This program calculates the value of the expression by given x. Variant 42.\n";

    cout << "Enter x (x > -4, x != 14): ";
    cin >> x;

    return 0;
}