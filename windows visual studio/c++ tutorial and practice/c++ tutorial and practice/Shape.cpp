#include "Shape.h"
#include <string>
#include <iostream>

//public
Shape::Shape(int w, int h) {
	width = w;
	height = h;
	definition = "I am a Shape";
}

int Shape::calculateArea() {
	return width * height;
}

void Shape::printArea() {
	std::cout << "The area is " << calculateArea() << std::endl;
}

std::string Shape::getDefinition() {
	return definition;
}