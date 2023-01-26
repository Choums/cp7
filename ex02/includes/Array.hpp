/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:59:32 by root              #+#    #+#             */
/*   Updated: 2023/01/26 18:58:02 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>


template<typename T>
class Array
{
public:
		/*	Constructors/Destructor */
	Array() : _size(0), _content(new T[0]) {}
	Array(unsigned int size) : _size(size), _content(new T[_size]) {}
	Array(Array const& cpy) : _size(cpy._size), _content(new T[cpy._size]) {}
	virtual ~Array()
	{	delete [] this->_content; }

		/*	Methods */
	/*
		@return le nombre d’éléments dans l’array.
		@param Cette fonction membre ne prend aucun paramètre 
		et ne doit pas modifier l’instance courante.
	*/
	unsigned int const&	size() const
	{	return (this->_size); }

		/*	Assignment Operator Overload */
	Array&	operator=(Array const& obj) // array = array
	{
		if (*this != obj)
		{
			delete [] this->_content;
			this->_size = obj._size;
			this->_content = new T[this->_size];
			for (size_t i(0); i < this->_size; i++)
				this->_content[i] = obj._content[i];
		}
		return (*this);
	}
	
	T&			operator[](unsigned int index) {
		if (index >= this->_size)
			throw ArrayException();
		else return (this->_content[index]);
	}

	T const&	operator[](unsigned int index) const {
		if (index >= this->_size)
			throw ArrayException();
		else return (this->_content[index]);
	}

		/*	Accessor */
private:
	unsigned int	_size;
	T*				_content;
public:
	class ArrayException : public std::exception {
		public:
			ArrayException() throw() {};
			virtual ~ArrayException() throw() {};
			virtual const char* what() const throw()
			{	return ("Invalid Index !"); };
	};
};
