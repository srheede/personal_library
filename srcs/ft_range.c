/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 14:40:31 by srheede           #+#    #+#             */
/*   Updated: 2018/03/22 11:36:33 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int        *ft_range(int min, int max)
{
    int    *array;
    int    i;
    
    if (min >= max)
        return (0);
    i = 0;
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}
