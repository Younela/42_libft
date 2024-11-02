/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:53:43 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/01 17:11:56 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	size_t	i;
	char	*str;

	size = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = (char *)s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
