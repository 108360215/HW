#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	printf("¿é¤J¾ã¼Æ\n");
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("odd");
	else
		printf("even");
}
