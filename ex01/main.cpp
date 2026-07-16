/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:15:51 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 19:04:30 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void printArray(const T &value)
{
    std::cout << value << " ";
}

int main()
{
    int numbers[] = {0, 1, 2, 3, 4};
    std::string words[] = {"Hello", "World", "42"};

    iter(numbers, 5, printArray<int>);
    std::cout << std::endl;

    iter(words, 3, printArray<std::string>);
    std::cout << std::endl;

    return (0);
}