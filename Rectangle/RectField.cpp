#include "RectField.h"
#include <iostream>

RectField::RectField(int anz)
{
    anzElem = anz;
    for (int i = 0; i < anzElem; i++)
    {
        pRectField[i] = new Rectangle();
    }
}
void RectField::Set(int index, double x, double y, double height, double width)
{
    if (index >= anzElem)
    {
        throw "Index out of bounds";
    }
    pRectField[index]->SetPos(x, y);
    pRectField[index]->SetDim(height, width);

}
void RectField::SetPos(int index, double x, double y)
{
    if (index >= anzElem)
    {
        throw "Index out of bounds";
    }
    pRectField[index]->SetPos(x, y);
}
void RectField::SetDim(int index, double height, double width)
{
    if (index >= anzElem)
    {
        throw "Index out of bounds";
    }
    pRectField[index]->SetDim(height, width);
}
void RectField::Print() const
{
    for (int i = 0; i < anzElem; i++)
    {
        pRectField[i]->Print();
    }
    std::cout << std::endl;
}
