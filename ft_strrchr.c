/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:28:08 by yoelali           #+#    #+#             */
/*   Updated: 2024/11/02 15:31:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
	size_t len;

	len = ft_strlen(s) - 1; // Get the length of the string
	// Loop from the end of the string to the beginning
	while (len > 0) {
		if (s[len] == (char)c) // Compare with the character
			return (char *)(s + len); // Return pointer to the found character
		len--;
	}
	// Check for the null terminator
	if (s[len] == (char)c)
		return (char *)(s + len); // Return pointer to the null terminator if found
	return (NULL); // Return NULL if the character is not found
}