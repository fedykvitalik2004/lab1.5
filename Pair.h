#pragma once
#include <string>
using namespace std;

class Pair
{
private:
	double first;              //число 1
	double second;             //число 2
public:
	double dobutok() const { return GetFirst() * GetSecond(); };       //used       

	void SetFirst (double a) { first = a; };                   //used       
	void SetSecond(double a) { second = a; };                  //used     
	double GetFirst()const { return first;};                     //used   
	double GetSecond()const { return second;};                   //used

	void Init(double a, double b);                          //used        
	void Read();                                            //used
	void Display() const;                                      //used   
	string toString() const;                                   //used    
};

