#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i;
	int	a;

	a = argc - 1; // como nas strings
	while (a >= 1)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		write (1, "\n", 1);
		a--;
	}
}
