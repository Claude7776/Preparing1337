
#include<unistd.h>

void	ft_print_alphabet(void)
{
	char l = 'a';
	while(l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}

#include<stdio.h>

int main(int argc, char *argv)
{
	ft_print_alphabet();
}
