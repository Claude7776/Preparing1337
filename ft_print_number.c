#include<unistd.h>

void	ft_print_number(void)
{
	char n = '0';

	while(n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

#include<stdio.h>

int main(int argc, char *argv[])
{
	ft_print_number();
}
