#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d,e,f;
	float a, b, c;
	printf("�@�Ѫ��`���{��:");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &b);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O:");
	scanf_s("%f", &e);
	f = a / c * b + d + e;
	printf("���Ѫ���q�O��:%d\n", f);
	system("pause");
	
}