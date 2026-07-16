/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:16:01 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 19:03:44 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>   

template <typename T, typename Func>
void iter(T *array, const std::size_t len, Func func)
{
    std::size_t index = 0;

    while (index < len)
    {
        func(array[index]);
        index++;
    }
}

#endif