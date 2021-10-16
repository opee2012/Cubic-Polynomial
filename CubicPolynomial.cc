#include <CubicPolynomial.h>


// You must implement the class yourself ...
    // Accessor/Mutator Methods
void CubicPolynomial::SetCoefficient(int degree, double coefficient) {
    for (int i = 0; i < 3; i++) {
        _polyStore[i][0] = degree;
        _polyStore[i][1] = coefficient;
    }
}

double CubicPolynomial::GetCoefficient(int degree) {
    
    return 0;
}

    // For pretty output:
void CubicPolynomial::PrintFormattedPolynomial() {
    // Print a well-formatted version of the polynomial
}

    // Main Eval Method
double CubicPolynomial::EvaluateAt(double x) {
    // This is where the math takes place to solve find f(x)
    // when x equals a number between -2 and 2.
    return 0;
}