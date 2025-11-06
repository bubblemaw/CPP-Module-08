/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:45:14 by masase            #+#    #+#             */
/*   Updated: 2025/11/06 14:45:18 by masase           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <iterator>


template  <typename T>
class MutantStack
{
    private:
        std::vector<T> _stack;
    public:
        MutantStack ();
        MutantStack (const MutantStack &obj);
        ~MutantStack();
        MutantStack& operator=(const MutantStack &obj);
        push(T value);
        pop();
        top();
        empty();
        size();
        //iterator

};

#endif