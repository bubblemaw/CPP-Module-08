/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:18:29 by maw               #+#    #+#             */
/*   Updated: 2025/10/27 18:29:01 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	std::vector<int> vec = {45, 12, 78, 90};
	try
	{
		easyfind(vec, 78);
	}
	catch (...)
	{
		std::cout << "ouppsss i didn't find an occurence of the desired number :(" << std::endl;
	}
	try
	{
		easyfind(vec, 11);
	}
	catch (...)
	{
		std::cout << "ouppsss i didn't find an occurence of the desired number :(" << std::endl;
	}	
	return (0);
}