#include <stdio.h>
#include <unistd.h>
int ft_str_is_uppercase(char *str)
{

    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
        {
            return (0);
        }
        i++;
    }
    return (1);
}
int main ()
{
	char z[] = "2ASD";
	printf ("%d" ,ft_str_is_uppercase(z));
}
