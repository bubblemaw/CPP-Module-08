/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:31:32 by maw               #+#    #+#             */
/*   Updated: 2025/11/02 12:31:48 by maw              ###   ########.fr       */
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
	int result = __INT_MAX__;
	if (_list.size() < 2)
		throw std::exception();	
	std::vector<int> temp;
	temp = _list;
	sort(temp.begin(), temp.end());
	std::vector<int>::iterator it;
	for(it = temp.begin(); it + 1 < temp.end(); it++)
	{						
		if (*(it + 1) - *it < result)
		{
			result = *(it + 1) - *it;
			// std::cout << "first: " << *(it + 1) << " second: " << *it << std::endl;
		}
	}
	return(result);
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

void Span::add_range(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int add_size = end - begin;
	if (add_size + _list.size() > _storage)
		throw std::exception();
	_list.insert(_list.end(), begin, end);
}