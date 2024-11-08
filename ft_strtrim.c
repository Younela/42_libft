/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:49:58 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/04 13:42:51 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	star;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = ft_strlen(s1);
	star = 0;
	while (s1[star] && ft_strchr(set, s1[star]))
		star++;
	if (star == i)
		return (ft_strdup(""));
	while (s1[i] && ft_strrchr(set, (int)s1[i]))
		i--;
	len = i - star;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
		str[i++] = s1[star++];
	str[i] = '\0';
	return (str);
}