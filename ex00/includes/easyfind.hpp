/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:34:15 by motoko            #+#    #+#             */
/*   Updated: 2024/03/20 16:13:25 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void	easyfind(T& container, int value) {
	if (std::find(container.begin(), container.end(), value) != container.end())
		std::cout << "Found." << std::endl;
	else
		std::cout << "Not found." << std::endl;
}
