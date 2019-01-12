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