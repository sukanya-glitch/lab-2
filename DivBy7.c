#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number to check if it is divisible by 7 or not:");
   scanf("%d", &a);
   if(a%7 == 0)
   {
       printf("%d is divisble by 7:", a); 
   }
    else
    {
        printf("%d is not divisble by 7:", a); 
    }
       
}