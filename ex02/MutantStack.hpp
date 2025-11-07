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
# include <vector>
# include <list>

template  <typename T>
class MutantStack
{
    private:
        std::list<T> _stack;
    public:
        MutantStack ();
        MutantStack (const MutantStack &obj);
        ~MutantStack();
        MutantStack& operator=(const MutantStack &obj);
        void push(T value);
        void pop();
        T& top();
        bool empty();
        int size();
        T& iterator();

};
# include "MutantStack.tpp"

#endif