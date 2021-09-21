#include<iostream>
#include<CubicPolynomial.h>

using namespace std;

int main() {
  double a, b, c, d;
  CubicPolynomial polynomial;

  cout << "We're interested in the polynomial: ax^3 + bx^2 + cx + d" << endl;

  cout << "  What is the coefficient a: ";
  cin >> a;
  polynomial.SetCoefficient(3,a);

  cout << "  What is the coefficient b: ";
  cin >> b;
  polynomial.SetCoefficient(2,b);

  cout << "  What is the coefficient c: ";
  cin >> c;
  polynomial.SetCoefficient(1,c);

  cout << "  What is the coefficient d: ";
  cin >> d;
  polynomial.SetCoefficient(0,d);

  cout << endl;

  cout << "Here is your polynomial: " << endl;
  polynomial.PrintFormattedPolynomial();

  cout << endl;
  cout << "x\tf(x)" << endl;
  cout << "---\t---" << endl;
  for (double x=-2.0; x<2.0; x+=0.2)
    cout << x << '\t' << polynomial.EvaluateAt(x) << endl;
  cout << endl;
}