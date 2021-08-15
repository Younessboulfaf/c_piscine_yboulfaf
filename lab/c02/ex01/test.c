#include <stdio.h>
#include <unistd.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while ((src[i] != '\0') && (i < n))
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
int main ()
{
	char s[] = "hell.hell.hell.hell";
    char d[20];
    printf("%s",ft_strncpy(d,s,20));
    return(0);
}
