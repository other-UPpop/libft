/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:13:56 by rohta             #+#    #+#             */
/*   Updated: 2024/05/14 18:12:42 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*str;
	int			str_sublen;
	size_t		str_len;

	str_len = ft_strlen((void *)(s));
	if (s == NULL)
		return (NULL);
	if (start > str_len)
		len = 0;
	if (ft_strlen((void *)(start + s)) < len)
	{
		str_sublen = (str_len + start);
	}
	else
		str_sublen = len;
	str = (char *)malloc((str_sublen + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, str_sublen + 1);
	return (str);
}
