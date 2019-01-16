#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {

public:
	//methods
	int calculateArea();
	void printArea();
	std::string getDefinition();
	Shape(int w, int h);
	void resizeDimensions();
	void resizeDimensions(int w, int h);
	int getWidth();
	int getHeight();
	Shape operator+(const Shape& otherShape);

private:
	std::string definition;

protected:
	//variables
	int width;
	int height;

};

#endif //SHAPE_H