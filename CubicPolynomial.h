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
      double _polyStore[4][2];
};

#endif