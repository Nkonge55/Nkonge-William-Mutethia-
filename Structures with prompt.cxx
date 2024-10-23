//c program with prompt
/*
Author: Nkonge william mutethia
Reg no.:CT101/G/22542/24
Date:23/10/2024
*/
#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    struct book book1;

    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    book1.title[strcspn(book1.title, "\n")] = '\0'; 
    printf("Enter the name of the author: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    book1.author[strcspn(book1.author, "\n")] = '\0';

    printf("Enter the year of publication: ");
    scanf("%d", &book1.publication_year);

    printf("Enter ISBN: ");
    scanf("%s", book1.ISBN);

    printf("Enter price: ");
    scanf("%f", &book1.price);

    printf("\nBook Details:\n");
    printf("Title is %s\n", book1.title);
    printf("Author is %s\n", book1.author);
    printf("Year of publication is %d\n", book1.publication_year);
    printf("ISBN is %s\n", book1.ISBN);
    printf("Price of book is %.2f\n", book1.price);

    return 0;
}
