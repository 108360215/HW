#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d,e,f;
	float a, b, c;
	printf("一天的總里程數:");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &b);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &c);
	printf("一天的停車費:");
	scanf_s("%f", &d);
	printf("一天的通行費:");
	scanf_s("%f", &e);
	f = a / c * b + d + e;
	printf("今天的交通費為:%d\n", f);
	system("pause");
	
}