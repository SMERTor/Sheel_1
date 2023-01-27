/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/02/16 23:27:33 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printf(int x, char a, char b)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_print(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			ft_printf(x, '#', '-');
		}
		else
		{
			ft_printf(x, '|', ' ');
		}
		i++;
	}
}

int	main(void)
{
	int	x;
	int	y;

	scanf("%d %d", &x, &y);
	ft_print(x, y);
	return (0);
}
