/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:01:32 by root              #+#    #+#             */
/*   Updated: 2023/01/23 19:31:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class	Array {
	public:
			/*	Constructos/Destructor */
		Array() {new }
		Array(unsigned int const size);
		Array(Array const& cpy);
		~Array();
	


	private:
	
	
	public:
		class	ArrayException : public std::exception {
			public:

		};
};

