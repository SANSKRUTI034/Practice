//accept string from user and count the capital alphabet in string

#include<stdio.h>

int CountCapital(char str[])
{
    int iCount =0;

    while(*str != '\0')
{
    if(*str >= 'A' && *str <= 'Z')
    {
        iCount ++;
    }
    
    str ++;
}
return iCount++;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    

    printf("Enter String: \n");
    scanf("%[^'\n]s ", Arr);   



    
    iRet = CountCapital(Arr);

    printf("Number of small chaacter are : %d\n",iRet);   
    
    return 0;
}