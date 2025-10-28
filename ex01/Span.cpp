/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:31:32 by maw               #+#    #+#             */
/*   Updated: 2025/10/28 00:31:25 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int storage) : _storage(storage)
{
	std::cout << "Default Span constructor" << std::endl;
}

Span::Span(const Span &obj)
{
	std::cout << "Span Copy constructor" << std::endl;
	*this = obj;
}

Span::~Span()
{
	std::cout << "Span destructor" << std::endl;
}

Span& Span::operator=(const Span &obj)
{
	std::cout << "Span assignement operator" << std::endl;
	if (this != &obj)
	{
		_storage = obj._storage;
		_list = obj._list;
	} 
	return (*this);
}


void Span::addNumber(int number)
{
	
}