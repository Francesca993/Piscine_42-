#include  <unistd.h>
int	main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
	{
		write (1, "\n", 1);
	}
	else if (argc > 1)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
