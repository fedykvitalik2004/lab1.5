#include <iostream>
#include "RightAngled.h"
#include <string>

using namespace std;

int main()
{   
    Pair* testing=new Pair();

    cout << "Case 1" << endl;
    testing->Read();
    cout << "Dobutok=" << testing->dobutok() << endl;
    testing->Display();
    cout << "Values:" << testing->toString() << endl;

    RightAngled t, t1;

    cout << "Case 2" << endl;
    t.Read();
    cout << "Teorema Pifagora:" << t.teorema() << endl;
    cout << "Square=" << t.square()<<endl;
    cout << "Change values" << endl;
    cout << "first=" << t.getFirst() << " and second=" << t.getSecond()<<endl;
    t.setValue1();
    t.setValue2();
    t.Display();
    cout << t.tostring() << endl;
    t1.setPair(t.getPair());

    Pair t2[1];

    cout<<"Case 3"<<endl;
    t2[0].Read();
    cout << "Dobutok=" << t2[0].dobutok() << endl;
    t2[0].Display();
    cout << "Values:" << t2[0].toString() << endl;

    return 0;
}
