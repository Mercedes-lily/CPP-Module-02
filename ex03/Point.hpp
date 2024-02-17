#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point & p);
		Point const & operator=(Point const & p);
		~Point();
		const Fixed & getX();
		const Fixed & getY();
	private:
		const Fixed _x;
		const Fixed _y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif