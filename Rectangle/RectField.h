#pragma once
#include "Rectangle.h"

class RectField
{
    private:
    static const int MaxAnzRectanlge = 100;

    int anzElem {0};
    Rectangle* pRectField[MaxAnzRectanlge] {nullptr};

    public:
    RectField(int anz);
    void Set(int index, double x, double y, double height, double width);
    void SetPos(int index, double x, double y);
    void SetDim(int index, double height, double width);
    void Print() const;
};