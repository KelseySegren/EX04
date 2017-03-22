////////////
//Kelsey Segren
//11.9 Geometry: The Rectangle2D Class
//////////////

/*
UML DIAGRAM: 
Class:									Rectangle2D
Data Fields:							double x,y,width,height
constructors and functions:				Rectangle2D()
										Rectangle2D(double X, double Y, double Width, double Height)
										const double setX()
										const double setY()
										const double getX()
										const double getY()
										const double getWidth()
										const double getHeight()
										const double setWidth()
										const double setHeight()
										const double getArea()
										const double getPerimeter()
										bool contains(double x, double y)
										bool contains(const Rectangle2D &r)
										bool overlaps(const Rectangle2D &r)
*/

#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main() {

	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << r1.getArea() << endl;
	cout << r1.getPerimeter() << endl;
	cout << r1.contains(3, 3) << endl;
	cout << r1.contains(r2) << endl;
	cout << r1.overlaps(r3) << endl;
	
}