/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:52:01 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/01 12:52:02 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int fixed_point_number_value;
        static const int number_of_fractional_bits;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &copy);

        ~Fixed();

        Fixed& operator=(const Fixed &origin);

        bool operator>(const Fixed &origin);
        bool operator<(const Fixed &origin);
        bool operator>=(const Fixed &origin);
        bool operator<=(const Fixed &origin);
        bool operator==(const Fixed &origin);
        bool operator!=(const Fixed &origin);

        Fixed operator+(const Fixed &origin);
        Fixed operator-(const Fixed &origin);
        Fixed operator*(const Fixed &origin);
        Fixed operator/(const Fixed &origin);

        Fixed operator++(int);
        Fixed operator--(int);

        Fixed& operator++(void);
        Fixed& operator--(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed);

#endif
