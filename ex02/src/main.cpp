/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:58:45 by root              #+#    #+#             */
/*   Updated: 2023/01/24 23:49:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
	Array<int>	tab(static_cast<unsigned int>(5));
	std::cout << tab.size() << std::endl;
	std::cout << tab[2] << std::endl;
	return (0);
}