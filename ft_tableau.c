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

int	main(int agrc, char *argv[])
{
	int	tableau[4] = {1, 2, 3, 4};

	printf("%d: voici le caractère\n", *(tableau));
	printf("%d: voici le 2 caractère\n", *(tableau + 1));
	printf("%d: voici le 3 caractère\n", *(tableau + 2));
	printf("%d: voici le 4 caractère\n", *(tableau + 3));

}
