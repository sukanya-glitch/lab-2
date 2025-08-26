#include<stdio.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter marks in Maths:");
    scanf("%f", &a);
    printf("Enter marks in Chemistry:");
    scanf("%f)", &b);
    printf("Enter marks in Physics:");
    scanf("%f", &c);

    d = a + b + c;
    e = d / 3;
    
    if (e>=70)
    {
        printf("the student has scored distinction\n");
    }
    else if (e>=60)
    {
        printf("the student is in first class\n");
    }
    else if(e>=50)
    {
        printf("The student is in second class\n");
    }
    else if(e>=35)
    {
        printf("The student is in third class\n");
    }
    else
    {
        printf("The student has failed");
    }
    if(a<35 || b<35 || c<35)
    {
        printf("The student has failed");
    }
}