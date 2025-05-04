#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/***
#include<stdio.h>

int main(int argc, char *argv)
{
	char c = 'a';

	ft_putchar(c);
}
**/
