//program to check one qualifies for a loan
/*
Author:Nkonge william mutethia
Reg:CT101/22542/24
*/
#include<stdio.h>
int main(){
	int Age;
	float salary;
	printf("enter the Age");
	scanf("%d",&Age);
	printf("enter the salary");
	scanf("%f",&salary);
	if (Age>=21&&salary>=21000){
	printf("congraturations you qualify for the loan");
	}
	else {
	printf("unfortunately we are unnable to offer for you a loan at your age");
	}
	return 0;
}