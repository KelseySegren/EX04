#include "Rectangle2D.h"


Rectangle2D::Rectangle2D() {
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double X, double Y, double Width, double Height) {
	x = X;
	y = Y;
	width = Width;
	height = Height;
}

const double Rectangle2D::setX() {
	return x;
}

const double Rectangle2D::setY() {
	return y;
}

const double Rectangle2D::getX() {
	return x;
}

const double Rectangle2D::getY() {
	return y;
}

const double Rectangle2D::getWidth() {
	return width;
}


const double Rectangle2D::getHeight() {
	return height;
}

const double Rectangle2D::setWidth() {
	return width;
}

const double Rectangle2D::setHeight() {
	return height;
}

const double Rectangle2D::getArea() {
	return (height * width);
	
}

const double Rectangle2D::getPerimeter() {
	return (2 * height) + (2 * width);
}

bool Rectangle2D::contains(double x, double y) {
	//returns true if (x,y) is inside rectangle
	double top = y + height / 2;
	double bottom = y - height / 2;
	double left = x - width / 2;
	double right = x + width / 2;

	if (x<left || x>right || y<bottom || y>top)
		return false;
	else
		return true;

}

bool Rectangle2D::contains(const Rectangle2D &r) {
	//returns true if specified rectangle is inside this rectangle
	double top = r.y + r.height / 2;
	double bottom = r.y - r.height / 2;
	double left = r.x - r.width / 2;
	double right = r.x + r.width / 2;

	if (contains(left, top) && contains(left, bottom) && contains(right, top) && contains(right, bottom))
		return true;
	else
		return false;

}

bool Rectangle2D::overlaps(const Rectangle2D &r) { 
	//returns true if specified rectangle overlaps with this rectangle

	double top = r.y + r.height / 2;
	double bottom = r.y - r.height / 2;
	double left = r.x - r.width / 2;
	double right = r.x + r.width / 2;

	if (contains(left, top) || contains(left, bottom) || contains(right, top) || contains(right, bottom))
		return true;
	else
		return false;

}