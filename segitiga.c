#include <stdio.h>
int main()
{
    int a;
    int b;


    for (a=1;a<=7;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf ("*");
        }
    printf("\n");
    }

    for (b=7;b>=0;b--)
    {
        for (a=7;a>=b;a--)
        {
            printf ("*");
        }
    }








}
