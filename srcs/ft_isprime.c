/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 06:24:03 by srheede           #+#    #+#             */
/*   Updated: 2018/03/18 13:20:20 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_isprime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0 && nb == i)
			return (1);
		else if (nb % i == 0 && nb != i)
			return (0);
		else
			i++;
	}
	return (0);
}
