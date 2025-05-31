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

int	*ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*#include<stdio.h>
#define N 2
int main(int argc, char *argv[])
{
	char a[] = "Hello";
	char b[] = "heLlo";
	printf("%d\n", ft_strncmp
}*/
