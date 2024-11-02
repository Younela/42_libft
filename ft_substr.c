/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:00:29 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/01 17:41:46 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(sizeof(char) * (len - (size_t)start + 1));
	if (ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = (char *)s[i + (size_t)start];
		i++;
	}
}