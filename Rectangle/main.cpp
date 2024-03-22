#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
    Rectangle rectangleStack = Rectangle(20.0, 40.0, 10.0, 10.0);
    Rectangle* rectangleHeap = new Rectangle(40.0, 20.0, 5.0, 5.0);
    Rectangle* RectangleDefault = new Rectangle();
    cout << "From Stack" << endl;
    rectangleStack.Print();
    cout << "From Heap" << endl;
    //kein aliasing bei zeigern, daher verkürze schreibweise
    rectangleHeap->Print();
    cout << "Default From Heap" << endl;
    RectangleDefault->Print();
    //Betriebssystem würde sich auch so alle allokierten Speicherstücke zurückhulen beim beenden des Programms
    delete rectangleHeap;
    delete RectangleDefault;

}