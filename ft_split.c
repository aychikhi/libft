/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:13:48 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/10 12:49:45 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str && str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			res++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (res);
}

static int	len(const char *str, char c, int i)
{
	int	j;

	j = 0;
	while (str[i] && str[i] != c)
	{
		j++;
		i++;
	}
	return (j);
}

static char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_2d_arr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		l;
	int		i;
	int		j;

	i = 0;
	l = 0;
	j = 0;
	if (!s)
		return (NULL);
	ptr = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (ptr && i < count_word(s, c))
	{
		j += l;
		while (s[j] == c)
			j++;
		l = len(s, c, j);
		ptr[i] = malloc((l + 1) * sizeof(char));
		if (!ptr[i])
			return (free_2d_arr(ptr), free(ptr), NULL);
		ft_strncpy(ptr[i++], s + j, l);
	}
	return (ptr[i] = NULL, ptr);
}
