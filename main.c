#include <stdio.h>
#include "ft_printf.h"


void	test_basic_d()
{
	int i, j;

	printf("type = d\n");
	i = leo_printf("|%05d|\n", 14);
	i = ft_printf("|%05d|\n", 14);
	printf("%d\n", i);
	i = leo_printf("|%05d|\n", -14);
	i = ft_printf("|%05d|\n", -14);
	printf("%d\n", i);
	i = leo_printf("|%.5d|\n", 14);
	i = ft_printf("|%.5d|\n", 14);
	printf("%d\n", i);
	i = leo_printf("|%.5d|\n", -14);
	i = ft_printf("|%.5d|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.5d|\n", -14);
	i = ft_printf("|%09.5d|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.5d|\n", 14);
	i = ft_printf("|%09.5d|\n", 14);
	printf("%d\n", i);

	i = leo_printf("|%09.5-19d|\n", 14);
	i = ft_printf("|%09.5-19d|\n", 14);
	printf("%d\n", i);

	i = leo_printf("|%09.5-19d|\n", -14);
	i = ft_printf("|%09.5-19d|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.0-19d|\n", -14);
	i = ft_printf("|%09.0-19d|\n", -14);
	printf("%d\n", i);


	i = leo_printf("|%09.0-19d|\n", 0);
	i = ft_printf("|%09.0-19d|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%59.4-19d|\n", 1);
	ft_printf("|%59.4-19d|\n", 1);
	printf("%d\n", i);

	i = leo_printf("|%59.*-19d|\n", 1, 17);
	ft_printf("|%59.*-19d|\n", 1, 17);
	printf("%d\n", i);

	i = leo_printf("|%59.*-19d|\n", 1, 17);
	ft_printf("|%59.*-19d|\n", 1, 17);
	printf("%d\n", i);

	i = leo_printf("|%09.0d|\n", 0);
	ft_printf("|%09.0d|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%-9.0d|\n", 0);
	ft_printf("|%-9.0d|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%16.4-5.*.*d|\n", 5, 2, 3);
	ft_printf("|%16.4-5.*.*d|\n", 5, 2, 3);
	printf("%d\n", i);

}

void test_basic_i()
{
	int i, j;

	printf("type = i\n");
	i = leo_printf("|%05i|\n", 14);
	j = ft_printf("|%05i|\n", 14);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%05i|\n", -14);
	j = ft_printf("|%05i|\n", -14);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5i|\n", 14);
	i = ft_printf("|%.5i|\n", 14);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5i|\n", -14);
	j = ft_printf("|%.5i|\n", -14);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5i|\n", -14);
	j = ft_printf("|%09.5i|\n", -14);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5i|\n", 14);
	j = ft_printf("|%09.5i|\n", 14);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19i|\n", 14);
	j = ft_printf("|%09.5-19i|\n", 14);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19i|\n", -14);
	j = ft_printf("|%09.5-19i|\n", -14);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%09.0-19i|\n", -14);
	j = ft_printf("|%09.0-19i|\n", -14);
	printf("%d - %d\n", i, j);


	i = leo_printf("|%09.0-19i|\n", 0);
	j = ft_printf("|%09.0-19i|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.4-19i|\n", 1);
	j = ft_printf("|%59.4-19i|\n", 1);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%59.*-19i|\n", 1, 17);
	j = ft_printf("|%59.*-19i|\n", 1, 17);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.*-19i|\n", 1, 17);
	j = ft_printf("|%59.*-19i|\n", 1, 17);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.0i|\n", 0);
	j = ft_printf("|%09.0i|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%-9.0i|\n", 0);
	j = ft_printf("|%-9.0i|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%16.4-5.*.*i|\n", 5, 2, 3);
	j = ft_printf("|%16.4-5.*.*i|\n", 5, 2, 3);
	printf("%d - %d\n", i, j);

}

void test_basic_c()
{
	int i, j;

	printf("type = c\n");
	i = leo_printf("|%05c|\n", 'x');
	j = ft_printf("|%05c|\n", 'x');
	printf("%d - %d\n", i, j);

	printf("type = c\n");
	i = leo_printf("|%05c|\n", 98);
	j = ft_printf("|%05c|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%05c|\n", 98);
	j = ft_printf("|%05c|\n", 98);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5c|\n", 98);
	i = ft_printf("|%.5c|\n", 98);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5c|\n", 98);
	j = ft_printf("|%.5c|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5c|\n", 98);
	j = ft_printf("|%09.5c|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5c|\n", 98);
	j = ft_printf("|%09.5c|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19c|\n", 98);
	j = ft_printf("|%09.5-19c|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19c|\n", 98);
	j = ft_printf("|%09.5-19c|\n", 98);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%09.0-19c|\n", 98);
	j = ft_printf("|%09.0-19c|\n", 98);
	printf("%d - %d\n", i, j);


	i = leo_printf("|%09.0-19c|\n", 0);
	j = ft_printf("|%09.0-19c|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.4-19c|\n", 1);
	j = ft_printf("|%59.4-19c|\n", 1);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%59.*-19c|\n", 1, 17);
	j = ft_printf("|%59.*-19c|\n", 1, 17);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.*-19c|\n", 1, 17);
	j = ft_printf("|%59.*-19c|\n", 1, 17);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.0c|\n", 0);
	j = ft_printf("|%09.0c|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%-9.0c|\n", 0);
	j = ft_printf("|%-9.0c|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%16.4-5.*.*c|\n", 5, 2, 3);
	j = ft_printf("|%16.4-5.*.*c|\n", 5, 2, 3);
	printf("%d - %d\n", i, j);

}

void basic_test_p()
{
	int i, j;
	void *ptr_null = NULL;

	printf("type = p\n");
	i = leo_printf("|%05c|\n", &j);
	j = ft_printf("|%05c|\n", &j);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%05p|\n", &i);
	j = ft_printf("|%05p|\n", &i);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%05p|\n", &i);
	j = ft_printf("|%05p|\n", &i);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5p|\n", &i);
	i = ft_printf("|%.5p|\n", &i);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5p|\n", &i);
	j = ft_printf("|%.5p|\n", &i);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5p|\n", &i);
	j = ft_printf("|%09.5p|\n", &i);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5p|\n", &i);
	j = ft_printf("|%09.5p|\n", &i);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19p|\n", &j);
	j = ft_printf("|%09.5-19p|\n", &j);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19p|\n", &j);
	j = ft_printf("|%09.5-19p|\n", &j);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%09.0-19p|\n", &j);
	j = ft_printf("|%09.0-19p|\n", &j);
	printf("%d - %d\n", i, j);


	i = leo_printf("|%09.0-19p|\n", ptr_null);
	j = ft_printf("|%09.0-19p|\n", ptr_null);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.4-19p|\n", &i);
	j = ft_printf("|%59.4-19p|\n", &i);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%59.*-19p|\n", 1, &j);
	j = ft_printf("|%59.*-19p|\n", 1, &j);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.*-19p|\n", 1, &i);
	j = ft_printf("|%59.*-19p|\n", 1, &i);
	printf("%d - %d\n", i, j);
//
	i = leo_printf("|%09.0p|\n", ptr_null);
	j = ft_printf("|%09.0p|\n", ptr_null);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%-6.0p|\n", ptr_null);
	j = ft_printf("|%-6.0p|\n", ptr_null);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%16.4-5.*.*p|\n", 5, 2, &i);
	j = ft_printf("|%16.4-5.*.*p|\n", 5, 2, &i);
	printf("%d - %d\n", i, j);
}

void basic_test_pc()
{
	int i, j;

	printf("type = %%\n");
	i = leo_printf("|%05%|\n", 'x');
	j = ft_printf("|%05%|\n", 'x');
	printf("%d - %d\n", i, j);

	printf("type = c\n");
	i = leo_printf("|%05@@%|\n", 98);
	j = ft_printf("|%05@@%|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%05%|\n", 98);
	j = ft_printf("|%05%|\n", 98);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5%|\n", 98);
	i = ft_printf("|%.5%|\n", 98);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%.5%|\n", 98);
	j = ft_printf("|%.5%|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5%|\n", 98);
	j = ft_printf("|%09.5%|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5%|\n", 98);
	j = ft_printf("|%09.5%|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19%|\n", 98);
	j = ft_printf("|%09.5-19%|\n", 98);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.5-19%|\n", 98);
	j = ft_printf("|%09.5-19%|\n", 98);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%09.0-19%|\n", 98);
	j = ft_printf("|%09.0-19%|\n", 98);
	printf("%d - %d\n", i, j);


	i = leo_printf("|%09.0-19%|\n", 0);
	j = ft_printf("|%09.0-19%|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.4-19%|\n", 1);
	j = ft_printf("|%59.4-19%|\n", 1);
	printf("%d - %d\n", i, j);
	i = leo_printf("|%59.*-19%|\n", 1, 17);
	j = ft_printf("|%59.*-19%|\n", 1, 17);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%59.*-19%|\n", 1, 17);
	j = ft_printf("|%59.*-19%|\n", 1, 17);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%09.0%|\n", 0);
	j = ft_printf("|%09.0%|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%-9.0%|\n", 0);
	j = ft_printf("|%-9.0%|\n", 0);
	printf("%d - %d\n", i, j);

	i = leo_printf("|%16.4-5.*.*%|\n", 5, 2, 3);
	j = ft_printf("|%16.4-5.*.*%|\n", 5, 2, 3);
	printf("%d - %d\n", i, j);
}


void basic_test_u()
{
	int i, j;

	printf("type = u\n");
	i = leo_printf("|%05u|\n", 14);
	i = ft_printf("|%05u|\n", 14);
	printf("%d\n", i);
	i = leo_printf("|%05u|\n", -14);
	i = ft_printf("|%05u|\n", -14);
	printf("%d\n", i);
	i = leo_printf("|%.5u|\n", 14);
	i = ft_printf("|%.5u|\n", 14);
	printf("%d\n", i);
	i = leo_printf("|%.5u|\n", -14);
	i = ft_printf("|%.5u|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.5u|\n", -14);
	i = ft_printf("|%09.5u|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.5u|\n", 14);
	i = ft_printf("|%09.5u|\n", 14);
	printf("%d\n", i);

	i = leo_printf("|%09.5-19u|\n", 14);
	i = ft_printf("|%09.5-19u|\n", 14);
	printf("%d\n", i);

	i = leo_printf("|%09.5-19u|\n", -14);
	i = ft_printf("|%09.5-19u|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.0-19u|\n", -14);
	i = ft_printf("|%09.0-19u|\n", -14);
	printf("%d\n", i);


	i = leo_printf("|%09.0-19u|\n", 0);
	i = ft_printf("|%09.0-19u|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%59.4-19u|\n", 1);
	ft_printf("|%59.4-19u|\n", 1);
	printf("%d\n", i);

	i = leo_printf("|%59.*-19u|\n", 1, 17);
	ft_printf("|%59.*-19u|\n", 1, 17);
	printf("%d\n", i);

	i = leo_printf("|%59.*-19u|\n", 1, 17);
	ft_printf("|%59.*-19u|\n", 1, 17);
	printf("%d\n", i);

	i = leo_printf("|%09.0u|\n", 0);
	ft_printf("|%09.0u|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%-9.0u|\n", 0);
	ft_printf("|%-9.0u|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%16.4-5.*.*u|\n", 5, 2, 3);
	ft_printf("|%16.4-5.*.*u|\n", 5, 2, 3);
	printf("%d\n", i);
}

void basic_test_x()
{
	int i, j;

	printf("type = x\n");
	i = leo_printf("|%05x|\n", 14);
	i = ft_printf("|%05x|\n", 14);
	printf("%d\n", i);
	i = leo_printf("|%05x|\n", -14);
	i = ft_printf("|%05x|\n", -14);
	printf("%d\n", i);
	i = leo_printf("|%.5x|\n", 14);
	i = ft_printf("|%.5x|\n", 14);
	printf("%d\n", i);
	i = leo_printf("|%.5x|\n", -14);
	i = ft_printf("|%.5x|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.5x|\n", -14);
	i = ft_printf("|%09.5x|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.5x|\n", 14);
	i = ft_printf("|%09.5x|\n", 14);
	printf("%d\n", i);

	i = leo_printf("|%09.5-19x|\n", 256);
	i = ft_printf("|%09.5-19x|\n", 256);
	printf("%d\n", i);

	i = leo_printf("|%09.5-19x|\n", -14);
	i = ft_printf("|%09.5-19x|\n", -14);
	printf("%d\n", i);

	i = leo_printf("|%09.0-19x|\n", -1800);
	i = ft_printf("|%09.0-19x|\n", -1800);
	printf("%d\n", i);


	i = leo_printf("|%09.0-19x|\n", 0);
	i = ft_printf("|%09.0-19x|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%59.4-19x|\n", 1);
	ft_printf("|%59.4-19x|\n", 1);
	printf("%d\n", i);

	i = leo_printf("|%59.*-19x|\n", 1, 17);
	ft_printf("|%59.*-19x|\n", 1, 17);
	printf("%d\n", i);

	i = leo_printf("|%59.*-19x|\n", 1, 17);
	ft_printf("|%59.*-19x|\n", 1, 17);
	printf("%d\n", i);

	i = leo_printf("|%09.0x|\n", 0);
	ft_printf("|%09.0x|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%-9.0x|\n", 0);
	ft_printf("|%-9.0x|\n", 0);
	printf("%d\n", i);

	i = leo_printf("|%16.4-5.*.*x|\n", 5, 2, 3);
	ft_printf("|%16.4-5.*.*x|\n", 5, 2, 3);
	printf("%d\n", i);
}

int		main()
{
	basic_test_x();
}
