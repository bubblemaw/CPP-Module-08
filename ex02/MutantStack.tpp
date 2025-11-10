/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:47:16 by masase            #+#    #+#             */
/*   Updated: 2025/11/06 14:47:20 by masase           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "Default MutantStack Constructor" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
    std::cout << "Default MutantStack Copy Constructor" << std::endl;
    *this = obj;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "Default MutantStack Destructor" << std::endl;
}

template <typename T>
MutantStack<T>&    MutantStack<T>::operator=(const MutantStack &obj)
{
    std::cout << "Default MutantStack assigment operator" << std::endl;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
   return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
   return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
   return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
   return (this->c.rend());
}