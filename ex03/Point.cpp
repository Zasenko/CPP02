#include "Point.hpp"

// TODO DELETE:

Point::Point() {

}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y) {}

Point::Point(const Point &copy){
    *this = copy;
}
Point::~Point() {}

Point& Point::operator=(const Point &point) {
    if (this != &point) {
        _x = point._x;
        _y = point._y;
    }
    return *this;
}

bool Point::operator==(const Point &point) const {
    if (_x == point._x && _y == point._y)
        return true;
    else
        return false;
}

void Point::test(void) {
    std::cout << _x << " | " << _y << std::endl;
}