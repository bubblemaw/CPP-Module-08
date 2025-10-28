/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:31:42 by maw               #+#    #+#             */
/*   Updated: 2025/10/28 10:01:56 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>

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
};

#endif