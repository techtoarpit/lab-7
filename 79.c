#include <stdio.h>

// Function to interchange the values of two variables
void exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x,y;
    printf("Enter the value of x and y  ");
    scanf("%d%d",&x,&y);
    
    printf("Before exchange: x = %d, y = %d\n", x, y);
    exchange(&x, &y);
    printf("After exchange: x = %d, y = %d\n", x, y);

    return 0;
}
