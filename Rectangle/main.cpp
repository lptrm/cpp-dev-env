#include "Rectangle.h"
#include "RectField.h"
#include <iostream>

using namespace std;

int main()
{
    RectField* pRectField_1 = new RectField(10);
    RectField* pRectField_2 = new RectField(*pRectField_1); //flache Kopie durch default copy Konstruktor

    pRectField_1->Print();
    pRectField_2->Print();

    pRectField_1->SetPos(0, 42, 42);

    pRectField_1->Print();
    pRectField_2->Print();

    delete pRectField_1;
    delete pRectField_2;

}