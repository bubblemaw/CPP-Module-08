/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:18:34 by maw               #+#    #+#             */
/*   Updated: 2025/10/27 18:29:12 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <vector>
# include <iostream>
# include <exception>

template <typename T>
void easyfind(T container, int target)
{
	for (int i = 0; i < container.size(); i++)
	{
		if (container[i] == target)
		{
			std::cout << "We found an occurence of the number: " << target << std::endl;
			return ;
		}
	}
	throw std::exception();
}

#endif