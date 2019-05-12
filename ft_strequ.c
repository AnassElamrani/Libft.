/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:38:26 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/11 03:29:16 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int j;
	int i;

	if (s1 && s2)
	{
		j = 0;
		i = 0;
		while (s1[i] && s2[j] && s1[i] == s2[j])
		{
			j++;
			i++;
		}
		if (s1[i] == s2[j])
			return (1);
	}
	return (0);
}