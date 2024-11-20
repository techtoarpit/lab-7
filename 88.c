#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    int marks;
};

// Function to read information of students
void read_students(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
}

// Function to display information of students with marks greater than 500
void display_students(struct Student students[], int n) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Marks: %d\n\n", students[i].marks);
        }
    }
}

int main() {
    int n = 10;
    struct Student students[n];

    // Read student information
    read_students(students, n);

    // Display student information for those with marks greater than 500
    display_students(students, n);

    return 0;
}
