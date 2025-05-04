#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
		ft_putchar('N');

}

#include<stdio.h>

int main(int argc, char *argv)
{
	printf("\n");
	ft_is_negative(12);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(-1);
	printf("\n");
	ft_is_negative(-2);
	printf("\n");

}
