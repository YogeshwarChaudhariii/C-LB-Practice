// Even and odd

#include <stdio.h>

void EvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    EvenOdd(iValue);

    return 0;
}

/*
Output:
Enter a number:
2
Even Number

Enter a number:
3
Odd Number
*/