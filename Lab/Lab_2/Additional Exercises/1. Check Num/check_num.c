//* Write a program to check whether a number is +ve,-ve or 0

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number:\n>> ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("\n-- Entered number is positive +ve");
    }
    else if (num == 0)
    {
        printf("\n-- Entered number is zero 0");
    }
    else
    {
        printf("\n-- Entered number is negative -ve");
    }
    printf("\n\n");
    return 0;
}