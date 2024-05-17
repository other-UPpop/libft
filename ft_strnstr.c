/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 04:07:55 by rohta             #+#    #+#             */
/*   Updated: 2024/05/17 15:54:25 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	if (!*needle)
		return ((char *)(haystack));
	i = ft_strlen(needle);
	if (len == 0 || i > len)
		return (NULL);
	while (*haystack && len >= i)
	{
		if (ft_strncmp(haystack, needle, i) == 0)
		{
			return ((char *)(haystack));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
