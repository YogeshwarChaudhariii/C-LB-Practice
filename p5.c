// Print 1 to 5 digits

#include <stdio.h>

void Display()
{
    printf("The digits are: \n");

    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    Display();

    return 0;
}

/*
Output:
The digits are:
1
2
3
4
5
*/