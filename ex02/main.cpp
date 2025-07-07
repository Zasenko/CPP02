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

int main(void) {

    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << "\nMy tests:\n";

    std::cout << "\n===== Arithmetic Operators =====" << std::endl;
    Fixed x(10);
    Fixed y(3.5f);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    std::cout << "x + y: " << x + y << std::endl;
    std::cout << "x - y: " << x - y << std::endl;
    std::cout << "x * y: " << x * y << std::endl;
    std::cout << "x / y: " << x / y << std::endl;

    std::cout << "\n===== Comparison Operators =====" << std::endl;
    Fixed p(10);
    Fixed q(20);
    std::cout << "p < q: " << (p < q) << std::endl;
    std::cout << "p > q: " << (p > q) << std::endl;
    std::cout << "p <= q: " << (p <= q) << std::endl;
    std::cout << "p >= q: " << (p >= q) << std::endl;
    std::cout << "p == q: " << (p == q) << std::endl;
    std::cout << "p != q: " << (p != q) << std::endl;

    std::cout << "\n===== Increment/Decrement Operators =====" << std::endl;
    Fixed inc;
    std::cout << "inc: " << inc << std::endl;
    std::cout << "++inc: " << ++inc << std::endl;
    std::cout << "inc++: " << inc++ << std::endl;
    std::cout << "inc: " << inc << std::endl;
    std::cout << "--inc: " << --inc << std::endl;
    std::cout << "inc--: " << inc-- << std::endl;
    std::cout << "inc: " << inc << std::endl;

    std::cout << "\n===== Min/Max Functions =====" << std::endl;
    Fixed m1(7.3f);
    Fixed m2(7.9f);
    const Fixed m3(8.2f);
    const Fixed m4(6.1f);

    std::cout << "min(m1, m2): " << Fixed::min(m1, m2) << std::endl;
    std::cout << "max(m1, m2): " << Fixed::max(m1, m2) << std::endl;
    std::cout << "min(m3, m4): " << Fixed::min(m3, m4) << std::endl;
    std::cout << "max(m3, m4): " << Fixed::max(m3, m4) << std::endl;

    return 0;
}
