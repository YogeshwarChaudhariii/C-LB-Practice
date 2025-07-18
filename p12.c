//Summation

#include<stdio.h>

int Summation(int iNo)
{
    int i, Add;

    for (i = 1; i <= iNo; i++)
    {
        Add = Add + i;
    }

    return Add;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation of %d is %d\n",iValue, iRet);

    return 0;
}

/*
Output
Enter a number:
5
Summation of 5 is 15
*/