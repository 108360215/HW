#include<stdio.h>
#include<stdlib.h>

int main()
{
	float w, h, b;
	printf("輸入你的體重(kg):");
	scanf_s("%f", &w);
	printf("輸入你的身高(m):");
	scanf_s("%f", &h);
	b = w / h / h;
	if (b < 18.5)
	{
		printf("Your BMI is %.2f_____Underweight\n", b);
	}
	if (b >= 18.5 & b < 25)
	{
		printf("Your BMI is %.2f_____Normal\n", b);
	}
	if (b > 25 & b < 30)
	{
		printf("Your BMI is %.2f_____Overweight\n", b);
	}
	if (b > 30)
	{
		printf("Your BMI is %.2f_____Obese\n", b);
	}

	system("pause");
	 
}