#include <stdio.h>
#include <unistd.h>
int ft_str_is_alpha(char *str)
{
    int i;

	i = 0;
    while (str[i] != '\0')
    {
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] >'z')
		{
			return (0);
		}
		i++;
    }
    return (1);
}
int main()
{
	char w[]= "qwwGUTVUJGVi";
	printf ("%d" , ft_str_is_alpha(w));
}
