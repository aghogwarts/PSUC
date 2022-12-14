//* WAP to insert an element to an array at a given position

#include <stdio.h>

int main()
{
    int a[100], n, i, pos, ele;
    printf("\nEnter number of elements:\n>> ");
    scanf("%d", &n); // number of elements
    printf("\nEnter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element and position of insertion:\n>> ");
    scanf("%d,%d", &ele, &pos);
    for (i = n; i >= pos; i--)
    { // shift the elements to right
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele; // ele is inserted at the specified pos.
    n = n + 1;        // increment the count of no of elements
    printf("\n-- The array after insertion is:\n>> ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}