#include<stdio.h>

void main()
{
	int p,r,t;
	float si,ci;
	printf("\n Enter value of principal,rate,time ");
	scanf("%d %d %d",&p,&r,&t);
	
	si=p*r*t/100;
	printf("Simple interest is :%.2f",si);
	
	ci=p*(((1+r/100),t));
	printf("\nCompound interest is :%.2f",ci);
}
