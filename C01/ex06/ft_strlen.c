#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
int	main(void)
{
	char *str = "Io speriamo che me la cavo!";
	printf("%i", ft_strlen(str));
	return(0);
}