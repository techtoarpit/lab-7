#include<stdio.h>
int main()
{
    int num,temp,rev=0,rem;
    printf("Enter a integer ");
    scanf("%d",&temp);
    num=temp;
    while(temp!=0)
    {
       
        
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;

    }
    if(num==rev)
    printf("The number is a palindrome");
    else
    printf("The number is not a palindrome");
}   
