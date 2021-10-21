#include <CubicPolynomial.h>
#include <cmath>
#include <iomanip>

// default constructor. Sets all elements in the array to 0.
CubicPolynomial::CubicPolynomial() {
    for (int i = 0; i < 4; i++) {
        polyStore[i] = 0;
    }
};

// You must implement the class yourself ...
    // Accessor/Mutator Methods
void CubicPolynomial::SetCoefficient(int degree, double coefficient) {;
    polyStore[degree] = coefficient;
}
double CubicPolynomial::GetCoefficient(int degree) {
    return polyStore[degree];
}

    // For pretty output:
void CubicPolynomial::PrintFormattedPolynomial() {
    // We are displaying output of ax^3+bx^2+cx+d on terminal
    cout << "f(x) = "
    << polyStore[3] << "x\u00B3 + " // \u00B3 is unicode 8 for ^3
    << polyStore[2] << "x\u00B2 + " // \u00B3 is unicode 8 for ^2
    << polyStore[1] << "x + "
    << polyStore[0] << endl;
}

    // Main Eval Method
double CubicPolynomial::EvaluateAt(double x) {
    // This is where the math takes place to solve find f(x)
    // when x equals a number between -2 and 2.
    double number = 0;

    // for loop to solve f(x). i is used both for the exponent and the element selection.
    for (int i = 3; i > -1; i--)
    {
        number += (polyStore[i] * pow(x,i));
    }

    return number;
}