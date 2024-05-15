/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 04:07:55 by rohta             #+#    #+#             */
/*   Updated: 2024/05/14 17:58:30 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || !*needle)
		return ((char *)(haystack));
	while (needle[i] && i <= len)
		i++;
	while (*haystack != '\0' && len >= i)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, len))
		{
			return ((char *)(haystack));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
