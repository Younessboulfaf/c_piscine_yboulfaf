#include "/Users/yboulfaf/code/c01/ex01/ft_ultimate_ft.c"
#include <stdio.h>
int main ()
{
	int *********a;
	int ********b;
	int *******c;
	int ******d;
	int *****e;
	int ****f;
	int ***g;
	int **h;
	int *pointer;
	int num;


	pointer = &num;
	h = &pointer;	
	g = &h;
	f = &g;
	e = &f;
	d = &e;
	c = &d;
	b = &c;
	a = &b;

	num = 0;
	ft_ultimate_ft(a);
	printf("%d" , num);	
return (0);
}
