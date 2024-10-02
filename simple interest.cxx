// program to find simple interest
/*
Author: william
Reg no: CT101/G/22542/24
*/
#include<stdio.h>
int main(){
	int p,t,r;
	printf("enter the value of p");
	scanf("%d",&p);
	printf("the value of p is %d\n",p);
	printf("enter the value of t");
	scanf("%d",&t);
	printf("the value of t is%d \n",t);
	printf("enter the value of r");
	scanf("%d",&r);
	printf("the value of r is %d\n",r);
	float si= (p*t*r)/100;
	printf("%f",si);
	return 0;
}
	

