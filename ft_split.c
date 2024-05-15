/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:27:32 by rohta             #+#    #+#             */
/*   Updated: 2024/04/26 15:06:57 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	**ft_split(const char *str, char c)
{
	char	**store;
	int		count;
	int		start;
	size_t	index;
	size_t	i;

	if (!str)
		return (NULL);
	count = 1;
	start = 0;
	index = 0;
	i = 0;
	store = (char **)malloc((count + 1) * sizeof(char *));
	if (!store)
		return (NULL);
	while (str[i] != '\0')
		if (str[i] == c)
		{
			store[index] = (char *)malloc((i - start + 1) * sizeof(char));
			if (!store[index])
				return (NULL);
			ft_strlcpy(store[index], str + start, i - start);
			store[index][i - start] = '\0';
			index++;
			start = i + 1;
		}
		
