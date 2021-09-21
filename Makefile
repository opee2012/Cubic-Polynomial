all:	PolynomialMain

PolynomialMain: PolynomialMain.o CubicPolynomail.o
	g++ -o PolynomialMain  PolynomialMain.o CubicPolynomial.o

PolynomialMain.o: PolynomialMain.cc CubicPolynomial.h
	g++ -c -I. PolynomialMain.cc

CubicPolynomail.o: CubicPolynomial.cc CubicPolynomial.h
	g++ -c -I. CubicPolynomial.cc

clean:
	rm -f *.o PolynomialMain