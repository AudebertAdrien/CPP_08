/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:23:29 by motoko            #+#    #+#             */
/*   Updated: 2024/03/20 18:21:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>

#include "easyfind.hpp"

int main(int ac, char **av)
{
	std::cout << "Hello World!" << std::endl;

	if (ac != 2)
		return (EXIT_FAILURE);

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::vector<int>	toto(arr, arr + sizeof(arr) / sizeof(int));
	//std::vector<int>	toto = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	easyfind(toto, std::atoi(av[1]));

}
