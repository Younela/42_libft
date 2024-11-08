/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:42:43 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/07 16:35:32 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			return (counter);
		while (*s && *s != c)
			s++;
		counter++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		while (*s && *s != c)
		{
			s++;
			j++;
		}
		str[i++] = ft_substr(s - j, 0, j);
	}
	str[i] = 0;
	return (str);
}
