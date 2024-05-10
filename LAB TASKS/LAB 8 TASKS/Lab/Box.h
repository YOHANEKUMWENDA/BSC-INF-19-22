#pragma once
#include <iostream>
class Box{
public:
Box();
Box(const double newLength, const double newBreadth, const double newHeight);
~Box();
double GetVolume();
void SetLength(double len);
void SetBreadth(double bre);
void SetHeight(double hei);
//overload + operator to add two Box objects.
Box opetator+(const Box& b);
private:
double length; //Length of a box
double breadth; //Breadth of a box
double height //Height of a box

};