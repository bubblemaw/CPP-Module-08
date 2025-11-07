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
    if (*this != &obj)
    {
        this->_stack = obj._stack;
    }
    return *this;
}

template <typename T>
void MutantStack<T>::push(T value)
{
    _stack.push_front(value);
}

template <typename T>
void MutantStack<T>::pop()
{
    _stack.pop_front();
}

template <typename T>
T& MutantStack<T>::top()
{
    return (_stack.front());
}

template <typename T>
bool MutantStack<T>::empty()
{
    return (_stack.empty());
}

template <typename T>
int MutantStack<T>::size()
{
    return (_stack.size());
}

template <typename T>
T& MutantStack<T>::iterator()
{
    return (_stack.size());
}

