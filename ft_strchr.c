/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:23:25 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/09 17:25:53 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;
	size_t	len;	

	str = (char *)s;
	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
