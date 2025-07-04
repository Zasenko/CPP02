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
    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

    Fixed c(Fixed(5.05f));
    std::cout << c << std::endl;

    c = Fixed(Fixed(5.05f) + Fixed(2));
    std::cout << c << std::endl;

    c = Fixed(Fixed(5.05f) - Fixed(2));
    std::cout << c << std::endl;

    c = Fixed(Fixed(5) / Fixed(2));
    std::cout << c << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;


    return 0;
}
