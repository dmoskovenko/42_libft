/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coclayto <coclayto@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 22:42:21 by coclayto          #+#    #+#             */
/*   Updated: 2019/04/28 22:42:24 by coclayto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0;
	j = 0;
	while (i <= len)
	{
		if (little[j] == '\0')
			return ((char *)big);
		while (big[i] != little[j] && i <= len)
			i++;
		point = i;
		while (big[i] == little[j] && i <= len)
		{
			if (!little[j])
				return ((char *)&big[point]);
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[point]);
		j = 0;
	}
	return (0);
}
