#include <stdio.h>

// Function to check whether a character is a vowel
int isVowel(char ch) {
    // Convert to lowercase to handle both cases
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;  // Return 1 if the character is a vowel
    } else {
        return 0; } // Return 0