// Summation

#include <stdio.h>

int Summation(int iNo1, int iNo2)
{
    int iCnt, Ans;

    printf("Summation is: \n");

    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        Ans = iNo1 + iCnt;
        printf("%d + %d = %d\n", iNo1, iCnt, Ans);
    }
}

int main()
{
    int iValue = 0, iValue2 = 0, iRet = 0;

    printf("Enter the first digit: \n");
    scanf("%d", &iValue);

    printf("Enter the digit that you want to add: \n");
    scanf("%d", &iValue2);

    iRet = Summation(iValue, iValue2);

    return 0;
}

/*
Output:
Enter the first digit:
2
Enter the digit that you want to add:
10
Summation is:
2 + 1 = 3
2 + 2 = 4
2 + 3 = 5
2 + 4 = 6
2 + 5 = 7
2 + 6 = 8
2 + 7 = 9
2 + 8 = 10
2 + 9 = 11
2 + 10 = 12
*/