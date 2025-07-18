// Print a table

#include <stdio.h>

int Table(int iNo)
{
    int Multiply, Ans;

    printf("The table of %d is:\n", iNo);

    for (Multiply = 1; Multiply <= 10; Multiply++)
    {
        Ans = iNo * Multiply;
        printf("%d * %d = %d\n", iNo, Multiply, Ans);
    }
    return Ans;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

/*
Output:
Enter a number: 2
The table of 2 is:
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
*/