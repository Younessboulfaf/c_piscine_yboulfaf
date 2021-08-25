#include <stdio.h>
#include "/Users/yboulfaf/code/c03/ex05/ft_strlcat.c"
int main ()
{
	char src[] = "hello youness";
	char dest[] = "hello";
	printf ("%u" , ft_strlcat(src ,dest , 10));
}
