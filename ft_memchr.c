/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:34:07 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/01 17:37:49 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	byte_1;

	i = 0;
	while (i < n)
	{
		byte_1 = ((unsigned char *)s)[i];
		if (byte_1 == c)
			return (((void *)s) + i);
		i++;
	}
	return (NULL);
}
