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

int main(void)
{

    Point a(0, 0);
    Point b(1, 8);
    Point c(20.5, 0);

    a.test();
    b.test();
    c.test();

    Point point(1, 4);

    if (bsp(a, b, c, point)) {
        std::cout << "Point is in triangle." << std::endl;
    } else {
        std::cout << "Point is not in triangle." << std::endl;
    }

    point = Point(0, 4);

    if (bsp(a, b, c, point)) {
        std::cout << "Point is in triangle." << std::endl;
    } else {
        std::cout << "Point is not in triangle." << std::endl;
    }

    return 0;
}
