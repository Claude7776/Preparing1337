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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char a[] = "claude";
	char b[] = "claude";

	char c[] = "hello";
	char d[] = "hel";

	char e[] = "he";
	char f[] = "hhhh";
	
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(c, d));
	printf("%d\n", ft_strcmp(e, f));
}*/
