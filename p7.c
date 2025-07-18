#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh %d\n", iCnt);
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
Jay Ganesh 1
Jay Ganesh 2
Jay Ganesh 3
Jay Ganesh 4
Jay Ganesh 5
*/