/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:16:01 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 19:26:04 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>   
# include <string>
# include <exception>

template <typename T>
class Array 
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int num);
		Array(const Array&  other);
		Array&  operator=(const Array&  other);
		~Array();

		T&          operator[](unsigned int index);
		const T&    operator[](unsigned int index) const;

		unsigned int	size(void) const;
};

# include "Array.tpp"

#endif
