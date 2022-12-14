/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:06:39 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:43:35 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signal;
	int	counter;

	result = 0;
	signal = 1;
	counter = 0;
	while ((nptr[counter] >= 9 && nptr[counter] <= 13) || nptr[counter] == 32)
		counter++;
	if (nptr[counter] == '-' && ft_isdigit(nptr[counter + 1]))
	{
		signal = -1;
		counter++;
	}
	if (nptr[counter] == '+' && ft_isdigit(nptr[counter + 1]))
	{
		counter++;
	}
	while (ft_isdigit(nptr[counter]))
	{
		result = (result * 10) + (nptr[counter] - '0');
		counter++;
	}
	return (signal * result);
}
