#include<stdio.h>
int evenorodd(int x);
int evenorodd(int x){
    if(x%2==0)
    printf("x is even");
    else
    printf("x is odd");
    return 0;

    
}
 int main(){
    int x;
 printf("ENter a integer is " );
 scanf("%d",&x);

    evenorodd(x);

    
 }


