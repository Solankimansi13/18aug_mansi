//WAP to convert years into days and days into years

#include<stdio.h>
int main()
{
	float years, days;
	
	printf("enter years:");
	scanf("%f",&years);
	printf("\ntotal days is:%f",years*365);
	
	printf("\nenter days:");
	scanf("%f",&days);
	printf("\ntotal years is:%f",days/365);
	
	return 0;
}
