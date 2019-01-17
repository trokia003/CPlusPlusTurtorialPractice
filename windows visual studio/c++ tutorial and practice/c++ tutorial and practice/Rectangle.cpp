#include "Rectangle.h"
#include <string>

Rectangle::Rectangle(int w, int h) :
	Shape(w, h)
{
	definition = "I am a Rectangle";
}

std::string Rectangle::getRectDefinition() {
	return definition;
}

//here we will implement the new version of the virtual method created in Shape.h
std::string Rectangle::sideLengths() {
	std::string string1 = "The Rectangle's width is " + std::to_string(width);
	std::string string2 = ", and the Rectangle's height is " + std::to_string(height);
	return string1 + string2;
}