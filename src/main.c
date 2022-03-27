#include "../include/ft_printf.h"

# include <stdio.h>

int	main(void)
{	

	// Colors
	char *black = "\x1b[30m";
	char *red = "\x1b[31;40m";
	char *green = "\x1b[32m";
	char *yellow = "\x1b[33;40m";
	char *blue = "\x1b[34m";
	char *magenta = "\x1b[35m";
	char *cyan = "\x1b[36m";
	char *white = "\x1b[37m";

	char *color1 = red;
	char *color2 = yellow;

	//	is_c
	printf("\n%s---------   (c)   --------%s\n",color1,color2);
	char chr = 'c';
	ft_printf("char = %c", chr);
	printf("\n");
	printf("char = %c\n\n", chr);
	

	//	is_s
	printf("\n%s---------   (s)   --------%s\n",color1,color2);
	char *str = "mücahit";
	ft_printf("str = %s", str);
	printf("\n");
	printf("str = %s\n\n", str);

	//	is_p
	printf("\n%s---------   (p)   --------%s\n",color1,color2);
	int p = 10;
	ft_printf("ptr = %p", &p);
	printf("\n");
	printf("ptr = %p\n\n", &p);

//	is_d/i
	printf("\n%s---------   (d/i)   --------%s\n",color1,color2);
	int i = 10;
	int d = 20;
	ft_printf("int_d/i = %d/%i ", d, i);
	printf("\n");
	printf("int_d/i = %d/%i\n\n", d, i);

//	is_u
	printf("\n%s---------   (u)   --------%s\n",color1,color2);
	int u = 10;
	ft_printf("unsigned = %u", u);
	printf("\n");
	printf("unsigned = %u\n\n", u);

//	is_x
	printf("\n%s---------   (x/X)   --------%s\n",color1,color2);
	int x = 10;
	int X = 20;
	ft_printf("hex = %x/%X ", x, X);
	printf("\n");
	printf("hex = %x/%X\n\n", x, X);

//	is_%
	printf("\n%s---------   (%%)   --------%s\n",color1,color2);
	ft_printf("percent = %%");
	printf("\n");
	printf("percent = %%\n\n");
	
}