/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:51:52 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/01 12:51:53 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <climits>

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed() : fixed_point_number_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : fixed_point_number_value(0) {
    std::cout << "Int constructor called" << std::endl;

    if (i > (INT_MAX >> number_of_fractional_bits) || i < (INT_MIN >> number_of_fractional_bits)) {
        std::cerr << "Error: Fixed constructor: integer value out of range and set to 0" << std::endl;
    } else {
        this->fixed_point_number_value = i << number_of_fractional_bits;
    }
}

Fixed::Fixed(const float f) : fixed_point_number_value(0) {
    std::cout << "Float constructor called" << std::endl;

    float scaled = f * (1 << number_of_fractional_bits); 
    if (scaled > static_cast<float>(INT_MAX) || scaled < static_cast<float>(INT_MIN)) {
        std::cerr << "Error: Fixed constructor: float value out of range and set to 0" << std::endl;
    } else {
        this->fixed_point_number_value = static_cast<int>(roundf(scaled));
    }
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &origin) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &origin) {
        fixed_point_number_value = origin.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream &os, const Fixed &origin) {
    return os << origin.toFloat();
}

int Fixed::getRawBits(void) const {   
    return this->fixed_point_number_value;
}

void Fixed::setRawBits(int const raw) {
    this->fixed_point_number_value = raw;
}

float Fixed::toFloat(void) const {
    return fixed_point_number_value / static_cast<float>(1 << number_of_fractional_bits);
}

int Fixed::toInt(void) const {
    return this->fixed_point_number_value >> number_of_fractional_bits;
}