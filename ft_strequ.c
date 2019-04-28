/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coclayto <coclayto@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 22:38:30 by coclayto          #+#    #+#             */
/*   Updated: 2019/04/28 22:38:33 by coclayto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] == s2[i] && (s1[i] && s2[i]))
		{
			if (s1[i] == s2[i])
				i++;
		}
		if (!s1[i] && !s2[i])
			return (1);
	}
	return (0);
}
