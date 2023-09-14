//WAP to find area of circle, rectangle and triangle
//area of circle formula = pir2
//area of rectangle = length*breadth
//area of triangle= 0.5*base*hight

#include<stdio.h>
#include<conio.h>
int main()
{
	float redious, length, breadth, base, height;
	
	printf("Enter area : ");
	scanf("%f",&redious);
	printf("area of circle is %f\n",3.14*redious*redious);

	
	printf("\nEnter length Of Rectangle:");
	scanf("%f",&length);
	printf("\nEnter Breadth of rectengle:");
	scanf("%f",&breadth);
	printf("\nArea Of Rectangle is %f",length*breadth);
	
	printf("\nenter base of triangle:");
	scanf("%f",&base);
	printf("\nenter height of triangle:");
	scanf("%f",&height);
	printf("\narea of triangle is %f",0.5*base*height);
	
	
	
	return 0;
}
