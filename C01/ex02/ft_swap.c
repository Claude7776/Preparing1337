/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   <filename>                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <your@email>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by yourlogin        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by yourlogin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include<stdio.h>

int main(int argc, char *argv)
{
	int temp;

	int a = 1;
	int b = 2;

	printf("le nombre de a : %d et du nombe de b : %d avant\n", a, b);

	ft_swap(&a, &b);
printf("a est maintenant : %d\n et b est maintenant : %d", a, b);
	
}*/
