#include <stdio.h>
#include "AlgC.h"
#include "AlgCPP.h"

// C���Է��Ľӿڵ�������
int main1()
{
	void *a;
	initAlg(&a);
	setRadius(a, 2);
	printf("��� = %lf\n", getArea(a));
	unInitAlg(a);
	return 1;
}

// C++���Ľӿڵ�������
int main()
{
	AlgCPP a;
	a.setRadius(2);
	printf("��� = %f\n", a.getArea());
}