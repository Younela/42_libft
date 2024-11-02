/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:58:16 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/01 17:06:04 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s ;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst <= src)
	{
		dst = ft_memcpy(dst, src, len);
	}
	else
	{
		while (len)
		{
			d[len] = s[len];
			len--;
		}
	}
	return (dst);
}
