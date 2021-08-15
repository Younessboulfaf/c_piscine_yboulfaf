#include <stdio.h>
#include <unistd.h>
int     ft_str_is_numeric(char *str)
{
  int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            return (0);
        }
        i++;
    }
    return (1);
}
int main ()
{
    char w[] = "aasfs3";
    printf ("%d" , ft_str_is_numeric(w));

}
