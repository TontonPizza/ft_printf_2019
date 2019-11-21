#include <stdio.h>
#include "ft_printf.h"


void	test_valist(int count, ...)
{
	t_params p;
	p.zero = 0;
	p.hzero = 0;

	va_list ag;
	va_start(ag, count);

	int k = 0;
	char *f = "-4.*052d";
	p = read_params(f, 'd', ag);
	update_params(&p, 'd');
	printf("0 = %d\n- = %d\n. = %d\nw = %d\n", p.zero, p.hyphen, p.point, p.width);
	va_end(ag);
}

int		main()
{
	int i, j;
	void *ptr_null = NULL;


	i = leo_printf("|%20d|\n", 14, "salut");
	j = ft_printf("|%20d|\n", 14, "salut");
	printf("%d %d\n\n", i, j);

	printf("---- param 0 ----\n\n");

	i = leo_printf("|%.*###@@@|\n", 0, "salut");
	j = ft_printf("|%.*###@@@|\n", 14, "salut");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%03.*@@|\n", 0, "salut");
	j = ft_printf("|%03.*@@|\n", 0, "salut");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*02|\n", 3, "");
	j = ft_printf("|%-*02|\n", 3, "");
	printf("%d %d\n\n", i, j);


	i = leo_printf("|%.*02|\n", 3, "");
	j = ft_printf("|%.*02|\n", 3, "");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%%%|\n", 3, "");
	j = ft_printf("|%%%|\n", 3, "");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*02|\n", -3, "");
	j = ft_printf("|%.*02|\n", -3, "");
	printf("%d %d\n\n", i, j);

	printf("---- param pc ----\n\n");

	i = leo_printf("|%.*###%|\n", 0, "salut");
	j = ft_printf("|%.*###%|\n", 14, "salut");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%03.*%|\n", 0, "salut");
	j = ft_printf("|%03.*%|\n", 0, "salut");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*02%|\n", 3, "");
	j = ft_printf("|%-*02%|\n", 3, "");
	printf("%d %d\n\n", i, j);


	i = leo_printf("|%.*02%|\n", 3, "");
	j = ft_printf("|%.*02%|\n", 3, "");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%%%%|\n", 3, "");
	j = ft_printf("|%%%%|\n", 3, "");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*02%|\n", -3, "");
	j = ft_printf("|%.*02%|\n", -3, "");
	printf("%d %d\n\n", i, j);

	printf("---- param s ----\n\n");

	i = leo_printf("|%.*s|\n", 14, "salut");
	j = ft_printf("|%.*s|\n", 14, "salut");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*s|\n", 0, "salut");
	j = ft_printf("|%.*s|\n", 0, "salut");
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*02s|\n", 3, "");
	j = ft_printf("|%-*02s|\n", 3, "");
	printf("%d %d\n\n", i, j);


	i = leo_printf("|%.*02s|\n", 3, "");
	j = ft_printf("|%.*02s|\n", 3, "");
	printf("%d %d\n\n", i, j);


	i = leo_printf("|%.*02s|\n", -3, "");
	j = ft_printf("|%.*02s|\n", -3, "");
	printf("%d %d\n\n", i, j);

	printf("---- param d ----\n\n");

	i = leo_printf("|%-*02d|\n", -30, 1);
	j = ft_printf("|%-*02d|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*d|\n", 30, 1);
	j = ft_printf("|%-*d|\n", 30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052d|\n", 14, 7);
	j = ft_printf("|%-4.*052d|\n", 14, 7);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2d|\n", -30, 1);
	j = ft_printf("|%.*2d|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*0d|\n", -30, 1);
	j = ft_printf("|%.*0d|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*-*2d|\n", 0, 4, 0);
	j = ft_printf("|%.*-*2d|\n", 0, 4, 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2d|\n", -30, -1);
	j = ft_printf("|%.*2d|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%014.*-052d|\n", -30, -1);
	j = ft_printf("|%014.*-052d|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05..*.7d|\n", 16, 25);
	j = ft_printf("|%05..*.7d|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.*.7d|\n", 16, 25);
	j = ft_printf("|%05-9.*.7d|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.3.10d|\n", 16, 50, 25);
	j = ft_printf("|%05-9.3.10d|\n", 16, 50, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@@d|\n", 36);
	j = ft_printf("|%.5@@@d|\n", 36);
	printf("%d %d\n\n", i, j);

	printf("---- param c ----\n\n");


	i = leo_printf("|%c|\n", 'a');
	j = ft_printf("|%c|\n", 'a');
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%c|\n", 0);
	j = ft_printf("|%c|\n", 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5c|\n", 0);
	j = ft_printf("|%.5c|\n", 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%*c|\n",9, 0);
	j = ft_printf("|%*c|\n",9, 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5c|\n", 'x');
	j = ft_printf("|%.5c|\n", 'x');
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@c|\n", 'x');
	j = ft_printf("|%.5@@c|\n", 'x');
	printf("%d %d\n\n", i, j);
	i = leo_printf("|%@yyyyc|\n", 'x');
	j = ft_printf("|%@yyyyc|\n", 'x');
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2c|\n", -30, 1);
	j = ft_printf("|%.*2c|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052c|\n", 14, '#');
	j = ft_printf("|%.*2c|\n", 14, '#');
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052c|\n", 14, 0);
	j = ft_printf("|%.*2c|\n", 14, 0);
	printf("%d %d\n\n", i, j);

	printf("---- param p ----\n\n");

	i = leo_printf("|%p|\n", &i);
	j = ft_printf("|%p|\n", &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5p|\n", &i);
	j = ft_printf("|%.5p|\n", &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%*p|\n",9, &i);
	j = ft_printf("|%*p|\n",9, &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5p|\n", ptr_null);
	j = ft_printf("|%.5p|\n", ptr_null);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@p|\n", ptr_null);
	j = ft_printf("|%.5@@p|\n", ptr_null);
	printf("%d %d\n\n", i, j);
	i = leo_printf("|%@yyyyp|\n", &i);
	j = ft_printf("|%@yyyyp|\n", &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2p|\n", -30, &i);
	j = ft_printf("|%.*2p|\n", -30, &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052p|\n", 14, ptr_null);
	j = ft_printf("|%-4.*052p|\n", 14, ptr_null);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052p|\n", 14, &i);
	j = ft_printf("|%-4.*052p|\n", 14, &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.*.7p|\n", 16, &i);
	j = ft_printf("|%05-9.*.7p|\n", 16, &i);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.3.10p|\n", 16, 50, &i);
	j = ft_printf("|%05-9.3.10p|\n", 16, 50, &i);
	printf("%d %d\n\n", i, j);

	printf("---- param u ----\n\n");

	i = leo_printf("|%-*02u|\n", -30, 1);
	j = ft_printf("|%-*02u|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*u|\n", 30, 1);
	j = ft_printf("|%-*u|\n", 30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052u|\n", 14, 7);
	j = ft_printf("|%-4.*052u|\n", 14, 7);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2u|\n", -30, 1);
	j = ft_printf("|%.*2u|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*0u|\n", -30, 1);
	j = ft_printf("|%.*0u|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*-*2u|\n", 0, 4, 0);
	j = ft_printf("|%.*-*2u|\n", 0, 4, 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2u|\n", -30, -1);
	j = ft_printf("|%.*2u|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%014.*-052u|\n", -30, -1);
	j = ft_printf("|%014.*-052u|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05..*.7u|\n", 16, 25);
	j = ft_printf("|%05..*.7u|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.*.7u|\n", 16, 25);
	j = ft_printf("|%05-9.*.7u|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.3.10u|\n", 16, 50, 25);
	j = ft_printf("|%05-9.3.10u|\n", 16, 50, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@@u|\n", 36);
	j = ft_printf("|%.5@@@u|\n", 36);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%u|\n", 36000000000000000);
	j = ft_printf("|%u|\n", 36000000000000000);
	printf("%d %d\n\n", i, j);

	printf("---- param i ----\n\n");

	i = leo_printf("|%-*02i|\n", -30, 1);
	j = ft_printf("|%-*02i|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*i|\n", 30, 1);
	j = ft_printf("|%-*i|\n", 30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052i|\n", 14, 7);
	j = ft_printf("|%-4.*052i|\n", 14, 7);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2i|\n", -30, 1);
	j = ft_printf("|%.*2i|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*0i|\n", -30, 1);
	j = ft_printf("|%.*0i|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*-*2i|\n", 0, 4, 0);
	j = ft_printf("|%.*-*2i|\n", 0, 4, 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2i|\n", -30, -1);
	j = ft_printf("|%.*2i|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%014.*-052i|\n", -30, -1);
	j = ft_printf("|%014.*-052i|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05..*.7i|\n", 16, 25);
	j = ft_printf("|%05..*.7i|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.*.7i|\n", 16, 25);
	j = ft_printf("|%05-9.*.7i|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.3.10i|\n", 16, 50, 25);
	j = ft_printf("|%05-9.3.10i|\n", 16, 50, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@@i|\n", 36);
	j = ft_printf("|%.5@@@i|\n", 36);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%i|\n", 36000000000000000);
	j = ft_printf("|%i|\n", 36000000000000000);
	printf("%d %d\n\n", i, j);

	printf("---- param xX ----\n\n");


	i = leo_printf("|%-*02x|\n", -30, 1);
	j = ft_printf("|%-*02x|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*x|\n", 30, 1);
	j = ft_printf("|%-*x|\n", 30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052x|\n", 14, 7);
	j = ft_printf("|%-4.*052x|\n", 14, 7);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2x|\n", -30, 1);
	j = ft_printf("|%.*2x|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*0x|\n", -30, 1);
	j = ft_printf("|%.*0x|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*-*2x|\n", 0, 4, 0);
	j = ft_printf("|%.*-*2x|\n", 0, 4, 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2x|\n", -30, -1);
	j = ft_printf("|%.*2x|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%014.*-052x|\n", -30, -1);
	j = ft_printf("|%014.*-052x|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05..*.7x|\n", 16, 25);
	j = ft_printf("|%05..*.7x|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.*.7x|\n", 16, 25);
	j = ft_printf("|%05-9.*.7x|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.3.10x|\n", 16, 50, 25);
	j = ft_printf("|%05-9.3.10x|\n", 16, 50, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@@x|\n", 36);
	j = ft_printf("|%.5@@@x|\n", 36);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*02x|\n", -30, 1);
	j = ft_printf("|%-*02x|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-*X|\n", 30, 1);
	j = ft_printf("|%-*X|\n", 30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%-4.*052X|\n", 14, 7);
	j = ft_printf("|%-4.*052X|\n", 14, 7);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2X|\n", -30, 1);
	j = ft_printf("|%.*2X|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*0X|\n", -30, 1);
	j = ft_printf("|%.*0X|\n", -30, 1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*-*2X|\n", 0, 4, 0);
	j = ft_printf("|%.*-*2X|\n", 0, 4, 0);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.*2X|\n", -30, -1);
	j = ft_printf("|%.*2X|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%014.*-052X|\n", -30, -1);
	j = ft_printf("|%014.*-052X|\n", -30, -1);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05..*.7X|\n", 16, 25);
	j = ft_printf("|%05..*.7X|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.*.7X|\n", 16, 25);
	j = ft_printf("|%05-9.*.7X|\n", 16, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%05-9.3.10X|\n", 16, 50, 25);
	j = ft_printf("|%05-9.3.10X|\n", 16, 50, 25);
	printf("%d %d\n\n", i, j);

	i = leo_printf("|%.5@@@X|\n", 36);
	j = ft_printf("|%.5@@@X|\n", 36);
	printf("%d %d\n\n", i, j);
}