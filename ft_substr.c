/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hang <hang@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 03:00:04 by hang              #+#    #+#             */
/*   Updated: 2023/11/18 14:12:49 by hang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (0);
	if ((int)start >= ft_strlen(s))
	{
		char *str2;
		str2 = malloc(1);
		str2[0] = '\0';
		return (str2);
	}
	size_t i;
	size_t bytes;
	char *str;

	i = 0;
	bytes = 0;
	while (bytes < len && s[start + bytes])
		bytes++;
	str = malloc(sizeof(char) * (bytes + 1));
	if (!str)
		return (NULL);
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}