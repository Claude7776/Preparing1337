/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterat                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codecld7 <codecl@proton.me>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by yourlogin        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by yourlogin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*#include<stdio.h>

int	main(int argc, char argv[])
{
	int a = 2;
	int b = 2;
printf("voici la puissance %d\n", ft_iterative_power(2, 2));
}*/
