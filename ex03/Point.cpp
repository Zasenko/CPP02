/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:48:21 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/04 14:48:23 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::Point(const float &x, const float &y) : _x(Fixed(x)), _y(Fixed(y)) {}

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

float Point::get_x(void) const {
    return _x.toFloat();
}

float Point::get_y(void) const {
    return _y.toFloat();
}

float sign (Point p1, Point p2, Point p3)
{
    return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y()) - (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

    if (a == b || b == c || c == a) {
        std::cout << "This is not a triangle." << std::endl;
        exit(0);
    }

    float d1 = sign(point, a, b);
    float d2 = sign(point, b, c);
    float d3 = sign(point, c, a);

    if (d1 > 0 || d2 > 0 || d3 > 0)
        return true;
    else
        return false;
}
