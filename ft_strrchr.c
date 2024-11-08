/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:28:08 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/06 14:28:53 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	len = ft_strlen(s);
	ch = (char)c;
	while (0 <= len)
	{
		if (s[len] == ch)
			return ((char *)(s + len));
		len--;
	}
	if (ch == 0)
		return ((char *)s);
	return (NULL);
}
