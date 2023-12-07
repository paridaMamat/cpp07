/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:00:59 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/04 15:36:45 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T max(T &a, T &b)
{
    return(a > b ? a : b);
}

template <typename T>
T &max2(T &a, T &b)
{
    return(a > b ? a : b);
}

template <typename T>
T min(T &a, T &b)
{
    return(a < b ? a : b);
}
template <typename T>
T &min2(T &a, T &b)
{
    return(a < b ? a : b);
}
template <typename T>
void swap(T &a, T &b)
{
    T tmp;
    tmp  = a;
    a = b;
    b = tmp;
}



#endif