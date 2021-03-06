/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <ochoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:23:20 by ochoumou          #+#    #+#             */
/*   Updated: 2022/04/06 00:15:26 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dstlen;

	i = 0;
	dstlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dest);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

long	ft_atoi(char *str)
{
	long long	i;
	long long	sign;
	long long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
