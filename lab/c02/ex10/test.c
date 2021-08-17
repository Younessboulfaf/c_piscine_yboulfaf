#include <stdio.h>
#include "/Users/yboulfaf/code/c02/ex10/ft_strlcpy.c"

int main ()
{
	char dest[50];
	char src[50] = "hello what's up";
	printf("%s\n" , dest);
	printf("%d\n" , ft_strlcpy(dest, src, 20));
	printf("%s" , dest);
	return (0);
}
