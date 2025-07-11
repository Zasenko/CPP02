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

class Fixed {
    private:
        int fixed_point_number_value;
        static const int number_of_fractional_bits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &origin);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
