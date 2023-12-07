/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:49:46 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/06 15:40:21 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class T>
void    iter(T *array, int arraySize, void(*f)(T const &element))
{
    for(int i = 0; i < arraySize; i++)
    {
        T &element = array[i];
        f(element);
    }
}

#endif