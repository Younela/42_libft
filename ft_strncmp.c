/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:29:10 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/07 16:32:03 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*s0;

	s = (unsigned char *)s1;
	s0 = (unsigned char *)s2;
	i = 0;
	while ((s1[i] || s0[i]) && i < n)
	{
		if (s[i] != s0[i])
			return (s[i] - s0[i]);
		i++;
	}
	return (0);
}
