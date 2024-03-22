#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::Print() const
{
    cout << "(" << x << ", " << y << ", " << height << ", " << width << ")"<< endl;
    cout << "Flaeche: " << GetArea() << endl;
}

double Rectangle::GetArea() const{
    return height * width;
}