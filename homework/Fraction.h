#pragma once
#include <iostream>
using namespace std;
class Fraction
{
	int chislitel;
	int znamenatel;
public:
	Fraction(int num, int denom) :chislitel{ num }, znamenatel{ denom }{
		cout << "Constructor" << this << endl;
	}

	Fraction() : Fraction(1, 1) {
		cout << "Constructor" << this << endl;
	}
	Fraction(const Fraction& f) :chislitel{ f.chislitel }, znamenatel{ f.znamenatel }{
		cout << "Constructor" << this << endl;
	}

	~Fraction() {
		cout << "Destructor" << this << endl;
	}

	void print() {
		cout << chislitel << "/" << znamenatel << endl;
	}


};