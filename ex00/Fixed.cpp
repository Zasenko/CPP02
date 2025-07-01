#include "Fixed.hpp"

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed() : fixed_point_number_value(0) {
    std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits(void) const {   
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point_number_value;
}

void Fixed::setRawBits(int const raw) {
    this->fixed_point_number_value = raw;
}