//program to find compound interest
/*
Author:Nkonge william mutethia
Reg: CT101/22542/24
*/
#include<stdio.h>
#include<math.h>
int main () {
	float p,r,t,n;
	printf("enter p");
	scanf("%f",&p);
	printf("enter r");
	scanf("%f",&r);
	printf("enter t");
	scanf("%f",&t);
	printf("enter n");
	scanf("%f",&n);
	float ci= p*pow((1+(r/100)/n),n*t)-p;
	printf("%.2f",ci);
	return 0;
}