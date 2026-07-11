/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:16:01 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/12 00:57:51 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Implement a function template iter that takes 3 parameters and returns nothing.
    •The first parameter is the address of an array.
    •The second one is the length of the array, passed as a const value.
    •The third one is a function that will be called on every element of the array.
    
    Submit a main.cpp file that contains your tests. P
    rovide enough code to generate a
    test executable.
    
    Your iter function template must work with any type of array. 
    The third parameter
    can be an instantiated function template.
    
    The function passed as the third parameter may take its argument by const reference
    or non-const reference, depending on the context.
    
    Think carefully about how to support both const and non-const
    elements in your iter function.
    ---
    The bottom line: create a function template that:

    receives an array
    receives its length
    receives a function
    applies that function to every element

    Think of iter as a tiny conveyor belt. Each array element passes through the same function.

    iter is a function template that accepts an array, its length, and a callable function. 
    It loops through the array and calls the function on every element. 
    T represents the element type, while F represents the function type. 
    Because the implementation is a template, it must be defined in the header so the compiler can instantiate it for each used type.
*/


#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>   

template <typename T, typename Func>
void iter(T *array, std::size_t len, Func func)
{
    std::size_t index = 0;

    while (index < len)
    {
        func(array[index]);
        index++;
    }
}

#endif