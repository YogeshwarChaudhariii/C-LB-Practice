// Even and odd

#include <stdio.h>
#include <stdbool.h>

bool EvenOdd(int iNo)
{
    return (iNo % 2 == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    bRet = EvenOdd(iValue);
    if (bRet == true)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}

/*
Output:
Enter a number:
2
2 is even number

Enter a number:
3
3 is odd number
*/