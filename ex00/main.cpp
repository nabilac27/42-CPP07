/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:15:51 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/23 13:42:14 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

// int	main(void)
// {
// 	int	a = 2;
// 	int	b = 3;

// 	::swap(a, b);
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
	
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	
// 	return (0);
// }

/* ************************************************** */

int	main(void)
{
	int			a = 4;
	int			b = 2;
	std::string	c = "hello";
	std::string	d = "world";

	/* ************************************************************************** */
	/*                                 SWAP TEST                                  */
	/* ************************************************************************** */

	::swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "-----------------------" << std::endl;

	::swap(c, d);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "-----------------------" << std::endl;

	/* ************************************************************************** */
	/*                               MIN / MAX TEST                               */
	/* ************************************************************************** */

	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << "-----------------------" << std::endl;

	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	return (0);
}
