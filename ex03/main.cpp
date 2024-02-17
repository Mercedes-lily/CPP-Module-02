#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) 
{
	Point a(0, 6);
	Point b(0, 0);
	Point c(7, 0);
	Point d(2, 2);
	Point e(7, 0);
	Point f(0, 3);
	Point g(10, 10);
	if (bsp(a, b, c, d) == true)
		std::cout << "\033[1;32mIn the Triangle" << std::endl;
	else
		std::cout << "\033[1;31mNot in the Triangle" << std::endl;
	if (bsp(a, b, c, e) == true)
		std::cout << "\033[1;32mIn the Triangle" << std::endl;
	else
		std::cout << "\033[1;31mNot in the Triangle" << std::endl;
	if (bsp(a, b, c, f) == true)
		std::cout << "\033[1;32mIn the Triangle" << std::endl;
	else
		std::cout << "\033[1;31mNot in the Triangle" << std::endl;
	if (bsp(a, b, c, g) == true)
		std::cout << "\033[1;32mIn the Triangle" << std::endl;
	else
		std::cout << "\033[1;31mNot in the Triangle" << std::endl;
}
