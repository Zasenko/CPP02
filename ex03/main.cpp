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

#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point inside(1, 1);
    Point outside(5, 5);
    Point on_edge(2.5f, 0);

    std::cout << "Point inside triangle: " << (bsp(a, b, c, inside) ? "yes" : "no") << std::endl;
    std::cout << "Point inside triangle: " << (bsp(a, b, c, outside) ? "yes" : "no") << std::endl;
    std::cout << "Point inside triangle: " << (bsp(a, b, c, on_edge) ? "yes" : "no") << std::endl;

    Point d(0,0);
    bsp(a, b, d, inside);

    return 0;
}
