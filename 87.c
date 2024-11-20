#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000  // Define the maximum length of the input string

int main() {
    char str[MAX_LENGTH];
    
    printf("Enter a line of text: ");
    fgets(str, MAX_LENGTH, stdin);  // Read a line of text from the user
    
    // Remove the newline character if it's present at the end of the input
    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);  // Calculate the length of the string
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}

