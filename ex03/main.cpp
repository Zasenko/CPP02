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

void test(const Point &a, const Point &b, const Point &c) {
    if (a == b || a == c || b == c) {
        std::cout << "This is not a triangle." << std::endl;
        exit(0);
    }
    
}

int main(void)
{

    Point a(Fixed(1), Fixed(8));
    Point b(Fixed(1), Fixed(1.5f));
    Point c(Fixed(2), Fixed(8));

    a.test();
    b.test();
    c.test();

    test(a, b, c);

    return 0;
}
