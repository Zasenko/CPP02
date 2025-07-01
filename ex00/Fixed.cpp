#include "Fixed.hpp"

static const int number_of_fractional_bits = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_number_value = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : fixed_point_number_value(other.fixed_point_number_value)
{
    std::cout << "Copy Constructor Called!" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        fixed_point_number_value = other.fixed_point_number_value;
    }
    std::cout << "Assignment Operator Called!" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits" << std::endl;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits" << std::endl;
}