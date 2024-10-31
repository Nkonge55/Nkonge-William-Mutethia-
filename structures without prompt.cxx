// c.structures without prompt
/* 
Author:Nkonge william mutethia
Reg no. CT101/G/22542/24
*/
#include<stdio.h>
#include<string.h>
struct book {
char title [30];
char author [30];
int year_of_publication;
char ISBN [16];
float price;
} book1;	
int main (){
	strcpy(book1.title,"Introduction to programming");
	strcpy(book1.author,"John smith");
	book1.year_of_publication=2022;
	strcpy(book1.ISBN,"9780131103627");
	book1.price= 49.99;
	printf("Title is %s \n",book1.title);
	printf("Author is %s \n",book1.author);
	printf("year is %d \n",book1.year_of_publication);
	printf("Price is %.2f \n",book1.price);
	return 0;
}
