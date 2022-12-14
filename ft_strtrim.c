/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:57:40 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:45:02 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	length = ft_strlen(s1);
	while (length && ft_strchr(set, s1[length]))
	{
		length--;
	}
	return (ft_substr(s1, 0, length + 1));
}
