#include "c2-1.h"
typedef int ElemType;
#include "c1.h"

Status equal(ElemType c1, ElemType c2)
{
	if (c1 == c2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int comp(ElemType a, ElemType b)
{
	if (a == b)
	{
		return 0;
	}
	else
	{
		return (a - b) / abs(a - b);
	}
}

void print(ElemType c)
{
	printf("%d ", c);
}

void print2(ElemType c)
{
	printf("%c ", c);
}

void print1(ElemType &c)
{
	printf("%d ", c);
}