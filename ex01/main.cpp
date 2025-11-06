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
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.display();
    std::cout << "* SUBJECTS TEST *" << std::endl;
    try
    {
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;        
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
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;        
    }
    catch (...)
    {
        std::cout << "Exception caught" << std::endl;
    }
    std::cout << "* 10'000 TEST *" << std::endl;
    Span v(10000);
    std::vector<int> n1;    
    srand ((unsigned int)time(NULL));
    for (int i = 0; i < 10000; i++)
    {
        int r_num = rand() % 10001;
        n1.push_back(r_num);
    }
    try
    {
        v.add_range(n1.begin(), n1.end());
        std::cout << "shortest span: " << v.shortestSpan() << std::endl;
        std::cout << "longest span: " << v.longestSpan() << std::endl;         
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "* 50'000 TEST *" << std::endl;
    Span v1(20000);
    std::vector<int> n2;    
    srand ((unsigned int)time(NULL));
    for (int i = 0; i < 20000; i++)
    {
        int r_num = rand() % 20001;
        for (int j = 0; j <= n2.size(); j++)
        {
            if (j == n2.size())
                n2.push_back(r_num);
            if (r_num == n2.at(j))
                break ;            
        }
    }
    try
    {
        v1.add_range(n2.begin(), n2.end());
        std::cout << "shortest span: " << v1.shortestSpan() << std::endl;
        std::cout << "longest span: " << v1.longestSpan() << std::endl;         
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
    return 0;
}