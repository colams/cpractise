#include <stdio.h>
void fa(int a)
{
	a++;
	printf("fa�У�a=%d\n", a);
}

void fb(int &a)
{
	a++;
	printf("fb�У�a=%d\n", a);
}

int _main(char **argc)
{
	int n = 1;
	printf("main�У�fa֮ǰ��n=%d\n", n);
	fa(n);
	printf("main�У�fa֮��n=%d\n", n);
	fb(n);
	printf("main�У�fb֮��n=%d\n", n);

	return 0;
}