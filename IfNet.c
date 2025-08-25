# include<stdio.h>
int main()
{
    float n, g, a, d;
    printf("Enter gross salary:");
    scanf("%f", &g);

    if(g>10000)
    {
        a = g * 0.1;
        d = g * 0.03;
    }
    else if(g>5000)
    {
        a = g * 0.07;
        d = g * 0.02;
    }
    else
    {
        a = 0;
        d = 0;
    }
    n  = g + a - d;
    printf("Net salary is %f\n", n);
}