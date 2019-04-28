/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coclayto <coclayto@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 22:35:24 by coclayto          #+#    #+#             */
/*   Updated: 2019/04/28 22:35:28 by coclayto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*sc1;
	const char	*sc2;

	i = 0;
	sc1 = s1;
	sc2 = s2;
	while (i < n)
	{
		if (sc1[i] == sc2[i])
			i++;
		else if (sc1[i] > sc2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}
