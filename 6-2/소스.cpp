#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c;
	int d;

	printf(" �� �Ǽ��� �Է� : \n");
	scanf("%f %f", &a, &b);

	printf("�������� ��ȣ���� 1<+>, 2<->, 3<*>, 4</>");
	scanf("%d", &d);

	switch (d)
	{
	case 1:
		c = a + b;
		printf("%f + %f = %f\n", a, b, c);
		break;
	
	case 2:
		c = a - b;
		printf("%f - %f = %f\n", a, b, c);
		break;

	case 3:
		c = a * b;
		printf("%f * %f = %f\n", a, b, c);
		break;

	case 4:
		c = a / b;
		printf("%f / %f = %f\n", a, b, c);
		break;
	}
}
