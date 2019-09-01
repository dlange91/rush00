/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 11:03:12 by moudmine          #+#    #+#             */
/*   Updated: 2019/08/31 16:50:19 by moudmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		first_line(int colonne)
{
	int i;

	i = 0;
	ft_putchar('o');
	i++;
	if (colonne > 1)
	{
		while (i + 1 < colonne)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void		middle(int colonne, int ligne)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j + 1 < ligne)
	{
		ft_putchar('|');
		i++;
		if (colonne > 1)
		{
			while (i + 1 < colonne)
			{
				write(1, " ", 1);
				i++;
			}
			ft_putchar('|');
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}

void		lastline(int colonne)
{
	int i;

	i = 0;
	ft_putchar('o');
	i++;
	if (colonne > 1)
	{
		while (i + 1 < colonne)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x);
		if (y >= 2)
			middle(x, y);
		if (y >= 3)
			lastline(x);
	}
}
