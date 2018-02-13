#include "c1.h"
typedef int ElemType;
#include "c2-1.h"
#include "bo2-1.h"
#include "func2-3.h"

void MergeList(SqList La, SqList Lb, SqList &Lc)
{
	int i = 1, j = 1, k = 0;
	int La_len, Lb_len;
	ElemType ai, bj;
	InitList(Lc);
	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	while (i <= La_len&&j <= Lb_len)
	{
		GetElem(La, i, ai);
		GetElem(La, i, bj);
		if (ai <= bj)
		{
			ListInsert(Lc, ++k, ai);
			++i;
		}
		else
		{
			ListInsert(Lc, ++k, bj);
			++j;
		}
	}
	while (i <= La_len)
	{
		GetElem(La, i++, ai);
		ListInsert(Lc, ++k, ai);
	}

	while (j <= Lb_len)
	{
		GetElem(Lb, j++, bj);
		ListInsert(Lc, ++k, bj);
	}
}

int algo2_2_main()
{
	SqList La, Lb, Lc;
	int j, a[4] = { 3, 5, 8, 11 }, b[7] = { 2, 6, 8, 9, 11, 15, 20 };
	InitList(La); // �����ձ�La
	for (j = 1; j <= 4; j++) // �ڱ�La�в���4��Ԫ��
	{
		ListInsert(La, j, a[j - 1]);
	}
	printf("La= "); // �����La������
	ListTraverse(La, print1);
	InitList(Lb); // �����ձ�Lb
	for (j = 1; j <= 7; j++) // �ڱ�Lb�в���7��Ԫ��
	{
		ListInsert(Lb, j, b[j - 1]);
	}
	printf("Lb= "); // �����Lb������
	ListTraverse(Lb, print1);
	MergeList(La, Lb, Lc);
	printf("Lc= "); // �����Lc������
	ListTraverse(Lc, print1);
	return 0;
}
