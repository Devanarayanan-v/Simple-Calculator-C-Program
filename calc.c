#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the First  Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number : ");
	scanf("%d",&b);
	printf(" 1.Sum \n 2.Difference \n 3.Product \n 4.Quotient\n Enter The Choice : ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 : printf("Sum : %d\n",a+b);
		break;
		case 2 : printf("Difference : %d\n",a-b);
		break;
		case 3 : printf("Product : %d\n",a*b);
		break;
		case 4 : printf("Quotient : %d\n",a/b);
		break;
		default : printf("Invalid Index");
		break;
	}
}
