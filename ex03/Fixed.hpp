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
		Fixed & operator=(Fixed const & fix1);

		int operator>(Fixed const &fix);
		int operator<(Fixed const &fix);
		int operator>=(Fixed const &fix);
		int operator<=(Fixed const &fix);
		int operator==(Fixed const &fix);
		int operator!=(Fixed const &fix);

		Fixed operator+(Fixed const &fix);
		Fixed operator-(Fixed const &fix);
		Fixed operator*(Fixed const &fix);
		Fixed operator/(Fixed const &fix);

		Fixed & operator++();
		Fixed & operator--();
		Fixed operator++(int old);
		Fixed operator--(int old);
		
		static Fixed & min(Fixed &fix1, Fixed &fix2);
		static const Fixed & min(const Fixed &fix1, const Fixed &fix2);
		static Fixed & max(Fixed &fix1, Fixed &fix2);
		static const Fixed & max(const Fixed &fix1, const Fixed &fix2);
		
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