/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:31:42 by maw               #+#    #+#             */
/*   Updated: 2025/11/02 12:31:49 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>
# include <iterator>

class Span
{
	private:
		unsigned int _storage;
		std::vector<int> _list;
	public:
		Span(unsigned int storage);
		Span(const Span &obj);
		~Span();
		Span& operator=(const Span &obj);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void display();
		void add_range(std::iterator begin, Iterator end);
};

#endif