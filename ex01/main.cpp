/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:31:37 by maw               #+#    #+#             */
/*   Updated: 2025/11/02 10:44:17 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::vector<int> numbers = {12, 890, 1, 4584958, 11111, 909};
    Span sp = Span(40);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(18);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.display();
    std::cout << "* SUBJECTS TEST *" << std::endl;
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;        
    }
    catch (...)
    {
        std::cout << "Exception caught" << std::endl;
    }
    try
    {
        sp.add_range(numbers.begin(), numbers.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp.display();
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;        
    }
    catch (...)
    {
        std::cout << "Exception caught" << std::endl;
    }

    Span v(10000);
    std::vector<int> n1;    
    srand ((unsigned int)time(NULL));
    for (int i = 0; i < 10000; i++)
    {
        int r_num = rand() % 10001;
        n1.push_back(r_num);
    }
    v.add_range(n1.begin(), n1.end());
    // v.display();
    return 0;
}