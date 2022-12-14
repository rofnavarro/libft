/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:44:49 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:17 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			counter;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	counter = 0;
	while (counter < n)
	{
		if (tmp_s1[counter] != tmp_s2[counter])
		{
			return ((int)(tmp_s1[counter] - tmp_s2[counter]));
		}
		if (n == 0)
		{
			return (0);
		}
		counter++;
	}
	return (0);
}
