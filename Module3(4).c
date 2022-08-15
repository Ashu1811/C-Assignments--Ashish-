#include<stdio.h>

void main()
{
	int r,l,b,triangle=b,h;
	float area;
	
	printf("1:Enter Base & Height of Triangle=");
	scanf("%d%d",&b,&h);
	area=(b*h)/2;
	printf("Area of Triangle=%.2f",area);
	
	printf("\n2:Enter Length & Breadth of Rectangle=");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("Area of Rectangle=%.2f\n",area);
	
	printf("\n3:Enter Radius of Circle=");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("Area of Circle=%.2f\n",area);
	
		
}

