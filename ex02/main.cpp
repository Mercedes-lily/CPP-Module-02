#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}

	
	//attribution
	Fixed a(22);
	Fixed b(Fixed(0.7f) * Fixed(8));
	Fixed const c(Fixed(13) + Fixed(3));
	Fixed const d(Fixed(19) - Fixed(3));
	int		result;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	// comparaison
	result = a > b;
	//result = a < b;
	//result = a >= b;
	//result = a <= b;
	//result = a == b;
	//result = a != b;
	//result = c == b;
	//result = c != b;
	std::cout << result << std::endl;
	
	//++--
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	//std::cout << c-- << std::endl;


	//min max
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
	
}
