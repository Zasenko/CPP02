#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(const Fixed &x, const Fixed &y);
        Point(const Point &copy);
        ~Point();
        Point &operator=(const Point &point);

        bool operator==(const Point &point) const;
        void test(void);
    private:
        Fixed _x;
        Fixed _y;
};

#endif