// Accept a digit from the user and print frequency 

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    printf("The digits are: \n");

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Output:
Enter the frequency:
5
The digits are:
1
2
3
4
5
*/