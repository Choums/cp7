/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:29:19 by root              #+#    #+#             */
/*   Updated: 2023/01/26 18:50:09 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	f(T &var)
{
	var = var + "_iter";
}

template<typename T>
void	fi(T &value)
{
	value++;
}

/*
	une fonction template iter prenant 3 paramètres et ne retournant rien.
	• Le premier paramètre est l’adresse d’un tableau.
	• Le second est la taille du tableau.
	• Le troisième est une fonction qui sera appelée sur chaque élément du tableau.
	Votre fonction template iter devra fonctionner avec n’importe quel type de tableau.
	Le troisième paramètre peut être une fonction template instanciée.
*/

template<typename T, typename F>
void	iter(T tab[], size_t const size, F var)
{
	if (size && var)
		for (size_t i(0); i < size; i++)
			var(tab[i]);
}