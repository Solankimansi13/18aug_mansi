//Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)

#include<stdio.h>
int main()
{
	int num1, num2;
	
	printf("enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	
	printf("\nsum is %d\n",num1+num2);
	printf("subrcton is %d\n",num1-num2);
	printf("multiplation is %d\n",num1*num2);
	printf("divison is %d\n",num1/num2);
	printf("modulo is %d",num1%num2);
	
	return 0;
}

