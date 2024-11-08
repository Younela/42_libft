/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelali <yoelali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:53:50 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/07 16:29:15 by yoelali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*sp;

	sp = malloc(count * size);
	if (!sp)
		return (NULL);
	ft_bzero(sp, count * size);
	return (sp);
}
