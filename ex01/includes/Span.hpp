/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:00:48 by motoko            #+#    #+#             */
/*   Updated: 2024/03/21 15:14:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <exception>
#include <algorithm>

class Span
{
	private:
		std::list<int>  _list;
		unsigned int    _n;

		Span( void );

	public:
		Span( unsigned int );
		Span( const Span& );
		~Span( void );
		Span&               operator=( const Span& );

		void                addNumber( int );
		void                addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
		unsigned int        longestSpan( void ) const;
		unsigned int        shortestSpan( void ) const;

		const std::list< int >*   getList( void ) const;
};

std::ostream& operator<<( std::ostream&, const Span& );
