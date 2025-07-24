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
int	menu()
{
	int	choix;

	choix = 0;
	while (choix < 1 || choix > 4)
	{
		printf("************\n");
		printf("****MENU****\n");
		printf("************\n");
		printf("1 : Poulet\n");
		printf("2 : Viande\n");
		printf("3 : patate\n");
		printf("4 : Plat du chef\n");
		scanf("%d", &choix);
	}
			return (choix);
}

int	main()
{
	switch (menu())
	{
		case 1:
			printf("Choisi poulet\n");
		break;

		case 2:
			printf("Choisi viande\n");
		break;

		case 3:
			printf("Choisi patate\n");
		break;

		case 4:
			printf("Choisi le Menu du chef\n");
		break;
	}
		return (0);
}
