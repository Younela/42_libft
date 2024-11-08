/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:40:28 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/07 16:34:25 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*src;
	char	*str;

	src = (char *)haystack;
	str = (char *)needle;
	i = 0;
	if (!*str)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == str[j] && (i + j) < len)
		{
			if (str[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
