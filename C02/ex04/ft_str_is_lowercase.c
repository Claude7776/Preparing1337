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

int	ft_str_is_lowercase(char *str)

{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c[] = "1234567890";

printf("%d\n", ft_str_is_lowercase(a));
printf("%d\n", ft_str_is_lowercase(b));
printf("%d\n", ft_str_is_lowercase(c));
}*/
