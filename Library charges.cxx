//program to check how much should one be charged
/*
Author:Nkonge william mutethia
Reg:CT101/22542/24
*/
#include<stdio.h>
int main(){
	int bookID,dueDate,returnDate;
	printf("Enter bookID");
	scanf("%d",&bookID);
	printf("Enter dueDate");
	scanf("%d",&dueDate);
	printf("Enter the returnDate");
	scanf("%d",&returnDate);
	int Overdue=returnDate-dueDate;
	printf("the overdue is %d\n",Overdue);
	if (Overdue<=7) {
    int fineRate=20;
    int fineAmount=fineRate*Overdue;
    printf("fineRate is %d\n",fineRate);
    
    printf("fineAmount is %d\n",fineAmount);}
    else if (Overdue<=15){
    int fineRate=50;
    int fineAmount=fineRate*Overdue;
    printf("fineRate %d\n",fineRate);
    printf("fineAmount is %d",fineAmount);}
   else{
   int fineRate=100;
   int fineAmount=fineRate*Overdue;
   printf("fineRate is %d\n",fineRate);
   printf ("fineAmount is %d\n",fineAmount);}
   
   printf("bookID is %d\n",bookID);
   printf("dueDate is %d\n",dueDate);
   printf("returnDate is %d\n",returnDate);
   printf("daysOverdue is %d\n",Overdue);
	
	return 0;
	
}