//WAP to find simple interest 
//formula of simple intrest=SI = (P * T * R) / 100;

#include<stdio.h>
int main()
{
	float p,t,r,si;
	//p= initial princlipal balance
	//t=time(in years)
	//r=annual intrest rate
	
	printf("Enter initial principal balance:");
	scanf("%f",&p);
	printf("\nEnter time(in years): ");
	scanf("%f",&t);
	printf("\nEnter annual rate:");
	scanf("%f",&r);
	
	si=p*t*(r/100);
	
	printf("simple intrest is %f",si);
	
	return 0;
}s
