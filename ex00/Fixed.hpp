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