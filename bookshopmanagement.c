#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>

struct book {
    char name[20];
    char author[20];
    int a;
};

void getdata(struct book *b) {
    printf("\nEnter details about book you want to purchase:\n");
    printf("Enter Name Of Book  : ");
    scanf("%s", b->name);
    printf("Enter Name Of Author    : ");
    scanf("%s", b->author);
    printf("Enter No. Of Copies  : ");
    scanf("%d", &b->a);
}

void show(struct book b) {
    printf("\nBOOK      : %s", b.name);
    printf("\nAUTHOR  : %s", b.author);
    printf("\nCOPIES  : %d", b.a);
}

void welcome() {
    // code for welcome screen
}

int main() {
    struct book b;
    int choice;

    initwindow(640, 480, "Bookshop Management System");

    welcome();

    while (1) {
        printf("\n\nWhat do you want to do?\n");
        printf("1. Buy a book\n");
        printf("2. Show all books\n");
        printf("3. Check availability\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                getdata(&b);
                // code to save book details to file
                break;
            case 2:
                // code to display all books from file
                break;
            case 3:
                // code to check availability of a book
                break;
            case 4:
                closegraph();
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}
