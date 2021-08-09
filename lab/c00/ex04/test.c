#include <unistd.h>
#include "/Users/yboulfaf/code/old/ex04/ft_is_negative.c"
int main()
{
	ft_is_negative(4);
	write (1, "\n", 1);
	 ft_is_negative(0);
    write (1, "\n", 1);
	 ft_is_negative(-1000);
    write (1, "\n", 1);
	return (0);
}
