/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:52:09 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/01 12:52:10 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool test(const Point &point, const Point &a, const Point &b, const Point &c)
{
    if (a == b || a == c || b == c) {
        std::cout << "This is not a triangle." << std::endl;
        exit(0);
    }

    return false;
}

int main(void)
{

    Point a(Fixed(1), Fixed(8));
    Point b(Fixed(1), Fixed(1.5f));
    Point c(Fixed(2), Fixed(8));

    a.test();
    b.test();
    c.test();

    Point point(Fixed(4), Fixed(8));

    if (test(point, a, b, c)) {
        std::cout << "Point is in triangle." << std::endl;
    } else {
        std::cout << "Point is not in triangle." << std::endl;
    }

    return 0;
}
