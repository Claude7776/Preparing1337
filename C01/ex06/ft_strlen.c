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

int	ft_strlen(char *str)
{
	while (*str)
		str++;
	return (str);
}
/*#include<stdio.h>

int main(int argc, char *argv)
{
	char a[] = "e rtt";

	printf("le nombre de caractères est de :%d \n", ft_strlen(a));
}*/
