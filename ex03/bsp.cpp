#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

//Equation for the area of a Triangle (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|

Fixed &sub_Area(Point a, Point b, Point c, Fixed& fix)
{
	Fixed &Total = fix;
	Fixed const X = a.getX();
	Fixed const Y = b.getY();
	Fixed const Z = c.getY();
	Total = (X.toFloat() * (Y.toFloat() - Z.toFloat()));
	return(Total);
}

Fixed &Area(Point a, Point b, Point c, Fixed& fix)
{
	Fixed &Total = fix;
	Total = (sub_Area(a, b, c, fix).toFloat() + sub_Area(b, c, a, fix).toFloat() + sub_Area(c, a, b, fix).toFloat());
	if (Total < 0)
		Total = Total * -1;
	Total = Total / 2;
	return(Total);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	triangleArea = Area(a, b, c, triangleArea);
	Fixed	PointAreaAB = Area(a, b, point, PointAreaAB);
	Fixed	PointAreaAC = Area(a, point, c, PointAreaAC);
	Fixed	PointAreaBC = Area(point, b, c, PointAreaBC);

	if (triangleArea == 0 || PointAreaAB == 0 || PointAreaAC == 0 || PointAreaBC == 0)
		return(false);
	if(PointAreaAB + PointAreaAC + PointAreaBC == triangleArea)
		return(true);
	return(false);
}