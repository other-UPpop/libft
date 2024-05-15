/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:06:20 by rohta             #+#    #+#             */
/*   Updated: 2024/05/14 16:56:02 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;
	size_t		dst_len;
	size_t		i;

	if ((dst == NULL && src == NULL) || dstsize == 0)
		return (0);
	src_len = ft_strlen((char *)(src));
	dst_len = 0;
	while (dst_len < dstsize && *dst)
	{
		dst++;
		dst_len++;
	}
	i = 0;
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
	{
		dst[i] = '\0';
	}
	return (dst_len + src_len);
}
