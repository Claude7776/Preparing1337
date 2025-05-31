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

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main(int argc, char *argv[])
{
	char a [] = "AZERTQWERTYbjdhgfhis";
	char b [] = "1234567890107263432417";
	char c [] = "";
printf("%d\n", ft_str_is_numeric(a));
printf("%d\n", ft_str_is_numeric(b));
printf("%d\n", ft_str_is_numeric(c));
}*/
