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

int Shape::getWidth() {
	return width;
}

int Shape::getHeight() {
	return height;
}

void Shape::resizeDimensions() {
	width = 10;
	height = 10;
}

void Shape::resizeDimensions(int w, int h) {
	width = w;
	height = h;
}

//overloading the addition operator
Shape Shape::operator+(const Shape& otherShape) {
	Shape newShape(0, 0);

	newShape.resizeDimensions(width + otherShape.width, height + otherShape.height);

	return newShape;
}

std::string Shape::sideLengths() {
	std::string string1 = "The Shape's width is " + std::to_string(width);
	std::string string2 = ", and the Shape's height is " + std::to_string(height);
	return string1 + string2;
}