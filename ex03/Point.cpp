# include "Point.hpp"
# include "Fixed.hpp"
# include <iostream>

Point::Point() : _x(0), _y(0)
{
	//std::cout << "Point default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	//std::cout << "Point float constructor called" << std::endl;
}

Point::Point(const Point & p) : _x(p._x), _y(p._y)
{
	//std::cout << "Point copy constructor called" << std::endl;
	*this = p;
}

Point::~Point()
{
	//std::cout << "Point deconstructor called" << std::endl;
}

const Fixed & Point::getX()
{
	return(this->_x);
}

const Fixed & Point::getY()
{
	return(this->_y);
}

Point const & Point::operator=(Point const & p)
{
	return p;
}