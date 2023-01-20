/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:29:19 by root              #+#    #+#             */
/*   Updated: 2023/01/20 14:53:07 by root             ###   ########.fr       */
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

template<typename T>
void	iter(T tab[], size_t const size, void (*f)(T&))
{
	if (size && f)
		for (size_t i(0); i < size; i++)
			(*f)(tab[i]);
}