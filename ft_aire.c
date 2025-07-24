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
void	aire_rect(double L, double l)
{
	double	aire;

	aire = l * L;
	printf("L'aire du rectangle de %.1f et %.1f est de: %.2f\n", L, l, aire);
}

int	main(int argc, char **ragv[])
{
	aire_rect(2.2, 2.2);
}
