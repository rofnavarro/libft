/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:57:36 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:29 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	answer;

	answer = n;
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		else
			ft_putchar_fd('-', fd);
		answer = n * -1;
	}
	if (answer > 9)
	{
		ft_putnbr_fd(answer / 10, fd);
	}
	ft_putchar_fd(((answer % 10) + '0'), fd);
}
