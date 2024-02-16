#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed & fix);
		~Fixed();
		Fixed & operator=(Fixed const & fix);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int _integer;
		static const int _fract = 8;

};

std::ostream&	operator<<(std::ostream &out, const Fixed & fix);

#endif