#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	printf("��J���\n");
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("odd");
	else
		printf("even");
}
