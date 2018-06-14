/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:25:42 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 15:52:59 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = ft_strlen(s1);
	while (*s2 && n--)
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
