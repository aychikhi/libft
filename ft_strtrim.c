/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:34:03 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/09 13:23:47 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	size_t			l;

	if (!s1 || !set)
		return (NULL);
	if (!*s1 || !*set)
		return (ft_strdup(s1));
	i = 0;
	while (check(s1[i], set))
		i++;
	l = ft_strlen(s1);
	while (!s1[l] || check(s1[l], set))
		l--;
	str = ft_substr(s1, i, l - i + 1);
	return (str);
}
