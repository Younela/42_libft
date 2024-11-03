/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:09:29 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/02 15:33:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	//ft_isspace
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i])
	{
		i++;
	}
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) && str[i])
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
