#include <stdio.h>
#include <string.h>

// Define the structure to store book information
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};

// Function to read book information using pointer to structure
void read_book_info(struct Book *book) {
    printf("Enter the title of the book: ");
    scanf("%s", book->title);
    
    printf("Enter the author of the book: ");
    scanf("%s", book->author);
    
    printf("Enter the number of pages: ");
    scanf("%d", &book->pages);
    
    printf("Enter the price of the book: ");
    scanf("%f", &book->price);
}

// Function to display book information using pointer to structure
void display_book_info(struct Book *book) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Pages: %d\n", book->pages);
    printf("Price: %.2f\n", book->price);
}

int main() {
    struct Book myBook;
    
    // Read book information
    read_book_info(&myBook);
    
    // Display book information
    display_book_info(&myBook);
    
    return 0;
}
