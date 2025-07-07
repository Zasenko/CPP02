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

Fixed::Fixed() : fixed_point_number_value(0) {}

Fixed::Fixed(const int i) : fixed_point_number_value(0) {
    if (i > (INT_MAX >> number_of_fractional_bits) || i < (INT_MIN >> number_of_fractional_bits)) {
        std::cerr << "Error: Fixed constructor: integer value out of range and set to 0" << std::endl;
    } else {
        this->fixed_point_number_value = i << number_of_fractional_bits;
    }
}

Fixed::Fixed(const float f) : fixed_point_number_value(0) {
    float scaled = f * (1 << number_of_fractional_bits); 
    if (scaled > static_cast<float>(INT_MAX) || scaled < static_cast<float>(INT_MIN)) {
        std::cerr << "Error: Fixed constructor: float value out of range and set to 0" << std::endl;
    } else {
        this->fixed_point_number_value = static_cast<int>(roundf(scaled));
    }
}

Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &origin) {
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

void Fixed::setRawBits(const int raw) {
    this->fixed_point_number_value = raw;
}

float Fixed::toFloat(void) const {
    return fixed_point_number_value / static_cast<float>(1 << number_of_fractional_bits);
}

int Fixed::toInt(void) const {
    return this->fixed_point_number_value >> number_of_fractional_bits;
}

bool Fixed::operator>(const Fixed &origin) const {
    return this->toFloat() > origin.toFloat();
}

bool Fixed::operator<(const Fixed &origin) const {
    return this->toFloat() < origin.toFloat();
}

bool Fixed::operator>=(const Fixed &origin) const {
    return this->toFloat() >= origin.toFloat();
}

bool Fixed::operator<=(const Fixed &origin) const {
    return this->toFloat() <= origin.toFloat();
}

bool Fixed::operator==(const Fixed &origin) const {
    return this->toFloat() == origin.toFloat();
}

bool Fixed::operator!=(const Fixed &origin) const {
    return this->toFloat() != origin.toFloat();
}

Fixed Fixed::operator+(const Fixed &origin) const {
    return Fixed(this->toFloat() + origin.toFloat());
}

Fixed Fixed::operator-(const Fixed &origin) const {
    return Fixed(this->toFloat() - origin.toFloat());
}

Fixed Fixed::operator*(const Fixed &origin) const {
    return Fixed(this->toFloat() * origin.toFloat());
}

Fixed Fixed::operator/(const Fixed &origin) const {
    if (origin.getRawBits() == 0) {
        std::cout << "Fixed: Error: Can not devide by 0" << std::endl;
        exit(1);
    } else {
        return Fixed(this->toFloat() / origin.toFloat());
    }
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed& Fixed::operator++(void) {
    this->fixed_point_number_value++;
    return *this;
}

Fixed& Fixed::operator--(void) {
    this->fixed_point_number_value--;
    return *this;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}