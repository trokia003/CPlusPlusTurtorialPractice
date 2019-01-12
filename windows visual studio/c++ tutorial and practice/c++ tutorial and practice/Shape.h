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

private:
	std::string definition;

protected:
	//variables
	int width;
	int height;

};

#endif //SHAPE_H