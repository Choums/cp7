/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:29:55 by root              #+#    #+#             */
/*   Updated: 2023/01/20 14:52:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int	main(void)
{
	size_t const	t(3);
	std::string 	tab[t] = {	"salut",
								"hola",
								"bjr"};
	::iter<std::string>(tab, t, &f);
	for (size_t i(0); i < t; i++)
		std::cout << tab[i] << "\t" << i << "/" << t << std::endl;
	
	std::cout << "-----\n";
	
	int	array[t] = {0, 1, 2};

	::iter<int>(array, t, &fi);
	for (size_t i(0); i < t; i++)
		std::cout << array[i] << "\t" << i << "/" << t << std::endl;
	return (0);
}