#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Shape.h"

//extending Shape
class Rectangle : public Shape {

public:
	Rectangle(int w, int h);
	std::string getRectDefinition();
	std::string sideLengths();

private:
	std::string definition;

};

#endif //RECTANGLE_H