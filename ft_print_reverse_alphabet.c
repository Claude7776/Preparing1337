#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char l = 'z';
	while(l >= 'a')
	{
		write(1, &l, 1);
		l--;
	}
}

#include<stdio.h>

int main(int argc, char *argv)
{
	ft_print_reverse_alphabet();
}
