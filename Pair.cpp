#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Pair::Init(double a, double b)
{
	SetFirst(a);
	SetSecond(b);
}

void Pair::Read()
{
	double a, b;
	cout << "first="; cin >> a;
	cout << "second="; cin >> b;
	Init(a, b);
}

void Pair::Display() const
{
	cout << "first=" << GetFirst() << endl;
	cout << "second=" << GetSecond() << endl;
}

string Pair::toString() const
{
	stringstream sout;

	sout << "First=" << first << " and second=" << second;
	return sout.str();
}
