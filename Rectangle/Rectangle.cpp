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
void Rectangle::SetPos(double x, double y)
{
    this->x = x;
    this->y = y;
}
void Rectangle::SetDim(double height, double width)
{
    this->height = height;
    this->width = width;
}