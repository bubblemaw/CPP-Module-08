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
# include <stack>
# include <deque>

template  <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack ();
        MutantStack (const MutantStack &obj);
        ~MutantStack();
        MutantStack& operator=(const MutantStack &obj);
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;         
};
# include "MutantStack.tpp"

#endif