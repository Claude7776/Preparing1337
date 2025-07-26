/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   <filename>                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codecld7 <codecl@proton.me>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by yourlogin        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by yourlogin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	nb[3];

	nb[0] = '0';
	while (nb[0] <= '7')
	{
		nb[1] = nb[0] + 1;
		while (nb[1] <= '8')
		{
			nb[2] = nb[1] + 1;
			while (nb[2] <= '9')
			{
				write(1, &nb[0], 1);
				write(1, &nb[1], 1);
				write(1, &nb[2], 1);
				if (nb[0] != '7')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				nb[2]++;
			}
			nb[1]++;
		}
		nb[0]++;
	}
}
/*
#include <stdio.h>

int	main()
{
	ft_print_comb();
}*/
