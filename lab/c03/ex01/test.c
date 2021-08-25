#include <stdio.h>
#include "/Users/yboulfaf/code/c03/ex01/ft_strncmp.c"

int main ()
{
	char s1[] = "Abc";
	char s2[] = "rwscc";
	printf("%d" , ft_strncmp(s1 ,s2,0));
	return 0;
}
