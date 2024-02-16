#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_integer = 0;
}

Fixed::Fixed(int const i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_integer = i << this->_fract;
}

Fixed::Fixed(float const f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_integer = roundf(f * (1 << this->_fract));
}

Fixed::Fixed(const Fixed & fix)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return(static_cast<float>(this->_integer) / (1 << this->_fract));
}

int Fixed::toInt( void ) const
{
	return(this->_integer >> this->_fract);
}

Fixed & Fixed::operator=(Fixed const & fix)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_integer = fix.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return(this->_integer);
}

void Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

std::ostream&	operator<<(std::ostream &out, const Fixed & fix)
{
	out << fix.toFloat();
	return(out);
}

int Fixed::operator>(Fixed const &fix)
{
	return(this->_integer > fix._integer);
}
int Fixed::operator<(Fixed const &fix)
{
	return(this->_integer < fix._integer);
}
int Fixed::operator>=(Fixed const &fix)
{
	return(this->_integer >= fix._integer);
}
int Fixed::operator<=(Fixed const &fix)
{
	return(this->_integer <= fix._integer);
}
int Fixed::operator==(Fixed const &fix)
{
	return(this->_integer == fix._integer);
}
int Fixed::operator!=(Fixed const &fix)
{
	return(this->_integer != fix._integer);
}

Fixed Fixed::operator+(Fixed const &fix)
{
	Fixed res;
	float result;
	res = *this;
	result = this->toFloat() + fix.toFloat();
	res._integer = roundf(result * (1 << this->_fract));
	return (res);
}

Fixed Fixed::operator-(Fixed const &fix)
{
	Fixed res;
	float result;
	res = *this;
	result = this->toFloat() - fix.toFloat();
	res._integer = roundf(result * (1 << this->_fract));
	return (res);
}

Fixed Fixed::operator*(Fixed const &fix)
{
	Fixed res;
	float result;
	res = *this;
	result = this->toFloat() * fix.toFloat();
	res._integer = roundf(result * (1 << this->_fract));
	return (res);
}

Fixed Fixed::operator/(Fixed const &fix)
{
	Fixed res;
	float result;
	res = *this;
	result = this->toFloat() / fix.toFloat();
	res._integer = roundf(result * (1 << this->_fract));
	return (res);
}

Fixed & Fixed::operator++()
{
	++this->_integer;
	return(*this);
}

Fixed & Fixed::operator--()
{
	--this->_integer;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res;

	res = *this;
	this->_integer++;
	return (res);
}

Fixed Fixed::operator--(int)
{
	Fixed res;

	res = *this;
	this->_integer--;
	return (res);
}

Fixed & Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1._integer < fix2._integer)
		return (fix1);
	return (fix2);
}

const Fixed & Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1._integer > fix2._integer)
		return (fix1);
	return (fix2);
}

Fixed & Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1._integer > fix2._integer)
		return (fix1);
	return (fix2);
}

const Fixed & Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1._integer > fix2._integer)
		return (fix1);
	return (fix2);
}
