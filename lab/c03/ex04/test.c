#include <stdio.h>
#include "/Users/yboulfaf/code/c03/ex04/ft_strstr.c"
int main ()
{
	char str[15] = "hello youness";
	char to_find[15] = "hel";
	printf ("%s" , ft_strstr(str ,to_find));
}
