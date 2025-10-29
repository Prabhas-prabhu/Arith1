	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	clrscr();
	int a,b;
	printf("\n enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("\na+b=%d is the Sum of the Two Numbers.",a+b);
	printf("\na-b=%d is the Subtraction of the Two Numbers.",a-b);
	printf("\na*b=%d is the Multiplication of the Two Numbers.",a*b);
	printf("\na/b=%.2f is the Division of the Two Numbers.",float(a/b));
	printf("\na%%b=%d is the Remainder of the Two Numbers when divided.", a%b);
	getch();

	}
