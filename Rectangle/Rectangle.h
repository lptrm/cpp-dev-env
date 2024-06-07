#pragma once

class Rectangle
{
    double x{0}, y{0};
    double height{0}, width{0};

public:
    //es gibt default, copy und move konstruktoren
    Rectangle() = default;
    //mach auf keinen fall einen default konstruktor
    // Rectangle() = delete;
    Rectangle(double x, double y, double height, double width)
    //compiler optimierung, ist initialisierung
    //initialisierung ist effizienter als zuweisung
    //vor klammer ist immer das attribute in der klammer immer der übergabeparameter
    : x(x), y(y), height(height), width(width) {};
    //const für Konstanten, Methodenparameter ist reiner Eingangsparameter, Hinter Methodensignatur -> Methode greift nicht schreibend auf Variablen zu
    //compiler kann lesenden funktionen effizienter umsetzen, wenn er das weiß
    void Print() const;
    double GetArea() const;

    void SetPos(double x, double y);
    void SetDim(double height, double width);

};

