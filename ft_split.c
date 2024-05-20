/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:27:32 by rohta             #+#    #+#             */
/*   Updated: 2024/05/20 11:35:06 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_iscount(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			len++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (len);
}

void	*ft_memfree(char **s, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_nullck(char **str, size_t i)
{
	if (str[i] == NULL)
	{
		ft_memfree(str, i);
		return (NULL);
	}
	return (str);
}

char	**ft_isword(const char *s, char **str, char c)
{
	const char	*start;
	size_t		i;
	size_t		len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			start = s;
			while (*s && *s != c && ++len)
				s++;
			str[i] = ft_substr(start, 0, len);
			if (ft_nullck(str, i) == NULL)
				return (NULL);
			i++;
		}
		else
			s++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_iscount(s, c) + 1));
	if (!str)
		return (NULL);
	if (!ft_isword(s, str, c))
		return (NULL);
	return (str);
}
