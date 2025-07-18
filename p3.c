//Addition of 2 numbers

#include <stdio.h>

int Addition(int iNo1, int iNo2)
{
    int Add = 0;
    Add = iNo1 + iNo2;
    return Add;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, Ans = 0;

    printf("Enter first number: \n");
    scanf("%d", &iValue1);

    printf("Enter second number: \n");
    scanf("%d", &iValue2);

    Ans = Addition(iValue1, iValue2);

    printf("Addition is: %d\n", Ans);

    return 0;
}

/*
Output:
Enter first number:
10
Enter second number:
11
Addition is: 21
*/