#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed & fix);
		~Fixed();
		Fixed & operator=(Fixed const & fix);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _integer;
		static const int _fract = 8;

};

#endif
