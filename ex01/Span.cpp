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
	if (_storage > _list.size())
		_list.push_back(number);
}

int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw std::exception();	
	std::vector<int> temp;
	temp = _list;
	for (int i = 0; i < temp.size(); i++)
		std::cout << temp[i] << ' ';
	std::cout << std::endl;		
	sort(temp.begin(), temp.end());
	for (int i = 0; i < temp.size(); i++)
		std::cout << temp[i] << ' ';
	std::cout << std::endl;		
	return(temp.at(1) - temp.at(0));
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw std::exception();
	std::vector<int> temp;
	temp = _list;
	sort(temp.begin(), temp.end());
	return(temp.back() - temp.front());
}

void	Span::display()
{
	for (int i = 0; i < _list.size(); i++)
		std::cout << _list[i] << ' ';
	std::cout << std::endl;
}