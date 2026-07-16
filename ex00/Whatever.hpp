/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:16:01 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 18:28:34 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>   

template <typename T> 
void swap (T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T &min(const T &a, const T &b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
const T &max(const T &a, const T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif
