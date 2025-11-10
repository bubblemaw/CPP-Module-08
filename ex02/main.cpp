/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:44:46 by masase            #+#    #+#             */
/*   Updated: 2025/11/06 14:44:51 by masase           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
std::cout << "* SUBJECTS TESTS *" << std::endl;
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}

std::cout << "* WITH THE LIST THE CONTAINER *" << std::endl;
std::list<int> lstack;
lstack.push_back(5);
lstack.push_back(17);
std::cout << lstack.back() << std::endl;
lstack.pop_back();
std::cout << lstack.size() << std::endl;
lstack.push_back(3);
lstack.push_back(5);
lstack.push_back(737);
//[...]
lstack.push_back(0);
std::list<int>::iterator it2 = lstack.begin();
std::list<int>::iterator ite2 = lstack.end();
++it2;
--it2;
while (it2 != ite2)
{
std::cout << *it2 << std::endl;
++it2;
}
std::cout << "* OWN TESTS  *" << std::endl;
MutantStack<int> own;

own.push(45);
own.push(89);
own.push(100);
std::cout << "pushed 45" << std::endl;
std::cout << "pushed 89" << std::endl;
std::cout << "pushed 100" << std::endl;
MutantStack<int>::reverse_iterator r_it1 = own.rbegin();
MutantStack<int>::reverse_iterator r_ite1 = own.rend();
std::cout << "CURRENT STACK STATE" << std::endl;
ite = own.end();
for (it = own.begin(); it != ite; it++)
    std::cout << *it << std::endl;
std::cout << "REVERSE ORDER" << std::endl;
while (r_it1 != r_ite1)
{
    std::cout << *r_it1 << std::endl;
    r_it1++; 
}
own.pop();
std::cout << "pop number at the top [100]" << std::endl;
std::cout << "CURRENT STACK STATE" << std::endl;
ite = own.end();
for (it = own.begin(); it != ite; it++)
    std::cout << *it << std::endl;
return 0;
}