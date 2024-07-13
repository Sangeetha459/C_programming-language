#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter the two values");
	scanf("%d%d",&a,&b);
	printf("the values are before swapping is a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n the values are after swapping is a=%d b=%d",a,b);
	getch();
}
