//Addition of 2 numbers

#include<stdio.h>

int Addition(int No1, int No2)
{
    return No1 + No2;
}

int main()
{
    int Value1 = 10, Value2 = 11;
    int iRet = Addition( Value1,  Value2);
    printf("%d\n",iRet);

    return 0;
}

/*
Output: 
21
*/