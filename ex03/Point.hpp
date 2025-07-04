/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:48:14 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/04 14:48:16 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(const float &x, const float &y);
        Point(const Point &copy);
        ~Point();
        Point &operator=(const Point &point);
        bool operator==(const Point &point) const;
        float get_x(void) const;
        float get_y(void) const;
    private:
        Fixed _x;
        Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
