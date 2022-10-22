#ifndef	FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int fraction;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const &rhs);
		Fixed 	&operator = (Fixed const &rhs) ;
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const ;
		int		toInt(void) const ;
		Fixed	operator ++();
		Fixed	operator ++(int);
		Fixed	operator --();
		Fixed	operator --(int);
		Fixed	operator -(const Fixed& rhs);
		Fixed	operator /(const Fixed& rhs);
		Fixed	operator *( const Fixed& rhs);
		Fixed	operator +( const Fixed& rhs);
		bool 	operator != (const	Fixed& rhs);
		bool 	operator == (const	Fixed& rhs);
		bool 	operator <= (const	Fixed& rhs);
		bool 	operator >= (const	Fixed& rhs);
		bool 	operator <(const	Fixed& rhs);
		bool 	operator >(const	Fixed& rhs);
		static	Fixed& max(Fixed &first, Fixed &second);
		static	Fixed& max(Fixed const &first, Fixed const &second);
		static	Fixed& min(Fixed &first, Fixed &second);
		static	Fixed& min(Fixed const &first,  Fixed const &second);
};


std::ostream& operator << (std::ostream &out, const Fixed &rhs);
#endif