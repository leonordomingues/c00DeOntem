#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		write (1, &str[i], 1);
		i++;
	}
}
void	ft_allstrings(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}
int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i]==str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 1;
		}
		else
			i++;
	}
	ft_allstrings(argc, argv);
}
