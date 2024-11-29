/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:37:00 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/08 15:18:32 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += 1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_len(n);
	i = len;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i - 1] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str[len] = '\0', str);
}
