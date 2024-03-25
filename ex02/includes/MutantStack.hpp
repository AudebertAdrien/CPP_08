/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:09:54 by motoko            #+#    #+#             */
/*   Updated: 2024/03/25 13:21:48 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template< typename T, typename Container = std::deque< T > >
class MutantStack : public std::stack< T, Container> {
	private:
		std::stack<T> _stack;	
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &rhs) { 
			*this = rhs;
		};
		MutantStack& operator=(const MutantStack &rhs) {
			std::stack< T, Container>::operator=(rhs);
			return (*this);
		};

		typedef typename Container::iterator	iterator; 

		iterator	begin() {
			return (this->c.begin());
		}
		iterator	end() {
			return (this->c.end());
		}
};
