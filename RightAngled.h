#pragma once
#include "Pair.h"

class RightAngled
{
private:
	Pair test;
public:
	void setValue1();                                      //is
	void setValue2();                                         //is
	double getFirst()const { return test.GetFirst(); };      //is
	double getSecond()const { return test.GetSecond(); };//is
	Pair getPair() const { return test; };                 //is
	void setPair(Pair test) { this->test = test; };         //is  

	double teorema() const;                                //is 
	double square() const;                                 //is

	void Read();                                         //is
	bool Init(double a,double b);                         //is
	void Display() const { test.Display(); };          //is
	string tostring() const;                            //is   
};

