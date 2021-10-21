#ifndef CUBICPOLYNOMIAL_H
#define CUBICPOLYNOMIAL_H

#include<iostream>
#include<iomanip>

using namespace std;

#define MAXIMUMDEGREE 3

class CubicPolynomial {
  public:
    // Default Constructor
    CubicPolynomial();

    // Accessor/Mutator Methods
    void SetCoefficient(int degree, double coefficient);
    double GetCoefficient(int degree);

    // For pretty output:
    void PrintFormattedPolynomial();

    // Main Eval Method
    double EvaluateAt(double x);

  private:
    // You'll need to store the coefficient in an array of some kind ...
    // Using a static array to store the coefficients.
      double polyStore[4];
};

#endif