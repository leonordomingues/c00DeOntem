#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			write (1, &argv[a][i], 1);
			i++;
		}
		write (1, "\n", 1);
		a++;
	}
}
