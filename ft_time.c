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

#include <stdio.h>

void	ft_dec_time(int *h, int *m)

{
	*h = *m / 60;
	*m = *m % 60;
}
/*
int	main(int argc, char **argv[])
{
	int	heures = 0, minutes = 90;
	ft_dec_time(&heures, &minutes);
	printf("%d heures et %d minutes\n", heures, minutes);
}*/
