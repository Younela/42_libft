/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:50:32 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/02 15:24:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {
	int i = 0;
	
	// Loop through the string until we find the null terminator
	while (s[i] != '\0') {
		if (s[i] == (char)c) {
			return (char *)(s + i); // Return pointer to the found character
		}
		i++;
	}
	// Check if the character is the null terminator
	if (s[i] == (char)c) {
		return (char *)(s + i); // Return pointer to the null terminator if found
	}
	return (NULL); // Return NULL if the character is not found
}