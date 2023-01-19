/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:30:02 by root              #+#    #+#             */
/*   Updated: 2023/01/19 17:50:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T	swap(a);
	a = b;
	b = swap;
}

template<typename T>
T const&	max(T const& a, T const& b)
{
	return (b >= a ? b : a);
}

template<typename T>
T const&	min(T const& a, T const& b)
{
	return (b <= a ? b : a);
}