/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 19:12:31 by nchairun          #+#    #+#             */
/*   Updated: 2026/07/16 19:21:52 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTORS                                  */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() 
: _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int num) 
: _array(NULL), _size(num)
{
	if (_size > 0)
		_array = new T[_size]();
}

template <typename T>
Array<T>::Array(const Array &other)
	: _array(NULL), _size(other._size)
{
	unsigned int	index;

	index = 0;
	if (_size > 0)
	{
		_array = new T[_size]();
		while (index < _size)
		{
			_array[index] = other._array[index];
			index++;
		}
	}
}

/* ************************************************************************** */
/*                         ASSIGNMENT OPERATOR                                */
/* ************************************************************************** */
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	T				*newArray;
	unsigned int	index;

	if (this != &other)
	{
		newArray = NULL;
		index = 0;

		if (other._size > 0)
		{
			newArray = new T[other._size]();
			while (index < other._size)
			{
				newArray[index] = other._array[index];
				index++;
			}
		}

		delete[] _array;
		_array = newArray;
		_size = other._size;
	}
	return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

/* ************************************************************************** */
/*                            ELEMENT ACCESS                                  */
/* ************************************************************************** */
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();

	return (_array[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::exception();

	return (_array[index]);
}

/* ************************************************************************** */
/*                                  SIZE                                      */
/* ************************************************************************** */
template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}