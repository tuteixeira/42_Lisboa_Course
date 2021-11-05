
#include <unistd.h>



void ft_isalpha (char l)
{
	if (l >= 65 & l <= 90 || l >= 97 & l <= 122)
		write(1, &l, 1);
	else
		write(1,"n", 1);
}


int main ()
{
	char letter = '8';
	ft_isalpha(letter);
	return 0;
}