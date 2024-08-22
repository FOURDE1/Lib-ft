/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:43:19 by hraad             #+#    #+#             */
/*   Updated: 2024/08/22 03:47:17 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	countstr(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		size;
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	size = countstr(s, c) + 1;
	ptr = (char **)malloc(size * sizeof(char));
	if (!ptr)
		return (0);
	while (s[i] != '\0')
	{
		if ()

	}

}

static	int	countstr(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
