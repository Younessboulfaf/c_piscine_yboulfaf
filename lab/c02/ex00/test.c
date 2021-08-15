#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}
int main()
{
    char s[5] = "hell";
    char d[5];
    printf("%s",ft_strcpy(d,s));
    return(0);
}
