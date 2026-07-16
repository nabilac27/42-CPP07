/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:15:51 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 19:28:32 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// #include <iostream>
// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int	main(void)
{
	unsigned int	i = 0;

	/* ************************************************************************** */
	/*                            EMPTY ARRAY TEST                                */
	/* ************************************************************************** */

	Array<int> empty;

	std::cout << "Empty array size: " << empty.size() << std::endl;

	std::cout << "-----------------------" << std::endl;

	/* ************************************************************************** */
	/*                           INTEGER ARRAY TEST                               */
	/* ************************************************************************** */

	Array<int> numbers(5);

	while (i < numbers.size())
	{
		numbers[i] = i * 10;
		i++;
	}

	i = 0;
	while (i < numbers.size())
	{
		std::cout << numbers[i] << " ";
		i++;
	}
	std::cout << std::endl;

	std::cout << "-----------------------" << std::endl;

	/* ************************************************************************** */
	/*                           STRING ARRAY TEST                                */
	/* ************************************************************************** */

	Array<std::string> words(3);

	words[0] = "Hello";
	words[1] = "CPP07";
	words[2] = "Templates";

	i = 0;
	while (i < words.size())
	{
		std::cout << words[i] << " ";
		i++;
	}
	std::cout << std::endl;

	std::cout << "-----------------------" << std::endl;

	/* ************************************************************************** */
	/*                             DEEP COPY TEST                                 */
	/* ************************************************************************** */

	Array<int> copy(numbers);

	copy[0] = 999;

	std::cout << "Original[0] = " << numbers[0] << std::endl;
	std::cout << "Copy[0]     = " << copy[0] << std::endl;

	std::cout << "-----------------------" << std::endl;

	/* ************************************************************************** */
	/*                         OUT OF BOUNDS TEST                                 */
	/* ************************************************************************** */

	try
	{
		std::cout << numbers[100] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: Index out of bounds!" << std::endl;
	}

	return (0);
}