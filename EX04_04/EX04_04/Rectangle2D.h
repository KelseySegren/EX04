#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_

class Rectangle2D 
{
private:
	double x, y; //two double data fields x and y that specify the center of the rectangle
	double width, height;  //two double data fields width and height
public:

	Rectangle2D();
	Rectangle2D(double X, double Y, double Width, double Height);
	const double setX();
	const double setY();
	const double getX();
	const double getY();
	const double getWidth();
	const double getHeight();
	const double setWidth();
	const double setHeight();
	const double getArea();
	const double getPerimeter();
	bool contains(double x, double y); //returns true if (x,y) is inside rectangle
	bool contains(const Rectangle2D &r); //returns true if specified rectangle is inside this rectangle
	bool overlaps(const Rectangle2D &r); //returns true if specified rectangle overlaps with this rectangle
};

#endif
