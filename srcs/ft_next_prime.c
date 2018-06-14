/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 16:37:02 by srheede           #+#    #+#             */
/*   Updated: 2018/03/18 16:48:01 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_next_prime(int nb)
{
	int i;
	int j;
	int ft_is_prime(int nb);

	i = 0;
	while (i == 0)
	{
		j = ++nb;
		i = ft_is_prime(j);
	}
	return (j);
}

int		ft_is_prime(int nb)
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
