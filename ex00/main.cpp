/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:15:51 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 18:56:32 by nchairun         ###   ########.fr       */
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


/*
	A C++ template is a tool for creating generic classes or functions. 
	This allows us to write code that works for any data type without rewriting it for each type.

	Syntax

	Templates can be used to define:
		Function Templates
			allow us to write generic code for functions that can be used with different data types,
			 and this can be achieved by function templates.
			 
		Class Templates
			class defines something that is independent of the data type.
		
		Variable Templates (C++14 onwards)

	---

	
	A template is a blueprint for a function or class. 
	Instead of writing separate code for int, double, or std::string, I write one template using a placeholder type (T). 
	When the function is called, the compiler automatically generates the correct version for that type."

	---

	:: means "look in the global namespace."
	
	What is a namespace?
		 C++ has different "boxes" where functions live.

	For example:
		std::cout
		
		means
			namespace std
				↓
			cout
	
	:: is called the scope resolution operator.

	Why not simply write  swap(a, b);	
		Because C++ already has std::swap()

	Summary
	Type		Why?
	const		Prevent modifying the arguments or returned object.
	&			Avoid copying objects.
	const T &	Efficient and read-only. Recommended for objects like std::string.
	
	Easy rule to remember
		Input: use const T& because you only read the values.
		Output: return const T& because you want to return the existing object 
				without copying it and without allowing it to be modified.
	
*/