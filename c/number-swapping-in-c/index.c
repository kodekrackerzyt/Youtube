#include <stdio.h>

void main()
{
    int a, b, temp;

    a = 10;
    b = 20;

    // here we add the logic for our code

    temp = b;
    b = a;
    a = temp;

    printf("The values are swapped %d and %d", a, b);
}
