#include<stdio.h>
#include<stdlib.h>

int main()
{
int a, b, c;
printf("number\tsquare\tcube\n");

for (int i = 0; i<11; i++) 
{
	a = i; 
	b = i * i;
	c = i * i * i;
	printf("%d\t%d\t%d\n",a,b,c);
}
system("pause");


}