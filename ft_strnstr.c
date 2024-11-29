/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:39:18 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/09 10:31:57 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*ptr;
	size_t	i;
	size_t	j;

	str = (char *)big;
	ptr = (char *)little;
	if (str && *little == '\0')
		return (str);
	if (!*little)
		return (0);
	i = 0;
	while (str[i] && len > i)
	{
		j = 0;
		while (little[j] && str[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
